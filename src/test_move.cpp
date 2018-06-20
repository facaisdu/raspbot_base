#include <wiringPi.h>
#include <stdio.h>
#include <softPwm.h>

#define PWMA 1 
#define AIN1 3 
#define AIN2 2 

#define PWMB 4 
#define BIN1 6 
#define BIN2 5 
using namespace std;


int main()

{
	wiringPiSetup();
	pinMode(PWMA,OUTPUT);
	pinMode(AIN1,OUTPUT);
	pinMode(AIN2,OUTPUT);
	pinMode(PWMB,OUTPUT);
	pinMode(BIN2,OUTPUT);
	pinMode(BIN1,OUTPUT);

	softPwmCreate(PWMA,0,100);
	softPwmCreate(PWMB,0,100);

	softPwmWrite(PWMA,50);
	digitalWrite(AIN1,LOW);
	digitalWrite(BIN1,HIGH);

	softPwmWrite(PWMB,50);
	digitalWrite(AIN2,LOW);
	digitalWrite(BIN2,HIGH);
	delay(5000);





	return 0;
}
