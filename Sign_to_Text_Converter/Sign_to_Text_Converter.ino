
#include <SoftwareSerial.h>
SoftwareSerial mySerial(4,5);
//variable initializtion
int sensormin1;
int sensormin2;
int sensormin3;
int sensormin4;
int sensormin5;
 
int sensormax1;
int sensormax2;
int sensormax3;
int sensormax4;
int sensormax5;
void setup()
{
mySerial.begin(9600);
Serial.begin(9600);

Serial.println("Calibrating...");
// calibrating the sensors to suit the ones in that particular device
sensormin1 = 853;
sensormin2 = 850;
sensormin3 = 857;
sensormin4 = 846;
sensormin5 = 847;
//int sensorminx = lowercalib(Ax)
//int sensormaxx = highercalib() 
sensormax1 = 870;
sensormax2 = 869;
sensormax3 = 870;
sensormax4 = 866;
sensormax5 = 865;


}


void loop()
{
float flexADC1t[20];
float flexADC2t[20];
float flexADC3t[20];
float flexADC4t[20];
float flexADC5t[20];
float temp1=0;
float temp2=0;
float temp3=0;
float temp4=0;
float temp5=0;
for(int x=0; x<20;x++)
{
flexADC1t[x] = analogRead(A4);
flexADC2t[x] = analogRead(A3);
flexADC3t[x] = analogRead(A2);
flexADC4t[x] = analogRead(A1);
flexADC5t[x] = analogRead(A0);
delay(20);
}
for(int x=0; x<20; x++)
{
temp1=temp1+flexADC1t[x];
temp2=temp2+flexADC2t[x];
temp3=temp3+flexADC3t[x];
temp4=temp4+flexADC4t[x];
temp5=temp5+flexADC5t[x];
}
float flexADC1=temp1/20;
float flexADC2=temp2/20;
float flexADC3=temp3/20;
float flexADC4=temp4/20;
float flexADC5=temp5/20;

float angle1= map(flexADC1, sensormin1, sensormax1, 0, 90);
float angle2= map(flexADC2, sensormin2, sensormax2, 0, 90);
float angle3= map(flexADC3, sensormin3, sensormax3, 0, 90);
float angle4= map(flexADC4, sensormin4, sensormax4, 0, 90);
float angle5= map(flexADC5, sensormin5, sensormax5, 0, 90);

angle1=constrain(angle1,0,90);
angle2=constrain(angle2,0,90);
angle3=constrain(angle3,0,90);
angle4=constrain(angle4,0,90);
angle5=constrain(angle5,0,90);

Serial.println("Angle Data:");
Serial.println(String(angle1)+" For Thumb");
Serial.println(String(angle2)+" For Index");
Serial.println(String(angle3)+" For Middle");
Serial.println(String(angle4)+" For Ring");
Serial.println(String(angle5)+" For Pinky");
Serial.println("\n");

mySerial.println("Angle Data:");
mySerial.println(String(angle1)+" For Thumb");
mySerial.println(String(angle2)+" For Index");
mySerial.println(String(angle3)+" For Middle");
mySerial.println(String(angle4)+" For Ring");
mySerial.println(String(angle5)+" For Pinky");
mySerial.println("\n");

delay(50);

if(angle1<30&&angle2>60&&angle3>60&&angle4>60&&angle5>60)
Serial.println('A');
if(angle1>60&&angle2<30&&angle3<30&&angle4<30&&angle5<30)
Serial.println('B');
if(angle1>60&&angle2>60&&angle3<30&&angle4<30&&angle5<30)
Serial.println('F');
if(angle1<30&&angle2<30&&angle3<30&&angle4>60&&angle5>60)
Serial.println('H');
if(angle1>60&&angle2>60&&angle3>60&&angle4>60&&angle5<30)
Serial.println('I');
if(angle1<30&&angle2<30&&angle3>60&&angle4>60&&angle5>60)
Serial.println('L');
if(angle1>60&&angle2<30&&angle3<30&&angle4>60&&angle5>60)
Serial.println('V');
if(angle1>60&&angle2<30&&angle3<30&&angle4<30&&angle5>60)
Serial.println('W');
if(angle1<30&&angle2>60&&angle3>60&&angle4>60&&angle5<30)
Serial.println('y');
}


int lowercalib(int pin)
{
  int val = analogRead(pin);
  return val;
}

int highercalib()
{
Serial.println("Bend in 20");
delay(20000);
int val1 = analogRead(A4);
Serial.println("Bend in 20");
delay(20000);
int val2 = analogRead(A3);
Serial.println("Bend in 20");
delay(20000);
int val3 = analogRead(A2);
Serial.println("Bend in 20");
delay(20000);
int val4 = analogRead(A1);
Serial.println("Bend in 20");
delay(20000);
int val20 = analogRead(A0);
}
