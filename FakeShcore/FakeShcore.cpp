// NetDetect.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "FakeShcore.h"
#include <WinInet.h>

FakeShcore_API HRESULT GetDpiForMonitor(HMONITOR hmonitor,int dpiType,UINT* dpiX,UINT* dpiY)
{
    *dpiX = 96;
    *dpiY = 96;
    return S_OK;
}