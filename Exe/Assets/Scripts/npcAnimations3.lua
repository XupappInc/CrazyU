--Definicion de la clase en Lua
npcAnimations3 = {}

npcAnimations3.__index = npcAnimations3

--Constructor de la clase en Lua
function npcAnimations3:new()
	local obj={}
	setmetatable(obj, npcAnimations3)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function npcAnimations3:awake()

end

--Metodo Start, llamado tras Awake
function npcAnimations3:start()
	print('ANIMAME ESTA KSTNIEHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII')
	local anim = npcAnimations.entity:getAnimator();
	anim:playAnim("idle",true);
end

--Metodo Update, llamado en cada frame
function npcAnimations3:update()
	
end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function npcAnimations3:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function npcAnimations3:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function npcAnimations3:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function npcAnimations3:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function npcAnimations3:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function npcAnimations3:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function npcAnimations3:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
npcAnimations3Lua = npcAnimations3:new()
