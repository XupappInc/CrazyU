Entities = {
	Play={
		button = {
			overlay = "BotonPlay",
			x = 30,
			y = 55,
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
	},
	Quit={
		button = {
			overlay = "BotonQuit",
			x = 30,
			y = 75,
			width = 256*0.75,
			height = 140*0.75,
			iniTex = "QuitIni",
			hoverTex="QuitHover",
			clickedTex="QuitClick",
			zorder=2
		},
		script={
			name="quitMenu"
		}
	},
	CrazyUImage={
		image = {
			overlay = "CrazyUImage",
			x = 32,
			y = 20,
			width = 500,
			height = 500,
			texture = "crazyU",
			zorder=2
		}
	},
	FondoUI={
		image = {
			overlay = "Fondo",
			x = 50,
			y = 50,
			width = 1280,
			height = 720,
			texture = "londres",
			zorder=0
		}
	}
}