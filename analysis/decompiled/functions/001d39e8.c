/* Ghidra pseudocode. PS2 address: 001d39e8. Not validated source. */

void FUN_001d39e8(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0xd074) == 0) {
    FUN_001d3138();
  }
  if (*(int *)(iVar3 + 0xd07c) == 0) {
    FUN_001d32b8(param_1,param_4);
    iVar2 = *(int *)(iVar3 + 0xd080);
  }
  else {
    iVar2 = *(int *)(iVar3 + 0xd080);
  }
  if (*(int *)(iVar2 + 0x54) == 0) {
    *(uint *)(iVar2 + 0x54) = param_2;
    *(undefined4 *)(*(int *)(iVar3 + 0xd080) + 0x58) = param_3;
  }
  else {
    puVar1 = *(ulong **)(iVar2 + 0x58);
    puVar1[1] = 0;
    *puVar1 = (ulong)param_2 << 0x20 | 0x20000000;
    *(undefined4 *)(*(int *)(iVar3 + 0xd080) + 0x58) = param_3;
  }
  return;
}

