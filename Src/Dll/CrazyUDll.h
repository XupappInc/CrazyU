// El siguiente bloque ifdef muestra la forma est�ndar de crear macros que hacen
// la exportaci�n de un DLL m�s sencillo. Todos los archivos de este archivo DLL
// se compilan con CRAZYUDLL_EXPORTS s�mbolo definido en la l�nea de comandos.
// Este s�mbolo no debe definirse en ning�n proyecto que use este archivo DLL.
// De este modo, otros proyectos cuyos archivos de c�digo fuente incluyan el
// archivo ver�n interpretan que las funciones CRAZYUDLL_API se importan de un
// archivo DLL, mientras que este archivo DLL interpreta los s�mbolos definidos
// en esta macro como si fueran exportados.
#ifdef CRAZYUDLL_EXPORTS
#define CRAZYUDLL_API __declspec(dllexport)
#else
#define CRAZYUDLL_API __declspec(dllimport)
#endif

// Clase exportada del DLL
class CRAZYUDLL_API CCrazyUDll {
	public:
	CCrazyUDll(void);
	// TODO: agregar m�todos aqu�.
};

extern "C" CRAZYUDLL_API int nCrazyUDll;

CRAZYUDLL_API int fnCrazyUDll(void);