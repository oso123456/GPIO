#include "instences.h"

int main()
{
	while(1)
	{ 
		int g=gpio_read(0,16);
			if(g==0)
			{
			HAL.GPIO->Pin_direction_set(0,21);
			HAL.GPIO->input_set(0,21);
			delay(1000);
			HAL.GPIO->input_clr(0,21);
			delay(1000);
			}
				else
				{
				HAL.GPIO->input_clr(0,21);
				}
	}
}
