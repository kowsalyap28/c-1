# include <stdio.h>
void main()
{

int a,b;
char op;

printf("entre a:");
scanf("%d",&a);

printf("entre b:");
scanf("%d",&b);

printf("entre op:");
scanf("\n%c",&op);

if(op=='+')
{
    printf("sum=%d",a+b);
}
else if(op=='-')
{
     printf("diff=%d",a-b);

}
else if(op=='*')
{
printf("product=%d",a*b);

}
else if(op=='/')
{
    printf("divi=%d",a/b);
}
else
{
    printf("invalid operator");

}
}