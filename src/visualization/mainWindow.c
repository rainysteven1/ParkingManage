/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-09 18:59:48
 * @Project: ParkingManage
 * @Description:
 */

#include "visualization/mainWindow.h"

static void destroy() {
  gtk_main_quit();
}

void InitMainWindow(int argc, char *argv[]) {
  GtkWidget *mainWindow;
  GtkWidget *verticalBox;
  GtkWidget *menuBar;
  GtkAccelGroup *accelGroup;
  GtkWidget *frame;

  GtkWidget *parkingButtons[PARKING_WIDTH * PARKING_HEIGHT];

  gtk_init(&argc, &argv);
  // 配置主窗口
  mainWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  g_signal_connect (G_OBJECT(mainWindow), "destroy", G_CALLBACK(destroy), NULL);
  gtk_widget_set_size_request(mainWindow, 500, 500);
  gtk_window_set_title((GtkWindow_autoptr)mainWindow, g_locale_to_utf8(MAINWINDOW_TITLE, -1, NULL, NULL, NULL));

  // 配置垂直布局
  verticalBox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
  gtk_container_add(GTK_CONTAINER (mainWindow), verticalBox);

  // 配置菜单项
  menuBar = InitMenu();
  gtk_box_pack_start((GtkBox_autoptr)verticalBox, menuBar, 0, 0, 0);

  // 配置frame
  frame = gtk_frame_new(NULL);
  gtk_frame_set_shadow_type(GTK_FRAME (frame), GTK_SHADOW_ETCHED_OUT);
  gtk_box_pack_start((GtkBox_autoptr)verticalBox, frame, 0, 0, 0);

  gtk_widget_show_all(mainWindow);
  gtk_main();
}

static GtkWidget *InitMenu() {
  GtkWidget *menuBar;
  GtkWidget *funcMenuItem;
  typedef void(*MenuItemFunc);
  gchar *arrFuncMenuItems[] = {FUNC_MENUITEM_RESET, FUNC_MENUITEM_PULL_UP, FUNC_MENUITEM_PULL_OUT};
  MenuItemFunc arrMenuItemFunc[FUNC_MENU_ITEM_NUMBER] = {FuncReset, FuncPullUp, FuncPullOut};

  menuBar = gtk_menu_bar_new();
  for (int i = 0; i < FUNC_MENU_ITEM_NUMBER; i++) {
	funcMenuItem = gtk_menu_item_new_with_label(arrFuncMenuItems[i]);
	g_signal_connect(G_OBJECT(funcMenuItem), "activate", G_CALLBACK(arrMenuItemFunc[i]), NULL);
	gtk_menu_shell_append(GTK_MENU_SHELL(menuBar), funcMenuItem);
  }
  gtk_widget_show(menuBar);
  return menuBar;
}

static void FuncReset() {
  g_print("重置");
}

static void FuncPullUp() {
  g_print("停车");
}

static void FuncPullOut() {
  g_print("驶出");
}

static GtkWidget *InitFrame(GtkWidget *widget) {

}

static GtkWidget *InitParkingButtons(GtkWidget *widget) {

}
