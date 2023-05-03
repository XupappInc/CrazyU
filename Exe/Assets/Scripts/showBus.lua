--Definicion de la clase en Lua
showBus = {}

showBus.__index = showBus

--Constructor de la clase en Lua
function showBus:new()
	local obj={}
	setmetatable(obj, showBus)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function showBus:awake()

end

--Metodo Start, llamado tras Awake
function showBus:start()
	GameManager:drawBuses();


end

--Metodo Update, llamado en cada frame
function showBus:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function showBus:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function showBus:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function showBus:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function showBus:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function showBus:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function showBus:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function showBus:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
showBusLua = showBus:new()
