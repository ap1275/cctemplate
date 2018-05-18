#pragma once

#include"def.h"

namespace g {

  struct context;

  API_DEF context * create_context() noexcept;
  API_DEF void destroy_context(context **) noexcept;

}
