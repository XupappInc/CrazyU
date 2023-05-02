Entities = {
	FondoUI={
		image = {
			overlay = "FondoFinal",
			x = 50,
			y = 50,
			width = 1280,
			height = 720,
			texture = "final",
			zorder=0
		}
	},
	Menu={
		button = {
			overlay = "BotonMenu",
			x = 20,
			y = 80,
			width = 512*0.75,
			height = 140*0.75,
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
			y = 80,
			width = 512*0.75,
			height = 140*0.75,
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