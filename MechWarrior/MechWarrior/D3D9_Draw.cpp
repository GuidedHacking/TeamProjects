#include "D3D9_Draw.h"

__int64 tD3D9_Draw::pEndScene_o = 0;
ID3DXFont* tD3D9_Draw::dx_Font = 0;
RECT tD3D9_Draw::r;

HRESULT tD3D9_Draw::EndScene_m(LPDIRECT3DDEVICE9 pDevice)
{
	if (!dx_Font) D3DXCreateFontA(pDevice, 25, 10, FW_BOLD, 0, 0, DEFAULT_CHARSET, OUT_TT_ONLY_PRECIS, PROOF_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Arial", &dx_Font);

	DrawText("If you see this, D3D9 hooking has succeeded :^)", 100, 100);

	HRESULT(__stdcall *EndScene_o)(LPDIRECT3DDEVICE9);
	EndScene_o = (HRESULT(__stdcall*)(LPDIRECT3DDEVICE9))(pEndScene_o);

	return EndScene_o(pDevice);
}

void tD3D9_Draw::DrawText(char* Text, int left, int top)
{
	r.left = left;
	r.top = top;

	dx_Font->DrawTextA(0, Text, strlen(Text), &r, DT_NOCLIP, D3DCOLOR_XRGB(255, 127, 0));
}