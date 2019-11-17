#pragma once

// Systems include.
#define Win32_LEAN_AND_MEAN
#include <Windows.h>

// DirectX include.
#include <d3d11.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>
#include <DirectXColors.h>

// STL includes.
#include <iostream>
#include <string>
#include <algorithm>

// Link library dependencies.
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "winmm.lib")

// Safely realse a COM object.
template <typename T>
inline void SafeRelease(T& ptr)
{
	if (ptr != NULL)
	{
		ptr->Release();
		ptr = NULL;
	}
}
