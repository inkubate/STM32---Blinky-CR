
#include "stm32f401xc.h"
#include "setup.h"
#include "delay.h"

int main()
{
  
  setupGPIO(); // run setup for GPIO A pin 5 once at start
  
  
  while(1) { //infinite flashing loop
    GPIOA->BSRR = GPIO_BSRR_BS_5; //set output 5 high using single bit access
    delay(1000000);
    GPIOA->BSRR = GPIO_BSRR_BR_5; //set output 5 LOW using single bit access
    delay(1000000);
  }
  return 0;
  
}


