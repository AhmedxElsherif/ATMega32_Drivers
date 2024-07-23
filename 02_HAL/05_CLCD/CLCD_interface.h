/*
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   CLCD_interface.h   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Author : Ahmed ElSherif
 * Layer  : HAL
 * SWC    : CLCD (Liquid Crystal Display)
 *
 */
 
#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_

#include "CLCD_config.h" // to khow the mode


/***************************************************************************************/
/*--------------------------------------- Macros ---------------------------------------/
/***************************************************************************************/


/********/
#if   CLCD_MODE == 4
#define FOUR_BITS                     0x28          //4 bits mode initialization
#elif CLCD_MODE == 8
#define EIGHT_BITS                    0x38          //8 bits mode initialization (8-bit data, 2-line display, 5 x 7 font )
#endif
/********/

#define lcd_DisplayOn_CursorOff       0x0c          // display on, cursor off, don't blink character 
#define lcd_DisplayOn_CursorOn        0x0e          // display on, cursor on, don't blink character 
#define lcd_DisplayOff_CursorOff      0x08          // turn display off
#define lcd_Clear                     0x01          //replace all characters with ASCII 'space'  
#define lcd_EntryMode                 0x06          // shift cursor from left to right on read/write
#define lcd_Home                      0x02          // return cursor to first position on first line 
#define lcd_CGRAM                     0x40          // the first Place/Address at CGRAM
#define lcd_SetCursor                 0x80          // set cursor position
#define lcd_FunctionReset             0x30          // reset the LCD


/***************************************************************************************/


#define CLCD_ROW_1   1
#define CLCD_ROW_2   2

#define CLCD_COL_1   0
#define CLCD_COL_2   1
#define CLCD_COL_3   2
#define CLCD_COL_4   3
#define CLCD_COL_5   4
#define CLCD_COL_6   5
#define CLCD_COL_7   6
#define CLCD_COL_8   7
#define CLCD_COL_9   8
#define CLCD_COL_10  9
#define CLCD_COL_11  10
#define CLCD_COL_12  11
#define CLCD_COL_13  12
#define CLCD_COL_14  13
#define CLCD_COL_15  14
#define CLCD_COL_16  15

/***************************************************************************************/

void CLCD_voidInit                      ( void                                  );
void CLCD_voidSendData                  ( u8 Copy_u8Data                        );
void CLCD_voidSendCommand               ( u8 Copy_u8Commend                     );
void CLCD_voidSendString                ( const u8 * Copy_u8ptrString           );
void CLCD_voidSendNumber                ( u64 Copy_u64Number                    );
void CLCD_voidSetPosition               ( u8 Copy_u8Row         , u8 Copy_u8Col );
void CLCD_voidSendExtraChar             ( u8 Copy_u8Row         , u8 Copy_u8Col );
void CLCD_voidClearScreen               (void                                   );

/***************************************************************************************/

#endif /* CLCD_INTERFACE_H_ */
