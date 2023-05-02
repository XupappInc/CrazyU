--Definicion de la clase en Lua
barraTiempo = {}

barraTiempo.__index = barraTiempo

--Constructor de la clase en Lua
function barraTiempo:new()
	local obj={}
	setmetatable(obj, barraTiempo)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function barraTiempo:awake()

end

--Metodo Start, llamado tras Awake
function barraTiempo:start()

end

--Metodo Update, llamado en cada frame
function barraTiempo:update()
	local porcent=GameManager:getPercentage();
	local barra = barraTiempo.entity:getBar();
	barra:setPercentage(porcent)
end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function barraTiempo:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function barraTiempo:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function barraTiempo:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function barraTiempo:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function barraTiempo:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function barraTiempo:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function barraTiempo:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
barraTiempoLua = barraTiempo:new()
