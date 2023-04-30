#pragma once
#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "EntityComponent/Component.h"
#include <vector>

namespace CrazyU {
	class GameManager : public Separity::Component {
		public:
		__CMPTYPE_DECL__(Separity::_SCRIPT)
		__CMPID_DECL__(Separity::_GAME_COMPONENT)

		GameManager();
		~GameManager();


		void update(const uint32_t& deltaTime) override;
		/// <summary>
		/// A�ade puntos a la puntuacion total actual
		/// </summary>
		/// <param name="score">Puntos a a�adir</param>
		void addScore(int score);
		/// <summary>
		/// Obtiene la puntuacion actual
		/// </summary>
		/// <returns>La puntuacion total actual del jugador</returns>
		int getScore();
		/// <summary>
		/// A�ade una parada al vector de paradas
		/// </summary>
		/// <param name="parada">Parada a a�adir</param>
		void addParada(Separity::Entity* parada);
		/// <summary>
		/// Asigna la 
		/// </summary>
		/// <param name="paradaActual"></param>
		void setParadaActual(Separity::Entity* paradaActual);

		private:
		int score_;
		std::vector<Separity::Entity*> paradas_;
		Separity::Entity* paradaActual_;
	};
}  // namespace CrazyU
#endif