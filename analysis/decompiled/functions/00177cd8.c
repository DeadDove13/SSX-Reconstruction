/* Ghidra pseudocode. PS2 address: 00177cd8. Not validated source. */

undefined4 FUN_00177cd8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  FUN_0016dc60();
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xb50) == 0) {
    uVar3 = (**(code **)(*(int *)(iVar5 + 4) + 0x74))
                      (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x70),0xffffffffffffffff);
    uVar2 = 0;
    if ((uVar3 & 0x880) != 0) {
      FUN_001faea0(DAT_002c56e8);
      FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar5 + 0xb3c) + 0x46c));
      lVar4 = FUN_0016f348(param_1,0);
      uVar2 = 0;
      if (lVar4 == 0x31a) {
        FUN_001707a8(param_1,2,0xffffffffffffffff);
        uVar2 = 4;
        *(undefined4 *)(*(int *)(iVar5 + 0xb3c) + 0x4f4) = 1;
      }
    }
  }
  else {
    FUN_0016af18();
    lVar4 = FUN_0016aef0(*(undefined4 *)(iVar5 + 0xb50));
    if (lVar4 == 0) {
      uVar2 = 0;
      if (*(int *)(*(int *)(iVar5 + 0xb50) + 0x180) != 0) {
        FUN_001dc310();
        iVar1 = *(int *)(iVar5 + 0xb50);
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x170) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 8),3);
        }
        *(undefined4 *)(iVar5 + 0xb50) = 0;
        uVar2 = 0;
      }
    }
    else {
      FUN_001dc310(*(undefined4 *)(iVar5 + 0xb50));
      iVar1 = *(int *)(iVar5 + 0xb50);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x170) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 8),3);
      }
      *(undefined4 *)(iVar5 + 0xb50) = 0;
      FUN_00168290(*(undefined4 *)(iVar5 + 0xb3c));
      FUN_001707a8(param_1,0,0xffffffffffffffff);
      uVar2 = 4;
    }
  }
  return uVar2;
}

