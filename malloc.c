#include<stdio.h>
int main()
{
	int *ptr;
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enterred number of element:%d\n,n");
	ptr=(int*)malloc(n*size of (int));
	if(ptr==NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using malloc.\n");
		for(i=0;i<n;++i)
		{
			ptr[i]=i+1;
		}
		printf("The Elements of the array are:");
		for(i=0;i<n;++i)
		{
			printf("%d",ptr[i]);
		}
	}
	return 0;
}
