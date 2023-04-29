#pragma once
#ifndef __VEHICLE_MOVEMENT_CREATOR_H__
#define __VEHICLE_MOVEMENT_CREATOR_H__

#include "EntityComponent\CCreator.h"

namespace CrazyU {
	class VehicleMovementCreator : public Separity::CCreator {
		public:
		VehicleMovementCreator();
		~VehicleMovementCreator() = default;

		void registerInLua() override;
		bool createComponent(lua_State* L, Separity::Entity* ent) override;

		private:
	};
}  // namespace CrazyU

#endif  // !__VEHICLE_MOVEMENT_CREATOR_H__