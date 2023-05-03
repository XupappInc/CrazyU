# CRAZY-U


 **PARTICIPANTES:** Daniel Martín Gómez(damart24@ucm.es), Miriam Martín Sánchez (mirima10@ucm.es), Javier Callejo Herrero(jacall02@ucm.es), Laura Gómez Bodego(lgomez25@ucm.es), Victor Manuel Estremera Herranz(vestre01@ucm.es),Paula Morillas Alonso(pamorill@ucm.es), Rodrigo Sánchez Torres(rodsan05@ucm.es), Sergio Baña Marchante(sebana@ucm.es)

| Resumen  |   |   
|:-:|:--|
| **Géneros:** simulación ,carreras | **Modos:** 1 jugador / 2 jugadores|
| **Público objetivo:**</br>PEGI 12, España. |Plataformas: Windows  | 
| **Cantidades:**</br>Escenarios: 1 </br>Objetos: 4 distintos (mínimo)</br>Personajes: 1(bus o) | **Hitos:**</br> Fecha de propuesta del concepto: 14/02/2023</br>Fechas de pre-producción: 07/03/2023</br>Fechas de producción: 28/03/2023</br>Fecha de lanzamiento: 05/05/2023| 


## Resumen 

**Descripción**

Crazy-U es un juego frenético en tercera persona en el cual debemos recorrer las distintas paradas mientras conducimos un bus por un grupo de calles atestadas de vehículos y peatones. 

* Logotipo y portada del juego
<img src="https://github.com/IAV23-G10/IAV23-G10-P3/blob/main/Assets/ImagesForReadme/ArbolComportamiento.png"/>





Tabla de contenidos

Aspectos generales
1.1 Relato breve y parcial de una partida típica

Menús y modos de juego 
2.1. Configuración
	2.2. Interfaz

Jugabilidad
3.1 Mecánica
3.1.1. Mecánicas de personaje (Bus U)
3.1.2. Mecánicas de Escenario
3.1.2. I.A.

3.2 Dinámica

3.3 Estética

3.4 Cámara

3.5 Controles

Contenido
4.1 Historia
4.2 Niveles


Aspectos generales

En este juego se intenta que el jugador objetivo, probablemente alumno de la fdi, tenga  un momento de humor y relajación; emulando su rutina diaria y simulando que conduce el autobús que le toca coger todos los días. 

En su camino el jugador se encontrará con otros vehículos y peatones. Dichos vehículos y peatones sólo estorban en la misión del jugador. El juego se sitúa en las calles que forman Ciudad Universitaria desde el metro hasta la Fdi. El objetivo es recoger a los estudiantes en la parada que nos indique el juego.


Vista general



Relato breve y parcial de una partida típica 

El jugador comienza en un punto aleatorio del mapa, lo primero que ve es que hay una flecha encima del bus que conduce. Esta flecha indica la parada en la que tiene que recoger estudiantes. Tras conducir hasta dicha parada, detiene completamente el vehículo para sumar un tiempo determinado al tiempo restante. El jugador se pone en marcha y aparece una nueva flecha que indica la siguiente parada. Tras repetir unas cuantas veces esto, el jugador se queda sin tiempo, por lo tanto termina la partida, y el tiempo que ha sobrevivido en total es su puntuación final de esta partida.


Menús y modos de juego 
2.1. Configuración

Cualquiera de los botones al ser pulsados sonará un sonido.
Menú principal:
Cuenta con los siguientes botones:
Play: comienza la partida. 
Quit: Permite salir del juego.







Menú de Final:
Este menú aparecerá cuando se acabe la partida.En él se mostrará:
Esta lista se compone:
Puntuación: puntuación del jugador que aparecerá en forma de iconos de buses.1 mínima puntuación y 5 máxima puntuación.
Botón de menú:te dirige al menú principal.
Botón de PLAY: al pulsarlo comienza otra nueva partida.








2.2.Interfaz 
La interfaz será sencilla; contendrá la puntuación del jugador arriba a la izquierda. Encima del vehículo aparecerá una flecha en la que se muestra la dirección de la siguiente parada. 


Jugabilidad

