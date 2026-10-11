/* Ghidra pseudocode. PS2 address: 0025a60c. Not validated source. */

undefined8 * FUN_0025a60c(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 in_t0_udw;
  undefined1 auVar4 [16];
  
  puVar3 = param_1;
  if ((7 < param_3) && (((uint)param_1 & 0xf) == 0)) {
    auVar2[1] = param_2;
    auVar2[0] = param_2;
    auVar2._2_6_ = 0;
    auVar2._8_8_ = in_t0_udw;
    auVar2 = _pcpyh(auVar2);
    bVar1 = param_3 < 8;
    if (0x1f < param_3) {
      auVar4 = _pcpyld(auVar2,auVar2);
      do {
        *(int *)puVar3 = auVar4._0_4_;
        *(int *)((int)puVar3 + 4) = auVar4._4_4_;
        *(int *)(puVar3 + 1) = auVar4._8_4_;
        *(int *)((int)puVar3 + 0xc) = auVar4._12_4_;
        param_3 = param_3 - 0x20;
        *(int *)(puVar3 + 2) = auVar4._0_4_;
        *(int *)((int)puVar3 + 0x14) = auVar4._4_4_;
        *(int *)(puVar3 + 3) = auVar4._8_4_;
        *(int *)((int)puVar3 + 0x1c) = auVar4._12_4_;
        puVar3 = puVar3 + 4;
      } while (0x1f < param_3);
      bVar1 = param_3 < 8;
    }
    while (!bVar1) {
      *puVar3 = auVar2._0_8_;
      param_3 = param_3 - 8;
      puVar3 = puVar3 + 1;
      bVar1 = param_3 < 8;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(undefined1 *)puVar3 = param_2;
    puVar3 = (undefined8 *)((int)puVar3 + 1);
  }
  return param_1;
}

