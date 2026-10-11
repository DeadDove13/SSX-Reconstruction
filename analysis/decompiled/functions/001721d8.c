/* Ghidra pseudocode. PS2 address: 001721d8. Not validated source. */

undefined4 FUN_001721d8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uStack_90;
  undefined1 auStack_8c [12];
  
  FUN_0016dc60();
  iVar5 = (int)param_1;
  uVar3 = (**(code **)(*(int *)(iVar5 + 4) + 0x74))
                    (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x70),0xffffffffffffffff);
  if ((uVar3 & 0x880) == 0) {
    if ((uVar3 & 0x120) == 0) {
      uVar2 = 0;
      if ((uVar3 & 0x10) != 0) {
        FUN_001faea0(DAT_002c56e8);
        FUN_001707a8(param_1,7,0xffffffffffffffff);
        uVar2 = 4;
        *(undefined4 *)(*(int *)(iVar5 + 0xb50) + 0x4f4) = 1;
      }
    }
    else {
      FUN_001faea0(DAT_002c56e8);
      uVar2 = 3;
    }
  }
  else {
    uVar7 = 0;
    FUN_001faea0(DAT_002c56e8);
    piVar6 = &DAT_0028111c;
    do {
      iVar1 = FUN_0016f348(param_1,0);
      if (iVar1 == *piVar6) {
        FUN_00170480(param_1,*(undefined4 *)(*(int *)(iVar5 + 0xb50) + 0x46c));
        lVar4 = FUN_0016f348(param_1,0);
        if (lVar4 == 0x19e) {
          DAT_0027ba88 = 2;
          DAT_0027bc04 = 0;
        }
        else {
          DAT_0027ba88 = 1;
          if (lVar4 == 0x19f) {
            DAT_0027ba88 = 4;
            DAT_0027bc04 = 1;
          }
          else {
            DAT_0027bc04 = 0;
          }
        }
        DAT_0027ba9c = 0;
        FUN_00168348(*(undefined4 *)(iVar5 + 0xb50),&uStack_90,auStack_8c);
        FUN_001707a8(param_1,uStack_90,0xffffffffffffffff);
        *(undefined4 *)(*(int *)(iVar5 + 0xb50) + 0x4f4) = 1;
        return 4;
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 2;
    } while (uVar7 < 2);
    uVar2 = 0;
  }
  return uVar2;
}

