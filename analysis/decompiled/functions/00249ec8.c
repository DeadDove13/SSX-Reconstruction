/* Ghidra pseudocode. PS2 address: 00249ec8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00249ec8(uint param_1,undefined8 param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < ram0x002a5230) {
    FUN_0025a720(0x2bf018,param_1);
  }
  uVar2 = 0;
  if (DAT_002a526c == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_002669d0(param_2,param_1 << 0xb);
    if (param_3 == 0) {
      uVar2 = FUN_0024a130(0,param_1,param_2,2,0x2a5280);
      uVar5 = uVar2 & 0xffff;
      *param_4 = uVar2 >> 0x10;
    }
    else {
      iVar3 = 0;
      while( true ) {
        do {
          uVar1 = FUN_0024a130(0,param_1 - uVar5,(int)param_2 + iVar3,2,0x2a5280);
          uVar4 = uVar1 & 0xffff;
          uVar1 = uVar1 >> 0x10;
          uVar5 = uVar5 + uVar4;
          if ((uVar1 != 0) && (uVar2 = uVar1, 0 < ram0x002a5230)) {
            FUN_0025a720(0x2bf048,uVar5,uVar4,param_1,uVar1);
          }
          if (uVar5 == param_1) goto LAB_00249fcc;
          iVar3 = uVar5 * 0x800;
        } while (uVar1 == 0);
        if (uVar4 == 0) break;
        iVar3 = uVar5 * 0x800;
      }
LAB_00249fcc:
      if (0 < ram0x002a5230) {
        FUN_0025a720(0x2bf090);
      }
      *param_4 = uVar2;
    }
  }
  return uVar5;
}

