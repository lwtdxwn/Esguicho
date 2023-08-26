#include "config.h"
#include "constants_declaration.h"
#include "controller_IR.h"
#include "motors.h"
#include "distance_sensors.h"
#include "utils.h"

int flag=0;

void setup(){
    Serial.begin(115200);
    controllerInit();
    sensorsInit();
    motorsInit();
}

void loop(){
    controllerIR();

    if(stage==1){
        digitalWrite(2, HIGH);
    }
        else if(stage==2){
        distanceRead();
        if(distC < distAtk/3 and (distL <distAtk/3 or distR < distAtk/3 )){
            Serial.print("ATACANDO MAX \t\t");
            speedL=speedR=SpeedAtk;
        }
            else if(distC < distAtk and (distL < distAtk or distR < distAtk));
            Serial.print("ATACANDO \t\t");
            SpeedL=SpeedR=SpeedStandard;
            }        
            else if()

