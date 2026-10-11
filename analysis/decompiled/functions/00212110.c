/* Ghidra pseudocode. PS2 address: 00212110. Not validated source. */

void FUN_00212110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_d0 [64];
  undefined2 uStack_90;
  
  piVar4 = (int *)param_1;
  if ((*piVar4 == 3) || (*piVar4 - 4U < 10)) {
    FUN_0019a830(auStack_d0,0x2c5868);
    goto LAB_0021222c;
  }
  lVar1 = FUN_00211e08(param_1,piVar4[3]);
  if (lVar1 == 0) {
LAB_00212200:
    uVar3 = 0x7e;
LAB_00212204:
    uVar2 = FUN_00234e80(DAT_002852fc,uVar3);
  }
  else {
    lVar1 = FUN_00211ec0(param_1,piVar4[3]);
    if (lVar1 == 0) {
      uVar3 = 0x91;
      goto LAB_00212204;
    }
    iVar5 = (int)param_2;
    if (piVar4[iVar5 * 0x1b + 0x5c] != 0) {
      FUN_0019a7f8(auStack_d0,piVar4 + iVar5 * 0x1b + 0x66);
      goto LAB_0021222c;
    }
    if (piVar4[iVar5 * 0x1b + 0x5d] == 0) {
      lVar1 = FUN_002122a8(param_1,param_2);
      if (lVar1 != 0) {
        FUN_0019a7f8(auStack_d0,piVar4 + iVar5 * 0x1b + 0x66);
        goto LAB_0021222c;
      }
      goto LAB_00212200;
    }
    uVar2 = FUN_0019a998(0xb7);
  }
  FUN_0019a7f8(auStack_d0,uVar2);
LAB_0021222c:
  FUN_0019a7c0(auStack_d0);
  uStack_90 = 0;
  FUN_0019a7f8(param_3,auStack_d0);
  return;
}

