// switch case

# include <stdio.h>
void main()
{
    int a,b;
    char op;
printf (" entre a:");
scanf("%d",&a);

printf("entre b:");
scanf("%d",&b);
 
printf("entre op:");
scanf("\n%c",&op);

switch(op)
 {
    case '+':
    printf("sum=%d",a+b);
    break;

   case '-':
   printf("diff=%d",a-b);
   break;

   case '*':
   printf("product=%d",a*b);
   break;

   case '/':
   printf("divd=%d",a/b);
   break;
 }


}

