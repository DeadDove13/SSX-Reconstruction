/* Ghidra pseudocode. PS2 address: 001e8420. Not validated source. */

void FUN_001e8420(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_002237f8(param_1,*param_2);
  iVar1 = *(int *)(*(int *)(iVar1 + 0xcc) * 8 + *(int *)((int)param_1 + 0x18));
  if ((*(uint *)(iVar1 + 4) & 1) == 0) {
    FUN_001cb238(0x2913b0,5,0);
    FUN_001be6d8(0x295e90,iVar1,DAT_00299ce8,param_3,param_4,0,0);
    FUN_001cb238(0x2913b0,0,0);
  }
  return;
}

