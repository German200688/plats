/*
ТЗ 
a1 Вход 3-6 цифры 1-8 Время 8-64 
b1 Вход 7-10 цифры 9-16 Время 72-128
c1 Вход 11-14 цифры 17-24 Время 136-192
d1 Вход 15-18 цифры 25-32 Время 200-264
e1 Вход 19-22 цифры 33-40 Время 272-328
цифры букв 1- пусто, 2 - напряг, 3-5 - против час (контакт вверху), 6-8 - по час (контакт вверху)
// software serial #1: RX = digital pin 1, TX = digital pin 2
*/
#include <SoftwareSerial.h>
SoftwareSerial mySerial (1, 2);
#define in3 0 ///выход 
#define in4 19 /// выход
#define in5 18 /// выход
#define in6 17 /// выход

#define in7 16 ///выход 
#define in8 15 /// выход
#define in9 14 /// выход
#define in10 13 /// выход

#define in11 12 ///выход 
#define in12 11 /// выход
#define in13 10 /// выход
#define in14 9 /// выход

#define in15 8 ///выход 
#define in16 7 /// выход
#define in17 6 /// выход
#define in18 5 /// выход


int a1;
int b1;
int c1;
int d1;
int dl = 8;
int dl1 = 8;
int dl2 = 8;
int dl3 = 8;
int dl4 = 8;
int test;
int incomingByte0; 
int incomingByte1; 
int incomingByte2; 
int incomingByte3; 
int incomingByte4; // переменная для хранения полученного байта// переменная для хранения полученного байта

 
void setup() {
// Serial.begin(9600);
  mySerial.begin(9600);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(in5, OUTPUT);
    pinMode(in6, OUTPUT);

    pinMode(in7, OUTPUT);
    pinMode(in8, OUTPUT);
    pinMode(in9, OUTPUT);
    pinMode(in10, OUTPUT);

    pinMode(in11, OUTPUT);
    pinMode(in12, OUTPUT);
    pinMode(in13, OUTPUT);
    pinMode(in14, OUTPUT);

    pinMode(in15, OUTPUT);
    pinMode(in16, OUTPUT);
    pinMode(in17, OUTPUT);
    pinMode(in18, OUTPUT);

 
 
    a1 = 1;
    b1 = 1;
    c1 = 1;
    d1 = 1;
       test = 0;
   // Serial.begin(9600);
    incomingByte0 = 0; 
    incomingByte1 = 0; 
    incomingByte2 = 0; 
    incomingByte3 = 0;
    incomingByte4 = 0;// переменная для хранения полученного байта

}
 
