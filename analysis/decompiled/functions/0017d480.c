/* Ghidra pseudocode. PS2 address: 0017d480. Not validated source. */

void FUN_0017d480(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  FUN_0017c308(param_1);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0xbc4) == 0) {
    lVar3 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar4 + 0xb3c) + 0x46c));
    if (lVar3 < 0x175) {
      if (lVar3 < 0x173) {
        if (lVar3 == 0x172) {
          lVar3 = FUN_0023a448(0x2b13f0,0x174,0x10);
          if (lVar3 != 0) {
            FUN_0023bbd0(lVar3,0,0x174);
          }
          iVar1 = FUN_00179d30(lVar3,*(undefined4 *)(iVar4 + 0xb3c),param_1);
          *(undefined4 *)(iVar1 + 0x2c) = 0xf;
          *(undefined4 *)(iVar1 + 0x24) = 0x32;
          *(undefined4 *)(iVar1 + 0x28) = 0xffffffce;
          *(int *)(iVar4 + 0xbc8) = iVar1;
          FUN_0017c248(param_1);
        }
      }
      else {
        lVar3 = FUN_0023a448(0x2b13f0,0x8c,0x10);
        if (lVar3 != 0) {
          FUN_0023bbd0(lVar3,0,0x8c);
        }
        uVar2 = FUN_0017a1a8(lVar3,*(undefined4 *)(iVar4 + 0xb3c),param_1,0,1,0,0xffffffffffffffd8,
                             0xf);
        *(undefined4 *)(iVar4 + 0xbc8) = uVar2;
        FUN_0017c2a8(param_1);
      }
    }
    else if (lVar3 == 0x175) {
      lVar3 = FUN_0023a448(0x2b13f0,0x128,0x10);
      if (lVar3 != 0) {
        FUN_0023bbd0(lVar3,0,0x128);
      }
      iVar1 = FUN_001799e0(lVar3,*(undefined4 *)(iVar4 + 0xb3c),param_1);
      *(undefined4 *)(iVar1 + 0x2c) = 0xf;
      *(undefined4 *)(iVar1 + 0x24) = 0x32;
      *(undefined4 *)(iVar1 + 0x28) = 0xffffffce;
      *(int *)(iVar4 + 0xbc8) = iVar1;
      FUN_0017c248(param_1);
    }
    return;
  }
  lVar3 = FUN_0023a448(0x2b13f0,0x8c,0x10);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0,0x8c);
  }
  iVar1 = FUN_0017a1a8(lVar3,*(undefined4 *)(iVar4 + 0xb3c),param_1,0,0,0,0xffffffffffffffd8,0xf);
  *(int *)(iVar4 + 0xbc8) = iVar1;
  *(undefined4 *)(iVar1 + 8) = 0;
  FUN_0017c2a8(param_1);
  return;
}

