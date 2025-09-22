
#include <stdio.h>
#include <pico/stdlib.h>

#include "tkjhat/sdk.h"



int main() {
    stdio_init_all();
    while (!stdio_usb_connected()){
        sleep_ms(10);
    }
    init_hat_sdk();
    sleep_ms(200);
    printf("Hello World\n");
    stdio_flush();
    int i = 0;
    while(1) {
        printf("Iteration %d\n",i);
        sleep_ms(3000);
        i++;
    }
    return 0;
}

