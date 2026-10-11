/* Ghidra pseudocode. PS2 address: 001986f8. Not validated source. */

undefined4 FUN_001986f8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined4 auStack_88 [6];
  
  iVar4 = *(int *)param_2;
  *(int *)param_2 = iVar4 + 0x14;
  FUN_0023bac0(auStack_90,iVar4,0x14);
  iVar4 = 0;
  if (0 < iStack_8c) {
    puVar3 = (undefined4 *)(param_1 + 0xc);
    puVar2 = auStack_88;
    do {
      uVar1 = FUN_001964a8(*(undefined4 *)(DAT_002859e4 + 0x38),*(undefined4 *)(param_1 + 4),*puVar2
                          );
      *puVar3 = (int)uVar1;
      FUN_00198900(uVar1,param_2);
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < iStack_8c);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}

