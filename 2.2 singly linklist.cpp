#include<stdio.h>
#include<stdlib.h>

//Node structure for the singly linked list
struct Node {
	int data;
	struct Node*next;
};

//Queue ADT using singly liked list

//Enqueue operation
void enqueue(struct Node**front, struct Node**rear) {
	struct Node*newNode= (struct Node*)malloc(sizeof(struct Node));
	printf("\n Enter the Data to insert::");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	if(*rear == NULL) {
		*front =*rear=newNode;
	}else {
		(*rear)->next = newNode;
		*rear = newNode;
	}
}

//Dequeue operation
int dequeue(struct Node** front,struct Node** rear) {
	struct Node*temp;
	int data;
	if(*front == NULL) {
		printf("Error: Queue Underflow\n");
		return -1;
	}
	temp = *front;
	data = temp->data;
	*front = (*front)->next;
	if(*front == NULL) {
		*rear = NULL;
	}
	free(temp);
	return data;
}

//Check if queue is empty
int is_queue_empty(struct Node*front) {
	return front == NULL;
}


int main() {
	//Queue ADT
	int ch;
	struct Node* queue_front = NULL,* queue_rear=NULL;
	while(1)
	{
		printf("\n 1.Enqueue \n 2.Dequeue \n 3.Check Queue is Empty? \n 4.Exit \n Enter your Choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter the Element to push::");
				enqueue(&queue_front,&queue_rear);
				break;
			case 2:
				printf("Dequeue element:%d\n",dequeue(&queue_front,&queue_rear));
				break;
			case 3:
				printf("Queue is empty?::");
				if(is_queue_empty(queue_front))
				{
					printf("yes\n");
				}
				else
				{
					printf("No\n");
				}
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
