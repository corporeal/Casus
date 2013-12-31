#pragma once

#ifdef _M_IX86
#define EECS_BITS32
#elif defined (_M_X64)
#define EECS_BITS64
#endif