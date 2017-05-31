
#include "stm32f401xc.h"
#include "setup.h"

  
  // __IO uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
  // __IO uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
  // __IO uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
  // __IO uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
  // __IO uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
  // __IO uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
  // __IO uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
  // __IO uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
  // __IO uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
  
void setupGPIO(void) { //GPIO A pin 5 setup routine. For user LED 2
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; //enable clock to GPIO A  
  GPIOA->MODER |= GPIO_MODER_MODER5_0; // GPIO A pin 5 set to 01 GPIO out mode
  GPIOA->OTYPER &= ~GPIO_OTYPER_OT_5; // GPIO A pin 5 reset so push pull mode
  GPIOA->PUPDR  &= ~GPIO_PUPDR_PUPDR5; //no pull up or down so reset both bits
}