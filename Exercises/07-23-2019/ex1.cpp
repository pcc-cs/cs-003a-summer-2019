#include <iostream>
#include <ctime>

int main() {
  std::time_t now = std::time(NULL);
  std::cout << "now = " << now << std::endl;
  std::tm *details = std::localtime(&now);
  std::cout << "yday = " << details->tm_yday << std::endl;
  std::cout << "hour = " << details->tm_hour << std::endl;
  std::cout << "min = " << details->tm_min << std::endl;

  details->tm_min += 30;
  std::time_t future = std::mktime(details);
  std::cout << "future = " << now << std::endl;
  details = std::localtime(&future);
  std::cout << "yday = " << details->tm_yday << std::endl;
  std::cout << "hour = " << details->tm_hour << std::endl;
  std::cout << "min = " << details->tm_min << std::endl;
}
