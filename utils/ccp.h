#ifndef CCP_H
#define CCP_H

#include "settings.h"
#define CCP_IF PIR1bits.CCP1IF
#define PWM_MOTOR_STRIDE 15
#define MOTOR_POS_90_DEG_US 2400
#define MOTOR_NEG_90_DEG_US 500

void PWMInitialize(double period_ms);
void PWMSetPeriod(double period_ms);
void PWMSetDutyCycle(double duty_cycle_us);
double PWMGetDutyCycle();
void MotorRotateWithDelay(double target_duty_cycle);
void MotorRotateDegree(int degree);
void MotorRotateDegreeWithDelay(int degree);
int MotorGetRotateDegree();
#endif