LilycoveCity_LilycoveMuseum_2F_MapObjects: @ 8531428
	object_event 1, MAP_OBJ_GFX_GENTLEMAN, 0, 0, 10, 8, 3, 7, 0, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219866, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_GIRL_2, 0, 0, 19, 10, 3, 2, 17, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_21998A, 777, 0, 0
	object_event 3, MAP_OBJ_GFX_OLD_MAN_1, 0, 0, 7, 3, 3, 2, 17, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219993, 780, 0, 0
	object_event 4, MAP_OBJ_GFX_BOY_4, 0, 0, 14, 6, 3, 2, 17, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_21999C, 780, 0, 0

LilycoveCity_LilycoveMuseum_2F_MapWarps: @ 8531488
	warp_def 13, 1, 0, 2, LILYCOVE_CITY_LILYCOVE_MUSEUM_1F

LilycoveCity_LilycoveMuseum_2F_MapBGEvents: @ 8531490
	bg_event 14, 10, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_21992B
	bg_event 15, 10, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_21992B
	bg_event 3, 6, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_21993E
	bg_event 2, 6, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_21993E
	bg_event 10, 6, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219951
	bg_event 11, 6, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219951
	bg_event 19, 6, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219964
	bg_event 18, 6, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219964
	bg_event 6, 10, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219977
	bg_event 7, 10, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_219977
	bg_event 11, 2, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_218DDA
	bg_event 15, 2, 0, 0, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_218DDA

LilycoveCity_LilycoveMuseum_2F_MapEvents:: @ 8531520
	map_events LilycoveCity_LilycoveMuseum_2F_MapObjects, LilycoveCity_LilycoveMuseum_2F_MapWarps, 0x0, LilycoveCity_LilycoveMuseum_2F_MapBGEvents

