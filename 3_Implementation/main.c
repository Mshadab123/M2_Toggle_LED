

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1 << DDB2)|(1<<DDB3);
	DDRB &= ~(1 << DDB0);


	while (1)
	{
		
		if (!(PINB&(1<<PINB0)))
		{
			PORTB ^= (1<<PINB2)^(1<<PINB3);
			_delay_ms(300);
		}
	}
}

