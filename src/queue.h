/*
 * queue.h
 *
 *  Created on: 10-Mar-2020
 *      Author: abhikhapre
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct{
	int front;
	int rear;
	int *element;
	int capacity;
}_queue;

void createQueue(_queue **queue, int size);
int queueEmpty(_queue *queue);
int queueFull(_queue *queue);
void enqueue(_queue *queue, int element);
void dequeue(_queue *queue);



#endif /* QUEUE_H_ */
