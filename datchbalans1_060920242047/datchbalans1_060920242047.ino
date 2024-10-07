
#include <SoftwareSerial.h>
///#define rxPin = 2;
///#define txPin = 3;

SoftwareSerial mySerialIN8(4, 3);  //0;1

SoftwareSerial mySerialIN1(18, 17);

SoftwareSerial mySerialIN7(16, 15);
SoftwareSerial mySerialIN6(14, 13);
SoftwareSerial mySerialIN5(12, 11);
SoftwareSerial mySerialIN4(10, 9);
SoftwareSerial mySerialIN3(6, 5);
SoftwareSerial mySerialIN2(23, 22);

//SoftwareSerial mySerialIN1(7, 22);


//SoftwareSerial mySerialOUT1(0, 1);
SoftwareSerial mySerialOUT1(22, 23);

int p01a;
int p01b;

int testIN8;
int incomingByteIN80;
int incomingByteIN81;
int incomingByteIN82;
int incomingByteIN83;
int incomingByteIN84;
int incomingByteIN85;
int incomingByteIN86;
int incomingByteIN87;

int testIN9;
int incomingByteIN90;
int incomingByteIN91;
int incomingByteIN92;
int incomingByteIN93;
int incomingByteIN94;
int incomingByteIN95;
int incomingByteIN96;
int incomingByteIN97;

int testIN1;
int incomingByteIN10;
int incomingByteIN11;
int incomingByteIN12;
int incomingByteIN13;
int incomingByteIN14;
int incomingByteIN15;
int incomingByteIN16;
int incomingByteIN17;

int testIN2;
int incomingByteIN20;
int incomingByteIN21;
int incomingByteIN22;
int incomingByteIN23;
int incomingByteIN24;
int incomingByteIN25;
int incomingByteIN26;
int incomingByteIN27;

int testIN3;
int incomingByteIN30;
int incomingByteIN31;
int incomingByteIN32;
int incomingByteIN33;
int incomingByteIN34;
int incomingByteIN35;
int incomingByteIN36;
int incomingByteIN37;

int testIN4;
int incomingByteIN40;
int incomingByteIN41;
int incomingByteIN42;
int incomingByteIN43;
int incomingByteIN44;
int incomingByteIN45;
int incomingByteIN46;
int incomingByteIN47;

int testIN5;
int incomingByteIN50;
int incomingByteIN51;
int incomingByteIN52;
int incomingByteIN53;
int incomingByteIN54;
int incomingByteIN55;
int incomingByteIN56;
int incomingByteIN57;

int testIN6;
int incomingByteIN60;
int incomingByteIN61;
int incomingByteIN62;
int incomingByteIN63;
int incomingByteIN64;
int incomingByteIN65;
int incomingByteIN66;
int incomingByteIN67;

int testIN7;
int incomingByteIN70;
int incomingByteIN71;
int incomingByteIN72;
int incomingByteIN73;
int incomingByteIN74;
int incomingByteIN75;
int incomingByteIN76;
int incomingByteIN77;










