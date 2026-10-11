/* Ghidra pseudocode. PS2 address: 00208b88. Not validated source. */

void FUN_00208b88(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_a00 [2064];
  undefined1 auStack_1f0 [256];
  undefined1 auStack_f0 [64];
  undefined4 uStack_b0;
  
  uStack_b0 = param_2;
  FUN_00204960(auStack_a00,0x2bd230,0x10);
  lVar1 = FUN_00204e58(auStack_a00,param_3);
  if (lVar1 != 0) {
    puVar4 = (undefined4 *)param_1;
    FUN_00204c18(auStack_a00);
    while (lVar1 = FUN_002051a8(auStack_a00), lVar1 == 0) {
      uVar2 = FUN_00204f90(auStack_a00);
      lVar1 = FUN_0025b730(0x2c5790,uVar2);
      if (lVar1 == 0) {
        FUN_00205210(auStack_a00,0x2c5790,auStack_f0);
        FUN_0020a510(DAT_002c5bcc,*puVar4,auStack_f0);
      }
      lVar1 = FUN_0025b730(0x2bd248,uVar2);
      if (lVar1 == 0) {
        FUN_00205210(auStack_a00,0x2bd248,puVar4 + 0x12);
        FUN_0025b630(auStack_1f0,0x2bd258,puVar4 + 0x12);
        uVar3 = FUN_002369a0(auStack_1f0,0);
        puVar4[puVar4[0x26] + 0x22] = (int)uVar3;
        FUN_00243820(uVar3,uStack_b0);
        puVar4[0x26] = puVar4[0x26] + 1;
      }
      lVar1 = FUN_0025b730(0x2c5798,uVar2);
      if (lVar1 == 0) {
        (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                  (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
                   (int)puVar4[0x27] < 0x3c,0x2bd270,0x2bd1f8,0x6d);
        FUN_00205210(auStack_a00,0x2c5798,auStack_f0);
        FUN_00208fb8(param_1,auStack_f0);
      }
      lVar1 = FUN_0025b730(0x2bd290,uVar2);
      if (lVar1 == 0) {
        (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                  (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
                   (int)puVar4[0x27] < 0x3c,0x2bd270,0x2bd1f8,0x77);
        FUN_00205210(auStack_a00,0x2bd290,auStack_f0);
        FUN_0025b630(auStack_1f0,0x2bd2a0,puVar4 + 0x12,auStack_f0);
        (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                  (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),0,0x2c57a0,
                   0x2bd1f8,0x91);
      }
    }
  }
  FUN_00204ab8(auStack_a00,2);
  return;
}

