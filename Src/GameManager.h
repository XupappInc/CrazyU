#pragma once
#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "EntityComponent/Component.h"
#include <vector>
#include <string>

namespace Separity 
{
	class Entity;
	class Transform;
	class ParticleSystem;
}

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
		/// Activa el particleSystem en la parada actual para indicar que el bus ha recogido a los peatones
		/// </summary>
		void repositionParticleSys();

		float timeLeft();
		int getPercentageofTime();
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
		float maxTime_=45000;

		bool isPlaying_;
	};
}  // namespace CrazyU
#endif