#include "display.h"

#include "../ssd1306/ssd1306.h"

void displayRefresh(uint8_t* chip8_buffer)
{

	convert_buff(chip8_buffer);
	ssd1306_UpdateScreen();
//	HAL_Delay(500);
}
