#include "./data-structures/vector.h"
#include <iostream>

int main() {

  Vector vec = Vector();
  std::cout << vec << std::endl;

  vec.push(1);
  vec.push(2);
  vec.push(3);
  vec.push(4);
  std::cout << vec << " Length: " << vec.size() << std::endl;
  vec.push(1);
  vec.push(2);
  vec.push(3);
  vec.push(4);
  std::cout << vec << " Length: " << vec.size() << std::endl;

  return 0;
}
