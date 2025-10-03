#include <iostream>
using namespace std;

class Car {
public:
    // Data members
    string brand;
    int speed;

    // Member function
    void displayInfo() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }

    // Static member
    static int totalCars;

    // Static member function
    static void showTotalCars() {
        cout << "Total Cars: " << totalCars << endl;
    }
};

// Initialize static member
int Car::totalCars = 0;

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.speed = 120;
    car1.displayInfo();
car
    Car::totalCars += 1;
    Car::showTotalCars();

    Car car2;
    car2.brand = "Honda";
    car2.speed = 150;
    car2.displayInfo();

    Car::totalCars += 1;
    Car::showTotalCars();

    return 0;
}