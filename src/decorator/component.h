#pragma once

class Component {
public:
  virtual void operation() {};
  virtual ~Component() = default;
};