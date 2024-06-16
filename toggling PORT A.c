#include<stm32f10x.h>
void delay_ms(unit16_t t) //initilizing a function
void delay_ms(unit16_t t)//delay function for 72 MHz ARM  controller 
{
  volatile unsigned long l=0;
  for(uint16_t i=0;i<=t;i++)
    {
      for(l=0;l<6000;l++)
        {
        }
    }
}
int main()
{
  RCC->APB2ENR |=0xFC; //ENABLE THE CLOCK FOR THE GPIO PINS
  GPIOA->CRL = 0x33333333 //PA0 TO PA7 AS OUTPUTS
  GPIOA->CRH = 0x33333333 //PA8 TO PA15 AS OUTPUTS 
  while(1)
    {
       GPIOA-> ODR=0x0000;//all the pins of the PORT A  set to low
      delay_ms(1000);//dely for 100ms
       GPIOA-> ODR=0xffff;//all the pins of the PORT A  set to high
       delay_ms(1000);//dely for 100ms
    }
}
