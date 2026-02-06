#include <stdio.h>
#include "i2c.h"
#include "i2c_config.h"

int main(void)
{
    I2C_Config_t config;

    config.board = I2C_SELECTED_BOARD;
    config.bus_id = I2C_SELECTED_BUS;
    config.speed = I2C_SELECTED_SPEED;
    config.own_address = I2C_OWN_ADDRESS;

    if (I2C_Init(&config) == 0)
    {
        printf("I2C initialized successfully\n");
    }
    else
    {
        printf("I2C initialization failed\n");
    }

    return 0;
}
