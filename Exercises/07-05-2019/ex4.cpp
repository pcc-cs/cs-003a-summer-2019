/**
 * Class hierarchy.
 *
 * Copyright (c) 2019, Sekhar Ravinutala.
 */

#include <string>
#include <iostream>

class Vehicle {
 private:
  int vehicleId;
 protected:
  int weight;
 public:
  int horsePower;
  Vehicle(float, float);
};

class LandVehicle : public Vehicle {
 public:
  LandVehicle(float, float);
  float wheelSize;
  std::string getWeightType();
};

class AirVehicle : public Vehicle {
 public:
  float wingSpan;
};

Vehicle::Vehicle(float w, float hp): weight(w), horsePower(hp) {
  std::cout << "Vehicle constructor!" << std::endl;
}

LandVehicle::LandVehicle(float w, float hp) : Vehicle(w, hp) {
  std::cout << "LandVehicle constructor!" << std::endl;
}

std::string LandVehicle::getWeightType() {
  return weight > 100 ? "Heavy" : "Light";
}

int main() {
  Vehicle v(200, 12);
  std::cout << v.horsePower << std::endl;

  LandVehicle lv(100, 24);
  std::cout << lv.getWeightType() << std::endl;
}
