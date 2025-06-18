/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#SeNãoDefinido _INC_CONIO
#Defina _INC_CONIO

#Inclua <_mingw.h>

#SeDefinido __cplusplus
Externo "C" {
#FimSe

  _CRTIMP Caractere *_cgets(Caractere *_Buffer);
  _CRTIMP Inteiro __cdecl _cprintf(Constante Caractere *_Format,...);
  _CRTIMP Inteiro __cdecl _cputs(Constante Caractere *_Str);
  _CRTIMP Inteiro __cdecl _cscanf(Constante Caractere *_Format,...);
  _CRTIMP Inteiro __cdecl _cscanf_l(Constante Caractere *_Format,_locale_t _Locale,...);
  _CRTIMP Inteiro __cdecl _getch(Vazio);
  _CRTIMP Inteiro __cdecl _getche(Vazio);
  _CRTIMP Inteiro __cdecl _vcprintf(Constante Caractere *_Format,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _cprintf_p(Constante Caractere *_Format,...);
  _CRTIMP Inteiro __cdecl _vcprintf_p(Constante Caractere *_Format,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _cprintf_l(Constante Caractere *_Format,_locale_t _Locale,...);
  _CRTIMP Inteiro __cdecl _vcprintf_l(Constante Caractere *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _cprintf_p_l(Constante Caractere *_Format,_locale_t _Locale,...);
  _CRTIMP Inteiro __cdecl _vcprintf_p_l(Constante Caractere *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _kbhit(Vazio);

#Se Definido(_X86_) && !Definido(__x86_64)
  Inteiro __cdecl _inp(Natural Curto);
  Natural Curto __cdecl _inpw(Natural Curto);
  Natural Longo __cdecl _inpd(Natural Curto);
  Inteiro __cdecl _outp(Natural Curto,Inteiro);
  Natural Curto __cdecl _outpw(Natural Curto,Natural Curto);
  Natural Longo __cdecl _outpd(Natural Curto,Natural Longo);
#FimSe

  _CRTIMP Inteiro __cdecl _putch(Inteiro _Ch);
  _CRTIMP Inteiro __cdecl _ungetch(Inteiro _Ch);
  _CRTIMP Inteiro __cdecl _getch_nolock(Vazio);
  _CRTIMP Inteiro __cdecl _getche_nolock(Vazio);
  _CRTIMP Inteiro __cdecl _putch_nolock(Inteiro _Ch);
  _CRTIMP Inteiro __cdecl _ungetch_nolock(Inteiro _Ch);

#SeNãoDefinido _WCONIO_DEFINED
#Defina _WCONIO_DEFINED

#SeNãoDefinido WEOF
#Defina WEOF (wint_t)(0xFFFF)
#FimSe

  _CRTIMP wchar_t *_cgetws(wchar_t *_Buffer);
  _CRTIMP wint_t __cdecl _getwch(Vazio);
  _CRTIMP wint_t __cdecl _getwche(Vazio);
  _CRTIMP wint_t __cdecl _putwch(wchar_t _WCh);
  _CRTIMP wint_t __cdecl _ungetwch(wint_t _WCh);
  _CRTIMP Inteiro __cdecl _cputws(Constante wchar_t *_String);
  _CRTIMP Inteiro __cdecl _cwprintf(Constante wchar_t *_Format,...);
  _CRTIMP Inteiro __cdecl _cwscanf(Constante wchar_t *_Format,...);
  _CRTIMP Inteiro __cdecl _cwscanf_l(Constante wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP Inteiro __cdecl _vcwprintf(Constante wchar_t *_Format,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _cwprintf_p(Constante wchar_t *_Format,...);
  _CRTIMP Inteiro __cdecl _vcwprintf_p(Constante wchar_t *_Format,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _cwprintf_l(Constante wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP Inteiro __cdecl _vcwprintf_l(Constante wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP Inteiro __cdecl _cwprintf_p_l(Constante wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP Inteiro __cdecl _vcwprintf_p_l(Constante wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP wint_t __cdecl _putwch_nolock(wchar_t _WCh);
  _CRTIMP wint_t __cdecl _getwch_nolock(Vazio);
  _CRTIMP wint_t __cdecl _getwche_nolock(Vazio);
  _CRTIMP wint_t __cdecl _ungetwch_nolock(wint_t _WCh);
#FimSe

#SeNãoDefinido	NO_OLDNAMES
  Caractere *__cdecl cgets(Caractere *_Buffer);
  Inteiro __cdecl cprintf(Constante Caractere *_Format,...);
  Inteiro __cdecl cputs(Constante Caractere *_Str);
  Inteiro __cdecl cscanf(Constante Caractere *_Format,...);
  Inteiro __cdecl getch(Vazio);
  Inteiro __cdecl getche(Vazio);
  Inteiro __cdecl kbhit(Vazio);
  Inteiro __cdecl putch(Inteiro _Ch);
  Inteiro __cdecl ungetch(Inteiro _Ch);

#Se (Definido(_X86_) && !Definido(__x86_64))
  Inteiro __cdecl inp(Natural Curto);
  Natural Curto __cdecl inpw(Natural Curto);
  Inteiro __cdecl outp(Natural Curto,Inteiro);
  Natural Curto __cdecl outpw(Natural Curto,Natural Curto);
#FimSe

  /* I/O intrin functions.  */
  __CRT_INLINE Natural Caractere __inbyte(Natural Curto Port)
  {
      Natural Caractere value;
      Montador Volátil ("inb %w1,%b0"
          : "=a" (value)
          : "Nd" (Port));
      Retorne value;
  }
  __CRT_INLINE Natural Curto __inword(Natural Curto Port)
  {
      Natural Curto value;
      Montador Volátil ("inw %w1,%w0"
          : "=a" (value)
          : "Nd" (Port));
      Retorne value;
  }
  __CRT_INLINE Natural Longo __indword(Natural Curto Port)
  {
      Natural Longo value;
      Montador Volátil ("inl %w1,%0"
          : "=a" (value)
          : "Nd" (Port));
      Retorne value;
  }
  __CRT_INLINE Vazio __outbyte(Natural Curto Port,Natural Caractere Data)
  {
      Montador Volátil ("outb %b0,%w1"
          :
          : "a" (Data), "Nd" (Port));
  }
  __CRT_INLINE Vazio __outword(Natural Curto Port,Natural Curto Data)
  {
      Montador Volátil ("outw %w0,%w1"
          :
          : "a" (Data), "Nd" (Port));
  }
  __CRT_INLINE Vazio __outdword(Natural Curto Port,Natural Longo Data)
  {
      Montador Volátil ("outl %0,%w1"
          :
          : "a" (Data), "Nd" (Port));
  }
  __CRT_INLINE Vazio __inbytestring(Natural Curto Port,Natural Caractere *Buffer,Natural Longo Count)
  {
	Montador Volátil (
		"cld ; rep ; insb " 
		: "=D" (Buffer), "=c" (Count)
		: "d"(Port), "0"(Buffer), "1" (Count)
		);
  }
  __CRT_INLINE Vazio __inwordstring(Natural Curto Port,Natural Curto *Buffer,Natural Longo Count)
  {
	Montador Volátil (
		"cld ; rep ; insw " 
		: "=D" (Buffer), "=c" (Count)
		: "d"(Port), "0"(Buffer), "1" (Count)
		);
  }
  __CRT_INLINE Vazio __indwordstring(Natural Curto Port,Natural Longo *Buffer,Natural Longo Count)
  {
	Montador Volátil (
		"cld ; rep ; insl " 
		: "=D" (Buffer), "=c" (Count)
		: "d"(Port), "0"(Buffer), "1" (Count)
		);
  }

  __CRT_INLINE Vazio __outbytestring(Natural Curto Port,Natural Caractere *Buffer,Natural Longo Count)
  {
      Montador Volátil (
          "cld ; rep ; outsb " 
          : "=S" (Buffer), "=c" (Count)
          : "d"(Port), "0"(Buffer), "1" (Count)
          );
  }
  __CRT_INLINE Vazio __outwordstring(Natural Curto Port,Natural Curto *Buffer,Natural Longo Count)
  {
      Montador Volátil (
          "cld ; rep ; outsw " 
          : "=S" (Buffer), "=c" (Count)
          : "d"(Port), "0"(Buffer), "1" (Count)
          );
  }
  __CRT_INLINE Vazio __outdwordstring(Natural Curto Port,Natural Longo *Buffer,Natural Longo Count)
  {
      Montador Volátil (
          "cld ; rep ; outsl " 
          : "=S" (Buffer), "=c" (Count)
          : "d"(Port), "0"(Buffer), "1" (Count)
          );
  }

  __CRT_INLINE Natural __int64 __readcr0(Vazio)
  {
      Natural __int64 value;
      Montador Volátil (
          "mov %%cr0, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }
 
  /* Register sizes are different between 32/64 bit mode. So we have to Faça this Itere _WIN64 and _WIN32
     separately.  */
 
#SeDefinido _WIN64
  __CRT_INLINE Vazio __writecr0(Natural __int64 Data)
  {
   Montador Volátil (
       "mov %[Data], %%cr0"
       :
       : [Data] "q" (Data)
       : "memory");
  }
 
  __CRT_INLINE Natural __int64 __readcr2(Vazio)
  {
      Natural __int64 value;
      Montador Volátil (
          "mov %%cr2, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr2(Natural __int64 Data)
 {
   Montador Volátil (
       "mov %[Data], %%cr2"
       :
       : [Data] "q" (Data)
       : "memory");
 }
 
  __CRT_INLINE Natural __int64 __readcr3(Vazio)
  {
      Natural __int64 value;
      Montador Volátil (
          "mov %%cr3, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr3(Natural __int64 Data)
 {
   Montador Volátil (
       "mov %[Data], %%cr3"
       :
       : [Data] "q" (Data)
       : "memory");
 }
 
  __CRT_INLINE Natural __int64 __readcr4(Vazio)
  {
      Natural __int64 value;
      Montador Volátil (
          "mov %%cr4, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr4(Natural __int64 Data)
 {
     Montador Volátil (
         "mov %[Data], %%cr4"
         :
         : [Data] "q" (Data)
         : "memory");
 }
 
  __CRT_INLINE Natural __int64 __readcr8(Vazio)
  {
      Natural __int64 value;
      Montador Volátil (
          "mov %%cr8, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr8(Natural __int64 Data)
 {
   Montador Volátil (
       "mov %[Data], %%cr8"
       :
       : [Data] "q" (Data)
       : "memory");
 }
 
#SenãoSe Definido(_WIN32)

  __CRT_INLINE Vazio __writecr0(Natural Data)
  {
    Montador Volátil (
       "mov %[Data], %%cr0"
       :
       : [Data] "q" (Data)
       : "memory");
  }
 
  __CRT_INLINE Natural Longo __readcr2(Vazio)
  {
      Natural Longo value;
      Montador Volátil (
          "mov %%cr2, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr2(Natural Data)
 {
   Montador Volátil (
       "mov %[Data], %%cr2"
       :
       : [Data] "q" (Data)
       : "memory");
 }
 
  __CRT_INLINE Natural Longo __readcr3(Vazio)
  {
      Natural Longo value;
      Montador Volátil (
          "mov %%cr3, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr3(Natural Data)
 {
   Montador Volátil (
       "mov %[Data], %%cr3"
       :
       : [Data] "q" (Data)
       : "memory");
 }
 
  __CRT_INLINE Natural Longo __readcr4(Vazio)
  {
      Natural Longo value;
      Montador Volátil (
          "mov %%cr4, %[value]" 
          : [value] "=q" (value));
      Retorne value;
  }

 __CRT_INLINE Vazio __writecr4(Natural Data)
 {
     Montador Volátil (
         "mov %[Data], %%cr4"
         :
         : [Data] "q" (Data)
         : "memory");
 }
 
 __CRT_INLINE Natural Longo __readcr8(Vazio)
 {
   Natural Longo value;      Montador Volátil (
          "mov %%cr8, %[value]" 
          : [value] "=q" (value));
     Retorne value;
 }

 __CRT_INLINE Vazio __writecr8(Natural Data)
 {
   Montador Volátil (
       "mov %[Data], %%cr8"
       :
       : [Data] "q" (Data)
       : "memory");
 }
 
#FimSe

  __CRT_INLINE Natural __int64 __readmsr(Natural Longo msr)
  {
      Natural __int64 val1, val2;
       Montador Volátil(
           "rdmsr"
           : "=a" (val1), "=d" (val2)
           : "c" (msr));
      Retorne val1 | (val2 << 32);
  }

 __CRT_INLINE Vazio __writemsr (Natural Longo msr, Natural __int64 Value)
 {
    Natural Longo val1 = Value, val2 = Value >> 32;
   Montador Volátil (
       "wrmsr"
       :
       : "c" (msr), "a" (val1), "d" (val2));
 }
 
  __CRT_INLINE Natural __int64 __rdtsc(Vazio)
  {
      Natural __int64 val1, val2;
      Montador Volátil (
          "rdtsc" 
          : "=a" (val1), "=d" (val2));
      Retorne val1 | (val2 << 32);
  }

  __CRT_INLINE Vazio __cpuid(Inteiro CPUInfo[4], Inteiro InfoType)
  {
      Montador Volátil (
          "cpuid"
          : "=a" (CPUInfo [0]), "=b" (CPUInfo [1]), "=c" (CPUInfo [2]), "=d" (CPUInfo [3])
          : "a" (InfoType));
  }

#FimSe

#SeDefinido __cplusplus
}
#FimSe

#Inclua <sec_api/conio_s.h>

#FimSe
