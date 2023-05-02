--Definicion de la clase en Lua
sonido = {}

sonido.__index = sonido

--Constructor de la clase en Lua
function sonido:new()
	local obj={}
	setmetatable(obj, sonido)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function sonido:awake()

end

--Metodo Start, llamado tras Awake
function sonido:start()
	print("Estoy entrando en el start del sonido");
	audioName = this.entity:getAudio():getAudioName();
	AudioManager:play(audioName, 1, 100);
end

--Metodo Update, llamado en cada frame
function sonido:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function sonido:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function sonido:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function sonido:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function sonido:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function sonido:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function sonido:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function sonido:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
sonidoLua = sonido:new()
