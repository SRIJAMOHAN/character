#include<stdio.h>
void main()
{
int num,count=0;
printf("Enter an integer");
scanf("%d",&num);
while(num!=0)
{
num/=10;
++count;
}
printf("The number of digits in an integers is %d",count);
}
