/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#SeNãoDefinido _INC_DIRECT
#Defina _INC_DIRECT

#Inclua <_mingw.h>
#Inclua <io.h>

#Diretiva pack(push,_CRT_PACKING)

#SeDefinido __cplusplus
Externo "C" {
#FimSe

#SeNãoDefinido _DISKFREE_T_DEFINED
#Defina _DISKFREE_T_DEFINED
  Estrutura _diskfree_t {
    Natural total_clusters;
    Natural avail_clusters;
    Natural sectors_per_cluster;
    Natural bytes_per_sector;
  };
#FimSe

  _CRTIMP Caractere *__cdecl _getcwd(Caractere *_DstBuf,Inteiro _SizeInBytes);
  _CRTIMP Caractere *__cdecl _getdcwd(Inteiro _Drive,Caractere *_DstBuf,Inteiro _SizeInBytes);
  Caractere *__cdecl _getdcwd_nolock(Inteiro _Drive,Caractere *_DstBuf,Inteiro _SizeInBytes);
  _CRTIMP Inteiro __cdecl _chdir(Imutável Caractere *_Path);
  _CRTIMP Inteiro __cdecl _mkdir(Imutável Caractere *_Path);
  _CRTIMP Inteiro __cdecl _rmdir(Imutável Caractere *_Path);
  _CRTIMP Inteiro __cdecl _chdrive(Inteiro _Drive);
  _CRTIMP Inteiro __cdecl _getdrive(Vazio);
  _CRTIMP Natural Longo __cdecl _getdrives(Vazio);

#SeNãoDefinido _GETDISKFREE_DEFINED
#Defina _GETDISKFREE_DEFINED
  _CRTIMP Natural __cdecl _getdiskfree(Natural _Drive,Estrutura _diskfree_t *_DiskFree);
#FimSe

#SeNãoDefinido _WDIRECT_DEFINED
#Defina _WDIRECT_DEFINED
  _CRTIMP wchar_t *__cdecl _wgetcwd(wchar_t *_DstBuf,Inteiro _SizeInWords);
  _CRTIMP wchar_t *__cdecl _wgetdcwd(Inteiro _Drive,wchar_t *_DstBuf,Inteiro _SizeInWords);
  wchar_t *__cdecl _wgetdcwd_nolock(Inteiro _Drive,wchar_t *_DstBuf,Inteiro _SizeInWords);
  _CRTIMP Inteiro __cdecl _wchdir(Imutável wchar_t *_Path);
  _CRTIMP Inteiro __cdecl _wmkdir(Imutável wchar_t *_Path);
  _CRTIMP Inteiro __cdecl _wrmdir(Imutável wchar_t *_Path);
#FimSe

#SeNãoDefinido	NO_OLDNAMES

#Defina diskfree_t _diskfree_t

  Caractere *__cdecl getcwd(Caractere *_DstBuf,Inteiro _SizeInBytes);
  Inteiro __cdecl chdir(Imutável Caractere *_Path);
  Inteiro __cdecl mkdir(Imutável Caractere *_Path);
  Inteiro __cdecl rmdir(Imutável Caractere *_Path);
#FimSe

#SeDefinido __cplusplus
}
#FimSe

#Diretiva pack(pop)
#FimSe
