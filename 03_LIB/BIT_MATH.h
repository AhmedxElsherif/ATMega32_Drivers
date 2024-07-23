/*
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   STD_TYPES.h   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Author : Ahmed ElSherif
 * Layer  : LIB
 *
 */
 
 #ifndef BIT_MATH_H_
 #define BIT_MATH_H_
 
 #define SET_BIT(reg,bit)       reg |= (1<<bit)
 #define CLR_BIT(reg,bit)       reg &= (~(1<<bit))
 #define TOG_BIT(reg,bit)       reg ^= (1<<bit)
 #define GET_BIT(reg,bit)       (reg& (1<<bit)) >>bit
 
 #define IS_SET_BIT(reg,bit)    (reg& (1<<bit)) >>bit
 #define IS_SET_CLR(reg,bit)    !((reg& (1<<bit)) >>bit)
 #define ROR(reg,num)           reg = (reg <<(REGISTER_SIZE-num) | (reg>>(num))
 #define ROL(reg,num)           reg = (reg <<(REGISTER_SIZE-num) | (reg<<(num))
 
 
 #endif    /*  BIT_MATH_H_  */