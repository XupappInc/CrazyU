// Separity.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del
// programa comienza y termina ah�.
// #include <Windows.h>
//
// #ifdef _DEBUG
// HMODULE hinstLib = LoadLibrary(TEXT("Separity_Game_d"));
// #else
// HMODULE hinstLib = LoadLibrary(TEXT("Separity_Game"));
// #endif  // DEBUG

#include "GameStart.h"

#include <Windows.h>
// #include"Text.h"

#ifdef CRAZYU_EXPORTS
#define CRAZYU_API __declspec(dllexport)
#else
#define CRAZYU_API __declspec(dllimport)
#endif

extern "C" void CRAZYU_API start() { 
	CrazyU::GameStart::gameStart(); 
}
