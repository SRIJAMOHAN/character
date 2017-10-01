#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter a positive integer is");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum+=i;
}
printf("the sum of N natural numbers %d",sum);
}
