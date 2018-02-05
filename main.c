/*
 * main.c
 *
 * Author : Hossam Elbahrawy
 */ 
#include "LCD.h"
#include <avr/io.h>
#include <util/delay.h>




int main(void)
{
	
	lcd_init();
	lcd_write_word("Hello, World!");
	lcd_goto_xy(1,0);
	lcd_write_word("LCD is working");
 
}

