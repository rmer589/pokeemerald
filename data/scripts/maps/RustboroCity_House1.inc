RustboroCity_House1_MapScripts:: @ 821593E
	.byte 0

RustboroCity_House1_EventScript_21593F:: @ 821593F
	lock
	faceplayer
	checkflag FLAG_0x099
	goto_eq RustboroCity_House1_EventScript_2159D5
	setvar VAR_0x8008, 0
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, sub_807E73C
	copyvar VAR_0x8009, VAR_RESULT
	msgbox RustboroCity_House1_Text_2159E8, 5
	compare_var_to_value VAR_RESULT, 0
	goto_eq RustboroCity_House1_EventScript_2159BD
	special sub_81B94B0
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare_var_to_value VAR_0x8004, 255
	goto_eq RustboroCity_House1_EventScript_2159BD
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, sub_807E9D4
	copyvar VAR_0x800B, VAR_RESULT
	compare_var_to_var VAR_RESULT, VAR_0x8009
	goto_if 5, RustboroCity_House1_EventScript_2159C7
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special sub_807EA10
	special sub_807F0E4
	waitstate
	msgbox RustboroCity_House1_Text_215A77, 4
	setflag FLAG_0x099
	release
	end

RustboroCity_House1_EventScript_2159BD:: @ 82159BD
	msgbox RustboroCity_House1_Text_215ACE, 4
	release
	end

RustboroCity_House1_EventScript_2159C7:: @ 82159C7
	bufferspeciesname 0, VAR_0x8009
	msgbox RustboroCity_House1_Text_215A9D, 4
	release
	end

RustboroCity_House1_EventScript_2159D5:: @ 82159D5
	msgbox RustboroCity_House1_Text_215B17, 4
	release
	end

RustboroCity_House1_EventScript_2159DF:: @ 82159DF
	msgbox RustboroCity_House1_Text_215B57, 2
	end

RustboroCity_House1_Text_2159E8: @ 82159E8
	.string "Huh? My POKéMON is cute?\n"
	.string "Sure, I knew that.\p"
	.string "But if you really want, I’m willing\n"
	.string "to trade it to you.\p"
	.string "I’ll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

RustboroCity_House1_Text_215A77: @ 8215A77
	.string "Eheheh…\n"
	.string "Please be good to my POKéMON.$"

RustboroCity_House1_Text_215A9D: @ 8215A9D
	.string "Huh? That doesn’t look anything like\n"
	.string "a {STR_VAR_1} to me.$"

RustboroCity_House1_Text_215ACE: @ 8215ACE
	.string "Oh, if you don’t want to, that’s okay.\n"
	.string "But my POKéMON is cute, you know…$"

RustboroCity_House1_Text_215B17: @ 8215B17
	.string "Any POKéMON can be cute if you raise\n"
	.string "it with care and kindness.$"

RustboroCity_House1_Text_215B57: @ 8215B57
	.string "In all sorts of places, there are all\n"
	.string "sorts of POKéMON and people.\p"
	.string "I find that fascinating, so I go to all\n"
	.string "sorts of places.$"

