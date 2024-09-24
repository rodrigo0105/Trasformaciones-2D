#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    asignarFigura();

    timer1 = new QTimer();
    connect(timer1,SIGNAL(timeout()),this,SLOT(rotarAnimacion1()));
    timer2 = new QTimer();
    connect(timer2,SIGNAL(timeout()),this,SLOT(rotarAnimacion2()));
    timer3 = new QTimer();
    connect(timer3,SIGNAL(timeout()),this,SLOT(rotarAnimacion3()));
    timer4 = new QTimer();
    connect(timer4,SIGNAL(timeout()),this,SLOT(rotarAnimacion4()));

    timer5 = new QTimer();
    connect(timer5,SIGNAL(timeout()),this,SLOT(rotarAnimacion5()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    canvas = new QPainter(this);

         //dibujarFigura();  // YA NO LA USAREMOS
    dibujarFiguraMapeada();

    canvas->end();
}

void Widget::asignarFigura()
{
    Fig[ 0][0] = 1;  Fig[ 0][1] =   12; Fig[ 0][2] = 1;
    Fig[ 1][0] = 1; Fig[ 1][1] =  13; Fig[ 1][2] = 1;
    Fig[ 2][0] = 2; Fig[ 2][1] =   13 ; Fig[ 2][2] = 1;
    Fig[ 3][0] = 2; Fig[ 3][1] =   14; Fig[ 3][2] = 1;
    Fig[ 4][0] = 3; Fig[ 4][1] =   14; Fig[ 4][2] = 1;
    Fig[ 5][0] = 3; Fig[ 5][1] =   15; Fig[ 5][2] = 1;
    Fig[ 6][0] = 4; Fig[ 6][1] =   15; Fig[ 6][2] = 1;
    Fig[ 7][0] = 4; Fig[ 7][1] =  16; Fig[ 7][2] = 1;
    Fig[ 8][0] = 5; Fig[ 8][1] =  16; Fig[ 8][2] = 1;
    Fig[ 9][0] = 5; Fig[ 9][1] =  17; Fig[ 9][2] = 1;
    Fig[10][0] = 8; Fig[10][1] =  17; Fig[10][2] = 1;
    Fig[11][0] = 8; Fig[11][1] =  16; Fig[11][2] = 1;
    Fig[12][0] = 7; Fig[12][1] =  16; Fig[12][2] = 1;
    Fig[13][0] = 7; Fig[13][1] =  18; Fig[13][2] = 1;
    Fig[14][0] = 9; Fig[14][1] =  18; Fig[14][2] = 1;
    Fig[15][0] = 9; Fig[15][1] =  17; Fig[15][2] = 1;
    Fig[16][0] = 8; Fig[16][1] =  17; Fig[16][2] = 1;
    Fig[17][0] = 8; Fig[17][1] =  19; Fig[17][2] = 1;
    Fig[18][0] = 10; Fig[18][1] =  19; Fig[18][2] = 1;
    Fig[19][0] = 10; Fig[19][1] =  18; Fig[19][2] = 1;
    Fig[20][0] = 9; Fig[20][1] =  17; Fig[20][2] = 1;
    Fig[21][0] = 9; Fig[21][1] =  20; Fig[21][2] = 1;
    Fig[22][0] = 12; Fig[22][1] =  20; Fig[22][2] = 1;
    Fig[23][0] = 12; Fig[23][1] =   21; Fig[23][2] = 1;
    Fig[24][0] = 16; Fig[24][1] =   21; Fig[24][2] = 1;
    Fig[25][0] = 16; Fig[25][1] =   22; Fig[25][2] = 1;

    Fig[26][0] = 20; Fig[26][1] =   22; Fig[26][2] = 1;
    Fig[27][0] = 20; Fig[27][1] =  21; Fig[27][2] = 1;
    Fig[28][0] = 21; Fig[28][1] =   21 ; Fig[28][2] = 1;
    Fig[29][0] = 21; Fig[29][1] =   19; Fig[29][2] = 1;
    Fig[30][0] = 22; Fig[30][1] =   19; Fig[30][2] = 1;
    Fig[31][0] = 22; Fig[31][1] =   18; Fig[31][2] = 1;
    Fig[32][0] = 23; Fig[32][1] =   18; Fig[32][2] = 1;
    Fig[33][0] = 23; Fig[33][1] =  12; Fig[33][2] = 1;
    Fig[34][0] = 22; Fig[34][1] =  12; Fig[34][2] = 1;
    Fig[35][0] = 22; Fig[35][1] =  10; Fig[35][2] = 1;
    Fig[36][0] = 21; Fig[36][1] =  10; Fig[36][2] = 1;
    Fig[37][0] = 21; Fig[37][1] =  11; Fig[37][2] = 1;
    Fig[38][0] = 19; Fig[38][1] =  11; Fig[38][2] = 1;
    Fig[39][0] = 19; Fig[39][1] =  15; Fig[39][2] = 1;
    Fig[40][0] = 18; Fig[40][1] =  15; Fig[40][2] = 1;
    Fig[41][0] = 18; Fig[41][1] =  10; Fig[41][2] = 1;
    Fig[42][0] = 17; Fig[42][1] =  10; Fig[42][2] = 1;
    Fig[43][0] = 17; Fig[43][1] =  9; Fig[43][2] = 1;
    Fig[44][0] = 15; Fig[44][1] =  9; Fig[44][2] = 1;
    Fig[45][0] = 15; Fig[45][1] =  8; Fig[45][2] = 1;
    Fig[46][0] =  14; Fig[46][1] =  7; Fig[46][2] = 1;
    Fig[47][0] =  16; Fig[47][1] =  7; Fig[47][2] = 1;
    Fig[48][0] =  16; Fig[48][1] =  6; Fig[48][2] = 1;
    Fig[49][0] =  15; Fig[49][1] =  6; Fig[49][2] = 1;
    Fig[50][0] =  15; Fig[50][1] =  5; Fig[50][2] = 1;
    Fig[51][0] =  14; Fig[51][1] =  5; Fig[51][2] = 1;

    Fig[52][0] =  14; Fig[52][1] =  4; Fig[52][2] = 1;
    Fig[53][0] =  9; Fig[53][1] =   4; Fig[53][2] = 1;
    Fig[54][0] =  9; Fig[54][1] =   5; Fig[54][2] = 1;
    Fig[55][0] =  7; Fig[55][1] =   5; Fig[55][2] = 1;
    Fig[56][0] =  7; Fig[56][1] =   6; Fig[56][2] = 1;
    Fig[57][0] =  9; Fig[57][1] =   6; Fig[57][2] = 1;
    Fig[58][0] =  9; Fig[58][1] =   7; Fig[58][2] = 1;
    Fig[59][0] =  11; Fig[59][1] =   7; Fig[59][2] = 1;
    Fig[60][0] =  11; Fig[60][1] =  9; Fig[60][2] = 1;
    Fig[61][0] =  12; Fig[61][1] = 9; Fig[61][2] = 1;
    Fig[62][0] =  12; Fig[62][1] =  13; Fig[62][2] = 1;
    Fig[63][0] =  11; Fig[63][1] =  13; Fig[63][2] = 1;
    Fig[64][0] =  11; Fig[64][1] =  14; Fig[64][2] = 1;
    Fig[65][0] =  9; Fig[65][1] =  14; Fig[65][2] = 1;
    Fig[66][0] =  9; Fig[66][1] =  13; Fig[66][2] = 1;
    Fig[67][0] =  7; Fig[67][1] =  13; Fig[67][2] = 1;
    Fig[68][0] =  7; Fig[68][1] =  12; Fig[68][2] = 1;
    Fig[69][0] =  6; Fig[69][1] =  12; Fig[69][2] = 1;
    Fig[70][0] =  6; Fig[70][1] =  11; Fig[70][2] = 1;
    Fig[71][0] =  5; Fig[71][1] =  11; Fig[71][2] = 1;
    Fig[72][0] =  5; Fig[72][1] =  9; Fig[72][2] = 1;
    Fig[73][0] =  6; Fig[73][1] =  9; Fig[73][2] = 1;
    Fig[74][0] =  6; Fig[74][1] =  8; Fig[74][2] = 1;
    Fig[75][0] =  7; Fig[75][1] =  8; Fig[75][2] = 1;
    Fig[76][0] =  7; Fig[76][1] =  7; Fig[76][2] = 1;
    Fig[77][0] =  5; Fig[77][1] =  7; Fig[77][2] = 1;
    Fig[78][0] =  5; Fig[78][1] =  8; Fig[78][2] = 1;
    Fig[79][0] =  4; Fig[79][1] =  8; Fig[79][2] = 1;
    Fig[80][0] =  4; Fig[80][1] =  9; Fig[80][2] = 1;
    Fig[81][0] =  3; Fig[81][1] =  9; Fig[81][2] = 1;
    Fig[82][0] =  3; Fig[82][1] =  10; Fig[82][2] = 1;
    Fig[83][0] =  2; Fig[83][1] =  10; Fig[83][2] = 1;
    Fig[84][0] =  2; Fig[84][1] =  12; Fig[84][2] = 1;
    Fig[85][0] =  1; Fig[85][1] =  12; Fig[85][2] = 1;

    //RESPALDAR LOS VALORES DEL POLIGONO EN FIGAUX

    for(int r = 0; r < 86; r++)
        for(int c = 0; c < 3; c++)
            FigAux[r][c] = Fig[r][c];
    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho / 2;
    centroY = this->size().height() / 2;
    tX = 0;
    tY = 0;

}

void Widget::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Right)
    {
        trasladar(tX + 5,0);
    }
    if(event->key() == Qt::Key_Left)
    {
        trasladar(tX - 5,0);
    }
    if(event->key() == Qt::Key_Up)
    {
        trasladar(tY + 5,0);
    }
    if(event->key() == Qt::Key_Down)
    {
        trasladar(tY - 5,0);
    }
    if(event->key() == Qt::Key_2)
    {
        //escalar(tY * ui->doubleSpinBox_2->value(),tX * ui->doubleSpinBox->value());
        escalar(1.1, 1.1);
    }
    if(event->key() == Qt::Key_1)
    {
        escalar(0.9,0.9);
    }

    if(event->key() == Qt::Key_3)
    {
        rotarAnimacion1();
    }
    if(event->key() == Qt::Key_4)
    {
        rotarAnimacion2();
    }
    if(event->key() == Qt::Key_5)
    {
        rotarAnimacion3();
    }
    if(event->key() == Qt::Key_6)
    {
        rotarAnimacion4();
    }
    if(event->key() == Qt::Key_7)
    {
        rotarAnimacion5();
    }
    if(event->key() == Qt::Key_Escape)
    {
        close();
    }

}

