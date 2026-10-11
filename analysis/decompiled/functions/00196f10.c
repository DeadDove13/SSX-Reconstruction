/* Ghidra pseudocode. PS2 address: 00196f10. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00196f58) */
/* WARNING: Removing unreachable block (ram,0x00196fb0) */

undefined4 FUN_00196f10(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0023bbd0(param_2,0,4);
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x14) % 200;
    if (*(int *)(param_1 + 0x18) < 1) {
      *(uint *)(param_1 + 0x18) = (uint)*(byte *)(*(int *)(param_1 + 0x10) + iVar1 + 0x324);
    }
    *(undefined4 *)param_2 = *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 0x10) + 4);
    iVar1 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 < 1) {
      iVar1 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 % 200 != 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x10);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

