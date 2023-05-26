#ifndef __VECTOR__
#define __VECTOR__
#include <cstdlib>
#include <functional>
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

  int &operator[](unsigned int index) const;

  Vector &push(const int elem);

  std::string join(const std::string &delim = ",") const;

  unsigned int count(std::function<bool(const int)>) const;

  bool exists(std::function<bool(const int)>) const;
  bool forall(std::function<bool(const int)>) const;

  friend std::ostream &operator<<(std::ostream &os, const Vector &vec);
};

#endif
