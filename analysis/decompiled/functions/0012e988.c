/* Ghidra pseudocode. PS2 address: 0012e988. Not validated source. */

undefined8 FUN_0012e988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = iVar3 + 0x20;
  FUN_00186018();
  *(undefined **)(iVar3 + 8) = &DAT_002a9030;
  FUN_001dfb30(iVar4);
  uVar1 = FUN_00197c30(param_3,param_3);
  *(undefined4 *)(iVar3 + 0x18) = uVar1;
  uVar1 = FUN_00197d48(param_3,param_3);
  *(undefined4 *)(iVar3 + 0x1c) = uVar1;
  FUN_001e0428(iVar4,param_3);
  iVar2 = *(int *)(iVar3 + 0x1c) + 8;
  if (*(int *)(iVar3 + 0x1c) == 0) {
    iVar2 = 0;
  }
  FUN_001dfb38(iVar4,*(undefined4 *)(iVar3 + 0x18),iVar2);
  return param_1;
}

