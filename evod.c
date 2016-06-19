#include<stdio.h>
int main()
{
int x;
printf("enter the number");
scanf("%d",&x);
printf("the entered number is %d",x);
(x%2==0?printf("%d is an even number",x):printf("%d is an odd number",x));
return 0;
} 

