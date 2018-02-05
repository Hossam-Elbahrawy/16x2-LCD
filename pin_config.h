/*
 * pin_config.h
 *
 * Author : Hossam Elbahrawy
 */ 
#ifndef PIN_CONFIG_H_
#define PIN_CONFIG_H_

#include <avr/io.h>
#include <util/delay.h>

#define DATA_BUS	PORTD
#define CTL_BUS		PORTC
#define DATA_DDR	DDRD
#define CTL_DDR		DDRC
#define LCD_D4			4
#define LCD_D5			5
#define LCD_D6			6
#define LCD_D7			7
#define LCD_EN			5
#define	LCD_RW			4
#define	LCD_RS			3




#endif /* PIN_CONFIG_H_ */