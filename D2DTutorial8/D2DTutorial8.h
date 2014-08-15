#pragma once

#include "resource.h"
ID2D1Factory * pD2DFactory = NULL;
ID2D1HwndRenderTarget* pD2DHRT = NULL;
ID2D1SolidColorBrush* pD2DLightSlateGrayBrush;

IDWriteFactory* pDWriteFactory;
IDWriteTextFormat* pDWriteTextFormat;

HRESULT hr;

template<class Interface>
inline void SafeRelease(
	Interface **
	);

void Setup(HWND);
void ReleaseThemAll();
void DrawMe(HWND);

#define FRAME_RATE 80

DWORD dwCurrentTime{ 0 };
DWORD dwLastUpdateTime{ 0 };
DWORD dwElapsedTime{ 0 };


