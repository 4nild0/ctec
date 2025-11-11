/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#SeNãoDefinido _INC_STRING
#Defina _INC_STRING

#Inclua <_mingw.h>

#SeDefinido __cplusplus
Externo "C" {
#FimSe

#SeNãoDefinido _NLSCMP_DEFINED
#Defina _NLSCMP_DEFINED
#Defina _NLSCMPERROR 2147483647
#FimSe

#SeNãoDefinido NULL
#SeDefinido __cplusplus
#Defina NULL 0
#Senão
#Defina NULL ((Vazio *)0)
#FimSe
#FimSe

#Defina _WConst_return _CONST_RETURN

#SeNãoDefinido _CRT_MEMORY_DEFINED
#Defina _CRT_MEMORY_DEFINED
  _CRTIMP Vazio *__cdecl _memccpy(Vazio *_Dst,Imutável Vazio *_Src,Inteiro _Val,size_t _MaxCount);
  _CONST_RETURN Vazio *__cdecl memchr(Imutável Vazio *_Buf ,Inteiro _Val,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _memicmp(Imutável Vazio *_Buf1,Imutável Vazio *_Buf2,size_t _Size);
  _CRTIMP Inteiro __cdecl _memicmp_l(Imutável Vazio *_Buf1,Imutável Vazio *_Buf2,size_t _Size,_locale_t _Locale);
  Inteiro __cdecl memcmp(Imutável Vazio *_Buf1,Imutável Vazio *_Buf2,size_t _Size);
  Vazio *__cdecl memcpy(Vazio *_Dst,Imutável Vazio *_Src,size_t _Size);
  Vazio *__cdecl memset(Vazio *_Dst,Inteiro _Val,size_t _Size);
#SeNãoDefinido	NO_OLDNAMES
  Vazio *__cdecl memccpy(Vazio *_Dst,Imutável Vazio *_Src,Inteiro _Val,size_t _Size);
  Inteiro __cdecl memicmp(Imutável Vazio *_Buf1,Imutável Vazio *_Buf2,size_t _Size);
#FimSe
#FimSe
  Caractere *__cdecl _strset(Caractere *_Str,Inteiro _Val);
  Caractere *__cdecl strcpy(Caractere *_Dest,Imutável Caractere *_Source);
  Caractere *__cdecl strcat(Caractere *_Dest,Imutável Caractere *_Source);
  Inteiro __cdecl strcmp(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  size_t __cdecl strlen(Imutável Caractere *_Str);
#Se 0
  size_t __cdecl strnlen(Imutável Caractere *_Str,size_t _MaxCount);
#FimSe
  Vazio *__cdecl memmove(Vazio *_Dst,Imutável Vazio *_Src,size_t _Size);
  _CRTIMP Caractere *__cdecl _strdup(Imutável Caractere *_Src);
  _CONST_RETURN Caractere *__cdecl strchr(Imutável Caractere *_Str,Inteiro _Val);
  _CRTIMP Inteiro __cdecl _stricmp(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  _CRTIMP Inteiro __cdecl _strcmpi(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  _CRTIMP Inteiro __cdecl _stricmp_l(Imutável Caractere *_Str1,Imutável Caractere *_Str2,_locale_t _Locale);
  Inteiro __cdecl strcoll(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  _CRTIMP Inteiro __cdecl _strcoll_l(Imutável Caractere *_Str1,Imutável Caractere *_Str2,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _stricoll(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  _CRTIMP Inteiro __cdecl _stricoll_l(Imutável Caractere *_Str1,Imutável Caractere *_Str2,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _strncoll (Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _strncoll_l(Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _strnicoll (Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _strnicoll_l(Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t __cdecl strcspn(Imutável Caractere *_Str,Imutável Caractere *_Control);
  _CRTIMP Caractere *__cdecl _strerror(Imutável Caractere *_ErrMsg);
  Caractere *__cdecl strerror(Inteiro);
  _CRTIMP Caractere *__cdecl _strlwr(Caractere *_String);
  Caractere *strlwr_l(Caractere *_String,_locale_t _Locale);
  Caractere *__cdecl strncat(Caractere *_Dest,Imutável Caractere *_Source,size_t _Count);
  Inteiro __cdecl strncmp(Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _strnicmp(Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _strnicmp_l(Imutável Caractere *_Str1,Imutável Caractere *_Str2,size_t _MaxCount,_locale_t _Locale);
  Caractere *strncpy(Caractere *_Dest,Imutável Caractere *_Source,size_t _Count);
  _CRTIMP Caractere *__cdecl _strnset(Caractere *_Str,Inteiro _Val,size_t _MaxCount);
  _CONST_RETURN Caractere *__cdecl strpbrk(Imutável Caractere *_Str,Imutável Caractere *_Control);
  _CONST_RETURN Caractere *__cdecl strrchr(Imutável Caractere *_Str,Inteiro _Ch);
  _CRTIMP Caractere *__cdecl _strrev(Caractere *_Str);
  size_t __cdecl strspn(Imutável Caractere *_Str,Imutável Caractere *_Control);
  _CONST_RETURN Caractere *__cdecl strstr(Imutável Caractere *_Str,Imutável Caractere *_SubStr);
  Caractere *__cdecl strtok(Caractere *_Str,Imutável Caractere *_Delim);
  _CRTIMP Caractere *__cdecl _strupr(Caractere *_String);
  _CRTIMP Caractere *_strupr_l(Caractere *_String,_locale_t _Locale);
  size_t __cdecl strxfrm(Caractere *_Dst,Imutável Caractere *_Src,size_t _MaxCount);
  _CRTIMP size_t __cdecl _strxfrm_l(Caractere *_Dst,Imutável Caractere *_Src,size_t _MaxCount,_locale_t _Locale);

#SeNãoDefinido	NO_OLDNAMES
  Caractere *__cdecl strdup(Imutável Caractere *_Src);
  Inteiro __cdecl strcmpi(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  Inteiro __cdecl stricmp(Imutável Caractere *_Str1,Imutável Caractere *_Str2);
  Caractere *__cdecl strlwr(Caractere *_Str);
  Inteiro __cdecl strnicmp(Imutável Caractere *_Str1,Imutável Caractere *_Str,size_t _MaxCount);
  __CRT_INLINE Inteiro __cdecl strncasecmp (Imutável Caractere *__sz1, Imutável Caractere *__sz2, size_t __sizeMaxCompare) { Retorne _strnicmp (__sz1, __sz2, __sizeMaxCompare); }
  __CRT_INLINE Inteiro __cdecl strcasecmp (Imutável Caractere *__sz1, Imutável Caractere *__sz2) { Retorne _stricmp (__sz1, __sz2); }
  Caractere *__cdecl strnset(Caractere *_Str,Inteiro _Val,size_t _MaxCount);
  Caractere *__cdecl strrev(Caractere *_Str);
  Caractere *__cdecl strset(Caractere *_Str,Inteiro _Val);
  Caractere *__cdecl strupr(Caractere *_Str);
#FimSe

#SeNãoDefinido _WSTRING_DEFINED
#Defina _WSTRING_DEFINED

  _CRTIMP wchar_t *__cdecl _wcsdup(Imutável wchar_t *_Str);
  wchar_t *__cdecl wcscat(wchar_t *_Dest,Imutável wchar_t *_Source);
  _CONST_RETURN wchar_t *__cdecl wcschr(Imutável wchar_t *_Str,wchar_t _Ch);
  Inteiro __cdecl wcscmp(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2);
  wchar_t *__cdecl wcscpy(wchar_t *_Dest,Imutável wchar_t *_Source);
  size_t __cdecl wcscspn(Imutável wchar_t *_Str,Imutável wchar_t *_Control);
  size_t __cdecl wcslen(Imutável wchar_t *_Str);
  size_t __cdecl wcsnlen(Imutável wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t *_Dest,Imutável wchar_t *_Source,size_t _Count);
  Inteiro __cdecl wcsncmp(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t *_Dest,Imutável wchar_t *_Source,size_t _Count);
  _CONST_RETURN wchar_t *__cdecl wcspbrk(Imutável wchar_t *_Str,Imutável wchar_t *_Control);
  _CONST_RETURN wchar_t *__cdecl wcsrchr(Imutável wchar_t *_Str,wchar_t _Ch);
  size_t __cdecl wcsspn(Imutável wchar_t *_Str,Imutável wchar_t *_Control);
  _CONST_RETURN wchar_t *__cdecl wcsstr(Imutável wchar_t *_Str,Imutável wchar_t *_SubStr);
  wchar_t *__cdecl wcstok(wchar_t *_Str,Imutável wchar_t *_Delim);
  _CRTIMP wchar_t *__cdecl _wcserror(Inteiro _ErrNum);
  _CRTIMP wchar_t *__cdecl __wcserror(Imutável wchar_t *_Str);
  _CRTIMP Inteiro __cdecl _wcsicmp(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2);
  _CRTIMP Inteiro __cdecl _wcsicmp_l(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _wcsnicmp(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _wcsnicmp_l(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP wchar_t *__cdecl _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount);
  _CRTIMP wchar_t *__cdecl _wcsrev(wchar_t *_Str);
  _CRTIMP wchar_t *__cdecl _wcsset(wchar_t *_Str,wchar_t _Val);
  _CRTIMP wchar_t *__cdecl _wcslwr(wchar_t *_String);
  _CRTIMP wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale);
  _CRTIMP wchar_t *__cdecl _wcsupr(wchar_t *_String);
  _CRTIMP wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale);
  size_t __cdecl wcsxfrm(wchar_t *_Dst,Imutável wchar_t *_Src,size_t _MaxCount);
  _CRTIMP size_t __cdecl _wcsxfrm_l(wchar_t *_Dst,Imutável wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  Inteiro __cdecl wcscoll(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2);
  _CRTIMP Inteiro __cdecl _wcscoll_l(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _wcsicoll(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2);
  _CRTIMP Inteiro __cdecl _wcsicoll_l(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _wcsncoll(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _wcsncoll_l(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP Inteiro __cdecl _wcsnicoll(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount);
  _CRTIMP Inteiro __cdecl _wcsnicoll_l(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);

#SeNãoDefinido	NO_OLDNAMES
  wchar_t *__cdecl wcsdup(Imutável wchar_t *_Str);
#Defina wcswcs wcsstr
  Inteiro __cdecl wcsicmp(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2);
  Inteiro __cdecl wcsnicmp(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2,size_t _MaxCount);
  wchar_t *__cdecl wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount);
  wchar_t *__cdecl wcsrev(wchar_t *_Str);
  wchar_t *__cdecl wcsset(wchar_t *_Str,wchar_t _Val);
  wchar_t *__cdecl wcslwr(wchar_t *_Str);
  wchar_t *__cdecl wcsupr(wchar_t *_Str);
  Inteiro __cdecl wcsicoll(Imutável wchar_t *_Str1,Imutável wchar_t *_Str2);
#FimSe
#FimSe

#SeDefinido __cplusplus
}
#FimSe

#Inclua <sec_api/string_s.h>
#FimSe