void Widget::dibujarFigura()
{

}

void Widget::dibujarFiguraMapeada()
{

    QPen pen(QColor(0,200,0), 3);
    canvas->setPen(pen);
    //SIMULA LINEAS MAS PERFECTAS
    canvas->setRenderHint(QPainter::Antialiasing,true);



    //DIBUJAR 4 CUADRANTES
    //linea horizontal
    //canvas->drawLine(0,centroY,ancho,centroY);
    //linea vertical
    //canvas->drawLine(centroX,0,centroX,size().height());
  //UTILIZAR LA CLASE MAPEO

    mapeo dibujo;
    dibujo.ventana(ancho/2, 0 , ancho, size().height()/2);
    dibujo.puerto(ancho/2, 0 , ancho, size().height()/2);

    //ORIGEN EN EL CENTRO DEL AREA DE DIBUJO
    int L = centroX;
    int M = centroY;

    canvas->setPen(QColor(255,0,0));
    int x1, y1, x2, y2;

    dibujo.mapear(Fig[0][0],Fig[0][1],x1,y1,L,M);
    dibujo.mapear(Fig[85][0],Fig[85][1],x2,y2,L,M);

    canvas->drawLine(x1,y1,x2,y2);

    for(int i=0;i<85;i++){
        dibujo.mapear(Fig[i][0],Fig[i][1],x1,y1,L,M);
        dibujo.mapear(Fig[i+1][0],Fig[i+1][1],x2,y2,L,M);
        canvas->drawLine(x1,y1,x2,y2);
    }

}

