#pragma once
#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

class tD3D9_Draw
{
public:
	static ID3DXFont* dx_Font;
	static RECT r;

	static __int64 pEndScene_o;
	static HRESULT __stdcall EndScene_m(LPDIRECT3DDEVICE9 pDevice);

	static void DrawText(char* Text, int left, int top);
};