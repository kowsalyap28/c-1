# include <stdio.h>
void main ()
{
int a;
printf("entre a :");
scanf("%d",&a);
if (a==0)
{
printf("a is neutral");

}
else if(a<0)
{
printf("a is negitive");
}
else 
{
    printf("a is positive");
}
}