#include "vector.h"
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

void Vector::resize(unsigned int newCap) {
  int *narray = (int *)malloc(newCap * (sizeof(int)));
  for (unsigned int i = 0; i < _size; ++i) {
    narray[i] = _array[i];
  }
  if (_cap > 0)
    std::free(_array);

  _array = narray;
  _cap = newCap;
}

Vector::Vector() : _cap(0), _size(0) { resize(5); }

int &Vector::operator[](unsigned int index) { return _array[index]; }

unsigned int Vector::size() const { return _size; }

Vector &Vector::push(const int elem) {
  if (_cap < _size)
    resize(_cap * 2);

  _array[_size] = elem;
  ++_size;

  return *this;
}

std::string Vector::join(const std::string &delim) const {
  std::string res = "";
  for (unsigned int i = 0; i < _size; ++i) {
    if (i != 0)
      res += delim;
    res += std::to_string(this->_array[i]);
  }
  return res;
}

std::ostream &operator<<(std::ostream &os, const Vector &vec) {
  os << "Vec[" << vec.join() << "]";
  return os;
}
