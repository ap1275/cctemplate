#include<internal_context.h>
#include<iostream>

g::context * g::create_context() {
  std::cout << "create context" << std::endl;
  return new g::context;
}

void g::destroy_context(g::context * c) {
  delete c;
}
