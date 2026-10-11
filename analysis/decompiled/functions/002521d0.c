/* Ghidra pseudocode. PS2 address: 002521d0. Not validated source. */

undefined8 FUN_002521d0(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uStack_90;
  undefined *puStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  
  uStack_78 = FUN_00252a88();
  iVar1 = DAT_002bfe78;
  if (((DAT_002bfe78 != -1) && (lVar4 = FUN_002554c0(param_1), lVar4 == 0)) &&
     (lVar4 = FUN_00257aa8(param_1,0), lVar4 < 0)) {
    uStack_90 = 1;
    puStack_8c = &DAT_002bf638;
    iStack_70 = 0;
    if (iVar1 == 0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = DAT_002bf640;
    }
    uStack_88 = param_1;
    uStack_80 = param_1;
    if ((DAT_002bfe78 == 2) || (lVar4 = FUN_002554f8(&uStack_90), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_00259ab0();
      *puVar2 = 0x21;
    }
    if (iStack_70 != 0) {
      piVar3 = (int *)FUN_00259ab0();
      *piVar3 = iStack_70;
    }
  }
  return uStack_78;
}

