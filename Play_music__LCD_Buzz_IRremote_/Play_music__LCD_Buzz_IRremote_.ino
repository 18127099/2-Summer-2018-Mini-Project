#include <LiquidCrystal.h>
#include <IRremote.h>
#include <NewTone.h>
#include <avr/io.h>
#include <avr/wdt.h>

#define Reset_AVR() wdt_enable(WDTO_30MS); while(1) {} 


#define buzzer 11     

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);

int RECV_PIN=2;
int times = 1.3; // Tang thoi gian gua cac not nhac

IRrecv irrecv(RECV_PIN);

decode_results results;
  
void setup() {   
  Serial.begin(9600);               
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("-----Choose-----");
  lcd.setCursor(0,1);
  lcd.print("----A Song!!----");
  pinMode(buzzer, OUTPUT);
  irrecv.enableIRIn();
}  

void loop() 
{  
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    if      (results.value==0xFFC23D) // An nut >|| de choi het cac bai
    {
      ode(); delay(500);
      london(); delay(500);
      fur(); delay(500);
      pirate(); delay(500);
    }
    if      (results.value==0xFF30CF) { ode(); } //Phim so 1
    else if (results.value==0xFF18E7) { london(); } // Phim so 2
    else if (results.value==0xFF7A85) { fur(); } // Phim so 3
    else if (results.value==0xFF10EF) { pirate(); } // Phim so 4
    irrecv.resume();
  }
  delay(100);
} 

void ode() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("1. Ode to Joy");
  delay(1000);
  //lcd.clear();
  nota_mi(300,400);
  nota_mi(300,400);
  nota_fa(300,400);
  nota_sol(300,400);
  nota_sol(300,400);
  nota_fa(300,400);
  nota_mi(300,400);
  nota_re(300,400);
  nota_do(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_mi(300,400);
  nota_mi(450,600);
  nota_re(150,200);
  nota_re(600,800);
  nota_mi(300,400);
  nota_mi(300,400);
  nota_fa(300,400);
  nota_sol(300,400);
  nota_sol(300,400);
  nota_fa(300,400);
  nota_mi(300,400);
  nota_re(300,400);
  nota_do(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_mi(300,400);
  nota_re(450,600);
  nota_do(150,200);
  nota_do(600,800);
  nota_re(300,400);
  nota_re(300,400);
  nota_mi(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_mi(150,200);
  nota_fa(150,200);
  nota_mi(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_mi(150,200);
  nota_fa(150,200);
  nota_mi(300,400);
  nota_re(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_sol(600,800);
  nota_mi(300,400);
  nota_mi(300,400);
  nota_fa(300,400);
  nota_sol(300,400);
  nota_sol(300,400);
  nota_fa(300,400);
  nota_mi(300,400);
  nota_re(300,400);
  nota_do(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_mi(300,400);
  nota_re(450,600);
  nota_do(150,200);
  nota_do(600,800);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("-----Choose-----");
  lcd.setCursor(0,1);
  lcd.print("----A Song!!----");
  //delay(100);
  //Reset_AVR();
}

void london() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("2. London Bridge");
  //lcd.setCursor(0,1);
  //lcd.print("Is falling down");
  delay(1000);
  //lcd.clear();
  nota_sol(450,600);
  nota_la(150,200);
  nota_sol(300,400);
  nota_fa(300,400);
  nota_mi(300,400);
  nota_fa(300,400);
  nota_sol(600,800);
  nota_re(300,400);
  nota_mi(300,400);
  nota_fa(600,800);
  nota_mi(300,400);
  nota_fa(300,400);
  nota_sol(600,800);
  nota_sol(450,600);
  nota_la(150,200);
  nota_sol(300,400);
  nota_fa(300,400);
  nota_mi(300,400);
  nota_fa(300,400);
  nota_sol(600,800);
  nota_re(600,800);
  nota_sol(600,800);
  nota_mi(300,400);
  nota_do(450,600);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("-----Choose-----");
  lcd.setCursor(0,1);
  lcd.print("----A Song!!----");
  //delay(100);
  //Reset_AVR();
}

void fur() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("3. Fur Elise");
  delay(1000);
  //lcd.clear();
  nota_mi(150,200);
  nota_rez(150,200);
  nota_mi(150,200);
  nota_rez(150,200);
  nota_mi(150,200);
  nota_si(150,200);
  nota_rez(150,200);
  nota_do(150,200);
  nota_la(450,300);
  nota_do(150,200);
  nota_mi(150,200);
  nota_la(150,200);
  nota_si(450,300);
  nota_mi(150,200);
  nota_solz(150,200);
  nota_si(150,200);
  nota_do(450,300);
  nota_mi(150,200);
  nota_mi(150,200);
  nota_rez(150,200);
  nota_mi(150,200);
  nota_rez(150,200);
  nota_mi(150,200);
  nota_si(150,200);
  nota_rez(150,200);
  nota_do(150,200);
  nota_la(450,300);
  nota_do(150,200);
  nota_mi(150,200);
  nota_la(150,200);
  nota_sol(450,300);
  nota_mi(150,200);
  nota_do(150,200);
  nota_si(150,200);
  nota_la(600,800);
  nota_mi(150,200);
  nota_rez(150,200);
  nota_mi(150,200);
  nota_rez(150,200);
  nota_mi(150,200);
  nota_si(150,200);
  nota_rez(150,200);
  nota_do(150,200);
  nota_la(450,300);
  nota_do(150,200);
  nota_mi(150,200);
  nota_la(150,200);
  nota_si(450,300);
  nota_mi(150,200);
  nota_solz(150,200);
  nota_si(150,200);
  nota_do(450,300);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("-----Choose-----");
  lcd.setCursor(0,1);
  lcd.print("----A Song!!----");
  //delay(100);
  //Reset_AVR();
}

void pirate() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("4. He's a Pirate");
  delay(1000);
  //lcd.clear();
  nota_mi(150,200);
  nota_sol(150,200);
  nota_la(300,400);
  nota_la(300,400);
  nota_la(150,200);
  nota_si(150,200);
  nota_do(300,400);
  nota_do(300,400);
  nota_do(150,200);
  nota_re(150,200);
  nota_si(300,400);
  nota_si(300,400);
  nota_la(150,200);
  nota_sol(150,200);
  nota_sol(150,200);
  nota_la(450,600);
  nota_mi(150,200);
  nota_sol(150,200);
  nota_la(300,400);
  nota_la(300,400);
  nota_la(150,200);
  nota_si(150,200);
  nota_do(300,400);
  nota_do(300,400);
  nota_do(150,200);
  nota_re(150,200);
  nota_si(300,400);
  nota_si(300,400);
  nota_la(150,200);
  nota_sol(150,200);
  nota_la(300,400);
  delay(400);
  nota_mi(150,200);
  nota_sol(150,200);
  nota_la(300,400);
  nota_la(300,400);
  nota_la(150,200);
  nota_do(150,200);
  nota_re(300,400);
  nota_re(300,400);
  nota_re(150,200);
  nota_mi(150,200);
  nota_fa(300,400);
  nota_fa(300,400);
  nota_mi(150,200);
  nota_re(150,200);
  nota_mi(150,200);
  nota_la(450,600);
  nota_la(150,200);
  nota_si(150,200);
  nota_do(300,400);
  nota_do(300,400);
  nota_re(300,400);
  nota_mi(150,200);
  nota_la(450,600);
  nota_la(150,200);
  nota_do(150,200);  
  nota_si(300,400);
  nota_si(300,400);
  nota_do(150,200);
  nota_la(150,200);
  nota_si(900,1200);
  nota_si(300,400);
  nota_si(300,400);
  nota_do(150,200);
  nota_la(150,200);
  nota_si(900,1200);
  nota_si(300,400);
  nota_si(300,400);
  nota_la(150,200);
  nota_sol(150,200);
  nota_la(600,800);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("-----Choose-----");
  lcd.setCursor(0,1);
  lcd.print("----A Song!!----");
  //delay(100);
  //Reset_AVR();
}

// An nut EQ de thoat
void shut() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    if (results.value==0xFF906F) { // Ma hex nut EQ
      Reset_AVR();
    }
  }
  irrecv.resume();
}

