/**
 * @file include/base_library/_platform.h
 * @author ChenPi11
 * @copyright Copyright (C) 2023
 * @date 2023-1-31
 * @language C
 * @brief C++ Plus C platform header
 * @see https://sourceforge.net/p/predef/wiki/OperatingSystems/
 */
#ifndef _CPPP_BASE_PLATFORM_H_
#define _CPPP_BASE_PLATFORM_H_

#include "_cpppdefines.h"

//Standard C Version

//C90 or C89
#define __stdc_C90 0L
//C94
#define __stdc_C94 199409L
//C99
#define __stdc_C99 199901L
//C11
#define __stdc_C11 201112L
//C18
#define __stdc_C18 201710L

#ifndef __STDC_VERSION__
//Standard C Version :C89 or C90
#define __cppp_c_version__ 0L
#else
//Standard C Version
#define __cppp_c_version__ __STDC_VERSION__
#endif


//Standard C++ Version

//C Language
#define __cplusplus_c__     0L
//C++98
#define __cplusplus_cxx98   199711L
//C++11
#define __cplusplus_cxx11__ 201103L
//C++14
#define __cplusplus_cxx14__ 201402L
//C++17
#define __cplusplus_cxx17__ 201703L
//C++20
#define __cplusplus_cxx20__ 202002L

#ifdef _MSVC_LANG
//MSVC C++ Version support
#define __cplusplus__ _MSVC_LANG
#elif defined(__cplusplus)
//C++ Version
#define __cplusplus__ __cplusplus
#else
//no C++
#define __cplusplus__ 0L
#endif


//Operating systems

//no AIX
#define __has_aix__ 0
//no Android
#define __has_android__ 0
//no Amdahl UTS
#define __has_amdahl_uts__ 0
//no AmigaOS
#define __has_amiga__ 0
//no Apollo AEGIS
#define __has_aegis__ 0
//no Apollo Domain/OS
#define __has_apollo__ 0
//no BeOS
#define __has_beos__ 0
//no Blue Gene
#define __has_blue_gene__ 0
//no BSD
#define __has_bsd__ 0
//no ConvexOS
#define __has_convex__ 0
//no Cygwin Environment
#define __has_cygwin__ 0
//no DG/UX
#define __has_dgux__ 0
//no DYNIX/ptx
#define __has_dynix_ptx__ 0
//no eCos
#define __has_ecos__ 0
//no EMX Environment
#define __has_emx__ 0
//no HI-UX MPP
#define __has_hiux_mpp__ 0
//no HP-US
#define __has_hpux__ 0
//no IBM OS/400
#define __has_os_400__ 0
//no INTEGRITY
#define __has_integrity__ 0
//no Interix Environment
#define __has_interix__ 0
//no IRIX
#define __has_irix__ 0
//no Linux
#define __has_linux__ 0
//no LynxOS
#define __has_lunx__ 0
//no MacOS
#define __has_mac_os__ 0
//no Microware OS-9
#define __has_microware_os_9__ 0
//no MINIX
#define __has_minix__ 0
//no MinGW
#define __has_mingw__ 0
//no MorphOS
#define __has_morph_os__ 0
//no MPE/iX
#define __has_mpe_ix__ 0
//no MSDOS (C++ Plus C unsupport platform)
#define __has_dos__ 0
//no NonStop
#define __has_non_stop__ 0
//no Nucleus RTOS
#define __has_nucleus__ 0
//no OS/2
#define __has_os2__ 0
//no Palm OS
#define __has_palmos__ 0
//no EPLAN9
#define __has_eplan9__ 0
//no Pyramid DC/OSx
#define __has_pyr__ 0
//no QNX
#define __has_qnx__ 0
//no Reliant UNIX
#define __has_reliant_unix__ 0
//no sun
#define __has_sun__ 0
//no Solaris
#define __has_solaris__ 0
//no SunOS
#define __has_sunos__ 0
//no Stratus VOS
#define __has_vos__ 0
//no SVR4 Environment
#define __has_svr4__ 0
//no Syllable
#define __has_syllable__ 0
//no Symbian OS
#define __has_symbianos__ 0
//no OSF/1
#define __has_ofs1__ 0
//no Ultrix
#define __has_ultrix__ 0
//no UNICOS
#define __has_unicos__ 0
//no UNICOS/mp
#define __has_unicos_mp__ 0
//no UNIX Enviroment
#define __has_unix__ 0
//no UnixWare
#define __has_unix_ware__ 0
//no U/Win Environment
#define __has_uwin__ 0
//no VMS
#define __has_vms__ 0
//no VxWorks
#define __has_vxworks__ 0
//no Windows
#define __has_windows__ 0
//no Windows CE
#define __has_windows_ce__ 0
//no Wind/U Environment
#define __has_windu__ 0
//no z/OS
#define __has_zos__ 0

