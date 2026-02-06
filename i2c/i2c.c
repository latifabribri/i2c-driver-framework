#include "i2c.h"
#include "i2c_config.h"

/* Board-specific drivers */
#include "board/stm32/i2c_stm32.h"

int I2C_Init(const I2C_Config_t *config)
{
    if (config == 0)
        return -1;

    switch (config->board)
    {
        case I2C_BOARD_STM32:
            return I2C_STM32_Init(config);

        default:
            return -1;
    }
}

int I2C_Write(uint8_t dev_addr, const uint8_t *data, uint16_t size)
{
    return I2C_STM32_Write(dev_addr, data, size);
}

int I2C_Read(uint8_t dev_addr, uint8_t *data, uint16_t size)
{
    return I2C_STM32_Read(dev_addr, data, size);
}
