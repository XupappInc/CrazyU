Entities = {
	Music =  {
		audioSource = {
			route = "Assets//callmemaybe.mp3",
			name = "callmemaybe",
			isMusic = 1
		},
		script={
			name = "musica"
		}
	},
	Cositas = {
		button = {
			overlay = "SoundButton",
			x = 0,
			y = 0,
			width = 100,
			height = 100,
			iniTex = "volumeIni",
			hoverTex="volumeHover",
			clickedTex="volumeClick",
			zorder=2
		},
		script={
			name="soundButton"
		}
	}
}