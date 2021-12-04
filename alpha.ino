#include <LiquidCrystal.h>
#define trigger 18
#define echo 19
LiquidCrystal lcd(2,3,4,5,6,7);
float time=0,distance=0;

void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 lcd.print(" HELLO WORLD");
}

void loop() {
  // put your main code here, to run repeatedly:
}
