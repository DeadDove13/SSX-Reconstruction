/* Ghidra pseudocode. PS2 address: 0011ff48. Not validated source. */

void FUN_0011ff48(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  FUN_0023bbd0(param_2,0,4);
  uVar3 = FUN_00121ae8(param_1);
  FUN_001099b0(uVar3,*(int *)param_1);
  puVar2 = (uint *)param_2;
  switch(*(undefined4 *)(*(int *)param_1 + 0x350)) {
  default:
    goto switchD_0011ffac_caseD_1;
  case 2:
  case 3:
  case 4:
  case 0xb:
  case 0xc:
  case 0x12:
    FUN_00120410(param_1,param_2);
    break;
  case 5:
    uVar1 = *puVar2 & 0xffffc0ff | 0x1f00;
    goto LAB_001200b0;
  case 8:
    FUN_001200d0(param_1,param_2);
    break;
  case 9:
  case 0x11:
    uVar1 = *puVar2 & 0xffffffc0 | 0x1f;
LAB_001200b0:
    *puVar2 = uVar1;
    goto switchD_0011ffac_caseD_1;
  case 10:
    FUN_00120408(param_1,param_2);
    break;
  case 0xd:
    FUN_00120508(param_1,param_2);
    break;
  case 0xe:
    FUN_00120270(param_1,param_2);
    break;
  case 0xf:
    FUN_00120610(param_1,param_2);
    break;
  case 0x10:
    FUN_001209f8(param_1,param_2);
    break;
  case 0x13:
    FUN_001207b8(param_1,param_2);
    break;
  case 0x14:
    FUN_001205b8(param_1,param_2);
    break;
  case 0x15:
    uVar1 = FUN_00121560(param_1);
    *puVar2 = *puVar2 & 0xfffffffe | uVar1 & 1;
switchD_0011ffac_caseD_1:
  }
  FUN_00121c00(param_1);
  return;
}