void loop()
{
 if (mySerial.available() > 0) {  //если есть доступные данные
        // считываем байт
       incomingByte0 = mySerial.read();
 ///      Serial.print("I received22: ");
//Serial.println(incomingByte0);
 }
 if (incomingByte0 > 10) 
 {
//incomingByte4 = incomingByte3;
//incomingByte3 = incomingByte2;
incomingByte2 = incomingByte1;
incomingByte1 = incomingByte0;
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
*/
  }

if (incomingByte0 == 10) 
{
  
if (incomingByte2 == 48 && incomingByte1 == 49) {test = 1;}
if (incomingByte2 == 48 && incomingByte1 == 50) {test = 2;}
if (incomingByte2 == 48 && incomingByte1 == 51) {test = 3;}
if (incomingByte2 == 48 && incomingByte1 == 52) {test = 4;}
if (incomingByte2 == 48 && incomingByte1 == 53) {test = 5;}
if (incomingByte2 == 48 && incomingByte1 == 54) {test = 6;}
if (incomingByte2 == 48 && incomingByte1 == 55) {test = 7;}
if (incomingByte2 == 48 && incomingByte1 == 56) {test = 8;}
if (incomingByte2 == 48 && incomingByte1 == 57) {test = 9;}
if (incomingByte2 == 49 && incomingByte1 == 48) {test = 10;}

if (incomingByte2 == 49 && incomingByte1 == 49) {test = 11;}
if (incomingByte2 == 49 && incomingByte1 == 50) {test = 12;}
if (incomingByte2 == 49 && incomingByte1 == 51) {test = 13;}
if (incomingByte2 == 49 && incomingByte1 == 52) {test = 14;}
if (incomingByte2 == 49 && incomingByte1 == 53) {test = 15;}
if (incomingByte2 == 49 && incomingByte1 == 54) {test = 16;}
if (incomingByte2 == 49 && incomingByte1 == 55) {test = 17;}
if (incomingByte2 == 49 && incomingByte1 == 56) {test = 18;}
if (incomingByte2 == 49 && incomingByte1 == 57) {test = 19;}
if (incomingByte2 == 50 && incomingByte1 == 48) {test = 20;}

if (incomingByte2 == 50 && incomingByte1 == 49) {test = 21;}
if (incomingByte2 == 50 && incomingByte1 == 50) {test = 22;}
if (incomingByte2 == 50 && incomingByte1 == 51) {test = 23;}
if (incomingByte2 == 50 && incomingByte1 == 52) {test = 24;}
if (incomingByte2 == 50 && incomingByte1 == 53) {test = 25;}
if (incomingByte2 == 50 && incomingByte1 == 54) {test = 26;}
if (incomingByte2 == 50 && incomingByte1 == 55) {test = 27;}
if (incomingByte2 == 50 && incomingByte1 == 56) {test = 28;}
if (incomingByte2 == 50 && incomingByte1 == 57) {test = 29;}
if (incomingByte2 == 51 && incomingByte1 == 48) {test = 30;}

if (incomingByte2 == 51 && incomingByte1 == 49) {test = 31;}
if (incomingByte2 == 51 && incomingByte1 == 50) {test = 32;}
if (incomingByte2 == 51 && incomingByte1 == 51) {test = 33;}
if (incomingByte2 == 51 && incomingByte1 == 52) {test = 34;}
if (incomingByte2 == 51 && incomingByte1 == 53) {test = 35;}
if (incomingByte2 == 51 && incomingByte1 == 54) {test = 36;}
if (incomingByte2 == 51 && incomingByte1 == 55) {test = 37;}
if (incomingByte2 == 51 && incomingByte1 == 56) {test = 38;}
if (incomingByte2 == 51 && incomingByte1 == 57) {test = 39;}
if (incomingByte2 == 52 && incomingByte1 == 48) {test = 40;}

/*
Serial.print("I received06: ");
Serial.println(incomingByte0);
Serial.print("I received16: ");
Serial.println(incomingByte1);
Serial.print("I received26: ");
Serial.println(incomingByte2);
Serial.print("I received36: ");
Serial.println(incomingByte3);
Serial.print("I received46: ");
Serial.println(incomingByte4);
Serial.print("I received56: ");
Serial.println(test);
*/

incomingByte4 = 0;
incomingByte3 = 0;
incomingByte2 = 0;
incomingByte1 = 0;
incomingByte0 = 0;

}


 {
         // отсылаем то, что получили
 ///       Serial.print("I received: ");
  //     Serial.println(incomingByte1; incomingByte2);
if ( test == 1) {a1=1; test = 0;}
if ( test == 2) {a1=2; test = 0;}
if ( test == 3) {a1=3; test = 0;}
if (test == 4) {a1=4; test = 0;}
if (test == 5) {a1=5; test = 0;}
if (test == 6) {a1=6; test = 0;}
if (test == 7) {a1=7;test = 0;}
if (test == 8) {a1=8;test = 0;}
if (test == 9) {test = 0; b1=1;}
if (test == 10) {test = 0; b1=2;}
if (test == 11) {test = 0; b1=3;}
if (test == 12) {test = 0; b1=4;}
if (test == 13) {test = 0; b1=5;}
if (test == 14) {test = 0; b1=6;}
if (test == 15) {test = 0; b1=7;}
if (test == 16) {test = 0; b1=8;}
if (test == 17) {test = 0; c1=1;}
if (test == 18) {test = 0; c1=2;}
if (test == 19) {test = 0; c1=3;}
if (test == 20) {test = 0; c1=4;}
if (test == 21) {test = 0; c1=5;}
if (test == 22) {test = 0; c1=6;}
if (test == 23) {test = 0; c1=7;}
if (test == 24) {test = 0; c1=8;}
if (test == 25) {test = 0; d1=1;}
if (test == 26) {test = 0; d1=2;}
if (test == 27) {test = 0; d1=3;}
if (test == 28) {test = 0; d1=4;}
if (test == 29) {test = 0; d1=5;}
if (test == 30) {test = 0; d1=6;}
if (test == 31) {test = 0; d1=7;}
if (test == 32) {test = 0; d1=8;}
///Intu36(); Intu710(); Intu1114(); Intu1518(); Intu1922();
 }
    
 
Intu36(); Intu710(); Intu1114(); Intu1518();

    }



