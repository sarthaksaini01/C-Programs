#include<stdio.h>
int main()
{
	printf("Numbers divisible by 3 from 1 to 100 are:\n");
	for(int i=1; i <=100; i++)
	{
		if(i % 3 == 0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

