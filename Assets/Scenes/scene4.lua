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
	BotonSonido = {
		button = {
			overlay = "SoundButton",
			x = 100,
			y = 100,
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
	},
	Light = {
		transform = {
			pos = {4.076245307922363, 5.903861999511719, -1.0054539442062378},
			rot = {0.36299651861190796, 0.7485859990119934, -0.07867267727851868, 0.5492388010025024},
			scale = {1.0, 1.0, 1.0}
		},
		light = {
			color = {1.0, 1.0, 1.0},
			type = "SUN"
		}
	},
	SM_Bld_Apartment_01 = {
		transform = {
			pos = {-13.499267578125, 0.7482438087463379, -1.253498911857605},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.4980705678462982, 0.4980705678462982, 0.4980705678462982}
		},
		meshRenderer = {
			meshName = "Mesh"
		},
		collider = {
			dim = {2.4903528690338135, 2.5877747535705566, 1.4942116737365723},
		},
		rigidbody = {
			type = 2
		}
	},
	SM_Env_Sidewalk_01 = {
		transform = {
			pos = {-130.7451934814453, 0.0, -103.54013061523438},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.499408483505249, 0.499408483505249, 0.499408483505249}
		},
		meshRenderer = {
			meshName = "Mesh.001"
		}
	},
	SM_Prop_LightPole_Base_01 = {
		transform = {
			pos = {0.0, 0.0, 1.5695208311080933},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.41332826018333435, 0.41332826018333435, 0.41332826018333435}
		},
		meshRenderer = {
			meshName = "Mesh.005"
		}
	},
	SM_Prop_ParkBench_01 = {
		transform = {
			pos = {-1.7309026718139648, 0.0, -0.0},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.48391225934028625, 0.48391225934028625, 0.48391225934028625}
		},
		meshRenderer = {
			meshName = "Mesh.006"
		}
	},
	SM_Prop_LightPole_Lights_01 = {
		transform = {
			pos = {0.0, -0.6311866044998169, 1.568221926689148},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5217331647872925, 0.5217331647872925, 0.5217331647872925}
		},
		meshRenderer = {
			meshName = "Mesh.008"
		}
	},
	SM_Prop_LightPole_CrossLights_01 = {
		transform = {
			pos = {-0.08798772096633911, -0.4352197051048279, 1.527100920677185},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5583922863006592, 0.5583922863006592, 0.5583922863006592}
		},
		meshRenderer = {
			meshName = "Mesh.009"
		}
	},
	Camera = {
		transform = {
			pos = {0.0, 0.0, -0.0},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071067690849304},
			scale = {1.0, 1.0, 1.0}
		},
		camera = {
		}
	},
	SM_Env_Sidewalk_Dip_Corner_01 = {
		transform = {
			pos = {-4.803447723388672, 0.05909702181816101, 4.199702739715576},
			rot = {5.338507591545749e-08, -0.7071068286895752, 0.7071067690849304, 5.338507946817117e-08},
			scale = {-0.4836762547492981, -0.4836762547492981, -0.4836762547492981}
		},
		meshRenderer = {
			meshName = "Mesh.004"
		}
	},
	SM_Env_Sidewalk_Straight_01 = {
		transform = {
			pos = {-5.065011501312256, 0.13057991862297058, 6.775745391845703},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.519815981388092, 0.519815981388092, 0.519815981388092}
		},
		meshRenderer = {
			meshName = "Mesh.007"
		}
	},
	SM_Env_Grass_01 = {
		transform = {
			pos = {-0.013741254806518555, 0.0, 9.29885482788086},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.4882009029388428, 0.4882009029388428, 0.4882009029388428}
		},
		meshRenderer = {
			meshName = "Mesh.012"
		}
	},
	SM_Env_Tree_01 = {
		transform = {
			pos = {-4.27528715133667, 0.0, 9.407008171081543},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.8161892890930176, 0.8161892890930176, 0.8161892890930176}
		},
		meshRenderer = {
			meshName = "Mesh.013"
		}
	},
	SM_Env_Tree_02 = {
		transform = {
			pos = {-3.4676332473754883, 0.0, 11.633634567260742},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.8161892890930176, 0.8161892890930176, 0.8161892890930176}
		},
		meshRenderer = {
			meshName = "Mesh.014"
		}
	},
	SM_Env_Tree_03 = {
		transform = {
			pos = {-1.4364190101623535, 0.0, 10.225226402282715},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.7150607109069824, 0.7150607109069824, 0.7150607109069824}
		},
		meshRenderer = {
			meshName = "Mesh.015"
		}
	},
	SM_Env_GrassPath_Corner_01 = {
		transform = {
			pos = {2.4110941886901855, 0.0, 13.09172248840332},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.514667809009552, 0.514667809009552, 0.514667809009552}
		},
		meshRenderer = {
			meshName = "Mesh.016"
		}
	},
	SM_Env_GrassPath_Junction_01 = {
		transform = {
			pos = {2.404024839401245, 0.0, 15.811375617980957},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.514667809009552, 0.514667809009552, 0.514667809009552}
		},
		meshRenderer = {
			meshName = "Mesh.017"
		}
	},
	SM_Env_GrassPath_Straight_01 = {
		transform = {
			pos = {2.359267234802246, 1.4901161193847656e-08, 18.648813247680664},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.514667809009552, 0.514667809009552, 0.514667809009552}
		},
		meshRenderer = {
			meshName = "Mesh.018"
		}
	},
	SM_Env_GrassPath_T_01 = {
		transform = {
			pos = {5.299658298492432, 0.0, 15.699371337890625},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.514667809009552, 0.514667809009552, 0.514667809009552}
		},
		meshRenderer = {
			meshName = "Mesh.019"
		}
	},
	SM_Env_Road_01 = {
		transform = {
			pos = {2.985184907913208, 0.09777837246656418, 2.575413942337036},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.020"
		}
	},
	SM_Env_Road_02 = {
		transform = {
			pos = {2.985184907913208, 0.09777837246656418, 5.25712251663208},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.021"
		}
	},
	SM_Env_Road_03 = {
		transform = {
			pos = {5.787903785705566, 0.09777825325727463, 2.8116865158081055},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.022"
		}
	},
	SM_Env_Road_Arrow_01_001 = {
		transform = {
			pos = {5.845401763916016, 0.09777837246656418, 5.653352737426758},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.023"
		}
	},
	SM_Env_Road_Arrow_02 = {
		transform = {
			pos = {8.580994606018066, 0.09777837246656418, 0.08417928218841553},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.024"
		}
	},
	SM_Env_Road_Bare_01_001 = {
		transform = {
			pos = {8.651348114013672, 0.09777837246656418, 3.0036542415618896},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.025"
		}
	},
	SM_Env_Road_Crossing_01_001 = {
		transform = {
			pos = {8.718751907348633, 0.09777837246656418, 5.867628574371338},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.026"
		}
	},
	SM_Env_Road_Lines_01 = {
		transform = {
			pos = {11.520748138427734, 0.09777837246656418, 0.23236989974975586},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.027"
		}
	},
	SM_Env_Road_Lines_02 = {
		transform = {
			pos = {11.597551345825195, 0.09777837246656418, 3.136789321899414},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.028"
		}
	},
	SM_Env_Road_Median_01 = {
		transform = {
			pos = {2.9168155193328857, 0.09777837246656418, -2.9612889289855957},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.029"
		}
	},
	SM_Env_Road_Median_02 = {
		transform = {
			pos = {5.895643711090088, 0.09777837246656418, -2.9640707969665527},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.030"
		}
	},
	SM_Env_Road_ParkingLines_01 = {
		transform = {
			pos = {8.89404582977295, 0.09777837246656418, -2.790221691131592},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.031"
		}
	},
	SM_Env_Road_YellowLines_01 = {
		transform = {
			pos = {7.631828308105469, 0.09777837246656418, -6.138917922973633},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.033"
		}
	},
	SM_Env_Road_YellowLines_02 = {
		transform = {
			pos = {4.373299598693848, 0.09777837246656418, -0.13525190949440002},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5273774266242981, 0.5273774266242981, 0.5273774266242981}
		},
		meshRenderer = {
			meshName = "Mesh.034"
		}
	},
	SM_Env_Fence_01 = {
		transform = {
			pos = {-2.6349730491638184, 0.0, -0.0},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5564895272254944, 0.5564895272254944, 0.5564895272254944}
		},
		meshRenderer = {
			meshName = "Mesh.035"
		}
	},
	SM_Env_Fence_End_01 = {
		transform = {
			pos = {-2.6349730491638184, 0.0, -0.0},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.5307559370994568, 0.5307559370994568, 0.5307559370994568}
		},
		meshRenderer = {
			meshName = "Mesh.036"
		}
	},
	SM_Env_SubwayEntrance_01_Glass = {
		transform = {
			pos = {0.0, 0.0, -0.0},
			rot = {0.0, 0.0, -0.0, 1.0},
			scale = {1.0, 1.0, 1.0}
		},
		meshRenderer = {
			meshName = "Mesh.038"
		}
	},
	SM_Env_SubwayEntrance_01 = {
		transform = {
			pos = {-6.946558475494385, 0.01827627420425415, -6.038226127624512},
			rot = {-0.7071067690849304, 0.0, 0.0, 0.7071068286895752},
			scale = {-0.2988187074661255, -0.2988187074661255, -0.2988187074661255}
		},
		meshRenderer = {
			meshName = "Mesh.037"
		}
	},
	SM_Env_SubwayEntrance_02 = {
		transform = {
			pos = {-4.137309551239014, 0.0182763934135437, -6.688243389129639},
			rot = {-0.7071067690849304, 0.0, 0.0, 0.7071068286895752},
			scale = {-0.2988187074661255, -0.2988187074661255, -0.2988187074661255}
		},
		meshRenderer = {
			meshName = "Mesh.039"
		}
	},
	SM_Prop_Manhole_01 = {
		transform = {
			pos = {7.870937824249268, 0.0, -0.8226213455200195},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.6836143136024475, 0.6836143136024475, 0.6836143136024475}
		},
		meshRenderer = {
			meshName = "Mesh.041"
		}
	},
	SM_Prop_BusStop_01_Glass = {
		transform = {
			pos = {-7.264047622680664, -0.08472290635108948, -0.031336620450019836},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.6660562753677368, 0.6660562753677368, 0.6660562753677368}
		},
		meshRenderer = {
			meshName = "Mesh.043"
		}
	},
	SM_Prop_BusStop_01 = {
		transform = {
			pos = {-7.27498722076416, 0.0, -0.0},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.6282830834388733, 0.6282830834388733, 0.6282830834388733}
		},
		meshRenderer = {
			meshName = "Mesh.042"
		}
	},
	SM_Prop_SidewalkPoles_01 = {
		transform = {
			pos = {0.6216485500335693, 0.0, 2.9846577644348145},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.6593250036239624, 0.6593250036239624, 0.6593250036239624}
		},
		meshRenderer = {
			meshName = "Mesh.044"
		}
	},
	SM_Prop_SidewalkPoles_02 = {
		transform = {
			pos = {0.5476887226104736, 0.0, 4.200243949890137},
			rot = {0.7071067690849304, 0.0, -0.0, 0.7071068286895752},
			scale = {0.6593250036239624, 0.6593250036239624, 0.6593250036239624}
		},
		meshRenderer = {
			meshName = "Mesh.045"
		}
	},
	Cube = {
		transform = {
			pos = {0.0, -0.3001861870288849, -0.0},
			rot = {0.0, 0.0, -0.0, 1.0},
			scale = {95.59635925292969, 0.29880291223526, 95.59635925292969}
		},
		meshRenderer = {
			meshName = "suelo012138761"
		},
		collider = {
			dim = {191.19271850585938, 0.59760582447052, 191.19271850585938},
		},
		rigidbody = {
			type = 2
		}
	},
	Soundbur={
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