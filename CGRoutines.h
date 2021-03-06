/*
 * Copyright (C) 2012 Brent Fulgham.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */
#pragma once;

#include "IRenderTest.h"

#if !defined(NO_CORE_GRAPHICS)

#include <CoreGraphics/CoreGraphics.h>

class CGRenderer : public IRenderTest
{
public:
	CGRenderer(HWND hWnd, HDC hdc);
	virtual ~CGRenderer();

	void RenderDemo(HWND hWnd, HDC hdc, int height, int width, float fps);
	void ResizeDemo(HWND hWnd, const RECT& rect);
	void InitDemo(HWND hWnd, HDC hdc);

private:
	BITMAPINFO m_bmpInfo;
	HDC m_bitmapDC;
	void* m_bitmapData;
	HBITMAP m_bitmap;
	HBITMAP m_oldBitmap;
	CGContextRef m_cr;
   LOGFONT m_windowsFont;
   CGFontRef m_messageFont;
};
#endif
