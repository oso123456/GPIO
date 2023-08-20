#include "header.h"

typedef struct GPIO
{
void (*Pin_direction_set)(int,int);
void (*input_set)(int,int);
void (*input_clr)(int,int);
int (*gpio_read)(int,int);
}gpio_t;
gpio_t var={&Pin_direction_set,&input_set,&input_clr,&gpio_read};


typedef struct ala
{
gpio_t *GPIO;
}ala_t;
ala_t HAL={&var};