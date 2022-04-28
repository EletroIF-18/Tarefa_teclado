#include <util/delay.h>
#include <avr/io.h>
#define tst_bit(Y,bit_x)(Y&(1<<bit_x))

int main(){
  #define F_CPU 16000000UL
  DDRB = 0b00001111;
  PORTB= 0b00001111;

  DDRH = 0b11111111;

  while (1) {
   if(tst_bit(PINB,PB0)){
     PORTH |= (1 << PH5);
    _delay_ms(10);
   }
  }
}

/*

for(int i = 7 ; i > 3 ; i--){
     PORTB |= (1 << i);
    _delay_ms(1000);
   }
    PORTH |= (1 << PH5); // Turn on PB5
    _delay_ms(1000); // Delay 1 second


    for(int i = 7 ; i > 3 ; i--){
     PORTB &= ~(1 << i);
    _delay_ms(1000);
   }
    PORTH &= ~(1 << PH5); // Turn off PB5 pin
    _delay_ms(1000); // Delay 1 second

*/