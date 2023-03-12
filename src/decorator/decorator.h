#pragma once

#include <iostream>
#include "component.h"

class Decorator : public Component{
protected:
  Component *component;

public:
  void set_component(Component *component) {
    this->component = component;
  }

  void operation() override {
    component->operation();
  }
};
