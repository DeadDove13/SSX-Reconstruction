/* Ghidra pseudocode. PS2 address: 002398a0. Not validated source. */

int FUN_002398a0(undefined8 param_1,long param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = 0;
  lVar3 = FUN_0023b9ec(param_1,2);
  iVar1 = 0;
  if (lVar3 == 0xc0fb) {
    iVar6 = 1;
  }
  else {
    lVar3 = FUN_0023b9ec(param_1,4);
    iVar6 = 2;
    if (lVar3 != 0x42494746) {
      iVar6 = 0;
    }
  }
  iVar4 = (int)param_1;
  if (iVar6 == 1) {
    iVar1 = FUN_0023b9ec(iVar4 + 2,2);
    iVar1 = iVar1 + 4;
  }
  else if (iVar6 == 2) {
    iVar1 = FUN_0023b9ec(iVar4 + 0xc,4);
  }
  lVar3 = FUN_0023b9ec(param_1,2);
  if (lVar3 == 0xc0fb) {
    iVar6 = 1;
  }
  else {
    lVar3 = FUN_0023b9ec(param_1,4);
    iVar6 = 2;
    if (lVar3 != 0x42494746) {
      iVar6 = 0;
    }
  }
  puVar7 = (undefined4 *)param_4;
  if (iVar6 == 1) {
    for (uVar5 = iVar4 + 6; uVar5 < (uint)(iVar4 + iVar1); uVar5 = uVar5 + iVar6 + 7) {
      iVar6 = uVar5 + 6;
      if (param_2 == 0) {
        if (iVar8 == param_3) {
LAB_002399f4:
          if (param_4 != 0) {
            uVar2 = FUN_0023b9ec(uVar5,3);
            *puVar7 = uVar2;
          }
          iVar8 = uVar5 + 3;
          if (param_5 == 0) {
            return iVar6;
          }
          uVar2 = 3;
          goto LAB_00239a94;
        }
      }
      else {
        lVar3 = FUN_0025b730(iVar6,param_2);
        if (lVar3 == 0) goto LAB_002399f4;
      }
      iVar8 = iVar8 + 1;
      iVar6 = FUN_0025bcf8(iVar6);
    }
  }
  else if (iVar6 == 2) {
    for (uVar5 = iVar4 + 0x10; uVar5 < (uint)(iVar4 + iVar1); uVar5 = uVar5 + iVar6 + 9) {
      iVar6 = uVar5 + 8;
      if (param_2 == 0) {
        if (iVar8 == param_3) {
LAB_00239a74:
          if (param_4 != 0) {
            uVar2 = FUN_0023b9ec(uVar5,4);
            *puVar7 = uVar2;
          }
          iVar8 = uVar5 + 4;
          if (param_5 == 0) {
            return iVar6;
          }
          uVar2 = 4;
LAB_00239a94:
          uVar2 = FUN_0023b9ec(iVar8,uVar2);
          *(undefined4 *)param_5 = uVar2;
          return iVar6;
        }
      }
      else {
        lVar3 = FUN_0025b730(iVar6,param_2);
        if (lVar3 == 0) goto LAB_00239a74;
      }
      iVar8 = iVar8 + 1;
      iVar6 = FUN_0025bcf8(iVar6);
    }
  }
  if (param_4 != 0) {
    *puVar7 = 0;
  }
  if (param_5 != 0) {
    *(undefined4 *)param_5 = 0;
  }
  return 0;
}

