LilycoveCity_DepartmentStoreElevator_MapScripts:: @ 8220623
	.byte 0

LilycoveCity_DepartmentStoreElevator_EventScript_220624:: @ 8220624
	lock
	faceplayer
	setvar VAR_0x8004, 0
	checkflag FLAG_0x002
	call_if 0, LilycoveCity_DepartmentStoreElevator_EventScript_2207FC
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special sub_8139B60
	message gUnknown_08272C1D
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, sub_81399F4
	switch VAR_RESULT
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_220689
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_220695
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_2206A1
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_2206AD
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_2206B9
	end

LilycoveCity_DepartmentStoreElevator_EventScript_220689:: @ 8220689
	multichoicedefault 0, 0, 57, 0, 0
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2206C5
	end

LilycoveCity_DepartmentStoreElevator_EventScript_220695:: @ 8220695
	multichoicedefault 0, 0, 57, 1, 0
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2206C5
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2206A1:: @ 82206A1
	multichoicedefault 0, 0, 57, 2, 0
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2206C5
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2206AD:: @ 82206AD
	multichoicedefault 0, 0, 57, 3, 0
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2206C5
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2206B9:: @ 82206B9
	multichoicedefault 0, 0, 57, 4, 0
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2206C5
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2206C5:: @ 82206C5
	switch VAR_RESULT
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_2207B8
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_220790
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_220768
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_220740
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_220718
	case 5, LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	case 127, LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	end

LilycoveCity_DepartmentStoreElevator_EventScript_220718:: @ 8220718
	setvar VAR_0x8006, 4
	setdynamicwarp LILYCOVE_CITY_DEPARTMENT_STORE_1F, 255, 2, 1
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 4
	goto_eq LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	call LilycoveCity_DepartmentStoreElevator_EventScript_2207E5
	setvar VAR_DEPT_STORE_FLOOR, 4
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	end

LilycoveCity_DepartmentStoreElevator_EventScript_220740:: @ 8220740
	setvar VAR_0x8006, 5
	setdynamicwarp LILYCOVE_CITY_DEPARTMENT_STORE_2F, 255, 2, 1
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 5
	goto_eq LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	call LilycoveCity_DepartmentStoreElevator_EventScript_2207E5
	setvar VAR_DEPT_STORE_FLOOR, 5
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	end

LilycoveCity_DepartmentStoreElevator_EventScript_220768:: @ 8220768
	setvar VAR_0x8006, 6
	setdynamicwarp LILYCOVE_CITY_DEPARTMENT_STORE_3F, 255, 2, 1
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 6
	goto_eq LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	call LilycoveCity_DepartmentStoreElevator_EventScript_2207E5
	setvar VAR_DEPT_STORE_FLOOR, 6
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	end

LilycoveCity_DepartmentStoreElevator_EventScript_220790:: @ 8220790
	setvar VAR_0x8006, 7
	setdynamicwarp LILYCOVE_CITY_DEPARTMENT_STORE_4F, 255, 2, 1
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 7
	goto_eq LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	call LilycoveCity_DepartmentStoreElevator_EventScript_2207E5
	setvar VAR_DEPT_STORE_FLOOR, 7
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2207B8:: @ 82207B8
	setvar VAR_0x8006, 8
	setdynamicwarp LILYCOVE_CITY_DEPARTMENT_STORE_5F, 255, 2, 1
	compare_var_to_value VAR_DEPT_STORE_FLOOR, 8
	goto_eq LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	call LilycoveCity_DepartmentStoreElevator_EventScript_2207E5
	setvar VAR_DEPT_STORE_FLOOR, 8
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2207E0
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2207E0:: @ 82207E0
	special sub_8139C10
	release
	end

LilycoveCity_DepartmentStoreElevator_EventScript_2207E5:: @ 82207E5
	special sub_8139C10
	closemessage
	applymovement VAR_LAST_TALKED, LilycoveCity_DepartmentStoreElevator_Movement_2725AA
	waitmovement 0
	waitse
	special sub_8139A78
	waitstate
	setflag FLAG_0x002
	return

LilycoveCity_DepartmentStoreElevator_EventScript_2207FC:: @ 82207FC
	special sub_8139994
	return

