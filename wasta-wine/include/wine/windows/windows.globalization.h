/*** Autogenerated by WIDL 5.20 from include/windows.globalization.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_globalization_h__
#define __windows_globalization_h__

/* Forward declarations */

/* Headers for imported files */

#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            enum DayOfWeek {
                DayOfWeek_Sunday = 0,
                DayOfWeek_Monday = 1,
                DayOfWeek_Tuesday = 2,
                DayOfWeek_Wednesday = 3,
                DayOfWeek_Thursday = 4,
                DayOfWeek_Friday = 5,
                DayOfWeek_Saturday = 6
            };
        }
    }
}
extern "C" {
#else /* __cplusplus */
enum __x_ABI_CWindows_CGlobalization_CDayOfWeek {
    DayOfWeek_Sunday = 0,
    DayOfWeek_Monday = 1,
    DayOfWeek_Tuesday = 2,
    DayOfWeek_Wednesday = 3,
    DayOfWeek_Thursday = 4,
    DayOfWeek_Friday = 5,
    DayOfWeek_Saturday = 6
};
#ifdef WIDL_USING_WINDOWS_GLOBALIZATION_DAYOFWEEK
#define DayOfWeek __x_ABI_CWindows_CGlobalization_CDayOfWeek
#endif /* WIDL_USING__WINDOWS_GLOBALIZATION_DAYOFWEEK */
#endif /* __cplusplus */

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_globalization_h__ */
