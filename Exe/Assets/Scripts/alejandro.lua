--Definicion de la clase en Lua
alejandro = {}

alejandro.__index = alejandro

--Constructor de la clase en Lua
function alejandro:new()
	local obj={}
	setmetatable(obj, alejandro)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function alejandro:awake()

end

--Metodo Start, llamado tras Awake
function alejandro:start()
	print('ANIMAME ESTA KSTNIEHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII')
	local anim = alejandro.entity:getAnimator();
	anim:playAnim("sexy_dance",true);
end

--Metodo Update, llamado en cada frame
function alejandro:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function alejandro:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function alejandro:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function alejandro:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function alejandro:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function alejandro:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function alejandro:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function alejandro:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
alejandroLua = alejandro:new()
