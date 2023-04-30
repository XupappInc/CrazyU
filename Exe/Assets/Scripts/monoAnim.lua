--Definicion de la clase en Lua
monoAnim = {}

monoAnim.__index = monoAnim

--Constructor de la clase en Lua
function monoAnim:new()
	local obj={}
	setmetatable(obj, monoAnim)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function monoAnim:awake()

end

--Metodo Start, llamado tras Awake
function monoAnim:start()
	print('ANIMAME ESTA KSTNIEHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII')
	local anim = monoAnim.entity:getAnimator();
	anim:playAnim("Breakdance",true);
end

--Metodo Update, llamado en cada frame
function monoAnim:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function monoAnim:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function monoAnim:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function monoAnim:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function monoAnim:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function monoAnim:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function monoAnim:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function monoAnim:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
monoAnimLua = monoAnim:new()
