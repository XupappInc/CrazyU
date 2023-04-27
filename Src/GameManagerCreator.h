#pragma once
#ifndef __GAME_MANAGER_CREATOR_H__
#define __GAME_MANAGER_CREATOR_H__

#include "EntityComponent/CCreator.h"

namespace CrazyU {
	class GameManagerCreator : public Separity::CCreator {
		
		public:
		GameManagerCreator();
		~GameManagerCreator() = default;

		void registerInLua() override;
		bool createComponent(lua_State* L, Separity::Entity* ent) override;

		private:
	};
}  // namespace CrazyU

#endif  // !__GAME_MANAGER_CREATOR_H__