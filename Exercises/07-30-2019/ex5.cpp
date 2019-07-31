#include <thread>
#include <iostream>
#include <unistd.h>

void hello(std::string message) {
  std::cout << message << std::endl;
  sleep(2);
}

int main() {
  std::thread t1([](int n) {
    std::cout << n << std::endl;
    sleep(5);
  }, 100);

  std::thread t2(hello, "Hello, coder!");

  t1.join();
  std::cout << "t1 ended" << std::endl;

  t2.join();
  std::cout << "t2 ended" << std::endl;
}
