#include<stdio.h>
#include<stdlib.h>

#define MAX 5


struct PriorityQueue {
	int data[MAX];
	int priority[MAX];
	int size;
};

void insert(struct PriorityQueue* pq, int item, int prio) {
	if (pq->size == MAX) {
		printf("Priority Queue is full\n");
		return;
	}
	
	// Insert the element and its priority at the end
	pq->data[pq->size] = item;
	pq->priority[pq->size] = prio;
	pq->size++;
	
	// Bubble sort the element based on priority
	for (int i = 0; i < pq->size - 1; i++) {
		for (int j = 0; j < pq->size - i - 1; j++) {
			if (pq->priority[j] < priority->[j + 1]) {
				// Snap elements based on priority
				int temp = pq->priority[j];
				pq->priority[j] = pq->priority[j + 1];
				pq->priority[j + 1] = temp;
				
				int tempData = pq->data[j];
				pq->data[j] = pq->data[j + 1];
				pq->data[j + 1] = tempData;
			}
		}
	}
}

int delete(struct PriorityQueue* pq) {
	if (pq->size == 0) {
		printf("priority Queue is empty!\n");
		return -1;
	}
	
	int item = pq->data[0];
	
	//Shift elements to the left
	for (int i = 1; i < pq->data[i]);
	pq->priority[i - 1] = pq->priority[i];
}

pq->size--;
return item;
}

void display(struct PriorityQueue* pq) {
	if (pq->size == 0) {
		printf("Priority Queue is empty!\n");
		return;
	}
	
	printf("Priority Queue elements are:\n");
	for (int i = 0; i < pq->size; i++) {
		printf("Element: %d, Priority: %d\n", pq->data[i], pq->priority[i]);
	}
}

int main() {
	struct PriorityQueue pq;
	pq.size = 0;
	
	insert(&pq, 10, 2);
	insert(&pq, 20, 3);
	insert(&pq, 30, 1);
	insert(&pq, 40, 4);
	insert(&pq, 50, 5);
	
	display(&pq);
	
	printf("Deleted element with highest priority: %d\n", delete(&pq));
	display(&pq);
	
	return 0;
}
