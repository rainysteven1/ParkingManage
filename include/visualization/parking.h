/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-09 17:23:15
 * @Project: ParkingManage
 * @Description:
 */

#ifndef PARKINGMANAGE_INCLUDE_VISUALIZATION_MATRIX_H_
#define PARKINGMANAGE_INCLUDE_VISUALIZATION_MATRIX_H_

#endif //PARKINGMANAGE_INCLUDE_VISUALIZATION_MATRIX_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gtk/gtk.h>

#define CAR_NUMBER_LENGTH 7
#define PARKING_WIDTH 4
#define PARKING_HEIGHT 4
#define PARKING_MATRIX_WIDTH 2*PARKING_WIDTH+1
#define PARKING_MATRIX_HEIGHT 2*PARKING_HEIGHT+1

typedef struct TContent {
  guint nFlag; // 是否为停车位
  guint nVisited; // 是否被访问
  gchar *pszCarNumber; // 车牌号
} Content, *PContent;

void InitParkingMatrix(PContent[][PARKING_MATRIX_HEIGHT]);