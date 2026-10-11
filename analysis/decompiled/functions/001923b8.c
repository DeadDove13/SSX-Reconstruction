/* Ghidra pseudocode. PS2 address: 001923b8. Not validated source. */

undefined8 FUN_001923b8(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                       *(undefined4 *)(param_2 + 0x10),0);
  iVar2 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                       0x2b4640,0);
  iVar2 = iVar1 + 0x14 + iVar2;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38) + 0xc);
  iVar3 = 200;
  if (199 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4 = (undefined4 *)param_1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = iVar3 + 0x14;
  puVar4[3] = iVar1 + 4;
  return param_1;
}

