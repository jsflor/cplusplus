#include <iostream>
#include <string>

using namespace std;

namespace mechanic
{
    void init();
    string brand;
    string model;

    class Vehicle {
        public:
            string getBrand();
            void setBrand(string b);
        private:
            string brand;
    };

    class Car: public Vehicle {
        public:
            string getModel();
            void setModel(string m);
        private:
            string model;
    };
}

void init();

int main(){
    mechanic::Car car;

    init();
    mechanic::init();
    car.setBrand(mechanic::brand);
    car.setModel(mechanic::model);

    cout << car.getBrand() << " " << car.getModel() << "\n";

    return 0;
}

void init(){
    cout << "Welcome!\n";
}

void mechanic::init(){
    cout << "Car brand? ";
    cin >> brand;
    cout << "Model? ";
    cin >> model;
}

string mechanic::Vehicle::getBrand(){
    return brand;
}

void mechanic::Vehicle::setBrand(string b){
    brand = b;
}

string mechanic::Car::getModel(){
    return model;
}

void mechanic::Car::setModel(string m){
    model = m;
}
