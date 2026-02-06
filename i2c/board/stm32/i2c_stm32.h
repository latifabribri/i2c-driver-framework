#ifndef I2C_STM32_H
#define I2C_STM32_H

#include "../../i2c.h"

int I2C_STM32_Init(const I2C_Config_t *config);
int I2C_STM32_Write(uint8_t dev_addr, const uint8_t *data, uint16_t size);
int I2C_STM32_Read(uint8_t dev_addr, uint8_t *data, uint16_t size);

#endif /* I2C_STM32_H */
