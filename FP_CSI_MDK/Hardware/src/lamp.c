#include "lamp.h"
#include "main.h"


void LAMP_InitValue(void)
{
    HAL_GPIO_WritePin(LAMP_1_Port,LAMP_1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LAMP_2_Port,LAMP_2_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LAMP_3_Port,LAMP_3_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LAMP_4_Port,LAMP_4_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LAMP_5_Port,LAMP_5_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LAMP_6_Port,LAMP_6_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LAMP_POWER_Port,LAMP_POWER_Pin,GPIO_PIN_RESET);
}




void LAMP_POWER_ON(void)
{
    HAL_GPIO_WritePin(LAMP_POWER_Port,LAMP_POWER_Pin, GPIO_PIN_SET);
}
void LAMP_POWER_OFF(void)
{
	HAL_GPIO_WritePin(LAMP_POWER_Port,LAMP_POWER_Pin, GPIO_PIN_RESET);
}






