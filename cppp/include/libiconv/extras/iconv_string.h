/* Copyright (C) 1999-2001 Bruno Haible.
   This file is not part of the GNU LIBICONV Library.
   This file is put into the public domain.  */

/*
 * This C function converts an entire string from one encoding to another,
 * using iconv. Easier to use than iconv() itself, and supports autodetect
 * encodings on input.
 *
 *   int _cppp_iconv_string (const char* tocode, const char* fromcode,
 *                     const char* start, const char* end,
 *                     char** resultp, size_t* lengthp)
 *
 * Converts a memory region given in encoding FROMCODE to a new memory
 * region in encoding TOCODE. FROMCODE and TOCODE are as for iconv_open(3),
 * except that FROMCODE may be one of the values
 *    "autodetect_utf8"          supports ISO-8859-1 and UTF-8
 *    "autodetect_jp"            supports EUC-JP, ISO-2022-JP-2 and SHIFT_JIS
 *    "autodetect_kr"            supports EUC-KR and ISO-2022-KR
 * The input is in the memory region between start (inclusive) and end
 * (exclusive). If resultp is not NULL, the output string is stored in
 * *resultp; malloc/realloc is used to allocate the result.
 *
 * This function does not treat zero characters specially.
 *
 * Return value: 0 if successful, otherwise -1 and errno set. Particular
 * errno values: EILSEQ and ENOMEM.
 *
 * Example:
 *   const char* s = ...;
 *   char* result = NULL;
 *   if (_cppp_iconv_string("UCS-4-INTERNAL", "autodetect_utf8",
 *                    s, s+strlen(s)+1, &result, NULL) < 0)
 *     perror("_cppp_iconv_string");
 *
 */
#ifdef __cplusplus
extern "C"
{
#endif
#include <stddef.h>

#ifdef __GNUC__
#pragma GCC system_header
#endif
#ifdef _MSC_VER
#pragma warning(push, 0)
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @date 2023-2-2
 * @brief C++ Plus C iconv function
 * @param tocode [in] to charset
 * @param fromcode [in] from charset
 * @param start [in] input string start pointer
 * @param end [in] input string end pointer
 * @param resultp [out] output string pointer
 * @param lengthp [out] output string length
 */
extern int _cppp_iconv_string (const char* tocode, const char* fromcode, const char* start, const char* end, char** resultp, size_t* lengthp);

#ifdef __cplusplus
}
#endif

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __cplusplus
}
#endif