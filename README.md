#ADCTouch
ADCTouch is a library that allows users to read a capacitive pad.

##Usage
int val = ADCTouch.read(int analogChannel, int samples = 100);
+analogChannel: the pin to use, you can just use use 0 for A0, 1 for A1, up to 5 for A5.
+samples: (optional) the amount of samples to take, defaults to 100
...range 1 - 65535

##How it works
This has been a bit modified, has to be updated.

A more accurate explanation can be found [here](http://tuomasnylund.fi/drupal6/content/capacitive-touch-sensing-avr-and-single-adc-pin)
