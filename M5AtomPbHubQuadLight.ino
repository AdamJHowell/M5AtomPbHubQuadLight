/*
 * Description: Use Pbhub to read the analog input value of the slave device,
 * or drive multiple sets of RGB LEDs.
*/

#include <M5Atom.h>
#include "porthub.h"

PortHub porthub;
// Addresses of the six ports: HUB1_ADDR, HUB2_ADDR, HUB3_ADDR, HUB4_ADDR, HUB5_ADDR, HUB6_ADDR

void setup() 
{
	M5.begin( true, false, true );
	porthub.begin();
}

void loop() 
{
	M5.update();
  uint16_t port1 = porthub.hub_a_read_value( HUB1_ADDR );
  uint16_t port2 = porthub.hub_a_read_value( HUB2_ADDR );
  uint16_t port5 = porthub.hub_a_read_value( HUB5_ADDR );
  uint16_t port6 = porthub.hub_a_read_value( HUB6_ADDR );
  // To read the digital values
  uint8_t port1da porthub.hub_d_read_value_A( HUB1_ADDR );
  uint8_t port1db porthub.hub_d_read_value_B( HUB1_ADDR );
  Serial.printf( "L0:%d L1:%d L4:%d L5:%d\n", port1, port2, port5, port6 );	
}