void Widget::trasladar(int tx, int ty)
{
    Matrix fig, id, figres;
    fig.Inicializa(86,3);
    figres.Inicializa(86,3);
    id.Inicializa(85,3);

    //ASIGNAR PUNTOS
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
        }
    }

    figres.Traslacion(fig, id, tx, ty);

    for(int i = 0; i < figres.numRen();i++)
    {
        for(int j = 0; j < figres.numCol();j++)
        {
            Fig[i][j] = figres.GET(i,j);
        }
    }
    repaint();
}

void Widget::escalar(float sx, float sy)
{
    Matrix fig, id, figres;
    fig.Inicializa(86,3);
    figres.Inicializa(86,3);
    id.Inicializa(85,3);

    //ASIGNAR PUNTOS
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
        }
    }

    figres.escalacion(fig, id, sx, sy);

    for(int i = 0; i < figres.numRen();i++)
    {
        for(int j = 0; j < figres.numCol();j++)
        {
            Fig[i][j] = figres.GET(i,j);
        }
    }
    repaint();
}

void Widget::escalarPuntoFijo(float sx, float sy, int pfx, int pfy)
{
    Matrix fig, id, figres;
    fig.Inicializa(86,3);
    figres.Inicializa(86,3);
    id.Inicializa(85,3);

    //ASIGNAR PUNTOS
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
        }
    }

    figres.escalacionPuntoFijo(fig, id, sx, sy,pfx, pfy);

    for(int i = 0; i < figres.numRen();i++)
    {
        for(int j = 0; j < figres.numCol();j++)
        {
            Fig[i][j] = figres.GET(i,j);
        }
    }
    repaint();
}

