/* Ghidra pseudocode. PS2 address: 0022efc8. Not validated source. */

void FUN_0022efc8(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  DAT_002a1b30 = *param_1;
  DAT_002a1b38 = *(undefined4 *)(param_1 + 1);
  iVar6 = 0;
  do {
    iVar1 = FUN_00225218(0x87e);
    (&DAT_002a1c0c)[iVar6] = iVar1;
    (&DAT_002a1c14)[iVar6] = iVar1 + 4U;
    iVar5 = iVar6 + 1;
    if ((iVar1 + 4U & 0x3f) != 0) {
      do {
        uVar2 = (&DAT_002a1c14)[iVar6] + 2;
        (&DAT_002a1c14)[iVar6] = uVar2;
      } while ((uVar2 & 0x3f) != 0);
    }
    iVar6 = iVar5;
  } while (iVar5 < 2);
  iVar6 = 0;
  if (DAT_002a1b30._5_1_ != '\0') {
    do {
      uVar2 = FUN_00225218(0x440);
      (&DAT_002a1c1c)[iVar6] = uVar2;
      (&DAT_002a1c2c)[iVar6] = uVar2;
      if ((uVar2 & 0x3f) == 0) {
      }
      else {
        do {
          uVar2 = (&DAT_002a1c2c)[iVar6] + 4;
          (&DAT_002a1c2c)[iVar6] = uVar2;
        } while ((uVar2 & 0x3f) != 0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)DAT_002a1b30._5_1_);
  }
  iVar6 = 0;
  uVar4 = FUN_00225218((uint)DAT_002a1b30._4_1_ * 0x54);
  DAT_002a1c9c = (undefined4)uVar4;
  FUN_0025a60c(uVar4,0,(uint)DAT_002a1b30._4_1_ * 0x54);
  FUN_002300e8();
  FUN_00230130();
  FUN_00230240();
  FUN_0022f4d0();
  uVar2 = (uint)DAT_002a1b30._5_1_;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      iVar6 = iVar6 + 1;
      iVar5 = 0xff;
      puVar3 = (undefined4 *)(*(int *)((int)&DAT_002a1c2c + iVar1) + 0x3fc);
      do {
        *puVar3 = 0;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + -1;
      } while (-1 < iVar5);
      iVar1 = iVar6 * 4;
    } while (iVar6 < (int)uVar2);
  }
  return;
}

