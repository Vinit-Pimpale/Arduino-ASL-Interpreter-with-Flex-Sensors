#include <LiquidCrystal.h>                
LiquidCrystal lcd(2,3,6,7,8,9);          

byte p20[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
};
byte p40[8] = {
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
};
byte p60[8] = {
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
};
byte p80[8] = {
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
};
byte p100[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};

void setup() {
  lcd.begin(16, 2);           
  pinMode(A0,INPUT);          
  pinMode(A1,INPUT);          
  lcd.print("System On");     
  
  
  lcd.createChar(0, p20);
  lcd.createChar(1, p40);
  lcd.createChar(2, p60);
  lcd.createChar(3, p80);
  lcd.createChar(4, p100);

 lcd.print("                ");   
 
 for (int i = 0; i<16; i++)
 {
   
   for (int j=0; j<5; j++)
   {
      lcd.setCursor(i, 1);          
      lcd.write(j);
      delay(100);
    } 
 }
}

void loop() {

  lcd.clear();
  lcd.setCursor(0,1);
  int bin ;
 float sv1 = analogRead(0);
 float sv2 = analogRead(1);
float v1 =  sv1*(5.0/1023.0);
float v2 =  sv2*(5.0/1023.0);

if (v1>1.2 && v2==5)
{bin = 0;}
else if(v1<1.0 && v2==5.00)
{bin= 1;}
else if (v1<1.35 &&v2==4.990 || v2<5.0)
bin=2;


switch(bin)
{
  case 0: lcd.print("Hi!");
          break;
  case 1: lcd.print("You");
          break;
  case 10: lcd.print("Good?");
          break;
 case 2: lcd.print("Good?");
          break;
}
      

delay(1000);

}
