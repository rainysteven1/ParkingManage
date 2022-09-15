/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-15 12:16:23
 * @Project: ParkingManage
 * @Description:
 */

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "Headers/mainwindow.h"
#include "Forms/ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QWidget(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() {
  delete ui;
}
