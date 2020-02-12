#include "mainscene.h"
#include "ui_mainscene.h"
#include "config.h"
MainScene::MainScene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScene)
{
	
    ui->setupUi(this);
	setWindowTitle(QString::fromLocal8Bit(work_name));
}

MainScene::~MainScene()
{
    delete ui;
}
