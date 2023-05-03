# CRAZY-U


 **PARTICIPANTES:</br>** Daniel Martín Gómez(damart24@ucm.es), Miriam Martín Sánchez (mirima10@ucm.es), Javier Callejo Herrero(jacall02@ucm.es), Laura Gómez Bodego(lgomez25@ucm.es), Victor Manuel Estremera Herranz(vestre01@ucm.es),Paula Morillas Alonso(pamorill@ucm.es), Rodrigo Sánchez Torres(rodsan05@ucm.es), Sergio Baña Marchante(sebana@ucm.es)

| Resumen  |   |   
|:-:|:--|
| **Géneros:** simulación ,carreras | **Modos:** 1 jugador / 2 jugadores|
| **Público objetivo:**</br>PEGI 12, España. |Plataformas: Windows  | 
| **Cantidades:**</br>Escenarios: 1 </br>Objetos: 4 distintos (mínimo)</br>Personajes: 1(autobús) | **Hitos:**</br> Fecha de propuesta del concepto: 14/02/2023</br>Fechas de pre-producción: 07/03/2023</br>Fechas de producción: 28/03/2023</br>Fecha de lanzamiento: 05/05/2023| 


## Resumen 

**Descripción**

Crazy-U es un juego frenético en tercera persona en el cual debemos recorrer las distintas paradas mientras conducimos un bus por un grupo de calles atestadas de vehículos y peatones. 

* Logotipo y portada del juego
<p align="center">
  <img src="https://github.com/XupappInc/CrazyU/blob/main/Exe/Assets/UiAssets/CrazyUlogo.png" alt="drawing" width="400"/>
</p>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>TABLA DE CONTENIDOS</summary>
  <ol>
    <li><a href="#aspectos-generales">Aspectos generales</a></li>
      <ul>
        <li><a href="#relato-breve-y-parcial-de-una-partida-típica">Relato breve y parcial de una partida típica</a></li>
      </ul>
    </li>
    <li><a href="#menús-y-modos-de-juego">Menús y modos de juego</a></li>
      <ul>
        <li><a href="#configuración">Configuración</a></li>
        <li><a href="#interfaz">Interfaz</a></li>
      </ul>
    </li>
    <li>
      <a href="#jugabilidad">Jugabilidad</a>
      <ul>
		<li><a href="#mecánica">Mecánica</a>
		<ul>
			<li><a href="#mecánicas-de-personaje">Mecánicas de Personaje</a></li>
			<li><a href="#mecánicas-de-escenario">Mecánicas de Escenario</a></li>
			<li><a href="#ia">IA</a></li>
		 </ul>
		</li>
		<li><a href="#estética">Estética</a>
		<li><a href="#cámara">Cámara</a>
		<li><a href="#controles">Controles</a>
      </ul>
    </li>
    <li>
    <a href="#contenido">Contenido</a>
      <ul>
        <li><a href="#historia">Historia</a></li>
        <li><a href="#niveles">Niveles</a></li>
      </ul>
    </li>
  </ol>
</details>

<!-- Aspectos-generales -->
# Aspectos generales

En este juego se intenta que el jugador objetivo, probablemente alumno de la FDI, tenga  un momento de humor y relajación; emulando su rutina diaria y simulando que conduce el autobús que le toca coger todos los días. 

En su camino el jugador se encontrará con otros vehículos y peatones. Dichos vehículos y peatones sólo estorban en la misión del jugador. El juego se sitúa en las calles que forman Ciudad Universitaria desde el metro hasta la FDI. El objetivo es recoger a los estudiantes en la parada que nos indique el juego.

### Vista general

<p align="center">
  <img src="https://user-images.githubusercontent.com/82317485/236010574-11b5f07e-9a0c-4309-bfbe-2c3467b4c908.png" alt="vista"/>
</p>

## Relato breve y parcial de una partida típica 

El jugador comienza en un punto aleatorio del mapa, lo primero que ve es que hay una flecha encima del bus que conduce. Esta flecha indica la parada en la que tiene que recoger estudiantes. Tras conducir hasta dicha parada, detiene completamente el vehículo para sumar un tiempo determinado al tiempo restante. El jugador se pone en marcha y la flecha pasa a indicar la siguiente parada. Tras repetir unas cuantas veces esto, el jugador se queda sin tiempo, por lo tanto termina la partida, y el tiempo que ha sobrevivido en total es su puntuación final de esta partida.

# Menús y modos de juego 
## Configuración

Cualquiera de los botones al ser pulsados sonará un sonido.
* Menú principal:
Cuenta con los siguientes botones:
	- Play: comienza la partida. 
	- Quit: Permite salir del juego.

