#include <iostream>

int main() {
  int num;

  std::cout << "Enter a positive integer: ";
  std::cin >> num;

  std::cout << "Even numbers from 0 to " << num << ":" << std::endl;

  for (int i = 0; i <= num; i += 2) {
    std::cout << i << std::endl;
  }

  return 0;
}
