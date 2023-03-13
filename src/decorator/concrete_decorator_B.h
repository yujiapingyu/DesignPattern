#pragma once

#include <iostream>
#include "decorator.h"

namespace decorator {

class ConcreteDecoratorB : public Decorator{
public:
  void operation() override {
    component->operation();
    std::cout << "I am decorator B." << std::endl;
  }
};

} // end of decorator

