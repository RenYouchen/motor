#include <motor.h>
#include <motorPair.h>

#include "config.h"

Motor leftMotor(ENA, IN1, IN2);
Motor rightMotor(ENB, IN3, IN4);
MotorPair car(rightMotor, leftMotor);

data d;

void setup() {
	car.setSpeed(0,0);
	d.lspeed = 100;
	d.rspeed = 100;
}
void loop() {
	//Serial.printf("lspeed: %d, rspeed: %d\n", d.lspeed, d.rspeed);
	//car.arcadeDrive(d.lspeed, -d.rspeed);
	car.setSpeed(d.lspeed, -d.rspeed);
}
