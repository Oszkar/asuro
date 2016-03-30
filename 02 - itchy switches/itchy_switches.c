#include "../asuro.h"
#include "limits.h"
#include "math.h"

int main(void)
{
	Init();
	
	// infinite loop for our logic
	while(1) 
	{
		unsigned char sw = PollSwitch();
		switch(sw)
		{
			case 0:						// nothing is pressed
				StatusLED(OFF);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorSpeed(0, 0);
				break;
			case 1:						// only K6
				StatusLED(OFF);
				FrontLED(OFF);
				BackLED(OFF, ON);
				MotorSpeed(0, 0);
				break;
			case 2:						// only K5
				StatusLED(OFF);
				FrontLED(OFF);
				BackLED(ON, OFF);
				MotorSpeed(0, 0);
				break;
			case 4:						// only K4
				StatusLED(RED);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorSpeed(0, 0);
				break;
			case 8:						// only K3
				StatusLED(GREEN);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorSpeed(0, 0);
				break;
			case 16:					// only K2
				StatusLED(YELLOW);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorSpeed(0, 0);
				break;
			case 32:					// only K1
				StatusLED(OFF);
				FrontLED(ON);
				BackLED(OFF, OFF);
				MotorSpeed(0, 0);
				break;
			case 3:						// K6 + K5
				StatusLED(OFF);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorDir(FWD, FWD);
				MotorSpeed(0, 255);
				break;
			case 48:					// K1 + K2
				StatusLED(OFF);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorDir(FWD, FWD);
				MotorSpeed(255, 0);
				break;
			case 12:					// K3 + K4
				StatusLED(OFF);
				FrontLED(OFF);
				BackLED(OFF, OFF);
				MotorDir(RWD, RWD);
				MotorSpeed(128, 128);
				break;
		}
	};
	
	return 0;
}
