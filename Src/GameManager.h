#pragma once
#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "EntityComponent/Component.h"

#include <string>
#include <vector>

namespace Separity {
	class Entity;
	class Transform;
	class ParticleSystem;
}  // namespace Separity

namespace CrazyU {
	class GameManager : public Separity::Component {
		public:
		__CMPTYPE_DECL__(Separity::_SCRIPT)
		__CMPID_DECL__(Separity::_GAME_COMPONENT)

		GameManager();
		~GameManager();

		void start() override;

		void update(const uint32_t& deltaTime) override;
		/// <summary>
		/// Añade puntos a la puntuacion total actual
		/// </summary>
		/// <param name="score">Puntos a añadir</param>
		void addScore(int score);
		/// <summary>
		/// Obtiene la puntuacion actual
		/// </summary>
		/// <returns>La puntuacion total actual del jugador</returns>
		int getScore();
		/// <summary>
		/// Añade una parada al vector de paradas
		/// </summary>
		/// <param name="parada">Parada a añadir</param>
		void addParadas(std::string parada);

		/// <summary>
		/// Cambia la parada a la siguiente
		/// </summary>
		void nextParada();

		/// <summary>
		/// Activa el particleSystem en la parada actual para indicar que el bus
		/// ha recogido a los peatones
		/// </summary>
		void repositionParticleSys();
		/// <summary>
		/// Metodo que devuelve el tiempo que queda hasta terminar el juego
		/// </summary>
		/// <returns>Devuelve un float con el tiempo en segundos</returns>
		float timeLeft();
		/// <summary>
		/// Metodo que devuelve el porcentaje en tiempo que queda hasta terminar
		/// el juego
		/// </summary>
		/// <returns>Devuelve en int un porcentaje indicando el tiempo de juego
		/// que queda</returns>
		int getPercentageofTime();
		/// <summary>
		/// Metodo que devuelve el numero de autobuses que se deben dibujar en
		/// la escena final Para menos de 20 puntos, no se dibujan, entre 20 y
		/// 40 se dibuja 1, entre 40 y 60 se dibujan 2 y así sucesivamente hasta
		/// 5 autobuses máximo
		/// </summary>
		/// <returns>Devuelve en int el numero de autobuses</returns>
		int getBusNum();
		/// <summary>
		/// Metodo que lee en un fichero la putuacion (en autobuses) del
		/// jugador
		/// </summary>
		int readFinalScore(const std::string& fileName);
		/// <summary>
		/// Metodo que escribe en un fichero la putuacion (en autobuses) del
		/// jugador
		/// </summary>
		void writeFinalScore(const std::string& fileName);
		/// <summary>
		/// Crea las imagenes de los autobuses
		/// </summary>
		void drawBuses();
		private:
	
	

		int score_;

		bool paradasInitialized_;
		std::vector<Separity::Entity*> paradas_;
		Separity::Entity* paradaActual_;
		Separity::Transform* paradaActualTr_;
		int indexParada_;

		Separity::ParticleSystem* particleSys_;
		Separity::Transform* particleSysTr_;

		Separity::Entity* arrow_;
		Separity::Transform* arrowTr_;

		Separity::Entity* player_;
		Separity::Transform* playerTr_;

		float timeBetweenStops_;
		float currTime_;
		float maxTime_ = 45000;
		int finalPoints_;
		const int sumScore_;
		const int maxBusScore_=5;
		std::string scoreFileName_ = "puntuacion.txt";
		// bool isPlaying_;
	};
}  // namespace CrazyU
#endif