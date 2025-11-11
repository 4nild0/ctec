/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#SeNãoDefinido _INC_PROCESS
#Defina _INC_PROCESS

#Inclua <_mingw.h>

/* Includes a definition of _pid_t and pid_t */
#Inclua <sys/types.h>

#SeNãoDefinido _POSIX_
#SeDefinido __cplusplus
Externo "C" {
#FimSe

#Defina _P_WAIT 0
#Defina _P_NOWAIT 1
#Defina _OLD_P_OVERLAY 2
#Defina _P_NOWAITO 3
#Defina _P_DETACH 4
#Defina _P_OVERLAY 2

#Defina _WAIT_CHILD 0
#Defina _WAIT_GRANDCHILD 1

  _CRTIMP uintptr_t __cdecl _beginthread(Vazio (__cdecl *_StartAddress) (Vazio *),Natural _StackSize,Vazio *_ArgList);
  _CRTIMP Vazio __cdecl _endthread(Vazio);
  _CRTIMP uintptr_t __cdecl _beginthreadex(Vazio *_Security,Natural _StackSize,Natural (__stdcall *_StartAddress) (Vazio *),Vazio *_ArgList,Natural _InitFlag,Natural *_ThrdAddr);
  _CRTIMP Vazio __cdecl _endthreadex(Natural _Retval);

#SeNãoDefinido _CRT_TERMINATE_DEFINED
#Defina _CRT_TERMINATE_DEFINED
  Vazio __cdecl __MINGW_NOTHROW exit(Inteiro _Code) __MINGW_ATTRIB_NORETURN;
  _CRTIMP Vazio __cdecl __MINGW_NOTHROW _exit(Inteiro _Code) __MINGW_ATTRIB_NORETURN;

#Diretiva push_macro("abort")
#Esqueça abort
  Vazio __cdecl __declspec(noreturn) abort(Vazio);
#Diretiva pop_macro("abort")

#FimSe

  _CRTIMP Vazio __cdecl __MINGW_NOTHROW _cexit(Vazio);
  _CRTIMP Vazio __cdecl __MINGW_NOTHROW _c_exit(Vazio);
  _CRTIMP Inteiro __cdecl _getpid(Vazio);
  _CRTIMP intptr_t __cdecl _cwait(Inteiro *_TermStat,intptr_t _ProcHandle,Inteiro _Action);
  _CRTIMP intptr_t __cdecl _execl(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _execle(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _execlp(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _execlpe(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _execv(Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _execve(Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList,Imutável Caractere *Imutável *_Env);
  _CRTIMP intptr_t __cdecl _execvp(Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _execvpe(Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList,Imutável Caractere *Imutável *_Env);
  _CRTIMP intptr_t __cdecl _spawnl(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _spawnle(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _spawnlp(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _spawnlpe(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  _CRTIMP intptr_t __cdecl _spawnv(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _spawnve(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList,Imutável Caractere *Imutável *_Env);
  _CRTIMP intptr_t __cdecl _spawnvp(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _spawnvpe(Inteiro _Mode,Imutável Caractere *_Filename,Imutável Caractere *Imutável *_ArgList,Imutável Caractere *Imutável *_Env);

#SeNãoDefinido _CRT_SYSTEM_DEFINED
#Defina _CRT_SYSTEM_DEFINED
  Inteiro __cdecl system(Imutável Caractere *_Command);
#FimSe

#SeNãoDefinido _WPROCESS_DEFINED
#Defina _WPROCESS_DEFINED
  _CRTIMP intptr_t __cdecl _wexecl(Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wexecle(Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wexeclp(Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wexeclpe(Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wexecv(Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _wexecve(Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList,Imutável wchar_t *Imutável *_Env);
  _CRTIMP intptr_t __cdecl _wexecvp(Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _wexecvpe(Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList,Imutável wchar_t *Imutável *_Env);
  _CRTIMP intptr_t __cdecl _wspawnl(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnle(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnlp(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnlpe(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnv(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _wspawnve(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList,Imutável wchar_t *Imutável *_Env);
  _CRTIMP intptr_t __cdecl _wspawnvp(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList);
  _CRTIMP intptr_t __cdecl _wspawnvpe(Inteiro _Mode,Imutável wchar_t *_Filename,Imutável wchar_t *Imutável *_ArgList,Imutável wchar_t *Imutável *_Env);
#SeNãoDefinido _CRT_WSYSTEM_DEFINED
#Defina _CRT_WSYSTEM_DEFINED
  _CRTIMP Inteiro __cdecl _wsystem(Imutável wchar_t *_Command);
#FimSe
#FimSe

  Vazio __cdecl __security_init_cookie(Vazio);
#Se (Definido(_X86_) && !Definido(__x86_64))
  Vazio __fastcall __security_check_cookie(uintptr_t _StackCookie);
  __declspec(noreturn) Vazio __cdecl __report_gsfailure(Vazio);
#Senão
  Vazio __cdecl __security_check_cookie(uintptr_t _StackCookie);
  __declspec(noreturn) Vazio __cdecl __report_gsfailure(uintptr_t _StackCookie);
#FimSe
  Externo uintptr_t __security_cookie;

  intptr_t __cdecl _loaddll(Caractere *_Filename);
  Inteiro __cdecl _unloaddll(intptr_t _Handle);
  Inteiro (__cdecl *__cdecl _getdllprocaddr(intptr_t _Handle,Caractere *_ProcedureName,intptr_t _Ordinal))(Vazio);

#SeDefinido _DECL_DLLMAIN
#SeDefinido _WINDOWS_
  WINBOOL WINAPI DllMain(HANDLE _HDllHandle,DWORD _Reason,LPVOID _Reserved);
  WINBOOL WINAPI _CRT_INIT(HANDLE _HDllHandle,DWORD _Reason,LPVOID _Reserved);
  WINBOOL WINAPI _wCRT_INIT(HANDLE _HDllHandle,DWORD _Reason,LPVOID _Reserved);
  Externo WINBOOL (WINAPI *Imutável _pRawDllMain)(HANDLE,DWORD,LPVOID);
#Senão
  Inteiro __stdcall DllMain(Vazio *_HDllHandle,Natural _Reason,Vazio *_Reserved);
  Inteiro __stdcall _CRT_INIT(Vazio *_HDllHandle,Natural _Reason,Vazio *_Reserved);
  Inteiro __stdcall _wCRT_INIT(Vazio *_HDllHandle,Natural _Reason,Vazio *_Reserved);
  Externo Inteiro (__stdcall *Imutável _pRawDllMain)(Vazio *,Natural,Vazio *);
#FimSe
#FimSe

#SeNãoDefinido	NO_OLDNAMES
#Defina P_WAIT _P_WAIT
#Defina P_NOWAIT _P_NOWAIT
#Defina P_OVERLAY _P_OVERLAY
#Defina OLD_P_OVERLAY _OLD_P_OVERLAY
#Defina P_NOWAITO _P_NOWAITO
#Defina P_DETACH _P_DETACH
#Defina WAIT_CHILD _WAIT_CHILD
#Defina WAIT_GRANDCHILD _WAIT_GRANDCHILD

  intptr_t __cdecl cwait(Inteiro *_TermStat,intptr_t _ProcHandle,Inteiro _Action);
#SeDefinido __GNUC__
  Inteiro __cdecl execl(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  Inteiro __cdecl execle(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  Inteiro __cdecl execlp(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  Inteiro __cdecl execlpe(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
#Senão
    intptr_t __cdecl execl(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  intptr_t __cdecl execle(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  intptr_t __cdecl execlp(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  intptr_t __cdecl execlpe(Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
#FimSe
  intptr_t __cdecl spawnl(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  intptr_t __cdecl spawnle(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  intptr_t __cdecl spawnlp(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  intptr_t __cdecl spawnlpe(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *_ArgList,...);
  Inteiro __cdecl getpid(Vazio);
#SeDefinido __GNUC__
  /* Those methods are predefined by gcc builtins to Retorne Inteiro. So to prevent
     stupid warnings, Defina them in POSIX way.  This is save, because those
     methods Faça not Retorne in success Caso, so that the Retorne value is not
     really dependent to its scalar width.  */
  Inteiro __cdecl execv(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[]);
  Inteiro __cdecl execve(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[],Imutável Caractere *Imutável _Env[]);
  Inteiro __cdecl execvp(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[]);
  Inteiro __cdecl execvpe(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[],Imutável Caractere *Imutável _Env[]);
#Senão
  intptr_t __cdecl execv(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[]);
  intptr_t __cdecl execve(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[],Imutável Caractere *Imutável _Env[]);
  intptr_t __cdecl execvp(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[]);
  intptr_t __cdecl execvpe(Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[],Imutável Caractere *Imutável _Env[]);
#FimSe
  intptr_t __cdecl spawnv(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[]);
  intptr_t __cdecl spawnve(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[],Imutável Caractere *Imutável _Env[]);
  intptr_t __cdecl spawnvp(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[]);
  intptr_t __cdecl spawnvpe(Inteiro,Imutável Caractere *_Filename,Imutável Caractere *Imutável _ArgList[],Caractere *Imutável _Env[]);
#FimSe

#SeDefinido __cplusplus
}
#FimSe
#FimSe
#FimSe
