#include "Arduino.h"

const int RMotorA = 5;
const int RMotorB = 10;
const int LMotorA = 8;
const int LMotorB = 9;

int IR1 = 25;
int IR2 = 26;
int IR3 = 27;
int IR4 = 28;
int IR5 = 29;
int IR6 = 39;

int IL1;

int Ir1ReadingL;
int Ir2ReadingL;
int Ir3ReadingL;
int Ir4ReadingL;
int Ir5ReadingL;
int Ir6ReadingL;

void updateSensorState() {
    Ir1ReadingL = digitalRead(IR1);
    Ir2ReadingL = digitalRead(IR2);
    Ir3ReadingL = digitalRead(IR3);
    Ir4ReadingL = digitalRead(IR4);
    Ir5ReadingL = digitalRead(IR5);
    Ir6ReadingL = digitalRead(IR6);
}

void forward(int speedR, int speedL) {
    analogWrite(RMotorA, speedR);
    digitalWrite(RMotorB, 0);

    analogWrite(LMotorA, speedL);
    digitalWrite(LMotorB, 0);
}
void sensorsState(){
  String myStr = String(Ir1ReadingL) + "   " +
                 String(Ir2ReadingL) + "   " +
                 String(Ir3ReadingL) + "   " +
                 String(Ir4ReadingL) + "   " +
                 String(Ir5ReadingL) + "   " +
                 String(Ir6ReadingL) + "   " ;
  Serial.println(myStr);
}

void stop() {
    analogWrite(RMotorA, 0);
    digitalWrite(RMotorB, 0);

    analogWrite(LMotorA, 0);
    digitalWrite(LMotorB, 0);
}

void fallowLine() {
    if (Ir1ReadingL == 0 && Ir2ReadingL == 0 &&
        Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
        Ir5ReadingL == 0 && Ir6ReadingL == 0) {
        forward(100, 100);
    } else if (Ir1ReadingL == 1 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 0 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 1) {
        forward(100, 100);
    } else if (Ir1ReadingL == 0 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 1) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 1 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 0 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 1 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 0 &&
               Ir5ReadingL == 0 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 0 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 1 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 0 && Ir4ReadingL == 0 &&
               Ir5ReadingL == 0 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 0 && Ir4ReadingL == 0 &&
               Ir5ReadingL == 0 && Ir6ReadingL == 1) {
        forward(100, 100);
        } else if (Ir1ReadingL == 1 && Ir2ReadingL == 1 &&
               Ir3ReadingL == 0 && Ir4ReadingL == 0 &&
               Ir5ReadingL == 0 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 0 &&
               Ir3ReadingL == 0 && Ir4ReadingL == 0 &&
               Ir5ReadingL == 0 && Ir6ReadingL == 1) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 1 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 0) {
        forward(100, 100);
        } else if (Ir1ReadingL == 0 && Ir2ReadingL == 1 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 1) {
        forward(100, 100);
        } else if (Ir1ReadingL == 1 && Ir2ReadingL == 1 &&
               Ir3ReadingL == 1 && Ir4ReadingL == 1 &&
               Ir5ReadingL == 1 && Ir6ReadingL == 0) {
        forward(100, 100);
    }else {
        stop();
    }
}

void setup() {
    Serial.begin(9600);

    pinMode(RMotorA, OUTPUT);
    pinMode(RMotorB, OUTPUT);
    pinMode(LMotorA, OUTPUT);
    pinMode(LMotorB, OUTPUT);

    pinMode(IR1, INPUT);
    pinMode(IR2, INPUT);
    pinMode(IR3, INPUT);
    pinMode(IR4, INPUT);
    pinMode(IR5, INPUT);
    pinMode(IR6, INPUT);
}

void loop() {
  sensorsState();
    updateSensorState();
    fallowLine();   
}
