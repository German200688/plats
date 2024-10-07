// Arduino Mega пример использования всех 4 последовательных портов
// (Serial, Serial1, Serial2, Serial3),
// с разными скоростями:
#include <SoftwareSerial.h>
///#define rxPin = 2;
///#define txPin = 3;


SoftwareSerial mySerialOUT1(3, 4);




int test;
int incomingByte0;
int incomingByte1;
int incomingByte2;
int incomingByte3;
int incomingByte4;
int incomingByte5;
int incomingByte6;
int incomingByte7;
int incomingByte8;

void setup() {
  //    pinMode(rxPin, INPUT);
  //    pinMode(txPin, OUTPUT);
  Serial.begin(9600);
  mySerialOUT1.begin(9600);
  


  
  Serial.println("Hello Computer");

  test = 0;

  incomingByte0 = 0;
  incomingByte1 = 0;
  incomingByte2 = 0;
  incomingByte3 = 0;
  incomingByte4 = 0;
  incomingByte5 = 0;
  incomingByte6 = 0;
  incomingByte7 = 0; 
  incomingByte8 = 0; // переменная для хранения полученного байта
}

void loop() {
  {
    if (Serial.available() > 0) {  //если есть доступные данные
                                   // считываем байт
      incomingByte0 = Serial.read();
 //     Serial.print("I read: ");
   //     Serial.println(incomingByte0);
      if (incomingByte0 > 10 && incomingByte0 != 80) {
        incomingByte8 = incomingByte7;
        incomingByte7 = incomingByte6;
        incomingByte6 = incomingByte5;
        incomingByte5 = incomingByte4;
        incomingByte4 = incomingByte3;
        incomingByte3 = incomingByte2;
        incomingByte2 = incomingByte1;
        incomingByte1 = incomingByte0;
     //   Serial.print("I read2");
      }
      if (incomingByte0 == 80) {
   // if (incomingByte0 == 57) {
        test = 1;



    //    Serial.print("I received0: ");
    //    Serial.println(incomingByte0);
    //    Serial.print("I received1: ");
     //   Serial.println(incomingByte1);
     //   Serial.print("I received2: ");
    //   Serial.println(incomingByte2);
     //   Serial.print("I received3: ");
     //   Serial.println(incomingByte3);
     //   Serial.print("I received4: ");
    //    Serial.println(incomingByte4);
    //    Serial.print("I received5: ");
     //   Serial.println(test);
/*        
incomingByte7 = 0;
incomingByte6 = 0;
incomingByte5 = 0;
incomingByte4 = 0;
incomingByte3 = 0;
incomingByte2 = 0;
incomingByte1 = 0;
incomingByte0 = 0;
*/
      }
    }


    {
      // отсылаем то, что получили
      ///       Serial.print("I received: ");
      //     Serial.println(incomingByte1; incomingByte2);
      if (test == 3) {
       
        test = 0;
      
      }
      if (test == 1 && incomingByte6 == 48 && incomingByte7 == 48) {
        mySerialOUT1.write(incomingByte5);
   //   Serial.print("I received5: ");
     //   Serial.println(incomingByte5);  
        mySerialOUT1.write(incomingByte4);
       //       Serial.print("I received4: ");
      //  Serial.println(incomingByte4);  
        mySerialOUT1.write(incomingByte3);
       //       Serial.print("I received3: ");
       // Serial.println(incomingByte3);  
        mySerialOUT1.write(incomingByte2);
      //                Serial.print("I received2: ");
      //  Serial.println(incomingByte2);  
        mySerialOUT1.write(incomingByte1);
     //                         Serial.print("I received1: ");
       // Serial.println(incomingByte1);  
        mySerialOUT1.write(10); test = 3;

       // Serial.print("I receivedTe: ");
       // Serial.println(test);
      }
       
        if (test == 3  ) {
          incomingByte8 = 0;
          incomingByte7 = 0;
incomingByte6 = 0;
incomingByte5 = 0;
incomingByte4 = 0;
incomingByte3 = 0;
incomingByte2 = 0;
incomingByte1 = 0;
incomingByte0 = 0;
                    test = 0;
         
        }
    };
  };
}


 