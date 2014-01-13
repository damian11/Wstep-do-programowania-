#include<stdio.h>
int main()
{
	
int tab[5];
int i,suma=0;
for(i=0;i<5;i++)
{
scanf("%d",&tab[i]);	
}
for(i=4;i>=0;i--)
{
suma=suma+tab[i];
}
printf("%d ",suma);	
}
