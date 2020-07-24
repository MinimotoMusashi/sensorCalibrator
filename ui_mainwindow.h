/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QFrame *frame1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_6;
    QFrame *frame3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox;
    QFrame *frame4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_26;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_27;
    QDoubleSpinBox *doubleSpinBox_5;
    QFrame *frame9;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label_22;
    QDoubleSpinBox *doubleSpinBox_7;
    QFrame *frame6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_13;
    QLabel *label_20;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_23;
    QDoubleSpinBox *doubleSpinBox_8;
    QFrame *frame8;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_12;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_24;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_25;
    QDoubleSpinBox *doubleSpinBox_10;
    QLabel *label_28;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(687, 647);
        MainWindow->setMinimumSize(QSize(687, 0));
        MainWindow->setMaximumSize(QSize(10005, 10000));
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(49, 49, 49);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(687, 0));
        centralwidget->setMaximumSize(QSize(100000, 100000));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMaximumSize(QSize(16777215, 60));
        textBrowser->setStyleSheet(QStringLiteral(""));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setLineWidth(0);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setLineWrapMode(QTextEdit::NoWrap);
        textBrowser->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_5->addWidget(textBrowser);

        frame1 = new QFrame(centralwidget);
        frame1->setObjectName(QStringLiteral("frame1"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy2);
        frame1->setStyleSheet(QLatin1String("#frame1{\n"
"background-color: rgb(65, 65, 65);\n"
"border-radius: 10px;\n"
"}\n"
"#label_4{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_7{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#doubleSpinBox_6{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(frame1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(frame1);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        label_7 = new QLabel(frame1);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(7);
        font1.setItalic(true);
        label_7->setFont(font1);

        verticalLayout_4->addWidget(label_7);

        doubleSpinBox_6 = new QDoubleSpinBox(frame1);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setFrame(false);
        doubleSpinBox_6->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_6->setMinimum(-32768);
        doubleSpinBox_6->setMaximum(32767);

        verticalLayout_4->addWidget(doubleSpinBox_6);


        verticalLayout_5->addWidget(frame1);

        frame3 = new QFrame(centralwidget);
        frame3->setObjectName(QStringLiteral("frame3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame3->sizePolicy().hasHeightForWidth());
        frame3->setSizePolicy(sizePolicy3);
        frame3->setStyleSheet(QLatin1String("#frame3{\n"
"background-color: rgb(65, 65, 65);\n"
"border-radius: 10px;\n"
"}\n"
"#label_3{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_9{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#doubleSpinBox{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
""));
        verticalLayout_6 = new QVBoxLayout(frame3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_3 = new QLabel(frame3);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        verticalLayout_6->addWidget(label_3);

        label_9 = new QLabel(frame3);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font1);

        verticalLayout_6->addWidget(label_9);

        doubleSpinBox = new QDoubleSpinBox(frame3);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setFrame(false);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox->setMinimum(-32768);
        doubleSpinBox->setMaximum(32767);
        doubleSpinBox->setValue(0);

        verticalLayout_6->addWidget(doubleSpinBox);


        verticalLayout_5->addWidget(frame3);

        frame4 = new QFrame(centralwidget);
        frame4->setObjectName(QStringLiteral("frame4"));
        sizePolicy3.setHeightForWidth(frame4->sizePolicy().hasHeightForWidth());
        frame4->setSizePolicy(sizePolicy3);
        frame4->setStyleSheet(QLatin1String("#frame4{\n"
"background-color: rgb(65, 65, 65);\n"
"border-radius: 10px;\n"
"}\n"
"#doubleSpinBox_4{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
"#doubleSpinBox_5{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
"#label_10{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_5{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_26{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_27{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
""));
        verticalLayout_7 = new QVBoxLayout(frame4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_5 = new QLabel(frame4);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);

        verticalLayout_7->addWidget(label_5);

        label_10 = new QLabel(frame4);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font1);

        verticalLayout_7->addWidget(label_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_26 = new QLabel(frame4);
        label_26->setObjectName(QStringLiteral("label_26"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(label_26);

        doubleSpinBox_4 = new QDoubleSpinBox(frame4);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setFrame(false);
        doubleSpinBox_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_4->setMinimum(-32768);
        doubleSpinBox_4->setMaximum(32767);

        horizontalLayout_2->addWidget(doubleSpinBox_4);

        label_27 = new QLabel(frame4);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy4.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(label_27);

        doubleSpinBox_5 = new QDoubleSpinBox(frame4);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setFrame(false);
        doubleSpinBox_5->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_5->setMinimum(-32768);
        doubleSpinBox_5->setMaximum(32767);

        horizontalLayout_2->addWidget(doubleSpinBox_5);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(frame4);

        frame9 = new QFrame(centralwidget);
        frame9->setObjectName(QStringLiteral("frame9"));
        sizePolicy.setHeightForWidth(frame9->sizePolicy().hasHeightForWidth());
        frame9->setSizePolicy(sizePolicy);
        frame9->setStyleSheet(QLatin1String("#frame9{\n"
"background-color: rgb(65, 65, 65);\n"
"border-radius: 10px;\n"
"}\n"
"#doubleSpinBox_7{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
"#label_11{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_14{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_20{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_22{\n"
"background-color: rgb(65, 65, 65);\n"
"}"));
        verticalLayout = new QVBoxLayout(frame9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_14 = new QLabel(frame9);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_14);

        label_11 = new QLabel(frame9);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font1);

        verticalLayout->addWidget(label_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_22 = new QLabel(frame9);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy4.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(label_22);

        doubleSpinBox_7 = new QDoubleSpinBox(frame9);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(doubleSpinBox_7->sizePolicy().hasHeightForWidth());
        doubleSpinBox_7->setSizePolicy(sizePolicy5);
        doubleSpinBox_7->setFrame(false);
        doubleSpinBox_7->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_7->setMinimum(-32768);
        doubleSpinBox_7->setMaximum(32767);

        horizontalLayout->addWidget(doubleSpinBox_7);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(frame9);

        frame6 = new QFrame(centralwidget);
        frame6->setObjectName(QStringLiteral("frame6"));
        sizePolicy.setHeightForWidth(frame6->sizePolicy().hasHeightForWidth());
        frame6->setSizePolicy(sizePolicy);
        frame6->setStyleSheet(QLatin1String("#frame6{\n"
"background-color: rgb(65, 65, 65);\n"
"border-radius: 10px;\n"
"}\n"
"#doubleSpinBox_8{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
"#label_13{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_20{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_22{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_23{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#pushButton{\n"
"background-color: rgb(202, 62, 71);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton#pushButton:hover {\n"
"background-color: rgb(224, 255, 0);\n"
"}\n"
"QPushButton#pushButton:pressed {\n"
"background-color: rgb(202, 62, 71);   \n"
"}"));
        verticalLayout_3 = new QVBoxLayout(frame6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_13 = new QLabel(frame6);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_13);

        label_20 = new QLabel(frame6);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setFont(font1);

        verticalLayout_3->addWidget(label_20);

        pushButton = new QPushButton(frame6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy6);
        pushButton->setMinimumSize(QSize(0, 21));
        pushButton->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(pushButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_23 = new QLabel(frame6);
        label_23->setObjectName(QStringLiteral("label_23"));
        sizePolicy4.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(label_23);

        doubleSpinBox_8 = new QDoubleSpinBox(frame6);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setFrame(false);
        doubleSpinBox_8->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_8->setMinimum(-32768);
        doubleSpinBox_8->setMaximum(32767);

        horizontalLayout_3->addWidget(doubleSpinBox_8);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(frame6);

        frame8 = new QFrame(centralwidget);
        frame8->setObjectName(QStringLiteral("frame8"));
        sizePolicy.setHeightForWidth(frame8->sizePolicy().hasHeightForWidth());
        frame8->setSizePolicy(sizePolicy);
        frame8->setStyleSheet(QLatin1String("#frame8{\n"
"background-color: rgb(65, 65, 65);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"#doubleSpinBox_10{\n"
"background-color: rgb(82, 82, 82);\n"
"color: rgb(235, 235, 235);\n"
"border-style: none;\n"
"}\n"
"#label_12{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_24{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_25{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_28{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_29{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#label_30{\n"
"background-color: rgb(65, 65, 65);\n"
"}\n"
"#pushButton_2{\n"
"background-color: rgb(202, 62, 71);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton#pushButton_2:hover {\n"
"background-color: rgb(224, 255, 0);\n"
"}\n"
"QPushButton#pushButton_2:pressed {\n"
"background-color: rgb(202, 62, 71);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(frame8);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_12 = new QLabel(frame8);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_12);

        label_29 = new QLabel(frame8);
        label_29->setObjectName(QStringLiteral("label_29"));
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);
        label_29->setFont(font1);

        verticalLayout_2->addWidget(label_29);

        label_30 = new QLabel(frame8);
        label_30->setObjectName(QStringLiteral("label_30"));
        sizePolicy1.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy1);
        label_30->setFont(font1);

        verticalLayout_2->addWidget(label_30);

        label_24 = new QLabel(frame8);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setFont(font1);

        verticalLayout_2->addWidget(label_24);

        pushButton_2 = new QPushButton(frame8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy6.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy6);
        pushButton_2->setMinimumSize(QSize(0, 21));
        pushButton_2->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_25 = new QLabel(frame8);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy4.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(label_25);

        doubleSpinBox_10 = new QDoubleSpinBox(frame8);
        doubleSpinBox_10->setObjectName(QStringLiteral("doubleSpinBox_10"));
        doubleSpinBox_10->setFrame(false);
        doubleSpinBox_10->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_10->setMinimum(-32768);
        doubleSpinBox_10->setMaximum(32767);

        horizontalLayout_4->addWidget(doubleSpinBox_10);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_28 = new QLabel(frame8);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy1.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy1);
        label_28->setFont(font1);

        verticalLayout_2->addWidget(label_28);


        verticalLayout_5->addWidget(frame8);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "The Sensor Calibrator", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"taag_output_text\"></a><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\226\210</span><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\226\210\342\225\227   \342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342"
                        "\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227      \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\225\227     \342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227  \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227 </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bot"
                        "tom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227  \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227    \342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\221     \342\226\210\342\226\210\342\225\221\342\226"
                        "\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\225\232\342\225\220\342\225\220\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\235\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227  \342\226\210\342\226\210\342\225\224"
                        "\342\226\210\342\226\210\342\225\227 \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\224\342\225\235    \342\226\210\342\226\210\342\225\221     \342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\221     \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\224\342\225\235\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\224\342\225\235\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342"
                        "\226\210\342\225\224\342\225\235</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\225\235  \342\226\210\342\226\210\342\225\221\342\225\232\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\221\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227    \342\226\210\342\226\210\342\225\221     \342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\221     \342\226\210\342\226\210\342"
                        "\225\221\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\224\342\225\220\342\225\220\342\226\210\342\226\210\342\225\227</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\221 \342\225\232\342\226\210\342\226\210\342\226\210\342\226\210"
                        "\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\221\342\225\232\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\224\342\225\235\342\226\210\342\226\210\342\225\221  \342\226\210\342\226\210\342\225\221    \342\225\232\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\221  \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\227\342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\224\342\225\235\342\226\210\342\226\210\342\225\221  \342\226\210\342\226\210\342\225\221\342\226\210\342\226\210\342\225\221  \342\226\210\342\226\210\342\225\221   \342\226\210\342\226\210\342\225\221   \342\225\232\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\226\210\342\225\224\342\225\235\342\226\210\342\226\210\342\225\221"
                        "  \342\226\210\342\226\210\342\225\221</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\225\232\342\225\220\342\225\235  \342\225\232\342\225\220\342\225\220\342\225\220\342\225\235\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235 \342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235 \342\225\232\342\225\220\342\225\235  \342\225\232\342\225\220\342\225\235     \342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\342\225\232\342\225\220\342\225\235  \342\225\232\342\225\220\342\225\235\342\225\232\342\225\220\342\225\220\342\225\220\342"
                        "\225\220\342\225\220\342\225\220\342\225\235\342\225\232\342\225\220\342\225\235\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235 \342\225\232\342\225\220\342\225\235  \342\225\232\342\225\220\342\225\235\342\225\232\342\225\220\342\225\235  \342\225\232\342\225\220\342\225\235   \342\225\232\342\225\220\342\225\235    \342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235 \342\225\232\342\225\220\342\225\235  \342\225\232\342\225\220\342\225\235</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:6pt; color:#ca3e47;\">                                                                                                                                    </span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ebebeb;\">STEP ONE: MANUAL GAUGE READING</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Ask the contact to verify what his manual gauge is currently reading, then input that value into the box below.</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ebebeb;\">STEP TWO: CURRENT RAW COUNTS</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Verify what the current RAW count feedback is, on the HMI, and then input that value into the box below.</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ebebeb;\">STEP THREE:    RAW COUNT SPAN</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#cbcbcb;\">Verify what that RAW count span is set to, on the HMI, that it is correct, and then input those values into the boxes below.</span></p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600; color:#cbcbcb;\">RAW Min</span><span style=\" font-size:7pt; color:#cbcbcb;\">: </span></p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600; color:#cbcbcb;\">RAW Max: </span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ebebeb;\">STEP FOUR:    EU MAX BASE SETTING</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Confirm what the sensor's rated max range is, either by reading the stamped/nameplate value, or by referring to the datasheet.</span></p></body></html>", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600; color:#cbcbcb;\">EU Max Base: </span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ebebeb;\">STEP FIVE: ZERO POINT CALIBRATION</span></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Press the zero button below, and then enter that value into the EU min box on the HMI, and press the calibrate button on the HMI.</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Zero", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600; color:#cbcbcb;\">EU Min</span><span style=\" font-size:7pt; color:#cbcbcb;\">:    </span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ebebeb;\">STEP SIX:    HIGH POINT CALIBRATION</span></p></body></html>", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Ask the rig manager what his manual gauge is now reading, input that new value into the manual gauge reading box above.</span></p></body></html>", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Verify what the current RAW count feedback is now reading, on the HMI, and then input that value into the current RAW count box above.</span></p></body></html>", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">Press the high button below, and then enter that value into the EU max box on the HMI, and then press the calibrate button on the HMI.</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "High", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600; color:#cbcbcb;\">EU Max:    </span></p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#cbcbcb;\">* Note: You can perform only a high point calibration, by manually inputting the EU min value from the HMI into the zero point calibration box above.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
