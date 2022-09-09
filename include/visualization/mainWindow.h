/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-09 18:59:48
 * @Project: ParkingManage
 * @Description:
 */

#ifndef PARKINGMANAGE_SRC_VISUALIZATION_MAINWINDOW_H_
#define PARKINGMANAGE_SRC_VISUALIZATION_MAINWINDOW_H_

#endif //PARKINGMANAGE_SRC_VISUALIZATION_MAINWINDOW_H_

#include "parking.h"

#define MAINWINDOW_TITLE "停车场管理系统"
#define FUNC_MENU_ITEM_NUMBER 3
#define FUNC_MENUITEM_RESET "重置"
#define FUNC_MENUITEM_PULL_UP "停车"
#define FUNC_MENUITEM_PULL_OUT "驶出"

void InitMainWindow(int, char *[]);

static GtkWidget *InitMenu();
static void FuncReset();
static void FuncPullUp();
static void FuncPullOut();

static GtkWidget *InitFrame(GtkWidget *);

static GtkWidget *InitParkingButtons(GtkWidget *widget);
