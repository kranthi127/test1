#include<stdio.h>
int add(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
void numser();
printf("test github");
int main()
{
int a,b;
printf("enter a,b values");
scanf("%d%d",&a,&b);
printf("%d",add(a,b));
 printf("\n%d",mul(a,b));
printf("\n%d",div(a,b));
printf("\n%d",mod(a,b));
numser();
printf("kranthi calculator");
}
int add(int a,int b)
{
 return(a+b);
}
 int mul(int a,int b)
        {
        return(a*b);
        }
int div(int a,int b)
{
return (a/b);
}
int mod(int a,int b)
{
return(a%b);
}
void  numser()
{
int i;
for(i=0;i<101;i++)
printf("%d " ,i);
}
