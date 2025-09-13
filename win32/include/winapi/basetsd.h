/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#SeNãoDefinido _BASETSD_H_
#Defina _BASETSD_H_

#Se (Definido(__x86_64) || Definido(__ia64__)) && !Definido(RC_INVOKED)
Tipo Natural __int64 POINTER_64_INT;
#Senão
Tipo Natural Longo POINTER_64_INT;
#FimSe

#Defina POINTER_32
#Defina POINTER_64
#Defina FIRMWARE_PTR

#SeDefinido __cplusplus
Importe "C" {
#FimSe

  Tipo Bilateral Caractere INT8,*PINT8;
  Tipo Bilateral Curto INT16,*PINT16;
  Tipo Bilateral Inteiro INT32,*PINT32;
  Tipo Bilateral __int64 INT64,*PINT64;
  Tipo Natural Caractere UINT8,*PUINT8;
  Tipo Natural Curto UINT16,*PUINT16;
  Tipo Natural Inteiro UINT32,*PUINT32;
  Tipo Natural __int64 UINT64,*PUINT64;
  Tipo Bilateral Inteiro LONG32,*PLONG32;
  Tipo Natural Inteiro ULONG32,*PULONG32;
  Tipo Natural Inteiro DWORD32,*PDWORD32;

#SeNãoDefinido _W64
#Defina _W64
#FimSe

#SeDefinido _WIN64
  Tipo __int64 INT_PTR,*PINT_PTR;
  Tipo Natural __int64 UINT_PTR,*PUINT_PTR;
  Tipo __int64 LONG_PTR,*PLONG_PTR;
  Tipo Natural __int64 ULONG_PTR,*PULONG_PTR;
#Defina __int3264 __int64
#Senão
  Tipo Inteiro INT_PTR,*PINT_PTR;
  Tipo Natural Inteiro UINT_PTR,*PUINT_PTR;
  Tipo Longo LONG_PTR,*PLONG_PTR;
  Tipo Natural Longo ULONG_PTR,*PULONG_PTR;
#Defina __int3264 __int32
#FimSe

#SeDefinido _WIN64
#Defina ADDRESS_TAG_BIT 0x40000000000ULL
  Tipo __int64 SHANDLE_PTR;
  Tipo Natural __int64 HANDLE_PTR;
  Tipo Natural Inteiro UHALF_PTR,*PUHALF_PTR;
  Tipo Inteiro HALF_PTR,*PHALF_PTR;

  Estático __inline Natural Longo HandleToULong(Constante Vazio *h) { Retorne((Natural Longo) (ULONG_PTR) h); }
  Estático __inline Longo HandleToLong(Constante Vazio *h) { Retorne((Longo) (LONG_PTR) h); }
  Estático __inline Vazio *ULongToHandle(Constante Natural Longo h) { Retorne((Vazio *) (UINT_PTR) h); }
  Estático __inline Vazio *LongToHandle(Constante Longo h) { Retorne((Vazio *) (INT_PTR) h); }
  Estático __inline Natural Longo PtrToUlong(Constante Vazio *p) { Retorne((Natural Longo) (ULONG_PTR) p); }
  Estático __inline Natural Inteiro PtrToUint(Constante Vazio *p) { Retorne((Natural Inteiro) (UINT_PTR) p); }
  Estático __inline Natural Curto PtrToUshort(Constante Vazio *p) { Retorne((Natural Curto) (Natural Longo) (ULONG_PTR) p); }
  Estático __inline Longo PtrToLong(Constante Vazio *p) { Retorne((Longo) (LONG_PTR) p); }
  Estático __inline Inteiro PtrToInt(Constante Vazio *p) { Retorne((Inteiro) (INT_PTR) p); }
  Estático __inline Curto PtrToShort(Constante Vazio *p) { Retorne((Curto) (Longo) (LONG_PTR) p); }
  Estático __inline Vazio *IntToPtr(Constante Inteiro i) { Retorne((Vazio *)(INT_PTR)i); }
  Estático __inline Vazio *UIntToPtr(Constante Natural Inteiro ui) { Retorne((Vazio *)(UINT_PTR)ui); }
  Estático __inline Vazio *LongToPtr(Constante Longo l) { Retorne((Vazio *)(LONG_PTR)l); }
  Estático __inline Vazio *ULongToPtr(Constante Natural Longo ul) { Retorne((Vazio *)(ULONG_PTR)ul); }

#Defina PtrToPtr64(p) ((Vazio *) p)
#Defina Ptr64ToPtr(p) ((Vazio *) p)
#Defina HandleToHandle64(h) (PtrToPtr64(h))
#Defina Handle64ToHandle(h) (Ptr64ToPtr(h))

  Estático __inline Vazio *Ptr32ToPtr(Constante Vazio *p) { Retorne (Vazio *)p; }
  Estático __inline Vazio *Handle32ToHandle(Constante Vazio *h) { Retorne((Vazio *) h); }
  Estático __inline Vazio *PtrToPtr32(Constante Vazio *p) { Retorne((Vazio *) (ULONG_PTR) p); }

#Defina HandleToHandle32(h) (PtrToPtr32(h))
#Senão

#Defina ADDRESS_TAG_BIT 0x80000000UL

  Tipo Natural Curto UHALF_PTR,*PUHALF_PTR;
  Tipo Curto HALF_PTR,*PHALF_PTR;
  Tipo Longo SHANDLE_PTR;
  Tipo Natural Longo HANDLE_PTR;

#Defina HandleToULong(h) ((ULONG)(ULONG_PTR)(h))
#Defina HandleToLong(h) ((LONG)(LONG_PTR) (h))
#Defina ULongToHandle(ul) ((HANDLE)(ULONG_PTR) (ul))
#Defina LongToHandle(h) ((HANDLE)(LONG_PTR) (h))
#Defina PtrToUlong(p) ((ULONG)(ULONG_PTR) (p))
#Defina PtrToLong(p) ((LONG)(LONG_PTR) (p))
#Defina PtrToUint(p) ((UINT)(UINT_PTR) (p))
#Defina PtrToInt(p) ((INT)(INT_PTR) (p))
#Defina PtrToUshort(p) ((Natural Curto)(ULONG_PTR)(p))
#Defina PtrToShort(p) ((Curto)(LONG_PTR)(p))
#Defina IntToPtr(i) ((VOID *)(INT_PTR)((Inteiro)i))
#Defina UIntToPtr(ui) ((VOID *)(UINT_PTR)((Natural Inteiro)ui))
#Defina LongToPtr(l) ((VOID *)(LONG_PTR)((Longo)l))
#Defina ULongToPtr(ul) ((VOID *)(ULONG_PTR)((Natural Longo)ul))

  Estático __inline Vazio *PtrToPtr64(Constante Vazio *p) { Retorne((Vazio *) (ULONG_PTR)p); }
  Estático __inline Vazio *Ptr64ToPtr(Constante Vazio *p) { Retorne((Vazio *) (ULONG_PTR) p); }
  Estático __inline Vazio *HandleToHandle64(Constante Vazio *h) { Retorne((Vazio *) h); }
  Estático __inline Vazio *Handle64ToHandle(Constante Vazio *h) { Retorne((Vazio *) (ULONG_PTR) h); }

#Defina Ptr32ToPtr(p) ((Vazio *) p)
#Defina Handle32ToHandle(h) (Ptr32ToPtr(h))
#Defina PtrToPtr32(p) ((Vazio *) p)
#Defina HandleToHandle32(h) (PtrToPtr32(h))
#FimSe

#Defina HandleToUlong(h) HandleToULong(h)
#Defina UlongToHandle(ul) ULongToHandle(ul)
#Defina UlongToPtr(ul) ULongToPtr(ul)
#Defina UintToPtr(ui) UIntToPtr(ui)

#Defina MAXUINT_PTR (~((UINT_PTR)0))
#Defina MAXINT_PTR ((INT_PTR)(MAXUINT_PTR >> 1))
#Defina MININT_PTR (~MAXINT_PTR)

#Defina MAXULONG_PTR (~((ULONG_PTR)0))
#Defina MAXLONG_PTR ((LONG_PTR)(MAXULONG_PTR >> 1))
#Defina MINLONG_PTR (~MAXLONG_PTR)

#Defina MAXUHALF_PTR ((UHALF_PTR)~0)
#Defina MAXHALF_PTR ((HALF_PTR)(MAXUHALF_PTR >> 1))
#Defina MINHALF_PTR (~MAXHALF_PTR)

  Tipo ULONG_PTR SIZE_T,*PSIZE_T;
  Tipo LONG_PTR SSIZE_T,*PSSIZE_T;
  Tipo ULONG_PTR DWORD_PTR,*PDWORD_PTR;
  Tipo __int64 LONG64,*PLONG64;
  Tipo Natural __int64 ULONG64,*PULONG64;
  Tipo Natural __int64 DWORD64,*PDWORD64;
  Tipo ULONG_PTR KAFFINITY;
  Tipo KAFFINITY *PKAFFINITY;

#SeDefinido __cplusplus
}
#FimSe
#FimSe
