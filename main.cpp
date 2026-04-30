#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int year;

public:
    Car(std::string b, int y) : brand(b), year(y) {}

    void display() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }

    void setBrand(std::string b) { brand = b; }
    std::string getBrand() { return brand; }
};

int main() {
    Car car1("Toyota", 2023);
    Car car2("Honda", 2024);

    car1.display();
    car2.display();

    return 0;
}
