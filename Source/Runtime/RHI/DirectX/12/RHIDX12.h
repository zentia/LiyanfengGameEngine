#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_KEAN
#include <windows.h>
#include <tchar.h>

#include <wrl.h>
using namespace Microsoft;
using namespace Microsoft::WRL;
#include <dxgi_6.h>
#include <DirectXMath.h>
using namespace DirectX;
#include <d3d12.h>
#include <d3d12shader.h>
#include <d3dcompiler.h>
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3d12.lib")

#if defined(_DEBUG)
#include <dxgidebug.h>
#endif

#include "..\WindowsCommons\d3dx12.h"

#define GRS_WND_CLASS_NAME _T("Game Window Class")
#define GRS_WND_TITLE _T("DirectX Trigger Sample")

#define GRS_THROW_IF_FAILED(hr) if (FAILED(hr)) { throw CGRSCOMException(hr); }
