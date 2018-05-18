#pragma once

#include"def.h"

namespace g {

  struct context;

  API_DEF context * create_context();
  API_DEF void destroy_context(context *);

}
