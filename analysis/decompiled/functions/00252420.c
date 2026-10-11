/* Ghidra pseudocode. PS2 address: 00252420. Not validated source. */

undefined4 FUN_00252420(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_70;
  undefined *puStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  
  uVar5 = FUN_00252fe0();
  iVar1 = DAT_002bfe78;
  if (DAT_002bfe78 == -1) {
    return uVar5;
  }
  lVar4 = FUN_002557e0(param_1);
  if (lVar4 != 0) {
    return uVar5;
  }
  if (0.0 < param_1) {
    return uVar5;
  }
  iStack_50 = 0;
  puStack_6c = &DAT_002bf658;
  uStack_68 = FUN_00258948(param_1);
  uStack_60 = uStack_68;
  if (iVar1 == 0) {
    uStack_58 = DAT_002bf660;
  }
  else {
    uStack_58 = FUN_00257518(0,DAT_002bfe70);
  }
  if (param_1 == 0.0) {
    uStack_70 = 2;
    if (DAT_002bfe78 != 2) goto LAB_00252508;
    puVar2 = (undefined4 *)FUN_00259ab0();
    uVar5 = 0x22;
  }
  else {
    uStack_70 = 1;
    if (DAT_002bfe78 != 2) {
LAB_00252508:
      lVar4 = FUN_002554f8(&uStack_70);
      if (lVar4 != 0) goto LAB_0025252c;
    }
    puVar2 = (undefined4 *)FUN_00259ab0();
    uVar5 = 0x21;
  }
  *puVar2 = uVar5;
LAB_0025252c:
  if (iStack_50 != 0) {
    piVar3 = (int *)FUN_00259ab0();
    *piVar3 = iStack_50;
  }
  uVar5 = FUN_00257d50(uStack_58);
  return uVar5;
}

