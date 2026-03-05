#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct {
	int data[MAX];
	int front;
	int rear;
	int size;
}Deque;

void initDeque(Deque *dq) {
	dq->front = -1;
	dq->rear = 0;
	dq->size = 0; }

int isFull(Deque *dq) {
	return dq->size == MAX;
}

int isEmpty(Deque *dq) {
	return dq->size == 0;
}

void insertFront(Deque *dq, int value)
{
	if (isFull(dq))
	{
		printf("Deque overflow\n");
		return;
	}
	if (dq->front == -1) 
	{
		dq->front = 0;
		dq->rear = 0;
	} else if (dq->front == 0) {
		dq->front = MAX - 1;
	} else {
		dq->front = dq->front - 1;
	}
	dq->data[dq->front] = value;
	dq->size++;
	}
	
	void insertRear(Deque *dq, int value) {
		if (isFull(dq)) {
			printf("Deque overflow\n");
			return;
		}
	if (dq->front == -1) {
		dq->front = 0;
		dq->rear = 0;
	} else if (dq->rear == MAX - 1) {
		dq->rear = 0;
	} else  {
	 dq->rear = dq->rear + 1;  }
	dq->data[dq->rear] = value;
	dq->size++;  }
	
	int deletFront(Deque *dq) {
		if (isEmpty(dq)) {
			printf("Deque underflow\n");
			return -1;   }
		int value = dq->data[dq->front];
		if (dq->front == dq->rear) {
			dq->front = -1;
			dq->rear = -1;
		}
		else if (dq->front == MAX -1) {
			dq->front = 0;
		}
		else { dq->front = dq->front + 1;
		}
		dq->size--;
		return value;
		}
		
		int deleteRear(Deque *dq) {
			if(isEmpty(dq)) {
				printf("Deque underflow\n");
				return -1;
				
				int value = dq->data[dq->rear];
				if (dq->front == dq->rear) {
					dq->front = -1;
					dq->rear = -1;
				}
				else if (dq->rear == 0) {
					dq->rear = MAX - 1;
				}
				else {
					dq-> rear = dq->rear - 1;
				}
				dq->size--;
				return value;
			}
			
			void displayDeque(Deque *dq) {
				if (isEmpty(dq)) {
					printf("Deque is Empty\n");
					return;
				}
			int i = dq->front;
			while (1) {
				printf("%d ", dq->data[i]);
				if (i == dq->rear) {
					break;
				}
				i = (i + 1) % MAX;
			}
			printf("\n");
			}
			
			int main() {
				Deque dq;
				initDeque(&dq);
				insertRear(&dq, 10);
				insertRear(&dq, 20);
				insertFront(&dq, 5);
				insertFront(&dq, 3);
				printf("Deque elements: ");
				displaysDeque(&dq);
				printf("Deleted from front: %d\n", deleteFront(&dq));
				printf("Deleted from rear: %d\n", deletedRear(&dq));
				printf("Deque elements after deletions: ");
				displayDeque(&dq);
				return 0;
			}
	}
		
