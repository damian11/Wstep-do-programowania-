#include<stdio.h>
int main()
{
	
int tab[5];
int i,a=0;
for(i=0;i<5;i++)
{
scanf("%d",&tab[i]);	
}
for(i=0;i<5;i++)
{
if(tab[i]%2==0)
a=a++;
}
printf("ilosc liczb parzystych: %d ",a);	

}
