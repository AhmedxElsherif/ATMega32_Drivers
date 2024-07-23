/*
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   LED_interface.h   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Author : Ahmed ElSherif
 * Layer  : HAL
 * SWC    : LED
 *
 */
#include"LED_private.h"


 //File Guard
 #ifndef _LED_INTERFACE_H_
 #define _LED_INTERFACE_H_
 

 
 //PORT Defines
 #define LED_PORTA 0
 #define LED_PORTB 1
 #define LED_PORTC 2
 #define LED_PORTD 3
 
 //PIN Defines
 #define LED_PIN0 0
 #define LED_PIN1 1
 #define LED_PIN2 2
 #define LED_PIN3 3
 #define LED_PIN4 4
 #define LED_PIN5 5
 #define LED_PIN6 6
 #define LED_PIN7 7
 
 //ACTIVE STATE
 #define ACTIVE_HIGH 1
 #define ACTIVE_LOW  0
 
typedef struct{
	u8 port        ;
	u8 pin         ;
	u8 Active_State;
}LED_Type;

 //Functions
 
 void LED_voidInit   ( LED_Type LED_Configration );
 void LED_voidon     ( LED_Type LED_Configration );
 void LED_voidoff    ( LED_Type LED_Configration );
 void LED_voidToggle ( LED_Type LED_Configration );
 
 
 
 #endif
