#include <stdio.h>
#include <stdlib.h>

// Node structure for the singly linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* stack_top = NULL;
struct Node* root = NULL;

void push(int);
void pop(void);
void peek(void);
void traverse(struct Node*);

int main() {
    int ch, data;

    while (1) {
        printf("\n 1. Push\n 2. Pop\n 3. Peek\n 4. Traverse\n 5. Exit\n Enter Your Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\n Enter the Element to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                traverse(root);
                break;
            case 5:
                exit(0);
            default:
                printf("\n Invalid Option\n");
                break;
        }
    }

    return 0;
}

// Push operation
void push(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (stack_top == NULL) {
        stack_top = newNode;
        root = newNode;
    } else {
        stack_top->next = newNode;
        stack_top = newNode;
    }
}

// Pop operation
void pop() {
    if (stack_top == NULL) {
        printf("Error: Stack Underflow\n");
    } else {
        if (root == stack_top) {
            printf("\n Pop Data at the top: %d\n", stack_top->data);
            root = stack_top = NULL;
        } else {
            struct Node* temp = root;
            while (temp->next != stack_top) {
                temp = temp->next;
            }
            printf("\n Pop Data at the top: %d\n", stack_top->data);
            stack_top = temp;
        }
    }
}

void peek() {
    printf("\n Data element at the Peek: %d\n", stack_top->data);
}

void traverse(struct Node* stack_top) {
    struct Node* p;

    if (stack_top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    p = stack_top;
    printf("Stack contents:\n");

    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }

    printf("\n");
}

