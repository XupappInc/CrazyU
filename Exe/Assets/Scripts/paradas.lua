--Definicion de la clase en Lua
paradas = {}

paradas.__index = paradas

--Constructor de la clase en Lua
function paradas:new()
	local obj={}
	setmetatable(obj, paradas)
	return obj
end
local alreadyPickedPeople = false;
--Metodo Awake, llamado al comienzo de la ejecucion
function paradas:awake()
    -- GameManager:addParada(paradas.entity)
end

--Metodo Start, llamado tras Awake
function paradas:start()

end

--Metodo Update, llamado en cada frame
function paradas:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function paradas:onCollisionEnter()

    
end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function paradas:onCollisionStay()
	--Si aún no ha recogido a nadie
	if alreadyPickedPeople ~= true then
		
		if other ~= nil then
			if other:getTag() == "Player" then
				print('Chocando con el jugador');
				print(other);
				rigidbody = other:getRigidBody();
				if rigidbody then
					vel = rigidbody:getVelocity();
					print("Tengo el getRigidBody");
					if vel < 1.5 then
						alreadyPickedPeople = true;
					end
					
				end
			end
		else
			print('Other existe');
		end
	end
end

--Metodo OnCollisionExit, llamado al salir de una colision
function paradas:onCollisionExit()
	alreadyPickedPeople = false;
end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function paradas:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function paradas:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function paradas:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function paradas:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
paradasLua = paradas:new()
