#ifndef I2C_H
#define I2C_H

#include <stdint.h>

/* Supported boards */
typedef enum {
    I2C_BOARD_STM32 = 0,
    I2C_BOARD_ESP32,
    I2C_BOARD_ARDUINO
} I2C_Board_t;

/* I2C speed options */
typedef enum {
    I2C_SPEED_STANDARD = 100000,
    I2C_SPEED_FAST     = 400000
} I2C_Speed_t;

/* I2C configuration structure */
typedef struct {
    I2C_Board_t board;
    uint8_t bus_id;
    I2C_Speed_t speed;
    uint8_t own_address;
} I2C_Config_t;

/* Generic API */
int I2C_Init(const I2C_Config_t *config);
int I2C_Write(uint8_t dev_addr, const uint8_t *data, uint16_t size);
int I2C_Read(uint8_t dev_addr, uint8_t *data, uint16_t size);

#endif /* I2C_H */
