#pragma once
#ifndef __VEHICLE_MOVEMENT_H__
#define __VEHICLE_MOVEMENT_H__

#include "EntityComponent\Component.h"

namespace Spyutils {
	class Vector3;
}
namespace Separity {	
	class RigidBody;
	class Transform;
	class InputManager;
}
namespace CrazyU {
	/// <summary>
	/// Componente VehicleMovement
	/// </summary>
	class VehicleMovement : public Separity::Component {
		public:
		__CMPTYPE_DECL__(Separity::_SCRIPT)
		__CMPID_DECL__(Separity::_GAME_COMPONENT)

		VehicleMovement();
		~VehicleMovement();

		void initComponent() override;
		/// <summary>
		/// Añade giro al volante
		/// </summary>
		/// <param name="dir">Entre -1 y 1, siendo -1 izquierda y 1
		/// derecha</param>
		void girar(int dir ,float dt);
		/// <summary>
		/// Acelera hacia delante o hacia atrás
		/// <param name="dir">Entre -1 y 1, siendo -1 atrás y 1 adelante</param>
		/// </summary>
		void acelerar(int dir,float dt);
		/// <summary>
		/// Gestiona el freno del vehículo
		/// </summary>
		void frenar(float dt);
		/// <summary>
		/// Método update heredado de Component
		/// </summary>
		void update(const uint32_t& deltaTime) override;

		private:
		Separity::InputManager* inputManager;
		Separity::RigidBody* rb_;
		Separity::Transform* cameraTr_;
		float cameraOffset_ = 0;
		float cameraRot_ = 0;
		bool rot_ = true;
	};
}  // namespace Separity
#endif __VEHICLE_MOVEMENT_H__