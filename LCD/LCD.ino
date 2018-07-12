#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  int kitu='a';
void setup()
{
  lcd.begin(16,2); //Thong bao day la LCD 16x2
  //in_number();
  //lcd.cursor(); 

}

void loop()
{
  inten();
  //delay(2000);
  //nhap_nhay();
  //in_number();
  //cuon_auto();
  //blink_cursor();
  //cuon_left_right(); //Them in_number() o phan setup();
  //tu_xuong_dong();
  //kiemsoat_cursor(); //Them lcd.cursor() de bat con tro trong setup
}

void inten()
{
  lcd.setCursor(0,0);
  lcd.print("My name is Sang");
  lcd.setCursor(0,1);
  lcd.print("I can do it");
}

void nhap_nhay()
{
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}

void in_number()
{
  //lcd.setCursor(0,0);
  for (int number=0; number<10; number++)
  {
    lcd.print(number);
    delay(300);
  }
}

void cuon_auto()
{
   lcd.setCursor(0,0);
   in_number();
   lcd.autoscroll();

   lcd.setCursor(16,1); //Con tro tran ra khoi man hinh ?!? (0 => 15)
   in_number();
   lcd.noAutoscroll();
   lcd.clear();
}

void blink_cursor()
{
  //lcd.setCursor(14,1);
  //lcd.print("S");
  lcd.blink(); delay(3000);
  lcd.noBlink(); delay(3000);
  for (int i=0; i<3; i++)
  {
   lcd.noCursor(); delay(1000);
   lcd.cursor(); delay(1000); 
  }
}

void cuon_left_right()
{
  for (int i=0; i<10; i++)
  {
    lcd.scrollDisplayLeft();
    delay(200);
  }

  for (int i=0; i<10; i++)
  {
    lcd.scrollDisplayRight();
    delay(200);
  }
}

void tu_xuong_dong()
{
  for (int kitu='a'; kitu <='z'; kitu++)
  {
    for (int hang=0; hang<2; hang++)
    {
      for (int cot=0; cot<16; cot++)
      {
        lcd.setCursor(cot, hang);
        lcd.write(kitu); //Viet ki tu tu ma ACSII
        delay(100);
      }
    }
  }
}

void kiemsoat_cursor()
{
  if (kitu== 'm') lcd.rightToLeft();
  if (kitu== 's') lcd.leftToRight();
  if (kitu > 'z') { kitu='a'; lcd.setCursor(0,0);}
  lcd.write(kitu);
  delay(200);
  kitu++;
}

