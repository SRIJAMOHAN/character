#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("%d is the largest number",a);
}
if(b>=c&&b>=a)
{
printf("%d is the largest number",b);
}
if(c>=b&&c>=a)
{
printf("%d is the largest number",c);
}
}
