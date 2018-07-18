#pragma once

#include"defs.h"

namespace PUBLIC_NAMESPACE {

  struct API_DEF context;

}

/* C_API */

#ifdef __cplusplus
extern "C" {
#endif

API_DEF PUBLIC_NAMESPACE::context * create_context() noexcept;
API_DEF void destroy_context(PUBLIC_NAMESPACE::context **) noexcept;

#ifdef __cplusplus
}
#endif