#include <thread>
#include <iostream>
#include <unistd.h>

int main() {
  if (fork()) {
    std::cout << "Parent!" << std::endl;
    sleep(120);
  } else {
    std::cout << "Child!" << std::endl;
    sleep(120);
  }
}
