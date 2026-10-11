/* Ghidra pseudocode. PS2 address: 00208f00. Not validated source. */

undefined8 FUN_00208f00(undefined4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  lVar1 = FUN_0020a7d0(DAT_002c5bcc,*param_1);
  uVar2 = 1;
  if ((lVar1 != 0) && (uVar2 = 0, lVar1 == 1)) {
    lVar1 = FUN_0020a8d8(DAT_002c5bcc,*param_1);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      fVar3 = (float)FUN_0020a848(DAT_002c5bcc,*param_1);
      uVar2 = 0;
      if ((int)fVar3 < 500) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

