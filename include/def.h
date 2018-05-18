#pragma once

#if defined(_MSC_VER)
  #define API_DEF __declspec(dllexport)
#else
  #define API_DEF
#endif
