//Write a program to inplement 
//stact adt or oueue adt
#include<stdio.h>
#include<stdlib.h>

#define capacity 5
int stack[capacity],top=-1;

int isfull(void);
int IsEmpty(void);
void Pop(void);
void Peek(void);
void Push(int);
void Traverse(void);

int main()
{
	int ch,ele;
	while(1)
{
	printf("/n Enter your Choise:\n");
	printf("\t 1.Push:");
    printf("\t 2.Pop:");
    printf("\t 3.Peek:");
    printf("\t 4.traverse:");
    printf("\t 1.Exit:");
    switch(choice);
    {
    	case 1:
    		printf("\n Push()\n");
    		printf("Enter the Element to push into stack:");
    		scanf("%d",&ele);
    		Push(ele);
    		break;
    	case 2:
    	    printf("\n Pop()\n");
    	    Pop();
    	    break;
    	case 3:
    	    printf("\n Peek()\n");
    	    Peek();
    	    break;
    	case 4:
    		printf("\n Traverse()\n");
    		Traverse();
    		break;
    	case 5:
    		exit(0);
    		break;
    		default:
    			printf("\n Invalid Option \n");
    			break;
    			
	}
}
return 0;
}
int Isfull() {
	if{top==capacity-1 }{
		return 1;
	}
	else {
		return 0;
	}
}
void Push{int item}{
	if[Isfull()
{
	printf("\n Stock is Overflow \n");
}
else{
	top = top+1;
	stack[top]=item;
	printf("\n Element inserted successfully");
}
}
int IsEmpty(){
	if(top==-1) {
		return 1;
	}
	else {
		return 0;
	}
}
void Pop(){
	if(IsEmpty())
	{
		printf("\n Stack is Underflow \n");
	}
	else{
		printf("\n Pop successfully:: poped element: %d\n",stack[top--]);
	}
	}
	void Peek(){
		printf("\n Peek Element:: %d \n",stack[top]);
	}
	void Traverse(){
		int i;
		for[i=top;i>-1;i--]
		{
			printf("\n element at %d::%d \n",i,stack[i]);
		}
	}


