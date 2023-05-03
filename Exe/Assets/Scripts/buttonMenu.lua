--Definicion de la clase en Lua
buttonMenu = {}

buttonMenu.__index = buttonMenu

--Constructor de la clase en Lua
function buttonMenu:new()
	local obj={}
	setmetatable(obj, buttonMenu)
	return obj
end

--Metodo Awake, llamado al comienzo de la ejecucion
function buttonMenu:awake()

end

--Metodo Start, llamado tras Awake
function buttonMenu:start()
	
end

--Metodo Update, llamado en cada frame
function buttonMenu:update()
	--print("Update boton");
	--local butt=buttonMenu.entity:getButton();
	--butt:setVisible();
end

--Metodo OnCollisionEnter, llamado al comenzar una colision
function buttonMenu:onCollisionEnter()

end

--Metodo OnCollisionStay, llamado mientras se mantenga una colision
function buttonMenu:onCollisionStay()

end

--Metodo OnCollisionExit, llamado al salir de una colision
function buttonMenu:onCollisionExit()

end

--Metodo OnButtonClicked
function buttonMenu:onButtonClick()
	print("Estoy encima del boton");
	audio = this.entity:getAudio();
	if audio then
		AudioManager:play(audio:getAudioName(), 10000, 10000)
	end
end
function buttonMenu:onButtonReleased()
	--print("Has dejado de pulsar para ir al menú\n");
	SceneManager:changeScene("gameScene.lua");
end
--Metodo OnButtonHover
function buttonMenu:onButtonHover()
	
end
--Metodo OnButtonUnhover
function buttonMenu:onButtonUnhover()
	--print("Has quitado el cursor para ir al menu\n");
	
end
--Variable global de la clase (para Luabridge)
buttonMenuLua = buttonMenu:new()
