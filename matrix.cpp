#include "matrix.h"
#include <math.h>
#include <assert.h>


//ARCHIVO DE IMPLEMENTACION DE LA CLASE
Matrix::Matrix(int nr,int nc, float valor)
{
  ren = nr;
  col = nc;
  Mat = new float*[ren];//DEFINIMOS EL NUMERO DE RENS DEL
                        //VECTOR DE PUNTEROS
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
      Mat[i] = new float[col];
      assert(Mat[i]);
  }

  for(int i = 0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = valor;
}

Matrix::Matrix(float nr,float nc, float **m)
{
  ren = nr;
  col = nc;
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
      Mat[i] = new float[col];
      assert(Mat[i]);
  }

  for(int i = 0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = m[i][j];
}


//CONSTRUCTOR DE COPIA

Matrix::Matrix(Matrix &m)
{
   this->ren=m.numRen();
   this->col=m.numCol();
   this->Mat =new float*[ren];
   for(int i = 0; i < ren; i++)
   {
     Mat[i] = new float[col];
     assert(Mat[i]);
   }
   for(int i=0; i<ren; i++)
      for( int j=0; j<col; j++)
         Mat[i][j]=m.GET(i,j);
}

void Matrix::Inicializa(int R, int C)
{
   col=C;
   ren=R;
   Mat=new float *[ren];
   for(int i=0; i<ren; i++)
      Mat[i]=new float[col];
   for(int i=0; i<ren; i++)
      for(int j=0; j<col; j++)
         Mat[i][j]=0;
}

Matrix &Matrix::operator*=(Matrix &mat2)
{
   Matrix aux;
   aux.Inicializa(ren, mat2.numCol());
   for(int i=0; i<ren; i++)
   {
      for(int j=0; j<mat2.numCol(); j++)
      {
         float suma=0;
        // Mat[i][j]=0;
         for(int k=0; k<col; k++)
         {      //round o redondea
           suma+=floor(Mat[i][k]*mat2.GET(k,j)+0.5);
           aux.SET(i,j,suma);
         }
         //aux.SET(i,j,suma);
      }
   }
   asignar(aux);
   return *this;
}

Matrix Matrix::operator*(float val)
{
   Matrix temp;
   temp.Inicializa(ren,col);
   for(int i=0; i<ren;i++)
      for(int j=0; j<col; j++)
         temp.SET(i,j,Mat[i][j]* val);
   return temp;
}


Matrix &Matrix::operator*(const Matrix &m1)
{
  //assert((this->ren == m1.ren) && (col == m1.col));
   Matrix * result = new Matrix(ren,col,0);//se incializa a 0's
   assert(result);
   for(int i=0; i < ren; i++)
     for(int j = 0;  j < col; j++)
                       //DEBE SER EL NUMERO DE COLUMNAS
                     //REN SOLO SI ES CUADRADA EJ: 3 x 3
       for(int k = 0; k < col; k++)
            //result->Mat[i][j]= result->Mat[i][j] + Mat[i][k] * m1.Mat[k][j];
           result->Mat[i][j] += Mat[i][k] * m1.Mat[k][j];

   return *result;
}

Matrix &Matrix::operator=(Matrix &m)
{
//eliminar el tamaño de la matriz destino
  for(int i= 0; i<ren;i++ )
     //Se borran los renglones de la matriz
       delete [] Mat[i];
  //Se borra el arreglo de punteros
  delete []Mat;
//Asignar los nuevos datos de la matriz que llego
  ren=m.numRen();
  col = m.numCol();
  Mat = new float*[ren];
  assert(Mat);
  for(int i = 0; i < ren; i++)
  {
     Mat[i] = new float[col];
     assert(Mat[i]);
  }
  for( int i =0; i < ren; i++)
    for(int j = 0; j < col; j++)
        Mat[i][j] = m.Mat[i][j];

  return *this;
}


Matrix &Matrix::asignar(Matrix m)
{
   for(int i=0;i<m.numRen();i++)
       for(int j=0;j<m.numCol();j++)
                Mat[i][j]=m.GET(i,j);
   return *this;
}

Matrix::~Matrix()
{
  //Se libera la memoria
  for(int i= 0; i<ren;i++ )
     //Se borran los renglones de la matriz
       delete [] Mat[i];
  //Se borra el arreglo de punteros
  delete []Mat;

}

Matrix &Matrix::Identidad()
{
  for(int i=0; i < ren; i++)
    for( int j = 0; j < col; j++)
      if( i == j)
         Mat[i][i]= 1;
      else
         Mat[i][j]= 0;
  return *this;
}
//   -----------     TRANSFORMACIONES    --------------
Matrix &Matrix::Traslacion(Matrix f, Matrix id, int tx, int ty)
{
    id.Identidad();
    id.SET(2,0,tx);
    id.SET(2,1,ty);

    f *= id;
    this->asignar(f);

    return *this;  // SE REGRESA LA FIGURA TRANSFORMADA

}

Matrix &Matrix::escalacion(Matrix fig, Matrix matriz, float sx, float sy)
{
    matriz.Identidad();
    matriz.SET(0,0,sx);
    matriz.SET(1,1,sy);

    fig *= matriz;

    asignar(fig);

    return *this;
}

Matrix &Matrix::escalacionPuntoFijo(Matrix fig, Matrix matrizId, float sx, float sy, int pfx, int pfy)
{
    matrizId.Identidad();
    float res1 = -pfx * (sx - 1);
    float res2 = -pfy * (sy - 1);

    matrizId.SET(0,0,sx);
    matrizId.SET(1,1,sy);
    matrizId.SET(2,0,res1);
    matrizId.SET(2,1,res2);

    fig *= matrizId;
    asignar(fig);

    return *this;
}

Matrix &Matrix::rotacion(Matrix f, Matrix matriz, double angulo)
{
    matriz.Identidad();
    double radianes = angulo * M_PI  / 180.0;
    matriz.SET(0,0,cos(radianes));
    matriz.SET(0,1,sin(radianes));
    matriz.SET(1,0,-sin(radianes));
    matriz.SET(1,1,cos(radianes));

    f *= matriz;
    asignar(f);
    return *this;
}

Matrix &Matrix::rotacionPuntoFijo(Matrix f, Matrix id, double angulo, double pfx, double pfy)
{
    id.Identidad();
    double radianes = angulo * 3.1415926535897932384626433832795  / 180.0;

    double ren20 = pfx * (1-cos(radianes)) + pfy * sin(radianes);
    double ren21 = pfy * (1-cos(radianes)) - pfx * sin(radianes);

    id.SET(0,0,cos(radianes));
    id.SET(0,1,sin(radianes));
    id.SET(1,0,-sin(radianes));
    id.SET(1,1,cos(radianes));
    id.SET(2,0,ren20);
    id.SET(2,1,ren21);

    f *= id;
    asignar(f);
    return *this;
}
Matrix &Matrix::reflexionEjeX(Matrix f, Matrix id)
{
    id.SET(0, 0, 1);
    id.SET(1, 1, -1);
    id.SET(2, 2, 1);

    f*=id;
    this->asignar(f);
    return *this;
}

Matrix &Matrix::reflexionEjeY(Matrix f, Matrix id)
{
    id.SET(0, 0, -1);
    id.SET(1, 1, 1);
    id.SET(2, 2, 1);

    f*=id;
    this->asignar(f);
    return *this;
}





