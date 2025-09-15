
#include <stdio.h>
#include <string.h>
#include <FreeRTOS.h>
#include <hardware/gpio.h>
#include <hardware/i2c.h>
#include <pico/stdlib.h>
#include <queue.h>
#include <task.h>

#include <shellSDK/SDK.h>
#include <pico/binary_info.h>


int main() {
    stdio_init_all();
    sleep_ms(2000); //Wait to see the output.
    init_shell();

    
    return 0;
}

