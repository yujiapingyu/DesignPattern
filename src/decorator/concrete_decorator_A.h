#pragma once

#include <iostream>
#include "decorator.h"

class ConcreteDecoratorA : public Decorator{
public:
  void operation() override {
    component->operation();
    std::cout << "I am decorator A." << std::endl;
  }
};
