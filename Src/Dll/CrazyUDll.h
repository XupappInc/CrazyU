// El siguiente bloque ifdef muestra la forma estándar de crear macros que hacen
// la exportación de un DLL más sencillo. Todos los archivos de este archivo DLL
// se compilan con CRAZYUDLL_EXPORTS símbolo definido en la línea de comandos.
// Este símbolo no debe definirse en ningún proyecto que use este archivo DLL.
// De este modo, otros proyectos cuyos archivos de código fuente incluyan el
// archivo verán interpretan que las funciones CRAZYUDLL_API se importan de un
// archivo DLL, mientras que este archivo DLL interpreta los símbolos definidos
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
	// TODO: agregar métodos aquí.
};

extern "C" CRAZYUDLL_API int nCrazyUDll;

CRAZYUDLL_API int fnCrazyUDll(void);