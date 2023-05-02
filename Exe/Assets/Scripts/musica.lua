--Definicion de la clase en Lua
musica = {}

musica.__index = musica

--Constructor de la clase en Lua
function musica:new()
	local obj={}
	setmetatable(obj, musica)
	return obj
end
local notPlaying=true;
--Metodo Awake, llamado al comienzo de la ejecucion
function musica:awake()

end

--Metodo Start, llamado tras Awake
function musica:start()
	print("Estoy entrando en el start de la musica");
	audioName = this.entity:getAudio():getAudioName();
	AudioManager:play(audioName, 10000, 10000);
end

--Metodo Update, llamado en cada frame
function musica:update()

end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function musica:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function musica:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function musica:onCollisionExit()

end

--Metodo OnButtonClick, llamado al pulsar el boton de esta entidad
function musica:onButtonClick()

end

--Metodo OnButtonReleased, llamado al soltar el boton de esta entidad
function musica:onButtonReleased()

end

--Metodo OnButtonHover, llamado al posar el raton sobre el boton de esta entidad
function musica:onButtonHover()

end

--Metodo OnButtonUnhover, llamado al dejar de posar el raton sobre el boton de esta entidad
function musica:onButtonUnhover()

end

--Variable global de la clase (para Luabridge)
musicaLua = musica:new()
