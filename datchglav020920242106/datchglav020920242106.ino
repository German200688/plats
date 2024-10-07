/*
Описание - сделаю при сборке
*/
#include <SoftwareSerial.h>

SoftwareSerial mySerialOUT1(0, 1);

#define in2 2    ///выход
#define in3 3    ///выход
#define in4 4    ///выход
#define in5 5    ///выход
#define in6 6    ///выход
#define in7 7    ///выход
#define in8 8    ///выход
#define in9 9    ///выход
#define in10 10  ///выход
#define in11 11  ///выход
#define in12 12  ///выход
#define in13 13  ///выход
#define in14 14  ///выход
#define in15 15  ///выход
#define in16 16  ///выход
#define in17 17  ///выход
#define in18 18  ///выход
#define in19 19  ///выход




//int test1;
//int test0;
///int p01;
int p01a;
int p01b;
int i02a;
int i02b;
int a020;
int a021;
int a0220;
int a0221;
int a0222;

int i03a;
int i03b;
int a030;
int a031;
int a0320;
int a0321;
int a0322;

int i04a;
int i04b;
int a040;
int a041;
int a0420;
int a0421;
int a0422;

int i05a;
int i05b;
int a050;
int a051;
int a0520;
int a0521;
int a0522;

int i06a;
int i06b;
int a060;
int a061;
int a0620;
int a0621;
int a0622;

int i07a;
int i07b;
int a070;
int a071;
int a0720;
int a0721;
int a0722;

int i08a;
int i08b;
int a080;
int a081;
int a0820;
int a0821;
int a0822;

int i09a;
int i09b;
int a090;
int a091;
int a0920;
int a0921;
int a0922;

int i10a;
int i10b;
int a100;
int a101;
int a1020;
int a1021;
int a1022;

int i11a;
int i11b;
int a110;
int a111;
int a1120;
int a1121;
int a1122;

int i12a;
int i12b;
int a120;
int a121;
int a1220;
int a1221;
int a1222;

int i13a;
int i13b;
int a130;
int a131;
int a1320;
int a1321;
int a1322;

int i14a;
int i14b;
int a140;
int a141;
int a1420;
int a1421;
int a1422;

int i15a;
int i15b;
int a150;
int a151;
int a1520;
int a1521;
int a1522;

int i16a;
int i16b;
int a160;
int a161;
int a1620;
int a1621;
int a1622;

int i17a;
int i17b;
int a170;
int a171;
int a1720;
int a1721;
int a1722;

int i18a;
int i18b;
int a180;
int a181;
int a1820;
int a1821;
int a1822;

int i19a;
int i19b;
int a190;
int a191;
int a1920;
int a1921;
int a1922;

