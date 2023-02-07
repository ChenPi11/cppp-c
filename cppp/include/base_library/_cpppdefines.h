
#ifndef _CPPP_BASE_DEFINES_H_
#define _CPPP_BASE_DEFINES_H_

/*include C++ Plus config file*/
#include "cppp_config.h"


/*C++ Plus Macintosh compilers wchar_t support define*/
# if defined(_MAC)
#	ifndef wchar_t
/*      some Macintosh compilers don't define wchar_t in a convenient location, or define it as a char*/
#		define unsigned short wchar_t
#	endif
# endif

/*C++ Plus bool define*/
#ifndef __cplusplus
#include <stdbool.h>
#endif

#ifdef __cplusplus
/*Internal macro*/
#define __CPPPBASE namespace ___CPPP_BASE_LIBRARY_NS {
/*Internal macro*/
#define __END_CPPPBASE }
#else
/*Internal macro*/
#define __CPPPBASE
/*Internal macro*/
#define __END_CPPPBASE
#endif

/*ignore Microsoft Windows Visual C Runtime Secure warnings*/
#define _CRT_SECURE_NO_WARNINGS

#endif