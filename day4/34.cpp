

#include<iostream>

using namespace std;

class Vehicle
{
    public:
        virtual void start() = 0; // pure virtual function

};

// Derived class Car

class Car : public Vehicle
{
    public:
        void start()
        {
            cout << "Car started" << endl;
        }
};

// Derived class Bike

class Bike : public Vehicle
{
    public:
        void start()
        {
            cout << "Bike started" << endl;
        }
};

int main()
{
    Vehicle *v1 = new Car();

    v1 -> start();

    Vehicle *v2 = new Bike();

    v2 -> start();

    delete v1;
    delete v2; 
}