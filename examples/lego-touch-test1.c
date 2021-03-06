#pragma config(Sensor, S1,     LEGOTS,              sensorAnalogInactive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/**
 * LEGOLS-driver.h provides an API for the Lego Light Sensor.  This program
 * demonstrates how to use that API.
 *
 * Changelog:
 * - 0.1: Initial release
 * - 0.2: More comments
 *
 * License: You may use this code as you wish, provided you give credit where it's due.
 *
 * THIS CODE WILL ONLY WORK WITH ROBOTC VERSION 4.10 AND HIGHER

 * Xander Soldaat (xander_at_botbench.com)
 * 25 November 2009
 * version 0.2
 */

#include "lego-touch.h"

task main() {
  displayCenteredTextLine(0, "Lego");
  displayCenteredBigTextLine(1, "TOUCH");
  displayCenteredTextLine(3, "Test 1");
  displayCenteredTextLine(5, "Connect sensor");
  displayCenteredTextLine(6, "to S1");
  sleep(2000);

  eraseDisplay();

  while (true) {
    if (TSreadState(LEGOTS))
      displayCenteredBigTextLine(3, "ACTIVE");
    else
      displayCenteredBigTextLine(3, "INACTIVE");
    sleep(50);
  }
}
