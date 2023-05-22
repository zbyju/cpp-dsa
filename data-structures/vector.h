#ifndef __VECTOR__
#define __VECTOR__
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

class Vector {
private:
  unsigned int _cap, _size;
  int *_array;

  void resize(unsigned int newCap);

public:
  Vector();
  unsigned int size() const;

  int &operator[](unsigned int index);

  Vector &push(const int elem);

  std::string join(const std::string &delim = ",") const;

  friend std::ostream &operator<<(std::ostream &os, const Vector &vec);
};

#endif
