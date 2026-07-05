/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_Table;
    QLabel *labelTable;
    QTableWidget *tableWidget;
    QLabel *labelImage;
    QPushButton *btnLoadImg;
    QVBoxLayout *verticalLayout_Inputs;
    QLabel *label_4;
    QSpinBox *spinBoxArraySize;
    QLabel *label;
    QLineEdit *lineEditTitle;
    QLabel *label_2;
    QLineEdit *lineEditAuthor;
    QLabel *label_3;
    QSpinBox *spinBoxPages;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAddTable;
    QPushButton *btnAddList;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDelTable;
    QPushButton *btnDelList;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSortAsc;
    QPushButton *btnSortDesc;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_List;
    QLabel *labelList;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_Table = new QVBoxLayout();
        verticalLayout_Table->setObjectName("verticalLayout_Table");
        labelTable = new QLabel(centralwidget);
        labelTable->setObjectName("labelTable");

        verticalLayout_Table->addWidget(labelTable);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_Table->addWidget(tableWidget);

        labelImage = new QLabel(centralwidget);
        labelImage->setObjectName("labelImage");
        labelImage->setMinimumSize(QSize(0, 150));
        labelImage->setFrameShape(QFrame::Shape::Box);
        labelImage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_Table->addWidget(labelImage);

        btnLoadImg = new QPushButton(centralwidget);
        btnLoadImg->setObjectName("btnLoadImg");

        verticalLayout_Table->addWidget(btnLoadImg);


        gridLayout->addLayout(verticalLayout_Table, 0, 1, 1, 1);

        verticalLayout_Inputs = new QVBoxLayout();
        verticalLayout_Inputs->setObjectName("verticalLayout_Inputs");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        verticalLayout_Inputs->addWidget(label_4);

        spinBoxArraySize = new QSpinBox(centralwidget);
        spinBoxArraySize->setObjectName("spinBoxArraySize");
        spinBoxArraySize->setMaximum(1000);

        verticalLayout_Inputs->addWidget(spinBoxArraySize);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout_Inputs->addWidget(label);

        lineEditTitle = new QLineEdit(centralwidget);
        lineEditTitle->setObjectName("lineEditTitle");

        verticalLayout_Inputs->addWidget(lineEditTitle);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout_Inputs->addWidget(label_2);

        lineEditAuthor = new QLineEdit(centralwidget);
        lineEditAuthor->setObjectName("lineEditAuthor");

        verticalLayout_Inputs->addWidget(lineEditAuthor);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_Inputs->addWidget(label_3);

        spinBoxPages = new QSpinBox(centralwidget);
        spinBoxPages->setObjectName("spinBoxPages");
        spinBoxPages->setMaximum(32767);

        verticalLayout_Inputs->addWidget(spinBoxPages);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");

        verticalLayout_Inputs->addWidget(comboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnAddTable = new QPushButton(centralwidget);
        btnAddTable->setObjectName("btnAddTable");

        horizontalLayout_2->addWidget(btnAddTable);

        btnAddList = new QPushButton(centralwidget);
        btnAddList->setObjectName("btnAddList");

        horizontalLayout_2->addWidget(btnAddList);


        verticalLayout_Inputs->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnDelTable = new QPushButton(centralwidget);
        btnDelTable->setObjectName("btnDelTable");

        horizontalLayout->addWidget(btnDelTable);

        btnDelList = new QPushButton(centralwidget);
        btnDelList->setObjectName("btnDelList");

        horizontalLayout->addWidget(btnDelList);


        verticalLayout_Inputs->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnSortAsc = new QPushButton(centralwidget);
        btnSortAsc->setObjectName("btnSortAsc");

        horizontalLayout_3->addWidget(btnSortAsc);

        btnSortDesc = new QPushButton(centralwidget);
        btnSortDesc->setObjectName("btnSortDesc");

        horizontalLayout_3->addWidget(btnSortDesc);


        verticalLayout_Inputs->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_Inputs->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_Inputs, 0, 0, 1, 1);

        verticalLayout_List = new QVBoxLayout();
        verticalLayout_List->setObjectName("verticalLayout_List");
        labelList = new QLabel(centralwidget);
        labelList->setObjectName("labelList");

        verticalLayout_List->addWidget(labelList);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout_List->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout_List, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 QT - \320\221\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260", nullptr));
        labelTable->setText(QCoreApplication::translate("MainWindow", "QTableWidget (\320\242\320\260\320\261\320\273\320\270\321\206\320\260)", nullptr));
        labelImage->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\202\320\276 \320\264\320\273\321\217 \320\272\320\260\321\200\321\202\320\270\320\275\320\272\320\270", nullptr));
        btnLoadImg->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\272\320\260\321\200\321\202\320\270\320\275\320\272\321\203 (\320\270\320\267 \321\204\320\260\320\271\320\273\320\260)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\274\320\260\321\201\321\201\320\270\320\262\320\260 (\320\270\320\267 \320\277\320\276\320\273\321\217):", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200. (qint16):", nullptr));
        btnAddTable->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273.", nullptr));
        btnAddList->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        btnDelTable->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \321\202\320\260\320\261\320\273.", nullptr));
        btnDelList->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        btnSortAsc->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202. \320\222\320\276\320\267\321\200.", nullptr));
        btnSortDesc->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202. \320\243\320\261\321\213\320\262.", nullptr));
        labelList->setText(QCoreApplication::translate("MainWindow", "QListWidget (\320\241\320\277\320\270\321\201\320\276\320\272)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
