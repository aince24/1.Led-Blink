
#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

GPIO_InitTypeDef LED;

void config(void){
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
	LED.GPIO_Pin= GPIO_Pin_12 |GPIO_Pin_13 |GPIO_Pin_14 |GPIO_Pin_15 ;
	LED.GPIO_Mode=GPIO_Mode_OUT;
	LED.GPIO_OType= GPIO_OType_PP ;
	LED.GPIO_Speed=GPIO_Speed_100MHz;
	GPIO_Init(GPIOD, &LED);
}

void delay(uint32_t time){
	while(time --){

	}

}
int main(void)
{
  config();

  while (1)
  {
	GPIO_SetBits(GPIOD, GPIO_Pin_12 |GPIO_Pin_13 |GPIO_Pin_14 |GPIO_Pin_15);
	delay(168000000);
	GPIO_ResetBits(GPIOD, GPIO_Pin_12 |GPIO_Pin_13 |GPIO_Pin_14 |GPIO_Pin_15);
	delay(168000000);

  }
}



void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size){
  /* TODO, implement your code here */
  return;
}

/*
 * Callback used by stm324xg_eval_audio_codec.c.
 * Refer to stm324xg_eval_audio_codec.h for more info.
 */
uint16_t EVAL_AUDIO_GetSampleCallBack(void){
  /* TODO, implement your code here */
  return -1;
}
