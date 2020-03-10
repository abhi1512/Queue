/*
 * mainl.c
 *
 *  Created on: 10-Mar-2020
 *      Author: abhikhapre
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void)
{
	/*********************** Queue operations using array ***************************/

	_queue *queue;
	createQueue(&queue,5);
	enqueue(queue,1);
	enqueue(queue,2);
	enqueue(queue,3);
	dequeue(queue);
	enqueue(queue,4);
	enqueue(queue,5);
	dequeue(queue);
	enqueue(queue,6);
	enqueue(queue,7);
	dequeue(queue);
	dequeue(queue);
	dequeue(queue);
	dequeue(queue);
	dequeue(queue);
	dequeue(queue);

	for(int i=0; i<queue->capacity; i++)
		printf("|%d |",queue->element[i]);

	printf("\nfront->%d",queue->front);
	printf("\nrear->%d\n",queue->rear);

	/*********************************************************************************/

	return 0;
}