#if defined(_AIX) || defined(__TOS_AIX__)
#undef __has_aix__
//has AIX
#define __has_aix__ 1
#endif
#if defined(_ANDROID_)
#undef __has_android__
//has Android
#define __has_android__ 1
#endif
#if defined(UTS)
#undef __has_amdahl_uts__
//has Amdahl UTS
#define __has_amdahl_uts__ 1
#endif
#if defined(AMIGA) || defined(__amigaos__)
#undef __has_amiga__
//has AmigaOS
#define __has_amiga__ 1
#endif
#if defined(aegis)
#undef __has_aegis__
//has Apollo AEGIS
#define __has_aegis__ 1
#endif
#if defined(apollo)
#undef __has_apollo__
//has Apollo Domain/OS
#define __has_apollo__ 1
#endif
#if defined(__BEOS__)
#undef __has_beos__
//has BeOS
#define __has_beos__ 1
#endif
#if defined(__bg__) || defined(__TOS_BGQ__) || defined(__bgq__) || defined(__THW_BLUEGENE__)
#undef __has_blue_gene__
//has Blue Gene
#define __has_blue_gene__ 1
#endif
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__DragonFly__)
#undef __has_bsd__
//has BSD
#define __has_bsd__ 1
#endif
#if defined(__convex__)
#undef __has_convex__
//has ConvexOS
#define __has_convex__ 1
#endif
#if defined(__CYGWIN__)
#undef __has_cygwin__
//has Cygwin Environment
#define __has_cygwin__ 1
#endif
#if defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
#undef __has_dgux__
//has DG/UX
#define __has_dgux__ 1
#endif
#if defined(_SEQUENT_) || defined(sequent)
#undef __has_dynix_ptx__
//has DYNIX/ptx
#define __has_dynix_ptx__ 1
#endif
#if defined(__ECOS)
#undef __has_ecos__
//has eCos
#define __has_ecos__ 1
#endif
#if defined(__EMX__)
#undef __has_emx__
//has EMX Environment
#define __has_emx__ 1
#endif
#if defined(__hiuxmpp)
#undef __has_hiux_mpp__
//has HI-UX MPP
#define __has_hiux_mpp__ 1
#endif
#if defined(_hpux) || defined(hpux) || defined(__hpux)
#undef __has_hpux__
//has HP-US
#define __has_hpux__ 1
#endif
#if defined(__OS400__) || defined(__OS400_TGTVRM__)
#undef __has_os_400__
//has IBM OS/400
#define __has_os_400__ 1
#endif
#if defined(__INTEGRITY)
#undef __has_integrity__
//has INTEGRITY
#define __has_integrity__ 1
#endif
#if defined(__INTERIX)
#undef __has_interix__
//has Interix Environment
#define __has_interix__ 1
#endif
#if defined(sgi) || defined(__sgi)
#undef __has_irix__
//has IRIX
#define __has_irix__ 1
#endif
#if defined(__linux__) || defined(linux) || defined(__linux) || defined(__nividia_fk_you__)
#undef __has_linux__
//has Linux
#define __has_linux__ 1
#endif
#if defined(__Lynx__)
#undef __has_lunx__
//has LynxOS
#define __has_lunx__ 1
#endif
#if defined(macintosh) || defined(Macintosh) || defined(__APPLE__) || defined(__MACH__)
#undef __has_mac_os__
//has MacOS
#define __has_mac_os__ 1
#endif
#if defined(__OS9000) || defined(_OSK)
#undef __has_microware_os_9__
//has Microware OS-9
#define __has_microware_os_9__ 1
#endif
#if defined(__minix)
#undef __has_minix__
//has MINIX
#define __has_minix__ 1
#endif
#if defined(__MINGW32__) || defined(__MINGW64__)
//has MinGW
#define __has_mingw__ 1
#endif
#if defined(__MORPHOS__)
#undef __has_morph_os__
//has MorphOS
#define __has_morph_os__ 1
#endif
#if defined(mpeix) || defined(__mpexl)
#undef __has_mpe_ix__
//has MPE/iX
#define __has_mpe_ix__ 1
#endif
#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(	__DOS__)
#undef __has_dos__
//has MSDOS (C++ Plus C unsupport platform)
#define __has_dos__ 1
#endif
#if defined(__TANDEM)
#undef __has_non_stop__
//has NonStop
#define __has_non_stop__ 1
#endif
#if defined(__nucleus__)
#undef __has_nucleus__
//has Nucleus RTOS
#define __has_nucleus__ 1
#endif
#if defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
#undef __has_os2__
//has OS/2
#define __has_os2__ 1
#endif
#if defined(__palmos__)
#undef __has_palmos__
//has Palm OS
#define __has_palmos__ 1
#endif
#if defined(EPLAN9)
#undef __has_eplan9__
//has EPLAN9
#define __has_eplan9__ 1
#endif
#if defined(pyr)
#undef __has_pyr__
//has Pyramid DC/OSx
#define __has_pyr__ 1
#endif
#if defined(__QNX__) || defined(__QNXNTO__)
#undef __has_qnx__
//has QNX
#define __has_qnx__ 1
#endif
#if defined(sinux)
#undef __has_reliant_unix__
//has Reliant UNIX
#define __has_reliant_unix__ 1
#endif
#if defined(sun) || defined(__sun)
#undef __has_sun__
//has sun
#define __has_sun__ 1
#if defined(__SVR4) || defined(__svr4__)
#undef __has_solaris__
//has Solaris
#define __has_solaris__ 1
#else
#undef __has_sunos__
//has SunOS
#define __has_sunos__ 1
#endif
#endif
#if defined(__VOS__)
#undef __has_vos__
//has Stratus VOS
#define __has_vos__ 1
#endif
#if defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4)
#undef __has_svr4__
//has SVR4 Environment
#define __has_svr4__ 1
#endif
#if defined(__SYLLABLE__)
#undef __has_syllable__
//has Syllable
#define __has_syllable__ 1
#endif
#if defined(__SYMBIAN32__)
#undef __has_symbianos__
//has Symbian OS
#define __has_symbianos__ 1
#endif
#if defined(__osf__) || defined(__osf)
#undef __has_ofs1__
//has OSF/1
#define __has_ofs1__ 1
#endif
#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || (defined(unix) && defined(vax))
#undef __has_ultrix__
//has Ultrix
#define __has_ultrix__ 1
#endif
#if defined(_UNICOS)
#undef __has_unicos__
//has UNICOS
#define __has_unicos__ 1
#endif
#if defined(_CRAY) || defined(__crayx1)
#undef __has_unicos_mp__
//has UNICOS/mp
#define __has_unicos_mp__ 1
#endif
#if defined(__unix__) || defined(__unix)
#undef __has_unix__
//has UNIX Enviroment
#define __has_unix__ 1
#endif
#if defined(sco) || defined(_UNIXWARE7)
#undef __has_unix_ware__
//has UnixWare
#define __has_unix_ware__ 1
#endif
#if defined(_UWIN)
#undef __has_uwin__
//has U/Win Environment
#define __has_uwin__ 1
#endif
#if defined(VMS) || defined(__VMS) || defined(__VMS_VER)
#undef __has_vms__
//has VMS
#define __has_vms__ 1
#endif
#if defined(__VXWORKS__) || defined(__vxworks)
#undef __has_vxworks__
//has VxWorks
#define __has_vxworks__ 1
#endif
#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#undef __has_windows__
//has Windows
#define __has_windows__ 1
#endif
#if defined(_WIN32_WCE)
#undef __has_windows_ce__
//has Windows CE
#define __has_windows_ce__ 1
#endif
#if defined(_WINDU_SOURCE)
#undef __has_windu__
//has Wind/U Environment
#define __has_windu__ 1
#endif
#if defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
#undef __has_zos__
//has z/OS
#define __has_zos__ 1
#endif


//Compilers

#if defined(__GNUC__)
//GCC C/C++ compiler
#define __compiler__ "GNU C/C++"
//GCC C/C++ compiler
#define __wcompiler__ L"GNU C/C++"
#elif defined(_MSC_VER)
//Microsoft Visual C++
#define __compiler__ "Microsoft Visual C++"
//Microsoft Visual C++
#define __wcompiler__ L"Microsoft Visual C++"
#else
//unknown C/C++ Compiler
#define __compiler__ "unknown"
#define __wcompiler__ L"unknown"
#endif

__CPPPBASE

/**
 * @date 2023-1-30
 * @brief C++ Plus C platform check
 */
extern int _cppp_platform_check(void);

__END_CPPPBASE

#endif
