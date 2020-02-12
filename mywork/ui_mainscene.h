/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScene
{
public:
    QAction *action_3;
    QAction *action_4;
    QAction *action_7;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainScene)
    {
        if (MainScene->objectName().isEmpty())
            MainScene->setObjectName(QString::fromUtf8("MainScene"));
        MainScene->resize(400, 300);
        action_3 = new QAction(MainScene);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainScene);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_7 = new QAction(MainScene);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        centralWidget = new QWidget(MainScene);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainScene->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainScene);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainScene->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainScene);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainScene->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainScene);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainScene->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu_3->addSeparator();
        menu_3->addAction(action_3);
        menu_3->addSeparator();
        menu_3->addAction(action_4);
        menu_3->addSeparator();
        menu_3->addAction(action_7);

        retranslateUi(MainScene);

        QMetaObject::connectSlotsByName(MainScene);
    } // setupUi

    void retranslateUi(QMainWindow *MainScene)
    {
        MainScene->setWindowTitle(QCoreApplication::translate("MainScene", "MainScene", nullptr));
        action_3->setText(QCoreApplication::translate("MainScene", "\347\220\206\346\203\263\346\226\271\345\220\221\345\233\276", nullptr));
        action_4->setText(QCoreApplication::translate("MainScene", "\345\220\253\350\257\257\345\267\256\346\226\271\345\220\221\345\233\276", nullptr));
        action_7->setText(QCoreApplication::translate("MainScene", "\344\274\230\345\214\226\345\220\216\346\226\271\345\220\221\345\233\276", nullptr));
        menu->setTitle(QCoreApplication::translate("MainScene", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainScene", "\350\257\257\345\267\256\350\256\276\347\275\256", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainScene", "\345\233\276\345\203\217\347\273\230\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScene: public Ui_MainScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
