--Definicion de la clase en Lua
npcAnimations = {}

npcAnimations.__index = npcAnimations

--Constructor de la clase en Lua
function npcAnimations:new()
	local obj={}
	setmetatable(obj, npcAnimations)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function npcAnimations:awake()

end

--Metodo Start, llamado tras Awake
function npcAnimations:start()
	print('ANIMAME ESTA KSTNIEHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII')
	local anim = this.entity:getAnimator();
	anim:playAnim("walking",true);
end

--Metodo Update, llamado en cada frame
function npcAnimations:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function npcAnimations:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function npcAnimations:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function npcAnimations:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function npcAnimations:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function npcAnimations:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function npcAnimations:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function npcAnimations:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
npcAnimationsLua = npcAnimations:new()
