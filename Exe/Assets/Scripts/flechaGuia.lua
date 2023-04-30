--Definicion de la clase en Lua
flechaGuia = {}

flechaGuia.__index = flechaGuia

--Constructor de la clase en Lua
function flechaGuia:new()
	local obj={}
	setmetatable(obj, flechaGuia)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function flechaGuia:awake()

end

--Metodo Start, llamado tras Awake
function flechaGuia:start()

end

--Metodo Update, llamado en cada frame
function flechaGuia:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function flechaGuia:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function flechaGuia:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function flechaGuia:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function flechaGuia:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function flechaGuia:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function flechaGuia:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function flechaGuia:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
flechaGuiaLua = flechaGuia:new()
