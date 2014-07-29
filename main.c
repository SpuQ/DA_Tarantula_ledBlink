#include <avr/io.h>
#include <util/delay.h>

#define BLNKDELAY 300

int main (void){
	/*
	 * On Digital AD's Tarantula, the 3 LEDs are connected (active low) to port E
	 * bit 3, 4 and 5. So we set those bits of Data Direction Register of port E (DDRE)
	 * to output (binary 1, see datasheet).
	 */

	DDRE = 0b00011100;

	// infinit main loop
	while(1){
		PORTE = 0b00001100;
		_delay_ms(BLNKDELAY);
		PORTE = 0b00010100;
		_delay_ms(BLNKDELAY);
		PORTE = 0b00011000;
		_delay_ms(BLNKDELAY);
		PORTE = 0b00011100;
		_delay_ms(BLNKDELAY);
	}

	return 0;
}