void Widget::rotar(double angulo)
{
    Matrix fig, id, figres;
    fig.Inicializa(86,3);
    figres.Inicializa(86,3);
    id.Inicializa(85,3);

    //ASIGNAR PUNTOS
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
        }
    }

    figres.rotacion(fig,id,angulo);

    for(int i = 0; i < figres.numRen();i++)
    {
        for(int j = 0; j < figres.numCol();j++)
        {
            Fig[i][j] = figres.GET(i,j);
        }
    }
    repaint();
}

void Widget::rotarPuntoFijo(double angulo, double pfx, double pfy)
{
    Matrix fig, id, figres;
    fig.Inicializa(86,3);
    figres.Inicializa(86,3);
    id.Inicializa(85,3);

    //ASIGNAR PUNTOS
    for(int i = 0; i < fig.numRen(); i++)
    {
        for(int j = 0; j < fig.numCol(); j++)
        {
            fig.SET(i,j,Fig[i][j]);
        }
    }

    figres.rotacionPuntoFijo(fig,id,angulo,pfx,pfy);

    for(int i = 0; i < figres.numRen();i++)
    {
        for(int j = 0; j < figres.numCol();j++)
        {
            Fig[i][j] = figres.GET(i,j);
        }
    }
    repaint();

}

void Widget::reflexionEjeX()
{
    Matrix fig, id, fres; // OBJETOS ESTATICOS
    fig.Inicializa(86, 3);
    // figura resultante
    fres.Inicializa(86, 3);

    id.Inicializa(85, 3);
    //ASIGNAR PUNTOS
    for ( int i = 0; i < fig.numRen(); i++ )
        for ( int j = 0; j<fig.numCol(); j++ )
            fig.SET(i, j, Fig[i][j]);

    // APLICAR LA ROTACION
    fres.reflexionEjeX(fig, id);

    //ASIGNA LOS NUEVOS VALORES
    for(int i = 0; i < fres.numRen(); i++)
        for( int j = 0; j < fres.numCol(); j++)
            Fig[i][j] = fres.GET(i, j);

    update();
}

void Widget::reflexionEjeY()
{
    Matrix fig, id, fres; // OBJETOS ESTATICOS
    fig.Inicializa(86, 3);
    // figura resultante
    fres.Inicializa(86, 3);

    id.Inicializa(85, 3);
    //ASIGNAR PUNTOS
    for ( int i = 0; i < fig.numRen(); i++ )
        for ( int j = 0; j<fig.numCol(); j++ )
            fig.SET(i, j, Fig[i][j]);

    // APLICAR LA ROTACION
    fres.reflexionEjeY(fig, id);

    //ASIGNA LOS NUEVOS VALORES
    for(int i = 0; i < fres.numRen(); i++)
        for( int j = 0; j < fres.numCol(); j++)
            Fig[i][j] = fres.GET(i, j);

    //repaint();//INVOCA A paintEvent
    update();
}

void Widget::on_but_arriva_clicked()
{
    trasladar(0,tY + ui->spinBox->value());
}


void Widget::on_but_abajo_clicked()
{
    trasladar(0,tY - ui->spinBox->value());
}


void Widget::on_but_izq_clicked()
{
    trasladar(tX - ui->spinBox->value(), 0);
}


void Widget::on_but_der_clicked()
{
    trasladar(tX + ui->spinBox->value(), 0);
}


void Widget::on_pushButton_5_clicked()
{
    double sx = double(ui->doubleSpinBox->value());
    double sy = double(ui->doubleSpinBox_2->value());
    escalar(sx,sy);
}


