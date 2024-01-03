#include<iostream>
#include<string>

using namespace std;

class Car
{
private:
int year;
string make;
int speed = 0;

public:
void setYear(int);
void setMake(string);
void setSpeed(int);
int getYear();
string getMake();
int getSpeed();
void accelerate();
void brake();


};
void Car::setYear(int y)
{year = y;}
int Car::getYear(){
return year;}

void Car::setMake(string m)
{make = m;}
string Car::getMake(){
return make;}

void Car::setSpeed(int spd)
{speed = spd;}
int Car::getSpeed(){
return speed;}

void Car::accelerate()
{speed +=5;}

void Car::brake()
{
if( speed > 5 )
    speed -=5;
else speed = 0 ;
}


int main()
{
Car myCar;
int bYear = 0;
string bMake;
cout << "Please enter the year of the vehicle.\n";
cin >> bYear;
cout << "Please enter the make of the vehicle.\n";
cin >> bMake;

myCar.setYear(bYear);
cout << "You entered the year of the car as " << myCar.getYear() << endl;
myCar.setMake(bMake);
cout << "You entered the make of the car as " << myCar.getMake() << endl;
int i = 0;
for (; i<5; ++i)
{
    myCar.accelerate();
    cout << "Accelerating.\n" << "The current speed of the car is: " << myCar.getSpeed() << endl;


}
{
    int j = 0;
    for (; j<5; ++j)
    {
        myCar.brake();
        cout << "Decelerating.\n"  << "The current speed of the car is: " << myCar.getSpeed()<<endl;

    }



}
}
