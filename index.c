#include<stdio.h>
int main()
{
int a=22,*ptr;
ptr=&a;
printf("value of before ptr is %d\n",ptr);
ptr++;
printf("value of after ptr is %d",ptr);
return 0;
}
