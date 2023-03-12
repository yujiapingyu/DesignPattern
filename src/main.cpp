#include <iostream>
#include "decorator/concrete_component.h"
#include "decorator/concrete_decorator_A.h"
#include "decorator/concrete_decorator_B.h"

int main() {

  /*
    装饰器模式：
    1. 实例化实体组件C;
    2. 用装饰器A来包装组件C;
    3. 用装饰器B来包装组件A;
    4. 调用装饰器B的operation方法
  */
  ConcreteComponent component;
  ConcreteDecoratorA da;
  ConcreteDecoratorB db;

  da.set_component(&component);
  db.set_component(&da);
  db.operation();

  return 0;
}