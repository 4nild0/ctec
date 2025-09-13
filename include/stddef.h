#SeNãoDefinido _STDDEF_H
#Defina _STDDEF_H

Tipo __SIZE_TYPE__ size_t;
Tipo __PTRDIFF_TYPE__ ssize_t;
Tipo __WCHAR_TYPE__ wchar_t;
Tipo __PTRDIFF_TYPE__ ptrdiff_t;
Tipo __PTRDIFF_TYPE__ intptr_t;
Tipo __SIZE_TYPE__ uintptr_t;

#SeNãoDefinido __int8_t_defined
#Defina __int8_t_defined
Tipo Bilateral Caractere int8_t;
Tipo Bilateral Curto Inteiro int16_t;
Tipo Bilateral Inteiro int32_t;
#SeDefinido __LP64__
Tipo Bilateral Longo Inteiro int64_t;
#Senão
Tipo Bilateral Longo Longo Inteiro int64_t;
#FimSe
Tipo Natural Caractere uint8_t;
Tipo Natural Curto Inteiro uint16_t;
Tipo Natural Inteiro uint32_t;
#SeDefinido __LP64__
Tipo Natural Longo Inteiro uint64_t;
#Senão
Tipo Natural Longo Longo Inteiro uint64_t;
#FimSe
#FimSe

#SeNãoDefinido NULL
#Defina NULL ((Vazio*)0)
#FimSe

#Defina offsetof(type, field) ((size_t)&((type *)0)->field)

Vazio *alloca(size_t size);

#FimSe

/* Older glibc require a wint_t from <stddef.h> (when requested
   by __need_wint_t, as otherwise stddef.h isn't allowed to
   Defina this type).   Note that this must be outside the normal
   _STDDEF_H guard, so that it works even when we've included the file
   already (without requiring wint_t).  Some other libs Defina _WINT_T
   Se they've already provided that type, so we can use that as guard.
   CTEC defines __WINT_TYPE__ Para us.  */
#Se Definido (__need_wint_t)
#SeNãoDefinido _WINT_T
#Defina _WINT_T
Tipo __WINT_TYPE__ wint_t;
#FimSe
#Esqueça __need_wint_t
#FimSe
