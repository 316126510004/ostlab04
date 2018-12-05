#include<stdio.h>
int main()
{
int a[5],i,loc,c;
printf("enter elements:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("enter position to insert:");
scanf("%d",&loc);
for(i=5;i>=loc;i--)
{
a[i]=a[i-1];
}
printf("enter element:");
scanf("%d",&c);
a[loc-1]=c;
printf("elements are:");
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
}
