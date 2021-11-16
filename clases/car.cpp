#include <iostream>
using namespace std;  

class Car{
    public:
        string color;
        int power;
        int wheels;

        void turnOn(){
            this->color = "black"; 
            this->power = 0; 
            this->wheels =0; 

        } 

        string& getColor(){}

        const string &getColor() const {} 

         

        void setColorToRed(){
            this-> color = "Red"; 
        } 

       

}; 

int main(){

    Car car; 

    car.turnOn();
    car.getColor(); 

    const Car constCar; 

    constCar.getColor();  

    return 0;
} 