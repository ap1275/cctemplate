#include<iostream>
#include<cstdlib>
#include<context.h>

int main(int argc, char ** argv) {
  auto c = g::create_context();
  std::cout << (c == nullptr ? true : false) << std::endl;
  g::destroy_context(&c);
  std::cout << (c == nullptr ? true : false) << std::endl;
  std::cout << "main test" << std::endl;
  return EXIT_SUCCESS;
}
