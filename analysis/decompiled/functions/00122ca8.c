/* Ghidra pseudocode. PS2 address: 00122ca8. Not validated source. */

undefined8
FUN_00122ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,long param_6,long param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00186070(param_1,param_2,0x17);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0xe4) = param_4;
  *(undefined **)(iVar2 + 8) = &DAT_002a8eb8;
  *(undefined4 *)(iVar2 + 0xe8) = param_5;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(int *)(iVar2 + 0x44) = (int)param_3;
  if (param_6 == 0) {
    FUN_0023bbd0(iVar2 + 0x50,0,0x40);
  }
  else {
    FUN_0023bac0(iVar2 + 0x50,param_6,0x40);
    *(undefined4 *)(iVar2 + 0xd0) = 1;
  }
  if (param_7 == 0) {
    FUN_0023bbd0(iVar2 + 0x90,0,0x40);
  }
  else {
    FUN_0023bac0(iVar2 + 0x90,param_7,0x40);
    *(undefined4 *)(iVar2 + 0xd4) = 1;
  }
  uVar1 = FUN_002229b8(0x299cc8,param_3);
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0xe0) = uVar1;
  FUN_00122f48(param_1);
  return param_1;
}

