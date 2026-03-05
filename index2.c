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
	printf("%p %p %p\n",ptr,ptr+1,ptr+2);
	printf("%p %p %p\n",*ptr,*ptr+1,*ptr+2);
	printf("%d %d %d\n",*(*ptr),*(*(ptr+1)+2)),*(*(ptr+2)+3)));
	printf("%d,%d,%d\n",ptr[0][0],ptr[1][2],ptr[2][3]);
	return 0;
}
