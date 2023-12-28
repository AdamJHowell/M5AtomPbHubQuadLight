/**
 * Description: Use PbHUB to read the analog input values.
 */

#include <M5Atom.h>
#include "porthub.h"

PortHub porthub;
unsigned long lastLoop = 0;                        // The time when the most recent loop completed.
unsigned long loopCount = 0;                       // The number of loops which have occurred.
const unsigned long loopDelay = 10;                // The maximum value of 4,294,967,295 allows for a delay of about 49.7 days.
const char * sketchName = "M5AtomPbHubQuadLight";  // The name of this sketch.
// Addresses of the six ports: HUB1_ADDR, HUB2_ADDR, HUB3_ADDR, HUB4_ADDR, HUB5_ADDR, HUB6_ADDR


void setup() 
{
	M5.begin( true, false, true );
	porthub.begin();
}


void loop() 
{
	M5.update();
	unsigned long time = millis();
	if( ( lastLoop == 0 ) || ( time - lastLoop ) > loopDelay )
	{
		loopCount++;
    uint16_t port1 = porthub.hub_a_read_value( HUB1_ADDR );
    uint16_t port2 = porthub.hub_a_read_value( HUB2_ADDR );
    uint16_t port5 = porthub.hub_a_read_value( HUB5_ADDR );
    uint16_t port6 = porthub.hub_a_read_value( HUB6_ADDR );
    // Read the digital values for A and B pins.
    uint8_t port1da porthub.hub_d_read_value_A( HUB1_ADDR );
    uint8_t port1db porthub.hub_d_read_value_B( HUB1_ADDR );
    Serial.printf( "L0:%d L1:%d L4:%d L5:%d\n", port1, port2, port5, port6 );
		lastLoop = millis();
  }
}
