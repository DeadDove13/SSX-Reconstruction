/* Ghidra pseudocode. PS2 address: 00267008. Not validated source. */

void FUN_00267008(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00266d00(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar5 = (int)uVar2;
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar5 + 0x14) = uVar1;
  *(undefined4 *)(iVar5 + 0x20) = 0x80000009;
  lVar3 = FUN_00266fb8(*(undefined4 *)(param_1 + 0x20),param_2);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar5 + 0x24) = 0;
    *(undefined4 *)(iVar5 + 0x28) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
  }
  else {
    iVar4 = (int)lVar3;
    *(int *)(iVar5 + 0x24) = iVar4;
    *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar4 + 0x14);
  }
  FUN_00266870(0xffffffff80000008,uVar2,0x40,0,0,0);
  return;
}