void nota_do(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Do    ");
  NewTone(11,262,duration); //DO
  delay(pause*times);
  }

void nota_doz(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Do #  ");
  NewTone(11,277,duration); //DO
  delay(pause*times);
  }

void nota_re(int duration, int pause) {
  shut;
  lcd.setCursor(0, 1);
  lcd.print("Re    ");
  NewTone(11,294,duration); //RE
  delay(pause*times);
  }

void nota_rez(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Re #  ");
  NewTone(11,311,duration); //RE
  delay(pause*times);
  }

void nota_mi(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Mi    ");
  NewTone(11,330,duration); //MI
  delay(pause*times);
  }

void nota_fa(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Fa    ");
  NewTone(11,349,duration); //FA
  delay(pause*1.2);
  }

void nota_faz(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Fa #  ");
  NewTone(11,370,duration); //FA
  delay(pause*times);
  }


void nota_sol(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Sol   ");
  NewTone(11,392,duration); //SOL
  delay(pause*times);
  }

void nota_solz(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Sol # ");
  NewTone(11,415,duration); //SOL
  delay(pause*times);
  }

void nota_la(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("La    ");
  NewTone(11,440,duration); //LA
  delay(pause*times);
  } 

void nota_laz(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("La #  ");
  NewTone(11,466,duration); //LA
  delay(pause*times);
  }

void nota_si(int duration, int pause) {
  shut();
  lcd.setCursor(0, 1);
  lcd.print("Si    ");
  NewTone(11,494,duration); //SI
  delay(pause*times);
  }

