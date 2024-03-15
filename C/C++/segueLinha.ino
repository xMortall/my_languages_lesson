#include "Arduino.h"

int RMotorA     = 5;
int RMotorB     = 10;
int LMotorA     = 8;
int LMotorB     = 9;

int IR1         = 25;
int IR2         = 26;
int IR3         = 27;
int IR4         = 28;
int IR5         = 29;
int IR6         = 38;

int Ir1Reading, Ir2Reading, Ir3Reading, Ir4Reading, Ir5Reading, Ir6Reading;

void updateSensorState(){
    Ir1Reading = digitalRead(IR1);
    Ir2Reading = digitalRead(IR2);
    Ir3Reading = digitalRead(IR3);
    Ir4Reading = digitalRead(IR4);
    Ir5Reading = digitalRead(IR5);
    Ir6Reading = digitalRead(IR6);
}

void forward(int speedR, int speedL){
    analogWrite(RMotorA, speedR);
    digitalWrite(RMotorB, 0);

    analogWrite(LMotorA, speedL);
    digitalWrite(LMotorB, 0);
}

void stop(){
    analogWrite(RMotorA, 0);
    digitalWrite(RMotorB, 0);

    analogWrite(LMotorA, 0);
    digitalWrite(LMotorB, 0);
}

void fallowLine(){

    if(Ir1Reading == 1 && Ir2Reading == 1 &&
        Ir3Reading == 0 && Ir4Reading == 0 &&
        Ir5Reading == 1 && Ir6Reading == 1){
            forward(40, 40);
        }
   if(Ir1Reading == 1 && Ir2Reading == 0 &&
        Ir3Reading == 0 && Ir4Reading == 1 &&
        Ir5Reading == 1 && Ir6Reading == 1){
            forward(40, 80);
        }
     if(Ir1Reading == 0 && Ir2Reading == 0 &&
        Ir3Reading == 1 && Ir4Reading == 1 &&
        Ir5Reading == 1 && Ir6Reading == 1){
            forward(20, 100);
        }else{
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

void Loop(){

}