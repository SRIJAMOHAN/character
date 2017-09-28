#include<stdio.h>
void main()
{
char ch;
scanf("%c",&ch);
if((ch=<'a'&&ch=>='z')||(ch=<'A'&&ch=>'Z'))
{
printf("It is alphabet");
}
else
{
printf("It is not a alphabet");
}
}
