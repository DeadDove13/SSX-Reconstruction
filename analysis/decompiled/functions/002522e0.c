/* Ghidra pseudocode. PS2 address: 002522e0. Not validated source. */

undefined4 FUN_002522e0(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  
  uVar5 = FUN_00252d90();
  iVar1 = DAT_002bfe78;
  if ((((DAT_002bfe78 != -1) && (lVar4 = FUN_002557e0(param_2), lVar4 == 0)) &&
      (lVar4 = FUN_002557e0(param_1), lVar4 == 0)) && (param_2 == 0.0)) {
    uStack_80 = 1;
    pcStack_7c = "fmodf";
    iStack_60 = 0;
    uStack_78 = FUN_00258948(param_1);
    uStack_70 = FUN_00258948(param_2);
    if (iVar1 == 0) {
      uStack_68 = FUN_00258948(param_1);
    }
    else {
      uStack_68 = DAT_002bf650;
    }
    if ((DAT_002bfe78 == 2) || (lVar4 = FUN_002554f8(&uStack_80), lVar4 == 0)) {
      puVar2 = (undefined4 *)FUN_00259ab0();
      *puVar2 = 0x21;
    }
    if (iStack_60 != 0) {
      piVar3 = (int *)FUN_00259ab0();
      *piVar3 = iStack_60;
    }
    uVar5 = FUN_00257d50(uStack_68);
  }
  return uVar5;
}

