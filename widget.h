#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtGui>

#include <QKeyEvent>
//sabado
#include <QTimer>

#include "matrix.h"
#include "mapeo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *event) override;
    void asignarFigura();

    void keyPressEvent(QKeyEvent *event) override;

    void dibujarFigura(); // YA NO SE UTILIZARA

    void dibujarFiguraMapeada();

    //TRANSFORMACIONES 2D
    void trasladar(int tx, int ty );

    void escalar(float sx, float sy);
    void escalarPuntoFijo(float sx, float sy, int pfx, int pfy);

    void rotar(double angulo);
    void rotarPuntoFijo(double angulo, double pfx,double pfy);

    void reflexionEjeX();

    void reflexionEjeY();


private slots:
    void on_but_arriva_clicked();

    void on_but_abajo_clicked();

    void on_but_izq_clicked();

    void on_but_der_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void rotarAnimacion1();

    void rotarAnimacion2();
    void on_pushButton_12_clicked();
    void rotarAnimacion3();

    void rotarAnimacion4();

    void rotarAnimacion5();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QPainter *canvas;

    float Fig[86][3];  //FIGURA ORIGINAL
    float FigAux[86][3];  // FIGURA DE RESPALDO

    int ancho;
    int centroX, centroY;

    int tX, tY;

    QTimer *timer1, *timer2, *timer3, *timer4,*timer5;
};
#endif // WIDGET_H
