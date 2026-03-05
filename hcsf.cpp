#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter age of three person: ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
	printf("Frist person is older");
	else if (b>a&&b>c)
	printf("Second Person is older");
	else
	printf("Third person is older");
	return 0;
}
