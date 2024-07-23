/*
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   LED_program.c   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Author : Ahmed ElSherif
 * Layer  : HAL
 * SWC    : LED
 *
 */
 
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_interface.h"
#include "LED_interface.h"
#include "LED_config.h"
#include "LED_private.h"

//---------------------------------------------------------------------------------------------------
/*
*Brief : This Function initialize the pin whic connected to LED as output PIN
*Parameters : 
			=> Struct has the LED Port, Pin , Status
*Return : Void
*/

void LED_voidInit( LED_Type LED_Configration )
{
	
	DIO_enumSetPinDirection( LED_Configration.port , LED_Configration.pin , DIO_PIN_OUTPUT);
	
};

//---------------------------------------------------------------------------------------------------
/*
*Brief : This Function Set high on led pin ( led on )
*Parameters : 
			=> Struct has the LED Port, Pin , Status
*Return : Void
*/

void LED_voidon( LED_Type LED_Configration )
{
	if (LED_Configration.Active_State == ACTIVE_HIGH)
	{
		DIO_enumSetPinValue( LED_Configration.port , LED_Configration.pin , DIO_PIN_HIGH);
		}

		else if (LED_Configration.Active_State == ACTIVE_LOW)
		{
			DIO_enumSetPinValue( LED_Configration.port , LED_Configration.pin , DIO_PIN_HIGH);
		}
	}


//---------------------------------------------------------------------------------------------------
/*
*Brief : This Function Set high OFF led pin ( led on )
*Parameters : 
			=> Struct has the LED Port, Pin , Status
*Return : Void
*/

void LED_voidoff( LED_Type LED_Configration )
{
	if (LED_Configration.Active_State == ACTIVE_HIGH)
	{
	DIO_enumSetPinValue( LED_Configration.port , LED_Configration.pin , DIO_PIN_LOW);
	} 
	
	else if (LED_Configration.Active_State == ACTIVE_LOW)
	{
			DIO_enumSetPinValue( LED_Configration.port , LED_Configration.pin , DIO_PIN_HIGH);
	}
}	

//---------------------------------------------------------------------------------------------------
/*
*Brief : This Function Toggle led PIN
*Parameters : 
			=> Struct has the LED Port, Pin , Status
*Return : Void
*/

void LED_voidToggle( LED_Type LED_Configration )
{
	
	DIO_enumTogglePinValue( LED_Configration.port , LED_Configration.pin);
	
}	
