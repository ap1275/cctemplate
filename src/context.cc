#include<internal_context.h>
#include<iostream>

PUBLIC_NAMESPACE::context * create_context() noexcept {
  PUBLIC_NAMESPACE::context * p = nullptr;
  try {
    p = new PUBLIC_NAMESPACE::context;
  }
  catch(...) {
    return nullptr;
  }
  return p;
}

void destroy_context(PUBLIC_NAMESPACE::context ** c) noexcept {
  if( ! c) {
    return;
  }
  delete (*c);
  (*c) = nullptr;
}
