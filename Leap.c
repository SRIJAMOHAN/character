#include<stdio.h>
void main()
{
int year;
scanf("%d",&year)
printf("year is:%d",year);
if(year%400==0)
{
printf("%d is leap year",year);
}
else if(year%100==0)
{
printf("%d is not a leap year",year);
}
else if(year%4==0)
{
printf("%d is leap yaer",year);
}
else
{
printf("%d is not a leap year",year);
}
return 0;
}

