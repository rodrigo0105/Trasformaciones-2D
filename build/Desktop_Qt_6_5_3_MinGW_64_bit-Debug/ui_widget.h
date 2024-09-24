/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QPushButton *but_arriva;
    QPushButton *but_der;
    QPushButton *but_izq;
    QPushButton *but_abajo;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton_5;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QSpinBox *spinBox_4;
    QPushButton *pushButton_6;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_3;
    QPushButton *pushButton_7;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QPushButton *pushButton_12;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(700, 500);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(490, 0, 200, 471));
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(85, 85, 255);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 0, 132, 52));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");

        horizontalLayout->addWidget(spinBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName("spinBox_2");

        horizontalLayout->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout);

        but_arriva = new QPushButton(widget);
        but_arriva->setObjectName("but_arriva");
        but_arriva->setGeometry(QRect(90, 50, 31, 25));
        but_der = new QPushButton(widget);
        but_der->setObjectName("but_der");
        but_der->setGeometry(QRect(120, 70, 31, 25));
        but_izq = new QPushButton(widget);
        but_izq->setObjectName("but_izq");
        but_izq->setGeometry(QRect(60, 70, 31, 25));
        but_abajo = new QPushButton(widget);
        but_abajo->setObjectName("but_abajo");
        but_abajo->setGeometry(QRect(90, 80, 31, 25));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 110, 186, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox->setObjectName("doubleSpinBox");

        horizontalLayout_2->addWidget(doubleSpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");

        horizontalLayout_3->addWidget(doubleSpinBox_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 140, 80, 25));
        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 170, 91, 63));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget2);
        spinBox_3->setObjectName("spinBox_3");

        gridLayout->addWidget(spinBox_3, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget2);
        spinBox_4->setObjectName("spinBox_4");

        gridLayout_2->addWidget(spinBox_4, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 240, 143, 25));
        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(40, 270, 117, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget3);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");

        horizontalLayout_5->addWidget(doubleSpinBox_3);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(60, 300, 80, 25));
        layoutWidget4 = new QWidget(widget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 330, 186, 29));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName("label_10");

        horizontalLayout_7->addWidget(label_10);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox_4->setObjectName("doubleSpinBox_4");

        horizontalLayout_7->addWidget(doubleSpinBox_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName("label_9");

        horizontalLayout_6->addWidget(label_9);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox_5->setObjectName("doubleSpinBox_5");

        horizontalLayout_6->addWidget(doubleSpinBox_5);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 360, 80, 25));
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(40, 390, 21, 25));
        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(60, 420, 80, 25));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 390, 21, 25));
        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(70, 390, 21, 25));
        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(100, 390, 21, 25));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 390, 21, 25));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(480, 470, 83, 22));
        pushButton_12 = new QPushButton(Widget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(600, 470, 80, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Traslacion", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "X", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Y", nullptr));
        but_arriva->setText(QCoreApplication::translate("Widget", "/\\", nullptr));
        but_der->setText(QCoreApplication::translate("Widget", ">", nullptr));
        but_izq->setText(QCoreApplication::translate("Widget", "<", nullptr));
        but_abajo->setText(QCoreApplication::translate("Widget", "V", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "SX", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "SY", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "Escalar", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "P.F. X", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "P.F. Y", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "ESCALA CON PUN. FIJO", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Angulo:", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "Rotar", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "TX", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "TY", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "Rotar P.F.", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "Stop", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "Teclado", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
