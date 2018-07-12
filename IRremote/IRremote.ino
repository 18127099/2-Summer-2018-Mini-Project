#include <IRremote.h>

const int doc_th=8;
IRrecv ir_dieukhien(doc_th);//Tao doi tuong moi mang ten ir_dieukhien
decode_results ket_qua; //Luu giu ket qua giai ma tin hieu

void setup()
{
  Serial.begin(9600);
  ir_dieukhien.enableIRIn(); //Bat len
  pinMode(13, OUTPUT);
}

void loop()
{
  if (ir_dieukhien.decode(&ket_qua)) //Neu nhan duoc tin hieu
  {
    Serial.print("Ma hex: ");
    Serial.println(ket_qua.value, HEX);
    delay(200);
    ir_dieukhien.resume(); //Nhan gia tri tiep theo
  }

  if (ket_qua.value == 0xFFA857) digitalWrite(13, HIGH);
  if (ket_qua.value == 0xFFE01F) digitalWrite(13, LOW);
}

