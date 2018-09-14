#include "osKernel.h"

#define QUANTA 10

uint32_t count0 = 0;
uint32_t count1 = 0;
uint32_t count2 = 0;


void task0(void){
	while(1){
		count0++;
	}
}

void task1(void){
	while(1){
		count1++;
	}
}

void task2(void){
	while(1){
		count2++;
	}
}

int main(void){
	
	osKernelInit();
	osKernelAddThreads(&task0,&task1,&task2);
	osKernelLaunch(QUANTA);
	//return 0;
}