void setup() {
//Serial.begin(115200);

mySerialIN1.begin(9600);

mySerialIN2.begin(9600);
mySerialIN3.begin(9600);
mySerialIN4.begin(9600);
mySerialIN5.begin(9600);
mySerialIN6.begin(9600);
mySerialIN7.begin(9600);

mySerialIN8.begin(9600);

//mySerialIN9.begin(57600);

mySerialOUT1.begin(19200);
Serial.begin(19200);

p01a = 49;
p01b = 49;

testIN8 = 0;
  incomingByteIN80 = 0;
  incomingByteIN81 = 0;
  incomingByteIN82 = 0;
  incomingByteIN83 = 0;
  incomingByteIN84 = 0;
  incomingByteIN85 = 0;
  incomingByteIN86 = 0;
  incomingByteIN87 = 0;
 
  testIN9 = 0;
  incomingByteIN90 = 0;
  incomingByteIN91 = 0;
  incomingByteIN92 = 0;
  incomingByteIN93 = 0;
  incomingByteIN94 = 0;
  incomingByteIN95 = 0;
  incomingByteIN96 = 0;
  incomingByteIN97 = 0;

  testIN1 = 0;
  incomingByteIN10 = 0;
  incomingByteIN11 = 0;
  incomingByteIN12 = 0;
  incomingByteIN13 = 0;
  incomingByteIN14 = 0;
  incomingByteIN15 = 0;
  incomingByteIN16 = 0;
  incomingByteIN17 = 0;

  testIN2 = 0;
  incomingByteIN20 = 0;
  incomingByteIN21 = 0;
  incomingByteIN22 = 0;
  incomingByteIN23 = 0;
  incomingByteIN24 = 0;
  incomingByteIN25 = 0;
  incomingByteIN26 = 0;
  incomingByteIN27 = 0;

  testIN3 = 0;
  incomingByteIN30 = 0;
  incomingByteIN31 = 0;
  incomingByteIN32 = 0;
  incomingByteIN33 = 0;
  incomingByteIN34 = 0;
  incomingByteIN35 = 0;
  incomingByteIN36 = 0;
  incomingByteIN37 = 0;

  testIN4 = 0;
  incomingByteIN40 = 0;
  incomingByteIN41 = 0;
  incomingByteIN42 = 0;
  incomingByteIN43 = 0;
  incomingByteIN44 = 0;
  incomingByteIN45 = 0;
  incomingByteIN46 = 0;
  incomingByteIN47 = 0;

  testIN5 = 0;
  incomingByteIN50 = 0;
  incomingByteIN51 = 0;
  incomingByteIN52 = 0;
  incomingByteIN53 = 0;
  incomingByteIN54 = 0;
  incomingByteIN55 = 0;
  incomingByteIN56 = 0;
  incomingByteIN57 = 0;

  testIN6 = 0;
  incomingByteIN60 = 0;
  incomingByteIN61 = 0;
  incomingByteIN62 = 0;
  incomingByteIN63 = 0;
  incomingByteIN64 = 0;
  incomingByteIN65 = 0;
  incomingByteIN66 = 0;
  incomingByteIN67 = 0;

  testIN7 = 0;
  incomingByteIN70 = 0;
  incomingByteIN71 = 0;
  incomingByteIN72 = 0;
  incomingByteIN73 = 0;
  incomingByteIN74 = 0;
  incomingByteIN75 = 0;
  incomingByteIN76 = 0;
  incomingByteIN77 = 0;    // переменная для хранения полученного байта
 // mySerialOUT1.write(57);
 
 // Serial.write(57);
 //Serial.println(testIN8);
}


