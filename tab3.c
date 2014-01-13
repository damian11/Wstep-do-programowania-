#include<stdio.h>
int main()
{
	
int tab[5];
int i,potega=2;
	for(i=0;i<5;i++)
	{
		tab[i]=potega;
		potega=potega*2;
		printf("%d\n",tab[i]);
	}
}
