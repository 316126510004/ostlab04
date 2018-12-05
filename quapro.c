#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define size 11
int main()
{
int a[11],i,k=0,val,m,h;
for(i=0;i<11;i++)
{
a[i]=-1;
}
printf("\nenter the elements into the hash table:");
for(i=0;i<9;i++)
{
scanf("%d",&val);
h=val%11+k*k;
label:
if(a[h]==-1)
{
k=0;
a[h]=h;
h=0;
break;
}
else
{
k++;
goto label;
}
}
}
printf("elements:");
for(i=0;i<11;i++)
{
printf("%d\t",a[i]);
if(a[i]==14)
m=i;
}
printf("\nlast element index:%d",m);
}