El jugador conducirá un autobús o un metro,en la zona de ciudad universitaria y paraninfo, siguiendo las paradas de los autobuses reales. El jugador irá recogiendo a los estudiantes para dejarlos en las paradas correspondientes antes de que se acabe el tiempo. Durante el trayecto, el autobús se enfrentará a diferentes obstáculos, como objetos o personas a las que se puede atropellar. Llegar a una parada suma y acumula el tiempo restante, acto seguido aparece una flecha que indica la ubicación de la siguiente parada. Al llegar a cada parada, el autobús se para completamente y luego vuelve a arrancar. Este bucle de juego se repite hasta que el jugador se quede sin tiempo. Una vez ocurre esto, se pasa a una pantalla en la que se muestra los puntos conseguidos en la partida. La puntuación se presenta en forma de iconos de bus (5 buses son más de 100 puntos). Al final la puntuación serán todos los segundos acumulados durante el tiempo de partida,pero representada con iconos. El objetivo es aguantar el máximo tiempo posible jugando y llevar a la máxima cantidad posible de alumnos a sus paradas. 

Mecánica

3.1.1. Mecánicas de personaje (Bus U)

El jugador maneja un vehículo por las calles de Ciudad Universitaria. El Bus tendrá una velocidad, aceleración y masa determinada. Podrá acelerar hacia adelante y hacia atrás, pero está última será mucho menor. También podrá virar, para girar las curvas.
 Atributos:
Aceleración:  -
Velocidad Máxima: -
Masa: -
Velocidad angular: -

El objetivo principal es conseguir la mayor puntuación posible. La puntuación representa la cantidad de segundos restantes para perder el juego. Empiezas con 30 segundos (o puntos). 

Para conseguir puntos tendrás que llegar a la siguiente parada para poder recuperar tiempo. Alcanzar una parada sumará 15 segundos a la puntuación. Cuando empieces una partida aparecerás en la parada de Ciudad Universitaria y se te asignará la siguiente parada. Tu puntuación final es todo el tiempo que has llegado a aguantar.

La selección de paradas es aleatoria.

Cuando llegues a la parada destino deberás reducir tu velocidad a 0 para que se te sumen los puntos y los viandantes bajen y suban del bus. 

3.1.2. Mecánicas de Escenario

El jugador podrá colisionar con los diferentes obstáculos estáticos:
Paradas de Bus
Edificios

 Y dinámicos:
Árboles
Viandantes
Coches

El escenario tendrá límites físicos (edificios, vallas). 

3.1.2. I.A.

Los viandantes caminarán por las aceras de forma lógica, yendo de un punto A a un punto B, respetando las aceras y los pasos de cebra (semáforos) y respetando el movimiento “en manada”. El punto B puede ser una parada de autobús, un límite del mapa  o una puerta de un edificio.

Los coches, por su parte,circularán por la carretera,sin respetar normas de tráfico. También irán de un punto A a un punto B, siendo este los límites del escenario. 

Dinámica

Tu objetivo es aguantar lo máximo posible, por lo que el jugador deberá elegir las mejores rutas en todo momento, ya sea respetando las rutas “lógicas” o saltándose las normas de tráfico.



Estética

Todo tendrá una estética cartoon con lineart negro.Tendra un sombreado plano ,utilizando colores saturados.Se utilizará una paleta de colores con tonos saturados y con colores brillantes.


 Cámara

La cámara en tercera persona tendrá un plano picado. Seguirá al autobús a cierta distancia que variará dependiendo de la velocidad a la que se desplace el vehículo (a más velocidad, más alejada estará esta). El jugador puede girar en un ángulo reducido la cámara sin afectar a la dirección del vehículo. 

Al pulsar un botón, la cámara mostrará una imagen del vehículo desde delante, de forma que el jugador vería lo que tiene detrás (retrovisor).






 Controles

El juego se podrá controlar por teclado y mando:

Con W/S puedes acelerar o decelerar.




Contenido

GFX
Modelos-3d:
Personajes( animación idle & andar)
Alumnos y profesores que cogerán el bus.
Entorno
Autobús
Carretera
Señales de tráfico
Semáforos
Paradas de autobús
Edificios


	AUDIO
Efectos de sonido:
Sonido navegación/interacción UI
Volantazos
Aceleración
Motor de coche
Ambientales
Música:
Menú principal (loop corto)
Gameplay

Historia

El protagonista es un conductor de autobús que se ha tenido que levantar pronto como todos los días para trabajar recogiendo alumnos y llevándolos a sus paradas; no es el trabajo más entretenido pero le ayuda a salir adelante y eso es suficiente. Está un poco cansado de su trabajo y por eso le da igual atropellar a algún que otro alumno, total, hay muchos, nadie echará de menos a un par de estudiantes de ADE.	












Niveles

El juego solo tendrá un nivel, que corresponde a una porción del mapa real de Ciudad Universitaria. Las paradas de Bus tendrán una distribución parecida a las de la vida real.



Referencias

Crazy Taxi- https://crazy-taxi-free.uptodown.com/android
The Simpsons Hit & Run -https://es.wikipedia.org/wiki/The_Simpsons_Hit_%26_Run