void Intu36()
{
/*
1-отбой
2-стоит
3-прям 10 против час (контакт вверху)
4-прям 50
5-прям 100
6-обрат 10 по час (контакт вверху)
7-обрат 50
8- обрат 100
*/



if (a1 == 3 ) {dl1 = 4;} 
if (a1 == 6) {dl1 = 4;}
if (a1 == 4 ) {dl1 = 8;} 
if (a1 == 5 ) {dl1 = 24;}  
if ( a1 == 7) {dl1 = 8;} 
if ( a1 == 8) {dl1 = 24;}  



   if (a1 == 1) {
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(8);  
    }
   if (a1 == 2)  {
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, HIGH);
    delay(8);
  }
    
   if (a1 == 3)  {

    
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(dl1); 

    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(dl1);    

    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(dl1); 

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(dl1); 

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, HIGH);
    delay(dl1);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(dl1);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(dl1);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(dl1);

   }

   if (a1 == 4 )  {

    
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(8); 

    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(8);    

    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(8); 

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(8); 

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, HIGH);
    delay(8);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(8);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(8);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(8);

   }

   if (a1 == 5 )  {

    
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(24); 

    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(24);    

    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(24); 

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(24); 

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, HIGH);
    delay(24);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(24);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(24);

    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(24);

   }

  if (a1 == 6 || a1 == 7 || a1 == 8) {
    
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(dl1);
       
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(dl1);
   
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(dl1);
      
    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, LOW);
    delay(dl1);
     
    digitalWrite(in3, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(dl1);
        
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, LOW);
    delay(dl1);
       
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, HIGH); 
    digitalWrite(in6, HIGH);
    delay(dl1);
     
    digitalWrite(in3, LOW); 
    digitalWrite(in4, LOW); 
    digitalWrite(in5, LOW); 
    digitalWrite(in6, HIGH);
    delay(dl1);

   }

       }
 
 

