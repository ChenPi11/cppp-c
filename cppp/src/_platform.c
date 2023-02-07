#include <base_library/_platform.h>
#include <stdio.h>
__CPPPBASE
int _cppp_platform_check(void)
{
	printf("Checking for cppp.include.base_library.platfrom.h ...\n");
	printf("__has_aix__\t\t: %d\n", __has_aix__);
	printf("__has_android__\t\t: %d\n", __has_android__);
	printf("__has_amdahl_uts__\t\t: %d\n", __has_amdahl_uts__);
	printf("__has_amiga__\t\t: %d\n", __has_amiga__);
	printf("__has_aegis__\t\t: %d\n", __has_aegis__);
	printf("__has_apollo__\t\t: %d\n", __has_apollo__);
	printf("__has_beos__\t\t: %d\n", __has_beos__);
	printf("__has_blue_gene__\t\t: %d\n", __has_blue_gene__);
	printf("__has_bsd__\t\t: %d\n", __has_bsd__);
	printf("__has_convex__\t\t: %d\n", __has_convex__);
	printf("__has_cygwin__\t\t: %d\n", __has_cygwin__);
	printf("__has_dgux__\t\t: %d\n", __has_dgux__);
	printf("__has_dynix_ptx__\t\t: %d\n", __has_dynix_ptx__);
	printf("__has_ecos__\t\t: %d\n", __has_ecos__);
	printf("__has_emx__\t\t: %d\n", __has_emx__);
	printf("__has_hiux_mpp__\t\t: %d\n", __has_hiux_mpp__);
	printf("__has_hpux__\t\t: %d\n", __has_hpux__);
	printf("__has_os_400__\t\t: %d\n", __has_os_400__);
	printf("__has_integrity__\t\t: %d\n", __has_integrity__);
	printf("__has_interix__\t\t: %d\n", __has_interix__);
	printf("__has_irix__\t\t: %d\n", __has_irix__);
	printf("__has_linux__\t\t: %d\n", __has_linux__);
	printf("__has_lunx__\t\t: %d\n", __has_lunx__);
	printf("__has_mac_os__\t\t: %d\n", __has_mac_os__);
	printf("__has_microware_os_9__\t\t: %d\n", __has_microware_os_9__);
	printf("__has_minix__\t\t: %d\n", __has_minix__);
	printf("__has_mingw__\t\t: %d\n", __has_mingw__);
	printf("__has_morph_os__\t\t: %d\n", __has_morph_os__);
	printf("__has_mpe_ix__\t\t: %d\n", __has_mpe_ix__);
	printf("__has_dos__\t\t: %d\n", __has_dos__);
	printf("__has_non_stop__\t\t: %d\n", __has_non_stop__);
	printf("__has_nucleus__\t\t: %d\n", __has_nucleus__);
	printf("__has_os2__\t\t: %d\n", __has_os2__);
	printf("__has_palmos__\t\t: %d\n", __has_palmos__);
	printf("__has_eplan9__\t\t: %d\n", __has_eplan9__);
	printf("__has_pyr__\t\t: %d\n", __has_pyr__);
	printf("__has_qnx__\t\t: %d\n", __has_qnx__);
	printf("__has_reliant_unix__\t\t: %d\n", __has_reliant_unix__);
	printf("__has_sun__\t\t: %d\n", __has_sun__);
	printf("__has_solaris__\t\t: %d\n", __has_solaris__);
	printf("__has_sunos__\t\t: %d\n", __has_sunos__);
	printf("__has_vos__\t\t: %d\n", __has_vos__);
	printf("__has_svr4__\t\t: %d\n", __has_svr4__);
	printf("__has_syllable__\t\t: %d\n", __has_syllable__);
	printf("__has_symbianos__\t\t: %d\n", __has_symbianos__);
	printf("__has_ofs1__\t\t: %d\n", __has_ofs1__);
	printf("__has_ultrix__\t\t: %d\n", __has_ultrix__);
	printf("__has_unicos__\t\t: %d\n", __has_unicos__);
	printf("__has_unicos_mp__\t\t: %d\n", __has_unicos_mp__);
	printf("__has_unix__\t\t: %d\n", __has_unix__);
	printf("__has_unix_ware__\t\t: %d\n", __has_unix_ware__);
	printf("__has_uwin__\t\t: %d\n", __has_uwin__);
	printf("__has_vms__\t\t: %d\n", __has_vms__);
	printf("__has_vxworks__\t\t: %d\n", __has_vxworks__);
	printf("__has_windows__\t\t: %d\n", __has_windows__);
	printf("__has_windows_ce__\t\t: %d\n", __has_windows_ce__);
	printf("__has_windu__\t\t: %d\n", __has_windu__);
	printf("__has_zos__\t\t: %d\n", __has_zos__);
	printf("Compiler: " __compiler__ "\n");
	printf("C++ Version: %ld\n", __cplusplus__);
	printf("C Version: %ld\n", __cppp_c_version__);
	printf("C++ Plus Version:" __CPPP_VERSTR__ "\n");
	printf("__cplusplus_plus: %ld\n", __cplusplus_plus);
	return 0;
}
__END_CPPPBASE