/* Ghidra pseudocode. PS2 address: 00206a00. Not validated source. */

void FUN_00206a00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_8e0 [2064];
  undefined1 auStack_d0 [64];
  
  FUN_00204960(auStack_8e0,0x2bd110,0x10);
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x35f84) = 0;
  lVar1 = FUN_00204e58(auStack_8e0,param_2);
  if (lVar1 != 0) {
    FUN_00204c18(auStack_8e0);
LAB_00206af4:
    lVar1 = FUN_002051a8(auStack_8e0);
    if (lVar1 == 0) {
      uVar2 = FUN_00204f90(auStack_8e0);
      lVar1 = FUN_0025b730(0x2c5758,uVar2);
      if (lVar1 == 0) {
        FUN_00205210(auStack_8e0,0x2c5758,auStack_d0);
        for (uVar3 = 0; (int)uVar3 < *(int *)(iVar4 + 0x35f7c); uVar3 = uVar3 + 1) {
          lVar1 = FUN_0025c288(iVar4 + uVar3 * 0x20 + 0x35b7c,auStack_d0);
          if (lVar1 != 0) {
            *(uint *)(iVar4 + 0x35f84) = *(uint *)(iVar4 + 0x35f84) | 1 << (uVar3 & 0x1f);
            break;
          }
        }
      }
      goto LAB_00206af4;
    }
  }
  if (*(int *)(iVar4 + 0x35f84) == 0) {
    *(undefined4 *)(iVar4 + 0x35f84) = 1;
  }
  *(undefined4 *)(iVar4 + 0x35f80) = 0xffffffff;
  FUN_00207268(param_1);
  FUN_00204ab8(auStack_8e0,2);
  return;
}

