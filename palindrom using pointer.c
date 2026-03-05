/*
#include<stdio.h>
int main()
{
	int n,S=0,r,temp;
	int*a=&n;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=*a;
	while(*a!=0)
	{
		r=*a%10;
		S=S*10+r;
		*a=*a/10;
	}
	printf("%d\n",S);
	if(S==temp)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is palindrome");
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int a,i,count=0;
	int*p=&a;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=*p;i++)
	{
		if(*p % p==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}
	return 0;
}






















