#include <bits/stdc++.h>
using namespace std;
 

 class Vehicle{
    int speed;
    int volume;
    int acceleration;
    int time;

// constructor
 public:
 Vehicle(int s, int a, int v, int t){
     speed = s;
     volume = v;
     acceleration = a;
     time = t;
 }
     void move(){
        cout<<"Speed = "<< speed<<"\n";
        cout<<"Acceleration = "<< acceleration<<"\n";
        cout<<"Time = "<< time<<"\n";
     }

     void setSpeed(int intialSpeed){
        speed = intialSpeed;
     }

     void speedUp(){
        speed = speed + acceleration * time;
     }

     void speedDown(){
        speed = speed - acceleration * time;
        if(speed < 0){
            speed = 0;
        }
     }
 };

int main(){

   Vehicle* obj = new Vehicle(5, 2, 10, 2);

   obj->move();
   obj->setSpeed(20);
   obj->move();
   obj->speedUp();
   obj->move();
   obj->speedDown();
   obj->move();
    
return 0;
}