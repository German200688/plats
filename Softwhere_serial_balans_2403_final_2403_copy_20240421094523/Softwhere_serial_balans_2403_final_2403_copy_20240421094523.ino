// Arduino Mega пример использования всех 4 последовательных портов
// (Serial, Serial1, Serial2, Serial3),
// с разными скоростями:
#include <SoftwareSerial.h>
///#define rxPin = 2;
///#define txPin = 3;
SoftwareSerial mySerialOUT1(2, 1);
SoftwareSerial mySerialOUT2(0, 19);
SoftwareSerial mySerialOUT3(18, 17);
SoftwareSerial mySerialOUT4(16, 15);
SoftwareSerial mySerialOUT5(14, 13);
SoftwareSerial mySerialOUT6(12, 11);
SoftwareSerial mySerialOUT7(10, 9);
SoftwareSerial mySerialOUT8(8, 7);
SoftwareSerial mySerialOUT9(6, 5);
SoftwareSerial mySerialIN1(4, 3);




int test;
int incomingByte0;
int incomingByte1;
int incomingByte2;
int incomingByte3;
int incomingByte4;
int incomingByte5;
int incomingByte6;
int incomingByte7;

void setup() {
  //    pinMode(rxPin, INPUT);
  //    pinMode(txPin, OUTPUT);
  Serial.begin(9600);
 // mySerialOUT1.begin(9600);
 // mySerialOUT2.begin(9600);
mySerialOUT3.begin(9600);
mySerialOUT4.begin(9600);
mySerialOUT5.begin(9600);
mySerialOUT6.begin(9600);
mySerialOUT7.begin(9600);
mySerialOUT8.begin(9600);
mySerialOUT9.begin(9600);
mySerialIN1.begin(9600);


  
  Serial.println("Hello Computer");

  test = 0;

  incomingByte0 = 0;
  incomingByte1 = 0;
  incomingByte2 = 0;
  incomingByte3 = 0;
  incomingByte4 = 0;
  incomingByte5 = 0;
  incomingByte6 = 0;
  incomingByte7 = 0;  // переменная для хранения полученного байта
}

void loop() {
  {
    if (mySerialIN1.available() > 0) {  //если есть доступные данные
                                   // считываем байт
      incomingByte0 = mySerialIN1.read();
      if (incomingByte0 > 10) {
        incomingByte7 = incomingByte6;
        incomingByte6 = incomingByte5;
        incomingByte5 = incomingByte4;
        incomingByte4 = incomingByte3;
        incomingByte3 = incomingByte2;
        incomingByte2 = incomingByte1;
        incomingByte1 = incomingByte0;
       
        Serial.print("I received05: ");
        Serial.println(incomingByte0);
        Serial.print("I received15: ");
        Serial.println(incomingByte1);
        Serial.print("I received25: ");
        Serial.println(incomingByte2);
        Serial.print("I received35: ");
        Serial.println(incomingByte3);
        Serial.print("I received45: ");
        Serial.println(incomingByte4);
        Serial.print("I received55: ");
        Serial.println(test);
        
      }
      if (incomingByte0 == 10) {
        test = 1;


/*
        Serial.print("I received0: ");
        Serial.println(incomingByte0);
        Serial.print("I received1: ");
        Serial.println(incomingByte1);
        Serial.print("I received2: ");
        Serial.println(incomingByte2);
        Serial.print("I received3: ");
        Serial.println(incomingByte3);
        Serial.print("I received4: ");
        Serial.println(incomingByte4);
        Serial.print("I received5: ");
        Serial.println(test);
        
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
      if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 48) {
        mySerialOUT1.write(incomingByte2);
        mySerialOUT1.write(incomingByte1);
        mySerialOUT1.write(10); test = 3;
      }
        if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 49) {
        mySerialOUT2.write(incomingByte2);
        mySerialOUT2.write(incomingByte1);
        mySerialOUT2.write(10); test = 3;
        }
if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 50) {
        mySerialOUT3.write(incomingByte2);
        mySerialOUT3.write(incomingByte1);
        mySerialOUT3.write(10); test = 3;
}
if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 51) {
        mySerialOUT4.write(incomingByte2);
        mySerialOUT4.write(incomingByte1);
        mySerialOUT4.write(10); test = 3;
}
        if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 51) {
        mySerialOUT5.write(incomingByte2);
        mySerialOUT5.write(incomingByte1);
        mySerialOUT5.write(10); test = 3;
        }
if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 52) {
        mySerialOUT6.write(incomingByte2);
        mySerialOUT6.write(incomingByte1);
        mySerialOUT6.write(10); test = 3;
}
if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 53) {
        mySerialOUT7.write(incomingByte2);
        mySerialOUT7.write(incomingByte1);
        mySerialOUT7.write(10); test = 3;
}
if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 54) {
        mySerialOUT8.write(incomingByte2);
        mySerialOUT8.write(incomingByte1);
        mySerialOUT8.write(10); test = 3;
        Serial.print("I received5: ");
        Serial.println(incomingByte5);  
        mySerialOUT1.write(incomingByte4);
              Serial.print("I received4: ");
        Serial.println(incomingByte4);  
        mySerialOUT1.write(incomingByte3);
              Serial.print("I received3: ");
        Serial.println(incomingByte3);  
        mySerialOUT1.write(incomingByte2);
                      Serial.print("I received2: ");
        Serial.println(incomingByte2);  
        mySerialOUT1.write(incomingByte1);
                              Serial.print("I received1: ");
        Serial.println(incomingByte1);  
}
if (test == 1 && incomingByte3 == 48 && incomingByte4 == 48 && incomingByte5 == 55) {
        mySerialOUT9.write(incomingByte2);
        mySerialOUT9.write(incomingByte1);
        Serial.print("I received1:5524 56 ");
        Serial.println(incomingByte2);
        Serial.println(incomingByte1);
        mySerialOUT9.write(10); test = 3;
}
        if (test == 3  ) {
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


 