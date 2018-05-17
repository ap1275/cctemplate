#include<iostream>
#include<cstdlib>
#include<context.h>

int main(int argc, char ** argv) {
  auto c = g::create_context();
  g::destroy_context(c);
  std::cout << "main test" << std::endl;
  return EXIT_SUCCESS;
}
