# ASURO robot sample codes

In this repo, you'll find my sample codes for the ASURO do-it-yourself robotic kit. ASURO is an educational robot platform, developed by the German Aerospace Center. It is most easily found around Europe (Amazon, Conrad, lots of hobby electronic stores) and I think they even have North American distributor.

It is controlled by an Atmel AVR ATMega8(L) processor and it is programmable in C. Once you made it through the tiring process of soldering everything together and you are able to establish the IR connection, you can try out my sample codes in this repo. It is tested and works under Windows 10.

## Sample codes

#### 01 - Led Disco

This first sample lights up all four leds in different sequences. Good for getting to know the LED functions and check that everything is OK with your leds.

#### 01 - Led Disco

Here we can test/try the front swtiches. Pressing a single one lights up a LED (K1: FrontLED on the bottom, K2: status LED, yellow, K3: status LED, green, K4: status LED, red, K5: left BackLED, K6: right BackLED) and pressing two of them at the same time tests the motors (K1 and K2: left motor, full speed, K5 and K6: right motor, full speed, K3 and K4: both motos, half speed, backwards)

## Setup

The ASURO files are in the root foler, the sample codes are in subfolders. Make sure to either keep this structure or update the makefile if you copy the source codes.

I've also included the .hex files so you don't have to build them yourself if you want to try them on the ASURO.