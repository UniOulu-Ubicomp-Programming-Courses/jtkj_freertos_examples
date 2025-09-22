
#include <stdio.h>
#include <string.h>
#include <FreeRTOS.h>
#include <hardware/gpio.h>
#include <hardware/i2c.h>
#include <pico/stdlib.h>
#include <queue.h>
#include <task.h>

#include "tkjhat/sdk.h"



int main() {
    stdio_init_all();
    sleep_ms(1500); //Wait to see the output.
    init_hat_sdk();



    
    return 0;
}

