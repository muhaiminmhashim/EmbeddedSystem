void setup() 
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() 
{       
  flash(2, 781, 515);
  flash(3, 2014, 1348);
  flash(4, 343, 573);
  flash(5, 678, 1839);
  flash(6, 342, 534);
  flash(7, 1478, 326);
  flash(8, 1859, 351);
  flash(9, 777, 888); 
}

void flash(int pin, int periodON, int periodOFF)
{
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(periodON);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(periodOFF);                       // wait for a second
}
