//2 LEDs whose anodes connected to 12 and 13
//LED1 flashing ON = 750ms, OFF = 350ms
//LED2 flashing ON = 400ms, OFF = 600ms

void setup() 
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() 
{       
  flash(12, 750, 350);
  flash(13, 400, 600);  
}

void flash(int pin, int periodON, int periodOFF)
{
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(periodON);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(periodOFF);                       // wait for a second
}
