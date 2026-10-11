/* Ghidra pseudocode. PS2 address: 001f7650. Not validated source. */

void FUN_001f7650(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x32000) = &DAT_002bce98;
  if ((iVar3 != -0xa47c8) && (iVar3 + 0xa47c8 != iVar3 + 0xa4a98)) {
    for (iVar2 = iVar3 + 0xa4a48; FUN_00204478(iVar2,0), iVar3 + 0xa47c8 != iVar2;
        iVar2 = iVar2 + -0x50) {
    }
  }
  if ((iVar3 != -0xa44f8) && (iVar3 + 0xa44f8 != iVar3 + 0xa47c8)) {
    iVar2 = iVar3 + 0xa4778;
    do {
      FUN_00204478(iVar2,0);
      bVar1 = iVar3 + 0xa44f8 != iVar2;
      iVar2 = iVar2 + -0x50;
    } while (bVar1);
  }
  if ((iVar3 != -0xa4228) && (iVar3 + 0xa4228 != iVar3 + 0xa44f8)) {
    iVar2 = iVar3 + 0xa44a8;
    do {
      FUN_00204478(iVar2,0);
      bVar1 = iVar3 + 0xa4228 != iVar2;
      iVar2 = iVar2 + -0x50;
    } while (bVar1);
  }
  FUN_001f4368(iVar3 + 0x8bb5c,2);
  FUN_00204638(param_1,param_2);
  return;
}

