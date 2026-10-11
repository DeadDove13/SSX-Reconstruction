/* Ghidra pseudocode. PS2 address: 00214530. Not validated source. */

void FUN_00214530(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  while (0x10 < param_4) {
    FUN_00214530(param_1,param_2,param_3 >> 0x10,param_4 - 0x10);
    param_4 = 0x10;
  }
  iVar2 = (int)param_1;
  uVar1 = *(int *)(iVar2 + 0x2da8) + param_4;
  *(uint *)(iVar2 + 0x2da8) = uVar1;
  *(uint *)(iVar2 + 0x2dac) =
       *(int *)(iVar2 + 0x2dac) +
       ((param_3 & *(uint *)(iVar2 + param_4 * 4 + 0x2d64)) << (0x18 - uVar1 & 0x1f));
  while (7 < uVar1) {
    piVar3 = (int *)param_2;
    *(char *)(*piVar3 + piVar3[1]) = (char)*(undefined2 *)(iVar2 + 0x2dae);
    piVar3[1] = piVar3[1] + 1;
    uVar1 = *(int *)(iVar2 + 0x2da8) - 8;
    *(int *)(iVar2 + 0x2dac) = *(int *)(iVar2 + 0x2dac) << 8;
    *(int *)(iVar2 + 0x2de4) = *(int *)(iVar2 + 0x2de4) + 1;
    *(uint *)(iVar2 + 0x2da8) = uVar1;
  }
  return;
}