![image](https://user-images.githubusercontent.com/82317485/236012062-0835a41e-2824-4ccb-b03f-0d1413b0ef90.png)

* Menú de Final:
Este menú aparecerá cuando se acabe la partida.</br>En él se mostrará:</br>

	- Puntuación: puntuación del jugador que aparecerá en forma de iconos de autobuses.Cero si no consigue llegar a ninguna parada y cinco como máxima puntuación.
	- Botón de menú:te dirige al menú principal.
	- Botón de PLAY: al pulsarlo comienza otra nueva partida.
</br>

![image](https://user-images.githubusercontent.com/82317485/236010748-645b0071-85ee-4469-8689-209bedf8d9fb.png)

## Interfaz 
La interfaz será sencilla: contendrá dos botones, uno para volver al menú y otro para silenciar la música, además de una barra que irá disminuyendo progresivamente según vaya pasando el tiempo. Encima del vehículo aparecerá una flecha en la que se muestra la dirección de la siguiente parada. 

![image](https://user-images.githubusercontent.com/82317485/236010574-11b5f07e-9a0c-4309-bfbe-2c3467b4c908.png)


# Jugabilidad

El jugador conducirá un autobús en la zona de ciudad universitaria y paraninfo, siguiendo las paradas de los autobuses reales. Durante el trayecto, el autobús se enfrentará a diferentes obstáculos, como objetos o personas a las que se puede atropellar. Llegar a una parada suma y acumula el tiempo restante, acto seguido la flecha indicará la ubicación de la siguiente parada. Al llegar a cada parada, el autobús se para completamente y luego vuelve a arrancar. Este bucle de juego se repite hasta que el jugador se quede sin tiempo. Una vez ocurre esto, se pasa a una pantalla en la que se muestran los puntos conseguidos en la partida. La puntuación se presenta en forma de iconos de bus (5 buses son cien o más puntos). Al final la puntuación serán todos los segundos acumulados durante el tiempo de partida, pero representada con iconos. El objetivo es aguantar el máximo tiempo posible jugando y llevar a la máxima cantidad posible de alumnos a sus paradas. 

## Mecánica

### Mecánicas de Personaje

El jugador maneja un vehículo por las calles de Ciudad Universitaria. El Bus tendrá una velocidad, aceleración y masa determinada. Podrá acelerar hacia adelante y hacia atrás, pero está última será mucho menor. También podrá virar, para girar las curvas.</br>
**Atributos:**-</br>
* Aceleración: -</br> 
* Velocidad Máxima: -
* Masa: -
* Velocidad angular: -

El objetivo principal es conseguir la mayor puntuación posible. La puntuación representa la cantidad de segundos restantes para perder el juego. Empiezas con 30 segundos (o puntos). 

Para conseguir puntos tendrás que llegar a la siguiente parada. Alcanzar una parada sumará quince segundos a la puntuación. Cuando empieces una partida aparecerás en la parada de Ciudad Universitaria y se te asignará la siguiente parada de forma aleatoria. Tu puntuación final depende del tiempo que has llegado a aguantar y de las paradas que has alcanzado. Se mostrará al final de la partida en forma de autobuses de manera que si no se ha alcanzado ninguna parada, no se muestren autobuses, si se alcanzan entre una y dos se muestra uno, entre dos y tres se muestran dos autobuses y así de forma sucesiva hasta un máximo de cinco autobuses.

Cuando llegues a la parada destino deberás reducir tu velocidad prácticamente a cero para que se te sumen los puntos. 

### Mecánicas de Escenario

El jugador podrá colisionar con los diferentes obstáculos estáticos:
Paradas de Bus
Edificios

 Y dinámicos:
Árboles
Viandantes
Coches

El escenario tendrá límites físicos (edificios, vallas). 

### IA

Los viandantes caminarán por las aceras de forma lógica, yendo de un punto A a un punto B, respetando las aceras y los pasos de cebra (semáforos) y respetando el movimiento “en manada”. El punto B puede ser una parada de autobús, un límite del mapa  o una puerta de un edificio.

Los coches, por su parte,circularán por la carretera,sin respetar normas de tráfico. También irán de un punto A a un punto B. 

## Dinámica

Tu objetivo es aguantar lo máximo posible, por lo que el jugador deberá elegir las mejores rutas en todo momento, ya sea respetando las rutas “lógicas” o saltándose las normas de tráfico.

## Estética

Todo tendrá una estética cartoon sin lineart. No tendrá sombreado y se utilizarán colores saturados. Se utilizará una paleta de colores con tonos saturados y con colores brillantes.

<p align="center">
  <img src="https://cdn.discordapp.com/attachments/937640481943355402/1103387991206002738/image.png" alt="colores"/>
</p>

## Cámara

La cámara en tercera persona tendrá un plano picado. Seguirá al autobús a cierta distancia que variará dependiendo de la velocidad a la que se desplace el vehículo (a más velocidad, más alejada estará esta). 

Al pulsar un botón, la cámara mostrará una imagen del vehículo desde delante, de forma que el jugador vería lo que tiene detrás (retrovisor).

## Controles

El juego se podrá controlar por teclado y mando:

<p align="center">
  <img src="https://user-images.githubusercontent.com/82317485/236012878-a0fc0a92-1436-4f0e-b45d-1e8f46909272.png" alt="controles"/>
</p>

Con W/S puedes acelerar o decelerar.

<p align="center">
  <img src="https://cdn.discordapp.com/attachments/937640481943355402/1103389150712967260/mando.png" alt="controlesMando"/>
</p>

# Contenido

**GFX**
* Modelos-3d:
	* Personajes( animación idle & andar)
	* Alumnos y profesores que cogerán el bus.
	* Entorno
	* Autobús
	* Carretera
	* Señales de tráfico
	* Semáforos
	* Paradas de autobús
	* Edificios


**AUDIO**
* Efectos de sonido:
	* Sonido navegación/interacción UI
	* Volantazos
	* Aceleración
	* Motor de coche
	* Ambientales
* Música:
	* Menú principal (loop corto)
	* Gameplay

## Historia

El protagonista es un conductor de autobús que se ha tenido que levantar pronto como todos los días para trabajar recogiendo alumnos y llevándolos a sus paradas; no es el trabajo más entretenido pero le ayuda a salir adelante y eso es suficiente. Está un poco cansado de su trabajo y por eso le da igual atropellar a algún que otro alumno.

## Niveles

El juego solo tendrá un nivel, que corresponde a una porción del mapa real de Ciudad Universitaria. Las paradas de autobús tendrán una distribución parecida a las de la vida real.

# Referencias

- Crazy Taxi- https://crazy-taxi-free.uptodown.com/android
- The Simpsons Hit & Run -https://es.wikipedia.org/wiki/The_Simpsons_Hit_%26_Run

