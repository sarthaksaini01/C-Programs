#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int Queue[capcity];
int front =-1,rear =-1;

//Check if queue is empty
int is_empty() {
	return front ==-1 || front>rear;
}
//Enqueue operation
void enqueue(int element) {
	if(rear == capacity -1) {
		printf("Error: Queue Overflow\n");
		return;
	}
	if(front ==-1) {
		front =0;
	}
	Queue[++rear]=element;
}
//Dequeue operation
int dequeue(){
	int element
	if(front ==-1 || front>rear) {
		printf("Error: Queue Underflow\n");
		return -1;
	}
	element =Queue[front];
	front++;
	return element;
}
//Peek operation
int peek() {
	if(front ==-1 || front>rear) {
		printf("Error: Queue Underflow\n");
		return -1;
	}
	return Queue[front];
}
//Traverse the queue
void traverse_queue() {
	int i;
	if(front ==-1 || front>rear) {
		printf("Queue is empty.\n");
		return;
	}
	printf("Queue is empty.\n");
	for(i=front;i<=rear;i++) {
		printf("%d",Queue[i]);
	}
	printf("\n");
}

int main()
{
	int ch,ele;
	while(1)
	{
		printf("\n Enter your Choice:\n");
		printf("\t 1. Enqueue");
		printf("\t 2. Dequeue");
		printf("\t 3. Peek");
		printf("\t 4. Traverse");
		printf("\t 5. Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1;
		}
		
	}
}
