#pragma once
#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "EntityComponent/Component.h"

namespace CrazyU {
	class GameManager : public Separity::Component {
		public:
		__CMPTYPE_DECL__(Separity::_SCRIPT)
		__CMPID_DECL__(Separity::_GAME_COMPONENT)

		GameManager();
		~GameManager();

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

		private:
		int score_;
	};
}  // namespace CrazyU
#endif