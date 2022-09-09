/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-09 17:22:23
 * @Project: ParkingManage
 * @Description:
 */

#include "visualization/parking.h"

static PContent MallocPContent() {
  PContent pContent = NULL;
  pContent = (PContent)malloc(sizeof(Content));
  assert(pContent);
  pContent->pszCarNumber = (gchar *)malloc(CAR_NUMBER_LENGTH);
  assert(pContent->pszCarNumber);
  return pContent;
}

void InitParkingMatrix(PContent arrParkingMatrix[][PARKING_MATRIX_HEIGHT]) {
  for (int i = 0; i < PARKING_MATRIX_WIDTH; i++) {
	for (int j = 0; j < PARKING_MATRIX_HEIGHT; j++) {
	  PContent tPContentTemp = MallocPContent();
	  if (i % 2 == 1 && j % 2 == 1) {
		tPContentTemp->nFlag = 1;
	  }
	  arrParkingMatrix[i][j] = tPContentTemp;
	}
  }
}



