#pragma once

namespace g {

  struct context;

  context * create_context();
  void destroy_context(context *);

}