void setup() {
  //    pinMode(rxPin, INPUT);
  //    pinMode(txPin, OUTPUT);

  //  Serial.begin(9600);
  mySerialOUT1.begin(9600);

  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  pinMode(in5, INPUT);
  pinMode(in6, INPUT);
  pinMode(in7, INPUT);
  pinMode(in8, INPUT);
  pinMode(in9, INPUT);
  pinMode(in10, INPUT);
  pinMode(in11, INPUT);
  pinMode(in12, INPUT);
  pinMode(in13, INPUT);
  pinMode(in14, INPUT);
  pinMode(in15, INPUT);
  pinMode(in16, INPUT);
  pinMode(in17, INPUT);
  pinMode(in18, INPUT);
  pinMode(in19, INPUT);
  p01a = 49;
  p01b = 49;

  i02a = 56;
  i02b = 48;
  a020 = 0;
  a021 = 0;
  a0220 = 0;
  a0221 = 0;
  a0222 = 0;

  i03a = 57;
  i03b = 57;
  a030 = 0;
  a031 = 0;
  a0320 = 0;
  a0321 = 0;
  a0322 = 0;

  i04a = 57;
  i04b = 56;
  //i04 = 98;
  a040 = 0;
  a041 = 0;
  a0420 = 0;
  a0421 = 0;
  a0422 = 0;

  i05a = 57;
  i05b = 55;
  //i05 = 97;
  a050 = 0;
  a051 = 0;
  a0520 = 0;
  a0521 = 0;
  a0522 = 0;

  i06a = 57;
  i06b = 54;
  //i06 = 96;
  a060 = 0;
  a061 = 0;
  a0620 = 0;
  a0621 = 0;
  a0622 = 0;

  i07a = 57;
  i07b = 53;
  //i07 = 95;
  a070 = 0;
  a071 = 0;
  a0720 = 0;
  a0721 = 0;
  a0722 = 0;

  i08a = 57;
  i08b = 52;
  //i08 = 94;
  a080 = 0;
  a081 = 0;
  a0820 = 0;
  a0821 = 0;
  a0822 = 0;

  i09a = 57;
  i09b = 51;
  //i09 = 93;
  a090 = 0;
  a091 = 0;
  a0920 = 0;
  a0921 = 0;
  a0922 = 0;

  i10a = 57;
  i10b = 50;
  //i10 = 92;
  a100 = 0;
  a101 = 0;
  a1020 = 0;
  a1021 = 0;
  a1022 = 0;

  i11a = 57;
  i11b = 49;
  //i11 = 91;
  a110 = 0;
  a111 = 0;
  a1120 = 0;
  a1121 = 0;
  a1122 = 0;

  i12a = 57;
  i12b = 48;
  //i12 = 90;
  a120 = 0;
  a121 = 0;
  a1220 = 0;
  a1221 = 0;
  a1222 = 0;


  i13a = 56;
  i13b = 57;
  a130 = 0;
  a131 = 0;
  a1320 = 0;
  a1321 = 0;
  a1322 = 0;

  i14a = 56;
  i14b = 56;
  //i14 = 88;
  a140 = 0;
  a141 = 0;
  a1420 = 0;
  a1421 = 0;
  a1422 = 0;

  i15a = 56;
  i15b = 55;
  //i15 = 87;
  a150 = 0;
  a151 = 0;
  a1520 = 0;
  a1521 = 0;
  a1522 = 0;

  i16a = 56;
  i16b = 54;
  //i16 = 86;
  a160 = 0;
  a161 = 0;
  a1620 = 0;
  a1621 = 0;
  a1622 = 0;

  i17a = 56;
  i17b = 53;
  //i17 = 85;
  a170 = 0;
  a171 = 0;
  a1720 = 0;
  a1721 = 0;
  a1722 = 0;

  i18a = 56;
  i18b = 52;
  //i18 = 84;
  a180 = 0;
  a181 = 0;
  a1820 = 0;
  a1821 = 0;
  a1822 = 0;

  i19a = 56;
  i19b = 51;
  //i19 = 83;
  a190 = 0;
  a191 = 0;
  a1920 = 0;
  a1921 = 0;
  a1922 = 0;


  //test1 = 0;
  //test0 =0;


  //Serial.println("Hello Computer");
}

