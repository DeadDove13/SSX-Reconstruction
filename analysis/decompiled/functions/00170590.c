/* Ghidra pseudocode. PS2 address: 00170590. Not validated source. */

void FUN_00170590(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar3 = 0;
  iVar1 = FUN_0016f348(param_1,param_3);
  iVar6 = iVar1;
  do {
    do {
      if ((param_2 == 8) || (param_2 == 0x100000)) {
        iVar3 = FUN_0016de00(param_1,param_3);
        iVar3 = *(int *)(iVar3 + 0xc4);
      }
      else if ((param_2 == 4) || (param_2 == 0x80000)) {
        iVar3 = FUN_0016de00(param_1,param_3);
        iVar3 = *(int *)(iVar3 + 200);
      }
      else if ((param_2 == 1) || (param_2 == 0x20000)) {
        iVar3 = FUN_0016de00(param_1,param_3);
        iVar3 = *(int *)(iVar3 + 0xcc);
      }
      else if ((param_2 == 2) || (param_2 == 0x40000)) {
        iVar3 = FUN_0016de00(param_1,param_3);
        iVar3 = *(int *)(iVar3 + 0xd0);
      }
      if (iVar3 != 0) {
        if (iVar3 == iVar6) {
          return;
        }
        if (iVar5 == 0) {
          FUN_001faf48(DAT_002c56e8);
        }
        uVar4 = FUN_0016f348(param_1,param_3);
        FUN_0016f018(param_1,uVar4,param_3);
        FUN_0016fe18(param_1,iVar3,param_3);
        uVar4 = FUN_0016f348(param_1,param_3);
        FUN_0016eec0(param_1,uVar4,param_3);
        iVar6 = iVar3;
        if ((iVar3 == iVar1) && (0 < iVar5)) {
          return;
        }
      }
      if (((param_2 & 0x18000c) == 0) &&
         ((iVar2 = FUN_0016de00(param_1,param_3), (*(uint *)(iVar2 + 0x98) & 8) != 0 ||
          (iVar2 = FUN_0016de00(param_1,param_3), (*(uint *)(iVar2 + 0x98) & 0x10) != 0)))) {
        param_2 = 4;
      }
      iVar2 = FUN_0016de00(param_1,param_3);
      iVar5 = iVar5 + 1;
    } while ((*(uint *)(iVar2 + 0x98) & 0x10) != 0);
    if (param_4 == 0) {
      return;
    }
    iVar2 = FUN_0016de00(param_1,param_3);
  } while ((*(uint *)(iVar2 + 0x98) & 8) != 0);
  return;
}

