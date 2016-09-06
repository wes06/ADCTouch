/*
  ADCTouch.h - Library for Capacittive touch sensors using only one ADC PIN
  Created by martin2250, April 23, 2014.
  Released into the public domain.

  Modified by Wesley Lee
*/
#ifndef ADCT_h
#define ADCT_h

#include "Arduino.h"

class ADCTouchClass
{
	public:
	int read(int ADCChannel, int samples = 100);
};

extern ADCTouchClass ADCTouch;

#endif
