
#ifndef  NO_OS_H
#define  NO_OS_H

enum no_os_enums
{
  NO_OS_GPIO_LOW = 0,
  NO_OS_GPIO_HIGH = 1
};



struct no_os_gpio_desc
{
};

int32_t no_os_gpio_get_optional(struct no_os_gpio_desc** gpio_resetn, struct no_os_gpio_desc* gpio_resetn);


int32_t no_os_gpio_get_optional(struct no_os_gpio_desc** gpio_busy,  struct no_os_gpio_desc* gpio_busy);

int32_t no_os_gpio_direction_output(struct no_os_gpio_desc* gpio_resetn, no_os_enums direction_value);
int32_t no_os_gpio_direction_input(struct no_os_gpio_desc* gpio_busy);
	
#endif