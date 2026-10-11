/* Ghidra pseudocode. PS2 address: 00224a20. Not validated source. */

/* WARNING: Heritage AFTER dead removal. Example location: r0x0029a848 : 0x00224b88 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_00224a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  if (DAT_0029a7b4 == 0) {
    uVar4 = FUN_0022ada0();
    DAT_0029a820._4_2_ = 0x10;
    DAT_0029a7b4 = 1;
    DAT_0029a858 = CONCAT26(DAT_0029a820._6_2_,CONCAT24(0x10,(undefined4)DAT_0029a820));
    DAT_0029a860 = DAT_0029a828;
    DAT_0029a868 = DAT_0029a830;
    DAT_0029a870 = DAT_0029a838;
    DAT_0029a878 = DAT_0029a840;
    DAT_0029a880 = DAT_0029a848;
  }
  puVar1 = &DAT_0029a808;
  if (((uint)param_1 & 7) == 0) {
    do {
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar5 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar5;
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 4;
    } while (puVar1 != &DAT_0029a848);
  }
  else {
    do {
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar5 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar5;
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 4;
    } while (puVar1 != &DAT_0029a848);
  }
  uVar2 = DAT_0029a850;
  *param_1 = DAT_0029a848;
  param_1[1] = uVar2;
  return uVar4;
}

