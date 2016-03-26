#include "../asuro.h"
#include "limits.h"
#include "math.h"

/*
 * Function:  wait_seconds 
 * --------------------
 * Sleeps for an arbitrary (double) number of seconds instead of the default ASURO 0.255 timer cycles.
 */
void sleep_seconds(double seconds)
{
	double cycles = seconds / (1.0 / 72000); // 72 KHz
	double iteration = cycles / 255;  // this is how many times we need to call a full 255 cycle sleep
	
	if (iteration > 1)
	{
		int j;
		for (j = 0; j <= iteration; j++)
		{
			Sleep(255);
		}
	}
	unsigned char remainder = (unsigned char)((iteration - floor(iteration)) * 255);
	Sleep(remainder);
}

int main(void)
{
	Init();
	
	int counter = 0;
	// led light patterns
	unsigned char statuspattern[3] = {GREEN, YELLOW, RED};
	unsigned char frontpattern[3] = {ON, ON, OFF};
	unsigned char backleftpattern[2] = {ON,OFF};
	unsigned char backrightpattern[2] = {OFF, ON};
	
	// infinite loop for our logic
	while(1)
	{
		// led statuses are determined by the pattern and the counter
		StatusLED(statuspattern[counter % 3]);
		FrontLED(frontpattern[counter % 3]);
		BackLED(backleftpattern[counter % 2], backrightpattern[counter % 2]);
		
		// sleep for half a second
		sleep_seconds(0.5);
		
		// increment counter, check for overflow
		counter++;
		if (counter == INT_MAX)
		{
			counter = 0;
		}
	};
	
	return 0;
}
