//https://sourceforge.net/p/predef/wiki/OperatingSystems/
#ifndef _CPPP_BASE_PLATFORM_H_
#define _CPPP_BASE_PLATFORM_H_

# define __cplusplus_c_     0L      //C Language
# define __cplusplus_cxx11_ 199711L //C++11
# define __cplusplus_cxx14_ 201402L //C++14
# define __cplusplus_cxx17_ 201703L //C++17
# define __cplusplus_cxx20_ 202002L //C++20

# ifdef _MSVC_LANG
      //MSVC C++ Version support
#     define __cplusplus__ _MSVC_LANG
# elif defined(__cplusplus)
      //C++ Version
#     define __cplusplus__ __cplusplus
# else
      //no C++
#     define __cplusplus__ 0L
# endif


#if defined(_AIX) || defined(__TOS_AIX__)
//has AIX
#define __has_aix__ 1
#endif
#if defined(_ANDROID_)
//has Android
#define __has_android__ 1
#endif
#if defined(UTS)
//has Amdahl UTS
#define __has_amdahl_uts__ 1
#endif
#if defined(AMIGA) || defined(__amigaos__)
//has AmigaOS
#define __has_amiga__ 1
#endif
#if defined(aegis)
//has Apollo AEGIS
#define __has_aegis__ 1
#endif
#if defined(apollo)
//has Apollo Domain/OS
#define __has_apollo__ 1
#endif
#if defined(__BEOS__)
//has BeOS
#define __has_beos__ 1
#endif
#if defined(__bg__) || defined(__TOS_BGQ__) || defined(__bgq__) || defined(__THW_BLUEGENE__)
//has Blue Gene
#define __has_blue_gene__ 1
#endif
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__DragonFly__)
//has BSD
#define __has_bsd__ 1
#endif
#if defined(__convex__)
//has ConvexOS
#define __has_convex__ 1
#endif
#if defined(__CYGWIN__)
//has Cygwin Environment
#define __has_cygwin__ 1
#endif
#if defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
//has DG/UX
#define __has_dgux__ 1
#endif
#if defined(_SEQUENT_) || defined(sequent)
//has DYNIX/ptx
#define __has_dynix_ptx__ 1
#endif
#if defined(__ECOS)
//has eCos
#define __has_ecos__ 1
#endif
#if defined(__EMX__)
//has EMX Environment
#define __has_emx__ 1
#endif
#if defined(__hiuxmpp)
//has HI-UX MPP
#define __has_hiux_mpp__ 1
#endif
#if defined(_hpux) || defined(hpux) || defined(__hpux)
//has HP-US
#define __has_hpux__ 1
#endif
#if defined(__OS400__) || defined(__OS400_TGTVRM__)
//has IBM OS/400
#define __has_os_400__ 1
#endif
#if defined(__INTEGRITY)
//has INTEGRITY
#define __has_integrity__ 1
#endif
#if defined(__INTERIX)
//has Interix Environment
#define __has_interix__ 1
#endif
#if defined(sgi) || defined(__sgi)
//has IRIX
#define __has_irix__ 1
#endif
#if defined(__linux__) || defined(linux) || defined(__linux) || defined(__nividia_fk_you__)
//has Linux
#define __has_linux__ 1
#endif
#if defined(__Lynx__)
//has LynxOS
#define __has_lunx__ 1
#endif
#if defined(macintosh) || defined(Macintosh) || defined(__APPLE__) || defined(__MACH__)
//has MacOS
#define __has_mac_os__ 1
#endif
#if defined(__OS9000) || defined(_OSK)
//has Microware OS-9
#define __has_microware_os_9__ 1
#endif
#if defined(__minix)
//has MINIX
#define __has_minix__ 1
#endif
#if defined(__MORPHOS__)
//has MorphOS
#define __has_morph_os__ 1
#endif
#if defined(mpeix) || defined(__mpexl)
//has MPE/iX
#define __has_mpe_ix__ 1
#endif
#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(	__DOS__)
//has MSDOS (C++ Plus C unsupport platform)
#define __has_dos__ 1
#endif
#if defined(__TANDEM)
//has NonStop
#define __has_non_stop__ 1
#endif
#if defined(__nucleus__)
//has Nucleus RTOS
#define __has_nucleus__ 1
#endif
#if defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
//has OS/2
#define __has_os2__ 1
#endif
#if defined(__palmos__)
//has Palm OS
#define __has_palmos__ 1
#endif
#if defined(EPLAN9)
//has EPLAN9
#define __has_eplan9__ 1
#endif
#if defined(pyr)
//has Pyramid DC/OSx
#define __has_pyr__ 1
#endif
#if defined(__QNX__) || defined(__QNXNTO__)
//has QNX
#define __has_qnx__ 1
#endif
#if defined(sinux)
//has Reliant UNIX
#define __has_reliant_unix__ 1
#endif
#if defined(sun) || defined(__sun)
//has sun
#define __has_sun__ 1
#if defined(__SVR4) || defined(__svr4__)
//has Solaris
#define __has_solaris__ 1
#else
//has SunOS
#define __has_sunos__ 1
#endif
#endif
#if defined(__VOS__)
//has Stratus VOS
#define __has_vos__ 1
#endif
#if defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4)
//has SVR4 Environment
#define __has_svr4__ 1
#endif
#if defined(__SYLLABLE__)
//has Syllable
#define __has_syllable__ 1
#endif
#if defined(__SYMBIAN32__)
//has Symbian OS
#define __has_symbianos__ 1
#endif
#if defined(__osf__) || defined(__osf)
//has OSF/1
#define __has_ofs1__ 1
#endif
#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || (defined(unix) && defined(vax))
//has Ultrix
#define __has_ultrix__ 1
#endif
#if defined(_UNICOS)
//has UNICOS
#define __has_unicos__ 1
#endif
#if defined(_CRAY) || defined(__crayx1)
//has UNICOS/mp
#define __has_unicos_mp__ 1
#endif
#if defined(__unix__) || defined(__unix)
//has UNIX Enviroment
#define __has_unix__ 1
#endif
#if defined(sco) || defined(_UNIXWARE7)
//has UnixWare
#define __has_unix_ware__ 1
#endif
#if defined(_UWIN)
//has U/Win Environment
#define __has_uwin__ 1
#endif
#if defined(VMS) || defined(__VMS) || defined(__VMS_VER)
//has VMS
#define __has_vms__ 1
#endif
#if defined(__VXWORKS__) || defined(__vxworks)
//has VxWorks
#define __has_vxworks__ 1
#endif
#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
//has Windows
#define __has_windows__ 1
#endif
#if defined(_WIN32_WCE)
//has Windows CE
#define __has_windows_ce__ 1
#endif
#if defined(_WINDU_SOURCE)
//has Wind/U Environment
#define __has_windu__ 1
#endif
#if defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
//has z/OS
#define __has_zos__ 1
#endif



#endif
//msvc,gcc,llvm,borlandc,turboc,xlC,Watcom C/C++