void loop() {

  if (digitalRead(in2) == HIGH) { a0220 = 49; }
  if (digitalRead(in2) == LOW) { a0220 = 48; }

  if (digitalRead(in3) == HIGH) { a0320 = 1; }
  if (digitalRead(in3) == LOW) { a0320 = 0; }

  if (digitalRead(in4) == HIGH) { a0420 = 1; }
  if (digitalRead(in4) == LOW) { a0420 = 0; }

  if (digitalRead(in5) == HIGH) { a0520 = 49; }
  if (digitalRead(in5) == LOW) { a0520 = 48; }

  if (digitalRead(in6) == HIGH) { a0620 = 49; }
  if (digitalRead(in6) == LOW) { a0620 = 48; }

  if (digitalRead(in7) == HIGH) { a0720 = 49; }
  if (digitalRead(in7) == LOW) { a0720 = 48; }

  if (digitalRead(in8) == HIGH) { a0820 = 49; }
  if (digitalRead(in8) == LOW) { a0820 = 48; }

  if (digitalRead(in9) == HIGH) { a0920 = 49; }
  if (digitalRead(in9) == LOW) { a0920 = 48; }

  if (digitalRead(in10) == HIGH) { a1020 = 49; }
  if (digitalRead(in10) == LOW) { a1020 = 48; }

  if (digitalRead(in11) == HIGH) { a1120 = 49; }
  if (digitalRead(in11) == LOW) { a1120 = 48; }

  if (digitalRead(in12) == HIGH) { a1220 = 49; }
  if (digitalRead(in12) == LOW) { a1220 = 48; }

  if (digitalRead(in13) == HIGH) { a1320 = 49; }
  if (digitalRead(in13) == LOW) { a1320 = 48; }

  if (digitalRead(in14) == HIGH) { a1420 = 49; }
  if (digitalRead(in14) == LOW) { a1420 = 48; }

  if (digitalRead(in15) == HIGH) { a1520 = 49; }
  if (digitalRead(in15) == LOW) { a1520 = 48; }

  if (digitalRead(in16) == HIGH) { a1620 = 49; }
  if (digitalRead(in16) == LOW) { a1620 = 48; }

  if (digitalRead(in17) == HIGH) { a1720 = 49; }
  if (digitalRead(in17) == LOW) { a1720 = 48; }

  if (digitalRead(in18) == HIGH) { a1820 = 49; }
  if (digitalRead(in18) == LOW) { a1820 = 48; }

  if (digitalRead(in19) == HIGH) { a1920 = 49; }
  if (digitalRead(in19) == LOW) { a1920 = 48; }


  delay(10);


  if (digitalRead(in2) == HIGH) { a0221 = 49; }
  if (digitalRead(in2) == LOW) { a0221 = 48; }

  if (digitalRead(in3) == HIGH) { a0321 = 1; }
  if (digitalRead(in3) == LOW) { a0321 = 0; }

  if (digitalRead(in4) == HIGH) { a0421 = 1; }
  if (digitalRead(in4) == LOW) { a0421 = 0; }

  if (digitalRead(in5) == HIGH) { a0521 = 49; }
  if (digitalRead(in5) == LOW) { a0521 = 48; }

  if (digitalRead(in6) == HIGH) { a0621 = 49; }
  if (digitalRead(in6) == LOW) { a0621 = 48; }

  if (digitalRead(in7) == HIGH) { a0721 = 49; }
  if (digitalRead(in7) == LOW) { a0721 = 48; }

  if (digitalRead(in8) == HIGH) { a0821 = 49; }
  if (digitalRead(in8) == LOW) { a0821 = 48; }

  if (digitalRead(in9) == HIGH) { a0921 = 49; }
  if (digitalRead(in9) == LOW) { a0921 = 48; }

  if (digitalRead(in10) == HIGH) { a1021 = 49; }
  if (digitalRead(in10) == LOW) { a1021 = 48; }

  if (digitalRead(in11) == HIGH) { a1121 = 49; }
  if (digitalRead(in11) == LOW) { a1121 = 48; }

  if (digitalRead(in12) == HIGH) { a1221 = 49; }
  if (digitalRead(in12) == LOW) { a1221 = 48; }

  if (digitalRead(in13) == HIGH) { a1321 = 49; }
  if (digitalRead(in13) == LOW) { a1321 = 48; }

  if (digitalRead(in14) == HIGH) { a1421 = 49; }
  if (digitalRead(in14) == LOW) { a1421 = 48; }

  if (digitalRead(in15) == HIGH) { a1521 = 49; }
  if (digitalRead(in15) == LOW) { a1521 = 48; }

  if (digitalRead(in16) == HIGH) { a1621 = 49; }
  if (digitalRead(in16) == LOW) { a1621 = 48; }

  if (digitalRead(in17) == HIGH) { a1721 = 49; }
  if (digitalRead(in17) == LOW) { a1721 = 48; }

  if (digitalRead(in18) == HIGH) { a1821 = 49; }
  if (digitalRead(in18) == LOW) { a1821 = 48; }

  if (digitalRead(in19) == HIGH) { a1921 = 49; }
  if (digitalRead(in19) == LOW) { a1921 = 48; }

  /*
delay(4);
if (digitalRead(in8) == HIGH) { a0822 = 1;}
if (digitalRead(in8) == LOW) { a0822 = 0;}
*/

  if (a0220 == a0221) {
    a020 = a0220;
  }
  if (a020 < a021) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i02a);
    mySerialOUT1.write(i02b);
    mySerialOUT1.write(a020);
    mySerialOUT1.write(10);
    a021 = a020;
  }
  if (a020 > a021) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i02a);
    mySerialOUT1.write(i02b);
    mySerialOUT1.write(a020);
    mySerialOUT1.write(10);
    a021 = a020;
  }

  if (a0320 == a0321) {
    a030 = a0320;
  }
  if (a030 < a031) {

    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i03a);
    mySerialOUT1.write(i03b);
    mySerialOUT1.write(a030);
    mySerialOUT1.write(10);

    a031 = a030;
  }
  if (a030 > a031) {

    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i03a);
    mySerialOUT1.write(i03b);
    mySerialOUT1.write(a030);
    mySerialOUT1.write(10);

    a031 = a030;
  }

  if (a0420 == a0421) {
    a040 = a0420;
  }
  if (a040 < a041) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i04a);
    mySerialOUT1.write(i04b);
    mySerialOUT1.write(a040);
    mySerialOUT1.write(10);
    a041 = a040;
  }
  if (a040 > a041) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i04a);
    mySerialOUT1.write(i04b);
    mySerialOUT1.write(a040);
    mySerialOUT1.write(10);
    a041 = a040;
  }

  if (a0520 == a0521) {
    a050 = a0520;
  }
  if (a050 < a051) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i05a);
    mySerialOUT1.write(i05b);
    mySerialOUT1.write(a050);
    mySerialOUT1.write(10);
    a051 = a050;
  }
  if (a050 > a051) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i05a);
    mySerialOUT1.write(i05b);
    mySerialOUT1.write(a050);
    mySerialOUT1.write(10);
    a051 = a050;
  }

  if (a0620 == a0621) {
    a060 = a0620;
  }
  if (a060 < a061) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i06a);
    mySerialOUT1.write(i06b);
    mySerialOUT1.write(a060);
    mySerialOUT1.write(10);
    a061 = a060;
  }
  if (a060 > a061) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i06a);
    mySerialOUT1.write(i06b);
    mySerialOUT1.write(a060);
    mySerialOUT1.write(10);
    a061 = a060;
  }

  if (a0720 == a0721) {
    a070 = a0720;
  }
  if (a070 < a071) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i07a);
    mySerialOUT1.write(i07b);
    mySerialOUT1.write(a070);
    mySerialOUT1.write(10);
    a071 = a070;
  }
  if (a070 > a071) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i07a);
    mySerialOUT1.write(i07b);
    mySerialOUT1.write(a070);
    mySerialOUT1.write(10);
    a071 = a070;
  }

  if (a0820 == a0821) {  // && a0821 == a0822
    a080 = a0820;
    if (a080 < a081) {
      mySerialOUT1.write(p01a);
      mySerialOUT1.write(p01b);
      mySerialOUT1.write(i08a);
      mySerialOUT1.write(i08b);
      mySerialOUT1.write(a080);
      mySerialOUT1.write(10);

      a081 = a080;
    }
    if (a080 > a081) {

      mySerialOUT1.write(p01a);
      mySerialOUT1.write(p01b);
      mySerialOUT1.write(i08a);
      mySerialOUT1.write(i08b);
      mySerialOUT1.write(a080);
      mySerialOUT1.write(10);

      a081 = a080;
    }
  }


  if (a0920 == a0921) {
    a090 = a0920;
  }
  if (a090 < a091) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i09a);
    mySerialOUT1.write(i09b);
    mySerialOUT1.write(a090);
    mySerialOUT1.write(10);
    a091 = a090;
  }
  if (a090 > a091) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i09a);
    mySerialOUT1.write(i09b);
    mySerialOUT1.write(a090);
    mySerialOUT1.write(10);
    a091 = a090;
  }

  if (a1020 == a1021) {
    a100 = a1020;
  }
  if (a100 < a101) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i10a);
    mySerialOUT1.write(i10b);
    mySerialOUT1.write(a100);
    mySerialOUT1.write(10);
    a101 = a100;
  }
  if (a100 > a101) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i10a);
    mySerialOUT1.write(i10b);
    mySerialOUT1.write(a100);
    mySerialOUT1.write(10);
    a101 = a100;
  }

  if (a1120 == a1121) {
    a110 = a1120;
  }
  if (a110 < a111) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i11a);
    mySerialOUT1.write(i11b);
    mySerialOUT1.write(a110);
    mySerialOUT1.write(10);
    a111 = a110;
  }
  if (a110 > a111) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i11a);
    mySerialOUT1.write(i11b);
    mySerialOUT1.write(a110);
    mySerialOUT1.write(10);
    a111 = a110;
  }

  if (a1220 == a1221) {
    a120 = a1220;
  }
  if (a120 < a121) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i12a);
    mySerialOUT1.write(i12b);
    mySerialOUT1.write(a120);
    mySerialOUT1.write(10);
    a121 = a120;
  }
  if (a120 > a121) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i12a);
    mySerialOUT1.write(i12b);
    mySerialOUT1.write(a120);
    mySerialOUT1.write(10);
    a121 = a120;
  }

  if (a1320 == a1321) {
    a130 = a1320;
  }
  if (a130 < a131) {
    /*
         Serial.print(p01a); 
   Serial.print(i03);       
  Serial.print(a030);
  Serial.print(10);
 */
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i13a);
    mySerialOUT1.write(i13b);
    mySerialOUT1.write(a130);
    mySerialOUT1.write(10);

    // mySerialOUT1.write("25");
    // Serial.print("25");
    // Serial.write("25");
    a131 = a130;
  }
  if (a130 > a131) {
    /*
    Serial.println("H"); 
           Serial.println(p01a); 
   Serial.println(i03);       
  Serial.println(a030);
  Serial.println(10);
  */

    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i13a);
    mySerialOUT1.write(i13b);
    mySerialOUT1.write(a130);
    mySerialOUT1.write(10);

    // mySerialOUT1.write(49);
    // Serial.write(49);
    // Serial.print("26");
    // Serial.write(49);
    a131 = a130;
  }

  if (a1420 == a1421) {
    a140 = a1420;
  }
  if (a140 < a141) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i14a);
    mySerialOUT1.write(i14b);
    mySerialOUT1.write(a140);
    mySerialOUT1.write(10);
    a141 = a140;
  }
  if (a140 > a141) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i14a);
    mySerialOUT1.write(i14b);
    mySerialOUT1.write(a140);
    mySerialOUT1.write(10);
    a141 = a140;
  }

  if (a1520 == a1521) {
    a150 = a1520;
  }
  if (a150 < a151) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i15a);
    mySerialOUT1.write(i15b);
    mySerialOUT1.write(a150);
    mySerialOUT1.write(10);
    a151 = a150;
  }
  if (a150 > a151) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i15a);
    mySerialOUT1.write(i15b);
    mySerialOUT1.write(a150);
    mySerialOUT1.write(10);
    a151 = a150;
  }

  if (a1620 == a1621) {
    a160 = a1620;
  }
  if (a160 < a161) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i16a);
    mySerialOUT1.write(i16b);
    mySerialOUT1.write(a160);
    mySerialOUT1.write(10);
    a161 = a160;
  }
  if (a160 > a161) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i16a);
    mySerialOUT1.write(i16b);
    mySerialOUT1.write(a160);
    mySerialOUT1.write(10);
    a161 = a160;
  }

  if (a1720 == a1721) {
    a170 = a1720;
  }
  if (a170 < a171) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i17a);
    mySerialOUT1.write(i17b);
    mySerialOUT1.write(a170);
    mySerialOUT1.write(10);
    a171 = a170;
  }
  if (a170 > a171) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i17a);
    mySerialOUT1.write(i17b);
    mySerialOUT1.write(a170);
    mySerialOUT1.write(10);
    a171 = a170;
  }

  if (a1820 == a1821) {
    a180 = a1820;
  }
  if (a180 < a181) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i18a);
    mySerialOUT1.write(i18b);
    mySerialOUT1.write(a180);
    mySerialOUT1.write(10);
    a181 = a180;
  }
  if (a180 > a181) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i18a);
    mySerialOUT1.write(i18b);
    mySerialOUT1.write(a180);
    mySerialOUT1.write(10);
    a181 = a180;
  }

  if (a1920 == a1921) {
    a190 = a1920;
  }
  if (a190 < a191) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i19a);
    mySerialOUT1.write(i19b);
    mySerialOUT1.write(a190);
    mySerialOUT1.write(10);
    a191 = a190;
  }
  if (a190 > a191) {
    mySerialOUT1.write(p01a);
    mySerialOUT1.write(p01b);
    mySerialOUT1.write(i19a);
    mySerialOUT1.write(i19b);
    mySerialOUT1.write(a190);
    mySerialOUT1.write(10);
    a191 = a190;
  }

  /*
if (digitalRead(in8) == HIGH) { a80 = 1;}
if (digitalRead(in8) == LOW) { a80 = 0;}
if (a81 < a80) {      
  Serial.print("I read: ");
  mySerialOUT1.write(a80);
  a81 = a80;
};
if (a81 > a80) {      
  Serial.print("I read: ");
  mySerialOUT1.write(a80);
  a81 = a80;
};
*/
}
