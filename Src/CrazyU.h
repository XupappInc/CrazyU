// El siguiente bloque ifdef muestra la forma estándar de crear macros que hacen la exportación
// de un DLL más sencillo. Todos los archivos de este archivo DLL se compilan con CRAZYU_EXPORTS
// símbolo definido en la línea de comandos. Este símbolo no debe definirse en ningún proyecto
// que use este archivo DLL. De este modo, otros proyectos cuyos archivos de código fuente incluyan el archivo verán
// interpretan que las funciones CRAZYU_API se importan de un archivo DLL, mientras que este archivo DLL interpreta los símbolos
// definidos en esta macro como si fueran exportados.

#ifdef CRAZYU_EXPORTS
#define CRAZYU_API __declspec(dllexport)
#else
#define CRAZYU_API __declspec(dllimport)
#endif

// Clase exportada del DLL
class CRAZYU_API CCrazyU {	
public:
	CCrazyU(void);
	// TODO: agregar métodos aquí.
};

extern "C" CRAZYU_API int nCrazyU;

CRAZYU_API int fnCrazyU(void);
