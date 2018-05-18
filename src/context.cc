#include<internal_context.h>
#include<iostream>

g::context * g::create_context() noexcept {
  g::context * p = nullptr;
  try {
    p = new g::context;
  }
  catch(...) {
    return nullptr;
  }
  return p;
}

void g::destroy_context(g::context ** c) noexcept {
  if(!c) {
    return;
  }
  delete (*c);
  (*c) = nullptr;
}
