#ifndef TIMER0_INTERFACE_H
#define TIMER0_INTERFACE_H

//Clock Source
#define NO_CLOCk_SOURCE  0
#define NO_PRESCALING    1
#define PRESCALER_8      2
#define PRESCALER_64     3
#define PRESCALER_256    4
#define PRESCALER_1024   5
#define T0_FALLING       6
#define T0_RISING        7

#define NORMAL              0
#define PWM_PHASE_CORRECT   1
#define CTC                 2
#define FAST_PWM            3

#define OC0_DISCONNECTED    0
#define TOGGLE_OC0          1
#define CLEAR_OC0           2
#define SET_OC0             3
void TIMER0_init(u8 copyClockSource,u8 copyWaveGen,u8 copyCompareMode);










#endif