Entities = {
	Play={
		button = {
			overlay = "BotonPlay",
			x = 50,
			y = 60,
			width = 512,
			height = 140,
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
			x = 50,
			y = 80,
			width = 256,
			height = 140,
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
			x = 50,
			y = 20,
			width = 600,
			height = 600,
			texture = "crazyU",
			zorder=2
		}
	},
	FondoUI={
		image = {
			overlay = "Fondo",
			x = 50,
			y = 50,
			width = 1302*1.5,
			height = 920*1.5,
			texture = "londres",
			zorder=0
		}
	}
}