#include "no_os.h"

int32_t no_os_gpio_get_optional(struct no_os_gpio_desc** gpio_param, struct no_os_gpio_init_param* gpio_param_init)
{
  return 0;
}

int32_t no_os_gpio_direction_output(struct no_os_gpio_desc* gpio_param, enum no_os_enums gpio_param_direction)
{
  return 0;
}


int32_t no_os_gpio_direction_input(struct no_os_gpio_desc* gpio_param)
{
  return 0;
}


	
int32_t no_os_spi_write_and_read(struct no_os_spi_desc* spi_desc, uint32_t *buf, uint16_t samples)
{
  return 0;
}

uint8_t no_os_hweight16(uint16_t ch_mask)
{
  return 0;
}

int32_t no_os_gpio_set_value(struct no_os_gpio_desc *gpio_resetn, enum no_os_enums gpio_param_value)
{
  return 0;
}

void no_os_mdelay(uint32_t delay)
{
  
}

void* no_os_malloc(uint32_t size)
{
  return 0;
}


int32_t no_os_spi_init(struct no_os_spi_desc* spi_desc, struct no_os_spi_init_param* spi_init)
{
  return 0;
}

int32_t no_os_spi_remove(struct no_os_spi_desc* spi_desc)
{
  
}

int32_t no_os_gpio_remove(struct no_os_gpio_desc* gpio_param)
{
  return 0;
}

int32_t no_os_free(void* blob)
{
  return 0;
}
