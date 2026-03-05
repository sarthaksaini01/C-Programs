#include<stdio.h>
void main()
{
float a=22.22;
float*p;
p=&a;
printf("before increment=%d\n",p);
p++;
printf("After=%d\n",p);
p++;
printf("After=%d\n",p);
p--;
printf("After Decrement=%d\n",p);
getch();
return 0;
}
