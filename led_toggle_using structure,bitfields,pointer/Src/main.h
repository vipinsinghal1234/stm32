/*
 * main.h
 *
 *  Created on: 09-Dec-2019
 *      Author: vipin
 */

#ifndef MAIN_H_
#define MAIN_H_


	typedef struct
	{
		uint32_t AFIOEN			:1;
		uint32_t reserve		:1;
		uint32_t GPIOAEN		:1;
		uint32_t GPIOBEN		:1;
		uint32_t GPIOCEN		:1;
		uint32_t GPIODEN		:1;
		uint32_t GPIOEEN		:1;
		uint32_t reserve3		:25;
	}ClkCtrReg_t;


#endif /* MAIN_H_ */
