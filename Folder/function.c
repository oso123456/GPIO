#include "header.h"

void Pin_direction_set(int a,int b)
{
switch(a)
		{
		case 0:
			IO0DIR|=1<<b;
			break;
		case 1:
			IO1DIR|=1<<b;
			break;
		default:
			IO0DIR|=1<<b;
	  }
}

void input_set(int a,int b)
{
	switch(a)
	{
		case 0:
			IO0SET|=1<<b;
			break;
		case 1:
			IO0SET|=1<<b;
			break;
		default:
			IO0SET|=1<<b;
			break;
	}
}

void input_clr(int a,int b)
{
	 switch(a)
		{
		case 0:
			IO0CLR|=1<<b;
			break;
		case 1:
			IO1CLR|=1<<b;
			break;
		default:
			IO0CLR|=1<<b;
	  }
}

int gpio_read(int r,int d)
{
switch(r)
{
int n;
case 0:
n=(IO0PIN&(1<<d));
return n;
break;
case 1:
n=(IO1PIN&(1<<d));
return n;
break;
}
}

void delay(int n)
{
int i,j;
	for(i=0;i<n;i++)
		{
	for(j=0;j<=1275;j++);
		}
}

