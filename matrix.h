#ifndef MATRIX_H
#define MATRIX_H


//ARCHIVO DE DEFINICION DE LA CLASE
class Matrix
{
//POR DEFAULT SON PRIVADOS
    int col, ren;
    float **Mat;//DOBLE INDIRECCION

    public:

       Matrix(int nr=4,int nc=4, float valor=0);//constructor con arg. por defecto

       Matrix(float nr,float nc, float **m);

       Matrix(Matrix &);//CONSTRUCTOR DE COPIA
       ~Matrix();//DESTRUCTOR
       inline void SET(int R, int C, float val)
           {
               Mat[R][C]=val;
           }
       float GET(int R, int C){ return Mat[R][C];}
       int numCol(){ return col; }
       int numRen(){ return ren; }
       void Inicializa(int , int );

       Matrix &operator *=(Matrix &mat2);
//EXISTE LA SOBRECARGA DE OPERADORES EN JAVA

       Matrix &operator*(const Matrix &m1);

       Matrix operator*(float);//Multiplicar por un escalar

       Matrix &operator=(Matrix &);

       Matrix & asignar(Matrix);

       Matrix & Identidad(); // PERMITE INICIALIZAR LA MATRIZ BASE

       //TRANSFORMACIONES
      //FigTansf           Fig      Id     Tx   Ty
       Matrix &Traslacion(Matrix, Matrix, int, int);

       Matrix &escalacion(Matrix fig, Matrix matriz, float sx, float sy);
       Matrix &escalacionPuntoFijo(Matrix fig, Matrix matrizId, float sx, float sy, int pfx, int pfy);

       Matrix & rotacion(Matrix f, Matrix id, double angulo);

       Matrix & rotacionPuntoFijo(Matrix f,Matrix id, double angulo, double pfx, double pfy);

       Matrix & reflexionEjeX (Matrix, Matrix);

       Matrix & reflexionEjeY (Matrix, Matrix);


};

#endif // MATRIX_H





