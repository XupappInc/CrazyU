// JuegoDll.cpp : Define las funciones exportadas del archivo DLL.
//

#include "CrazyUDll.h"
#include "framework.h"
#include "pch.h"

// Ejemplo de variable exportada
CRAZYUDLL_API int nCrazyUDll = 0;

// Ejemplo de función exportada.
CRAZYUDLL_API int fnCrazyUDll(void) { return 0; }

// Constructor de clase exportada.
CCrazyUDll::CCrazyUDll() { return; }
