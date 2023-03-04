#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H


void ADC_init(void);
void ADC_StartConversion(u8 copy_ADC_channel);
u16 ADC_Read(void)
void ADC_CallBack(void(*Ptr)(void));





#endif