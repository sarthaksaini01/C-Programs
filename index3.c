#include<stdio.h>
int main()
{
	int arr[3][4],i,j;
	int(*ptr)[4];
	ptr=arr;
	
	printf("\n Enter the element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
	
	{
		scanf("%d",&arr[i][j]);
	}
}
     for(i=0;i<3;i++)
     {
     	for(j=0;j<4;j++)
	 {
	 	printf("%d\t",ptr[i][j]);
	 }
	 printf("\n");
}
	getch();
}