void loop() {

// IN8 чтение
    if (testIN8 == 0 && mySerialIN8.available() > 0) //testIN8 == 0 && 
    {  //если есть доступные данные
//Serial.println(49);
      incomingByteIN80 = mySerialIN8.read(); // считываем байт
//Serial.println(incomingByteIN80);
      if (testIN8 == 0 && incomingByteIN80 > 10) {
        
  //      Serial.println(12);
        incomingByteIN85 = incomingByteIN84;
        incomingByteIN84 = incomingByteIN83;
        incomingByteIN83 = incomingByteIN82;
        incomingByteIN82 = incomingByteIN81;
        incomingByteIN81 = incomingByteIN80;

      
      }
      if (testIN8 == 0 && incomingByteIN80 == 10) {
        testIN8 = 1;

      }
    }

/*
// IN9 чтение
    if (testIN9 == 0 && mySerialIN9.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN90 = mySerialIN9.read(); // считываем байт

      if (testIN9 == 0 && incomingByteIN90 > 10) {
        
        
        incomingByteIN95 = incomingByteIN94;
        incomingByteIN94 = incomingByteIN93;
        incomingByteIN93 = incomingByteIN92;
        incomingByteIN92 = incomingByteIN91;
        incomingByteIN91 = incomingByteIN90;

      
      }
      if (testIN9 == 0 && incomingByteIN90 == 10) {
        testIN9 = 1;

      }
    }
*/

// IN1 чтение
    if (testIN1 == 0 && mySerialIN1.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN10 = mySerialIN1.read(); // считываем байт

      if (testIN1 == 0 && incomingByteIN10 > 10) {
        
        
        incomingByteIN15 = incomingByteIN14;
        incomingByteIN14 = incomingByteIN13;
        incomingByteIN13 = incomingByteIN12;
        incomingByteIN12 = incomingByteIN11;
        incomingByteIN11 = incomingByteIN10;

      
      }
      if (testIN1 == 0 && incomingByteIN10 == 10) {
        testIN1 = 1;

      }
    }


// IN2 чтение
    if (testIN2 == 0 && mySerialIN2.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN20 = mySerialIN2.read(); // считываем байт

      if (testIN2 == 0 && incomingByteIN20 > 10) {
        
        
        incomingByteIN25 = incomingByteIN24;
        incomingByteIN24 = incomingByteIN23;
        incomingByteIN23 = incomingByteIN22;
        incomingByteIN22 = incomingByteIN21;
        incomingByteIN21 = incomingByteIN20;

      
      }
      if (testIN2 == 0 && incomingByteIN20 == 10) {
        testIN2 = 1;

      }
    }


 // IN3 чтение
    if (testIN3 == 0 && mySerialIN3.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN30 = mySerialIN3.read(); // считываем байт

      if (testIN3 == 0 && incomingByteIN30 > 10) {
        
        
        incomingByteIN35 = incomingByteIN34;
        incomingByteIN34 = incomingByteIN33;
        incomingByteIN33 = incomingByteIN32;
        incomingByteIN32 = incomingByteIN31;
        incomingByteIN31 = incomingByteIN30;

      
      }
      if (testIN3 == 0 && incomingByteIN30 == 10) {
        testIN3 = 1;

      }
    }


  // IN4 чтение
    if (testIN4 == 0 && mySerialIN4.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN40 = mySerialIN4.read(); // считываем байт

      if (testIN4 == 0 && incomingByteIN40 > 10) {
        
        
        incomingByteIN45 = incomingByteIN44;
        incomingByteIN44 = incomingByteIN43;
        incomingByteIN43 = incomingByteIN42;
        incomingByteIN42 = incomingByteIN41;
        incomingByteIN41 = incomingByteIN40;

      
      }
      if (testIN4 == 0 && incomingByteIN40 == 10) {
        testIN4 = 1;

      }
    }


// IN5 чтение
    if (testIN5 == 0 && mySerialIN5.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN50 = mySerialIN5.read(); // считываем байт

      if (testIN5 == 0 && incomingByteIN50 > 10) {
        
        
        incomingByteIN55 = incomingByteIN54;
        incomingByteIN54 = incomingByteIN53;
        incomingByteIN53 = incomingByteIN52;
        incomingByteIN52 = incomingByteIN51;
        incomingByteIN51 = incomingByteIN50;

      
      }
      if (testIN5 == 0 && incomingByteIN50 == 10) {
        testIN5 = 1;

      }
    }


   // IN6 чтение
    if (testIN6 == 0 && mySerialIN6.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN60 = mySerialIN6.read(); // считываем байт

      if (testIN6 == 0 && incomingByteIN60 > 10) {
        
        
        incomingByteIN65 = incomingByteIN64;
        incomingByteIN64 = incomingByteIN63;
        incomingByteIN63 = incomingByteIN62;
        incomingByteIN62 = incomingByteIN61;
        incomingByteIN61 = incomingByteIN60;

      
      }
      if (testIN6 == 0 && incomingByteIN60 == 10) {
        testIN6 = 1;

      }
    }


  // IN7 чтение
    if (testIN7 == 0 && mySerialIN7.available() > 0) 
    {  //если есть доступные данные

      incomingByteIN70 = mySerialIN7.read(); // считываем байт

      if (testIN7 == 0 && incomingByteIN70 > 10) {
        
        
        incomingByteIN75 = incomingByteIN74;
        incomingByteIN74 = incomingByteIN73;
        incomingByteIN73 = incomingByteIN72;
        incomingByteIN72 = incomingByteIN71;
        incomingByteIN71 = incomingByteIN70;

      
      }
      if (testIN7 == 0 && incomingByteIN70 == 10) {
        testIN7 = 1;

      }
    }



 // IN8 запись

 if (testIN8 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN85);
Serial.write(incomingByteIN84);
Serial.write(incomingByteIN83);
Serial.write(incomingByteIN82);
Serial.write(incomingByteIN81);
Serial.write(10); 


testIN8 = 3;
        
}


if (testIN8 == 3  ) {

incomingByteIN87 = 0;
incomingByteIN86 = 0;
incomingByteIN85 = 0;
incomingByteIN84 = 0;
incomingByteIN83 = 0;
incomingByteIN82 = 0;
incomingByteIN81 = 0;
incomingByteIN80 = 0;
testIN8 = 0;

};

/*
 // IN9 запись

 if (testIN9 == 1) {

mySerialOUT1.write(p01a);
mySerialOUT1.write(p01b);
mySerialOUT1.write(incomingByteIN95);
mySerialOUT1.write(incomingByteIN94);
mySerialOUT1.write(incomingByteIN93);
mySerialOUT1.write(incomingByteIN92);
mySerialOUT1.write(incomingByteIN91);
mySerialOUT1.write(10); 
/*
Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN85);
Serial.write(incomingByteIN84);
Serial.write(incomingByteIN83);
Serial.write(incomingByteIN82);
Serial.write(incomingByteIN81);
Serial.write(10); 

testIN9 = 3;
        
}


if (testIN9 == 3  ) {

incomingByteIN97 = 0;
incomingByteIN96 = 0;
incomingByteIN95 = 0;
incomingByteIN94 = 0;
incomingByteIN93 = 0;
incomingByteIN92 = 0;
incomingByteIN91 = 0;
incomingByteIN90 = 0;
testIN9 = 0;

};
*/

 // IN1 запись

 if (testIN1 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN15);
