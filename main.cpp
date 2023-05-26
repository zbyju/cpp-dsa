#include "./data-structures/vector.h"
#include <iostream>

bool isEven(int x) { return x % 2 == 0; }
bool isOdd(int x) { return x % 2 == 1; }

int main() {

  Vector vec = Vector();
  std::cout << vec << std::endl;

  vec.push(1);

  std::cout << "Count even: " << vec.count(isEven)
            << "; count odd: " << vec.count(isOdd) << "; all odd? "
            << vec.forall(isOdd) << "; exists even? " << vec.exists(isEven)
            << std::endl;

  vec.push(2);

  std::cout << "Count even: " << vec.count(isEven)
            << "; count odd: " << vec.count(isOdd) << "; all odd? "
            << vec.forall(isOdd) << "; exists even? " << vec.exists(isEven)
            << std::endl;

  vec.push(3);
  vec.push(4);
  std::cout << vec << " Length: " << vec.size() << std::endl;
  vec.push(1);
  vec.push(2);
  vec.push(3);
  vec.push(4);
  std::cout << "Count even: " << vec.count(isEven)
            << "; count odd: " << vec.count(isOdd) << "; all odd? "
            << vec.forall(isOdd) << "; exists even? " << vec.exists(isEven)
            << std::endl;
  std::cout << vec << " Length: " << vec.size() << std::endl;

  return 0;
}
