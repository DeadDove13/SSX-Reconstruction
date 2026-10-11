/* Ghidra pseudocode. PS2 address: 001748c8. Not validated source. */

void FUN_001748c8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00295f50 * 0x30;
  *(undefined8 *)(&DAT_00295ec0 + iVar1) = *(undefined8 *)(&DAT_00295e90 + iVar1);
  *(undefined8 *)(&DAT_00295ec8 + iVar1) = *(undefined8 *)(&DAT_00295e98 + iVar1);
  *(undefined8 *)(&DAT_00295ed0 + iVar1) = *(undefined8 *)(&DAT_00295ea0 + iVar1);
  *(undefined8 *)(&DAT_00295ed8 + iVar1) = *(undefined8 *)(&DAT_00295ea8 + iVar1);
  *(undefined8 *)(&DAT_00295ee0 + iVar1) = *(undefined8 *)(&DAT_00295eb0 + iVar1);
  *(undefined8 *)(&DAT_00295ee8 + iVar1) = *(undefined8 *)(&DAT_00295eb8 + iVar1);
  DAT_00295f50 = DAT_00295f50 + 1;
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
      (**(code **)(*(int *)(iVar1 + 0x24) + 0x1c))
                (DAT_002c2884,iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x18),param_2,
                 *(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x28) + iVar2);
      iVar2 = iVar2 + *(int *)(param_1 + 0x2c);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x24);
      while( true ) {
        (**(code **)(iVar2 + 0x34))(iVar1 + *(short *)(iVar2 + 0x30));
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) break;
        iVar2 = *(int *)(iVar1 + 0x24);
      }
    }
  }
  FUN_00131848(0x295e90);
  return;
}