void Intu710()
{
/*
1-отбой
2-стоит
3-прям 10 против час (контакт вверху)
4-прям 50
5-прям 100
6-обрат 10 по час (контакт вверху)
7-обрат 50
8- обрат 100
*/
//b1;

if (b1 == 3 || b1 == 6) {dl2 = 4;} 
if (b1 == 4 || b1 == 7) {dl2 = 8;} 
if (b1 == 5 || b1 == 8) {dl2 = 24;}  



if (b1 == 1) {
    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2);  
    }
    else{
  if (b1 == 2)  {
    digitalWrite(in7, HIGH); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, HIGH);
    delay(dl2);
  }
  else {
    
   if (b1 == 3 || b1 == 4 || b1 == 5 )  {

    
    digitalWrite(in7, HIGH); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2); 

    digitalWrite(in7, HIGH); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2);    

    digitalWrite(in7, HIGH); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, HIGH);
    delay(dl2); 

    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, HIGH);
    delay(dl2); 

    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, HIGH);
    delay(dl2);

    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, LOW);
    delay(dl2);

    digitalWrite(in7, LOW); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, LOW);
    delay(dl2);

    digitalWrite(in7, LOW); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2);

   }

  if (b1 == 6 || b1 == 7 || b1 == 8) {
    
    digitalWrite(in7, HIGH); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, HIGH);
    delay(dl2);
       
    digitalWrite(in7, HIGH); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2);
   
    digitalWrite(in7, HIGH); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2);
      
    digitalWrite(in7, LOW); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, LOW);
    delay(dl2);
     
    digitalWrite(in7, LOW); 
    digitalWrite(in8, HIGH); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, LOW);
    delay(dl2);
        
    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, LOW);
    delay(dl2);
       
    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, HIGH); 
    digitalWrite(in10, HIGH);
    delay(dl2);
     
    digitalWrite(in7, LOW); 
    digitalWrite(in8, LOW); 
    digitalWrite(in9, LOW); 
    digitalWrite(in10, HIGH);
    delay(dl2);

   }

       }
  }
    }

    void Intu1114()
{
/*
1-отбой
2-стоит
3-прям 10 против час (контакт вверху)
4-прям 50
5-прям 100
6-обрат 10 по час (контакт вверху)
7-обрат 50
8- обрат 100
*/
//c1;

if (c1 == 3 || c1 == 6) {dl3 = 4;} 
if (c1 == 4 || c1 == 7) {dl3 = 8;} 
if (c1 == 5 || c1 == 8) {dl3 = 24;}  



if (c1 == 1) {
    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3);  
    }
    else{
  if (c1 == 2)  {
    digitalWrite(in11, HIGH); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, HIGH);
    delay(dl3);
  }
  else {
    
   if (c1 == 3 || c1 == 4 || c1 == 5 )  {

    
    digitalWrite(in11, HIGH); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3); 

    digitalWrite(in11, HIGH); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3);    

    digitalWrite(in11, HIGH); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, HIGH);
    delay(dl3); 

    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, HIGH);
    delay(dl3); 

    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, HIGH);
    delay(dl3);

    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, LOW);
    delay(dl3);

    digitalWrite(in11, LOW); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, LOW);
    delay(dl3);

    digitalWrite(in11, LOW); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3);

   }

  if (c1 == 6 || c1 == 7 || c1 == 8) {
    
    digitalWrite(in11, HIGH); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, HIGH);
    delay(dl3);
       
    digitalWrite(in11, HIGH); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3);
   
    digitalWrite(in11, HIGH); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3);
      
    digitalWrite(in11, LOW); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, LOW);
    delay(dl3);
     
    digitalWrite(in11, LOW); 
    digitalWrite(in12, HIGH); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, LOW);
    delay(dl3);
        
    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, LOW);
    delay(dl3);
       
    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, HIGH); 
    digitalWrite(in14, HIGH);
    delay(dl3);
     
    digitalWrite(in11, LOW); 
    digitalWrite(in12, LOW); 
    digitalWrite(in13, LOW); 
    digitalWrite(in14, HIGH);
    delay(dl3);

   }

       }
  }
    }
    void Intu1518()
{
/*
1-отбой
2-стоит
3-прям 10 против час (контакт вверху)
4-прям 50
5-прям 100
6-обрат 10 по час (контакт вверху)
7-обрат 50
8- обрат 100
*/
//d1;

if (d1 == 3 || d1 == 6) {dl4 = 4;} 
if (d1 == 4 || d1 == 7) {dl4 = 8;} 
if (d1 == 5 || d1 == 8) {dl4 = 24;}  



if (d1 == 1) {
    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4);  
    }
    else{
  if (d1 == 2)  {
    digitalWrite(in15, HIGH); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, HIGH);
    delay(dl4);
  }
  else {
    
   if (d1 == 3 || d1 == 4 || d1 == 5 )  {

    
    digitalWrite(in15, HIGH); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4); 

    digitalWrite(in15, HIGH); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4);    

    digitalWrite(in15, HIGH); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, HIGH);
    delay(dl4); 

    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, HIGH);
    delay(dl4); 

    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, HIGH);
    delay(dl4);

    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, LOW);
    delay(dl4);

    digitalWrite(in15, LOW); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, LOW);
    delay(dl4);

    digitalWrite(in15, LOW); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4);

   }

  if (d1 == 6 || d1 == 7 || d1 == 8) {
    
    digitalWrite(in15, HIGH); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, HIGH);
    delay(dl4);
       
    digitalWrite(in15, HIGH); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4);
   
    digitalWrite(in15, HIGH); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4);
      
    digitalWrite(in15, LOW); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, LOW);
    delay(dl4);
     
    digitalWrite(in15, LOW); 
    digitalWrite(in16, HIGH); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, LOW);
    delay(dl4);
        
    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, LOW);
    delay(dl4);
       
    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, HIGH); 
    digitalWrite(in18, HIGH);
    delay(dl4);
     
    digitalWrite(in15, LOW); 
    digitalWrite(in16, LOW); 
    digitalWrite(in17, LOW); 
    digitalWrite(in18, HIGH);
    delay(dl4);

   }

       }
  }
    }
   