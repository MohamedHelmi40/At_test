#include "../../1-LIB/STD_TYPES.h"
#include "../../1-LIB/BIT_MATH.h"

#include "TIMER0_interface.h"
#include "TIMER0_private.h"
#include "TIMER0_config.h"
void TIMER0_init(u8 copyClockSource,u8 copyWaveGen,u8 copyCompareMode)
{
	switch(copyClockSource)
	{
		case NO_CLOCk_SOURCE:CLR_BIT(TCCR0,CS00); CLR_BIT(TCCR0,CS01);CLR_BIT(TCCR0,CS02);break;
		case NO_PRESCALING  :SET_BIT(TCCR0,CS00); CLR_BIT(TCCR0,CS01);CLR_BIT(TCCR0,CS02);break;
		case PRESCALER_8    :CLR_BIT(TCCR0,CS00); SET_BIT(TCCR0,CS01);CLR_BIT(TCCR0,CS02);break;
		case PRESCALER_64   :SET_BIT(TCCR0,CS00); SET_BIT(TCCR0,CS01);CLR_BIT(TCCR0,CS02);break;
		case PRESCALER_256  :CLR_BIT(TCCR0,CS00); CLR_BIT(TCCR0,CS01);SET_BIT(TCCR0,CS02);break;
		case PRESCALER_1024 :SET_BIT(TCCR0,CS00); CLR_BIT(TCCR0,CS01);SET_BIT(TCCR0,CS02);break;
		case T0_FALLING     :CLR_BIT(TCCR0,CS00); SET_BIT(TCCR0,CS01);SET_BIT(TCCR0,CS02);break;
		case T0_RISING      :SET_BIT(TCCR0,CS00); SET_BIT(TCCR0,CS01);SET_BIT(TCCR0,CS02);break;
		default: asm("NOP");
	}
	switch(copyCompareMode)
	{
		case OC0_DISCONNECTED: CLR_BIT(TCCR0,COM00);CLR_BIT(TCCR0,COM01);break;
		case TOGGLE_OC0      : SET_BIT(TCCR0,COM00);CLR_BIT(TCCR0,COM01);break;
		case CLEAR_OC0       : CLR_BIT(TCCR0,COM00);SET_BIT(TCCR0,COM01);break;
		case SET_OC0         : SET_BIT(TCCR0,COM00);SET_BIT(TCCR0,COM01);break;
		default: asm("NOP");
	}
	switch(copyWaveGen)
	{
		case NORMAL           : CLR_BIT(TCCR0,WGM00);CLR_BIT(TCCR0,WGM01);break;
		case PWM_PHASE_CORRECT: SET_BIT(TCCR0,WGM00);CLR_BIT(TCCR0,WGM01);break;
		case CTC              : CLR_BIT(TCCR0,WGM00);SET_BIT(TCCR0,WGM01);break;
		case FAST_PWM         : SET_BIT(TCCR0,WGM00);SET_BIT(TCCR0,WGM01);break;
		default: asm("NOP");
	}
}

void TIMER0_StartTimer(u8 copy_time_ms)
{
	SET_BIT(TIMSK,TOIE0);
	Tick_time=1/F_cbu;
	Timer_overflow_time=Tick_time*resluotion;
	
	
	
}




void __vector_10(void)
{
	
}
void __vector_11(void)
{
	
}