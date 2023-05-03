Entities = {
	GameManager = {
        manager = {
            inGameScene = false
        },
		script={
			name="showBus"
		}
    },
	FondoUI={
		image = {
			overlay = "FondoFinal",
			x = 50,
			y = 50,
			width = 1280,
			height = 720,
			texture = "final",
			zorder=0
		},
		audioSource ={
			route = "cancionEpicaGref.mp3",
			name = "cancionEpicaGref",
			isMusic = true
		}, 
		script = {
			name = "musica"
		}
	},
	Menu={
		button = {
			overlay = "BotonMenu",
			x = 20,
			y = 90,
			width = 512*0.5,
			height = 140*0.5,
			iniTex = "menuIni",
			hoverTex="menuHover",
			clickedTex="menuClick",
			zorder=2
		},
		script={
			name="sceneButton"
		}
	},
	Play={
		button = {
			overlay = "BotonPlay",
			x = 80,
			y = 90,
			width = 512*0.5,
			height = 140*0.5,
			iniTex = "iniMat",
			hoverTex="hoverMat",
			clickedTex="clickedMat",
			zorder=2
		},
		script = {
			name = "buttonMenu"
		}
	}
}
