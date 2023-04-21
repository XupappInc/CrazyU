// CrazyU.cpp : Define las funciones exportadas del archivo DLL.
//

#include "pch.h"
#include "framework.h"
#include "CrazyU.h"


// Ejemplo de variable exportada
CRAZYU_API int nCrazyU=0;

// Ejemplo de función exportada.
CRAZYU_API int fnCrazyU(void)
{
    return 0;
}

// Constructor de clase exportada.
CCrazyU::CCrazyU()
{
    return;
}