void Widget::on_pushButton_7_clicked()
{
    double angulo = ui->spinBox_3->value();
    rotar(angulo);
}


void Widget::on_pushButton_6_clicked()
{
    double sx = double(ui->doubleSpinBox->value());
    double sy = double(ui->doubleSpinBox_2->value());
    int pfx = int(ui->spinBox_3->value());
    int pfy = int(ui->spinBox_4->value());

    escalarPuntoFijo(sx,sy,pfx,pfy);
}


void Widget::on_pushButton_8_clicked()
{
    double angulo = ui->doubleSpinBox_3->value();
    double pfx = ui->doubleSpinBox_4->value();
    double pfy = ui->doubleSpinBox_5->value();

    rotarPuntoFijo(angulo,pfx,pfy);
}


void Widget::on_pushButton_9_clicked()
{
    timer1->start();
}


void Widget::on_pushButton_10_clicked()
{
    timer1->stop();
    timer2->start();
}


void Widget::on_pushButton_11_clicked()
{
    timer1->stop();
    timer2->stop();
    timer3->stop();
    timer4->stop();
    timer5->stop();
}

void Widget::rotarAnimacion1()
{
    static int angulo = 0;
    static int cont = 0;
    if(cont <= 8)
    {
        angulo = 45;
        if(cont == 8)
        {
            angulo = 0;
            cont = 0;
        }
         double pfx = 20;
         double pfy = 30;
         rotarPuntoFijo(pfx,pfy,angulo);
         cont++;
    }
}

void Widget::rotarAnimacion2()
{
    static bool dir = true;
    static int angulo = 0;
    static int cont = 0;

    if(cont <= 9 && dir == true)
    {
        angulo = 45;
        double pfx = 20;
        double pfy = 10;
        rotarPuntoFijo(pfx,pfy,angulo);
        cont++;
        if(cont == 9)
        {
            angulo = 0;
            cont = 0;
            dir = false;
        }
    }
   if(!dir)
   {
       angulo -= 45;
       double pfx = 10;
       double pfy = 10;
       rotarPuntoFijo(pfx,pfy,angulo);
       cont++;
       if(cont==9)
       {
           angulo = 0;
           cont = 0;
           dir = true;
       }
   }
}

void Widget::rotarAnimacion3()
{
    static int cont = 0;


    if ( cont < 200) {
        trasladar(tX + 1, 0);
        cont++;
    } if ( cont >= 200 && cont < 400 ) {
        trasladar(0, tY + 1);
        cont++;
    } if ( cont >= 400 && cont < 600 ) {
        trasladar(tX - 1, 0);
        cont++;
    } if ( cont >= 600 && cont < 800 ) {
        trasladar(0, tY - 1);
        cont++;
        if ( cont == 800)
            cont = 0;
    }
}

void Widget::rotarAnimacion4()
{
    static int cont = 0;

    if ( cont < 20 ) {
        reflexionEjeX();
        trasladar(tX + 10, 0);
        cont++;
    } if ( cont >= 20 && cont <= 40) {
        reflexionEjeX();
        trasladar(tX - 10, 0);
        cont++;
        if ( cont == 40 )
            cont = 0;
    }
}

void Widget::rotarAnimacion5()
{
    static int cont;
    static int angulo;
    static bool dir = false;

    if(cont <= 2 && dir == true)
    {
        angulo = 30;
        double pfx = 20;
        double pfy = 30;
        rotarPuntoFijo(pfx,pfy,angulo);
        cont++;
        if(cont == 2)
        {
            angulo = 10;
            cont = 12;
            dir = false;
        }
    }
   if(!dir)
   {
       angulo -= 30;
       double pfx = 20;
       double pfy = 10;
       rotarPuntoFijo(pfx,pfy,angulo);
       cont++;
       if(cont==32)
       {
           angulo = 0;
           cont = 0;
           dir = true;
       }
   }

}


void Widget::on_pushButton_12_clicked()
{
    for(int i = 0; i < 86 ;i++)
    {
        for( int j = 0; j < 3; j++)
        {
            Fig[i][j] = FigAux[i][j];
        }
    }
    tX = tY = 0;
    update();
}


void Widget::on_pushButton_13_clicked()
{
    timer3->start(80);
    rotarAnimacion3();

}


void Widget::on_pushButton_14_clicked()
{
    timer4->start(5);
    rotarAnimacion4();

}


void Widget::on_pushButton_clicked()
{
    timer5->start(80);
    rotarAnimacion5();
}