Serial.write(incomingByteIN14);
Serial.write(incomingByteIN13);
Serial.write(incomingByteIN12);
Serial.write(incomingByteIN11);
Serial.write(10); 

testIN1 = 3;
        
}


if (testIN1 == 3  ) {

incomingByteIN17 = 0;
incomingByteIN16 = 0;
incomingByteIN15 = 0;
incomingByteIN14 = 0;
incomingByteIN13 = 0;
incomingByteIN12 = 0;
incomingByteIN11 = 0;
incomingByteIN10 = 0;
testIN1 = 0;

};


 // IN2 запись

 if (testIN2 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN25);
Serial.write(incomingByteIN24);
Serial.write(incomingByteIN23);
Serial.write(incomingByteIN22);
Serial.write(incomingByteIN21);
Serial.write(10); 

testIN2 = 3;
        
}


if (testIN2 == 3  ) {

incomingByteIN27 = 0;
incomingByteIN26 = 0;
incomingByteIN25 = 0;
incomingByteIN24 = 0;
incomingByteIN23 = 0;
incomingByteIN22 = 0;
incomingByteIN21 = 0;
incomingByteIN20 = 0;
testIN2 = 0;

};


 // IN3 запись

 if (testIN3 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN35);
Serial.write(incomingByteIN34);
Serial.write(incomingByteIN33);
Serial.write(incomingByteIN32);
Serial.write(incomingByteIN31);
Serial.write(10); 

testIN3 = 3;
        
}


if (testIN3 == 3  ) {

incomingByteIN37 = 0;
incomingByteIN36 = 0;
incomingByteIN35 = 0;
incomingByteIN34 = 0;
incomingByteIN33 = 0;
incomingByteIN32 = 0;
incomingByteIN31 = 0;
incomingByteIN30 = 0;
testIN3 = 0;

};


 // IN4 запись

 if (testIN4 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN45);
Serial.write(incomingByteIN44);
Serial.write(incomingByteIN43);
Serial.write(incomingByteIN42);
Serial.write(incomingByteIN41);
Serial.write(10); 

testIN4 = 3;
        
}


if (testIN4 == 3  ) {

incomingByteIN47 = 0;
incomingByteIN46 = 0;
incomingByteIN45 = 0;
incomingByteIN44 = 0;
incomingByteIN43 = 0;
incomingByteIN42 = 0;
incomingByteIN41 = 0;
incomingByteIN40 = 0;
testIN4 = 0;

};


 // IN5 запись

 if (testIN5 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN55);
Serial.write(incomingByteIN54);
Serial.write(incomingByteIN53);
Serial.write(incomingByteIN52);
Serial.write(incomingByteIN51);
Serial.write(10); 

testIN5 = 3;
        
}


if (testIN5 == 3  ) {

incomingByteIN57 = 0;
incomingByteIN56 = 0;
incomingByteIN55 = 0;
incomingByteIN54 = 0;
incomingByteIN53 = 0;
incomingByteIN52 = 0;
incomingByteIN51 = 0;
incomingByteIN50 = 0;
testIN5 = 0;

};


 // IN6 запись

 if (testIN6 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN65);
Serial.write(incomingByteIN64);
Serial.write(incomingByteIN63);
Serial.write(incomingByteIN62);
Serial.write(incomingByteIN61);
Serial.write(10); 

testIN6 = 3;
        
}


if (testIN6 == 3  ) {

incomingByteIN67 = 0;
incomingByteIN66 = 0;
incomingByteIN65 = 0;
incomingByteIN64 = 0;
incomingByteIN63 = 0;
incomingByteIN62 = 0;
incomingByteIN61 = 0;
incomingByteIN60 = 0;
testIN6 = 0;

};


 // IN7 запись

 if (testIN7 == 1) {

Serial.write(p01a);
Serial.write(p01b);
Serial.write(incomingByteIN75);
Serial.write(incomingByteIN74);
Serial.write(incomingByteIN73);
Serial.write(incomingByteIN72);
Serial.write(incomingByteIN71);
Serial.write(10); 

testIN7 = 3;
        
}


if (testIN7 == 3  ) {

incomingByteIN77 = 0;
incomingByteIN76 = 0;
incomingByteIN75 = 0;
incomingByteIN74 = 0;
incomingByteIN73 = 0;
incomingByteIN72 = 0;
incomingByteIN71 = 0;
incomingByteIN70 = 0;
testIN7 = 0;

};

  }
