#include "mbed.h"

DigitalOut myled(LED1);
Serial pc(USBTX, USBRX);

int main() {
    int counter = 0;
    while(1) {
        pc.printf("Hello world %d \r\n", counter++);
        myled = 1;
        wait(0.5);
        myled = 0;
        wait(0.5);
    }
}
