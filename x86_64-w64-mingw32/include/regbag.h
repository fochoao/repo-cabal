/*** Autogenerated by WIDL 4.12.1 from include/regbag.idl - Do not edit ***/

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

#ifndef __regbag_h__
#define __regbag_h__

/* Forward declarations */

#ifndef __ICreatePropBagOnRegKey_FWD_DEFINED__
#define __ICreatePropBagOnRegKey_FWD_DEFINED__
typedef interface ICreatePropBagOnRegKey ICreatePropBagOnRegKey;
#ifdef __cplusplus
interface ICreatePropBagOnRegKey;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * ICreatePropBagOnRegKey interface
 */
#ifndef __ICreatePropBagOnRegKey_INTERFACE_DEFINED__
#define __ICreatePropBagOnRegKey_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICreatePropBagOnRegKey, 0x8a674b48, 0x1f63, 0x11d3, 0xb6,0x4c, 0x00,0xc0,0x4f,0x79,0x49,0x8e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("8a674b48-1f63-11d3-b64c-00c04f79498e")
ICreatePropBagOnRegKey : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Create(
        HKEY hkey,
        LPCOLESTR subkey,
        DWORD ulOptions,
        DWORD samDesired,
        REFIID iid,
        LPVOID *ppBag) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICreatePropBagOnRegKey, 0x8a674b48, 0x1f63, 0x11d3, 0xb6,0x4c, 0x00,0xc0,0x4f,0x79,0x49,0x8e)
#endif
#else
typedef struct ICreatePropBagOnRegKeyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICreatePropBagOnRegKey *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICreatePropBagOnRegKey *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICreatePropBagOnRegKey *This);

    /*** ICreatePropBagOnRegKey methods ***/
    HRESULT (STDMETHODCALLTYPE *Create)(
        ICreatePropBagOnRegKey *This,
        HKEY hkey,
        LPCOLESTR subkey,
        DWORD ulOptions,
        DWORD samDesired,
        REFIID iid,
        LPVOID *ppBag);

    END_INTERFACE
} ICreatePropBagOnRegKeyVtbl;

interface ICreatePropBagOnRegKey {
    CONST_VTBL ICreatePropBagOnRegKeyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICreatePropBagOnRegKey_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICreatePropBagOnRegKey_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICreatePropBagOnRegKey_Release(This) (This)->lpVtbl->Release(This)
/*** ICreatePropBagOnRegKey methods ***/
#define ICreatePropBagOnRegKey_Create(This,hkey,subkey,ulOptions,samDesired,iid,ppBag) (This)->lpVtbl->Create(This,hkey,subkey,ulOptions,samDesired,iid,ppBag)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICreatePropBagOnRegKey_QueryInterface(ICreatePropBagOnRegKey* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICreatePropBagOnRegKey_AddRef(ICreatePropBagOnRegKey* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICreatePropBagOnRegKey_Release(ICreatePropBagOnRegKey* This) {
    return This->lpVtbl->Release(This);
}
/*** ICreatePropBagOnRegKey methods ***/
static FORCEINLINE HRESULT ICreatePropBagOnRegKey_Create(ICreatePropBagOnRegKey* This,HKEY hkey,LPCOLESTR subkey,DWORD ulOptions,DWORD samDesired,REFIID iid,LPVOID *ppBag) {
    return This->lpVtbl->Create(This,hkey,subkey,ulOptions,samDesired,iid,ppBag);
}
#endif
#endif

#endif


#endif  /* __ICreatePropBagOnRegKey_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __regbag_h__ */
