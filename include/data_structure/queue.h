/*
 * @Author: Rainy
 * @Email: rainysteven1@gmail.com
 * @Date: 2022-09-09 17:03:10
 * @Project: ParkingManage
 * @Description: 队列头文件
 */

#ifndef PARKINGMANAGE_INCLUDE_DATA_STRUCTURE_Queue_H_
#define PARKINGMANAGE_INCLUDE_DATA_STRUCTURE_Queue_H_

#endif //PARKINGMANAGE_INCLUDE_DATA_STRUCTURE_Queue_H_

extern struct TContent;
typedef struct TContent *PContent;

typedef PContent QDataType;

typedef struct TQueueNode {
  QDataType data;
  struct TQueueNode *tNext;
} QueueNode, *PQueueNode;

typedef struct TQueue {
  PQueueNode tHead;
  PQueueNode tTail;
} Queue, *PQueue;