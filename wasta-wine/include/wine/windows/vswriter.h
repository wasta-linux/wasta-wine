/*** Autogenerated by WIDL 5.3 from vswriter.idl - Do not edit ***/

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

#ifndef __vswriter_h__
#define __vswriter_h__

/* Forward declarations */

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum __WIDL_vswriter_generated_name_0000000E {
    VSS_UT_UNDEFINED = 0,
    VSS_UT_BOOTABLESYSTEMSTATE = 1,
    VSS_UT_SYSTEMSERVICE = 2,
    VSS_UT_USERDATA = 3,
    VSS_UT_OTHER = 4
} VSS_USAGE_TYPE;
typedef enum __WIDL_vswriter_generated_name_0000000F {
    VSS_ST_UNDEFINED = 0,
    VSS_ST_TRANSACTEDDB = 1,
    VSS_ST_NONTRANSACTEDDB = 2,
    VSS_ST_OTHER = 3
} VSS_SOURCE_TYPE;
typedef enum __WIDL_vswriter_generated_name_00000010 {
    VSS_AWS_UNDEFINED = 0,
    VSS_AWS_NO_ALTERNATE_WRITER = 1,
    VSS_AWS_ALTERNATE_WRITER_EXISTS = 2,
    VSS_AWS_THIS_IS_ALTERNATE_WRITER = 3
} VSS_ALTERNATE_WRITER_STATE;
typedef enum VSS_COMPONENT_TYPE {
    VSS_CT_UNDEFINED = 0,
    VSS_CT_DATABASE = 1,
    VSS_CT_FILEGROUP = 2
} VSS_COMPONENT_TYPE;
typedef enum VSS_FILE_RESTORE_STATUS {
    VSS_RS_UNDEFINED = 0,
    VSS_RS_NONE = 1,
    VSS_RS_ALL = 2,
    VSS_RS_FAILED = 3
} VSS_FILE_RESTORE_STATUS;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __vswriter_h__ */
