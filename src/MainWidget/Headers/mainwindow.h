/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-15 12:16:23
 * @Project: ParkingManage
 * @Description:
 */

#ifndef PARKINGMANAGE__MAINWINDOW_H_
#define PARKINGMANAGE__MAINWINDOW_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
 Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override;

 private:
  Ui::MainWindow *ui;
};

#endif //PARKINGMANAGE__MAINWINDOW_H_
