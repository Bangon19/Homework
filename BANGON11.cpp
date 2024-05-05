#include <iostream>
#include <string>
#include <ctime>

class Vehicle {
private:
    std::string vehicleID;
    std::string brand;
    std::string model;
    int year;
    std::string color;

public:
    Vehicle(std::string id, std::string b, std::string m, int y, std::string c)
        : vehicleID(id), brand(b), model(m), year(y), color(c) {}

    std::string getVehicleID() const { return vehicleID; }
    void setVehicleID(std::string id) { vehicleID = id; }

    std::string getBrand() const { return brand; }
    void setBrand(std::string b) { brand = b; }

    std::string getModel() const { return model; }
    void setModel(std::string m) { model = m; }

    int getYear() const { return year; }
    void setYear(int y) { year = y; }

    std::string getColor() const { return color; }
    void setColor(std::string c) { color = c; }

    void displayInfo() const {
        std::cout << "Vehicle ID: " << vehicleID << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Color: " << color << std::endl;
    }

    bool isVintage() const {
        time_t now = time(0);
        tm* localTime = localtime(&now);
        int currentYear = 1900 + localTime->tm_year;
        return (currentYear - year >= 25);
    }
};

int main() {
    Vehicle myCar("12345", "Toyota", "Camry", 2010, "Black");
    myCar.displayInfo();
    std::cout << "Is vintage? " << (myCar.isVintage() ? "Yes" : "No") << std::endl;

    return 0;
}

