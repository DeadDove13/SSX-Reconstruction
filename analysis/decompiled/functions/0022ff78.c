/* Ghidra pseudocode. PS2 address: 0022ff78. Not validated source. */

void FUN_0022ff78(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = DAT_002a1c9c + param_2 * 0x54;
  if (1.0 <= param_1) {
    if (*(int *)(iVar4 + 0x4c) != 0) {
      FUN_00230098(iVar4 + 0x34);
      FUN_002253d0(*(undefined4 *)(iVar4 + 0x4c));
      *(undefined4 *)(iVar4 + 0x4c) = 0;
    }
    return;
  }
  if (*(int *)(iVar4 + 0x4c) == 0) {
    uVar3 = FUN_00225218(0x1c);
    iVar2 = (int)uVar3;
    *(int *)(iVar4 + 0x4c) = iVar2;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined2 *)(iVar2 + 0xc) = 0;
    FUN_00232be8(uVar3);
    FUN_00230038(iVar4 + 0x34,*(undefined4 *)(iVar4 + 0x4c));
    uVar1 = *(undefined4 *)(iVar4 + 0x4c);
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x4c);
  }
  FUN_00232c08(param_1,uVar1);
  return;
}

