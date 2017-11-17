// This code is adapted from 7-zip 16.04, and is
// under the GNU LGPL 2.1

#ifndef __COMMON_UTF_CONVERT_H
#define __COMMON_UTF_CONVERT_H

#include <stddef.h>
#include <stdint.h>

bool CheckUTF8(const char *src, bool allowReduced = false) throw();

bool Utf8_To_Utf16(wchar_t *dest, size_t *destLen, const char *src, const char *srcLim) throw();
size_t Utf16_To_Utf8_Calc(const wchar_t *src, const wchar_t *srcLim);
char *Utf16_To_Utf8(char *dest, const wchar_t *src, const wchar_t *srcLim);

// bool ConvertUTF8ToUnicode(const AString &utfString, UString &resultString);
// void ConvertUnicodeToUTF8(const UString &unicodeString, AString &resultString);

#endif
