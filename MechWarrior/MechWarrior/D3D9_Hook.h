#pragma once

#include <d3d9.h>
#include <d3dx9.h>

#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")

#include "D3D9_Draw.h"

#include "mhook-lib\mhook.h"

class tD3D9_Hook
{
public:
	void Hook();
};