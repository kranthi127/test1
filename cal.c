#include<stdio.h>
int add(int,int);
int main()
{
int a,b;
printf("enter a,b values");
scanf("%d%d",&a,&b);
printf("%d",add(a,b));
}
int add(int a,int b)
{
 return(a+b);
}
