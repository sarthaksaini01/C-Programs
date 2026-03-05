#include<stdio.h>
int main()
{
	int a[3];
	int*p,i;
	printf("enter elements of array=");
	for(i=0;i<8;i++)
{
	scanf("%d",&a[i]);
	
}
p=&a[0];
p++;
printf("Array elements=");
for(i=0;i<8;i++)
{
	printf("%d\n",*(p+i));
}
getch();


}

