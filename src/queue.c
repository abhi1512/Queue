/*
 * queue.c
 *
 *  Created on: 10-Mar-2020
 *      Author: abhikhapre
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/*********************** Queue ********************************/

void createQueue(_queue **queue, int size)
{
	*queue = (_queue*)malloc(sizeof(_queue));
	(*queue)->capacity = size;
	(*queue)->front = -1;
	(*queue)->rear = -1;
	(*queue)->element = (int*)malloc(sizeof(int)*(*queue)->capacity);
	printf("Queue created with capacity %d\n",(*queue)->capacity);
}

int queueEmpty(_queue *queue)
{
	return (queue->rear == -1) ? 1 : 0;
}

int queueFull(_queue *queue)
{
	if(((queue->rear + 1) % queue->capacity) == queue->front)
		return 1;
	else
		return 0;
}

void enqueue(_queue *queue, int element)
{
	if(queueFull(queue))
	{
		printf("Queue is full\n");
	}
	else
	{
		if((queueEmpty(queue)))
		{
			queue->front = 0;
			queue->rear = 0;
		}
		else
		{
			if(queue->rear == queue->capacity-1)
			{
				queue->rear = 0;
			}
			else
			{
				queue->rear++;
			}
		}
		queue->element[queue->rear] = element;
		printf("%d enqueued with rear at %d\n",queue->element[queue->rear], queue->rear);
	}

}

void dequeue(_queue *queue)
{
	if(queueEmpty(queue))
	{
		printf("Queue empty\n");
	}
	else if(queue->front == queue->rear)
	{
		queue->front = -1;
		queue->rear = -1;
	}
	else
	{
		printf("%d dequeued ",queue->element[queue->front]);
		if(queue->front == queue->capacity - 1)
		{
			queue->front = 0;
		}
		else
		{
			queue->front++;
		}
		printf("with front at %d\n",queue->front);
	}
}


