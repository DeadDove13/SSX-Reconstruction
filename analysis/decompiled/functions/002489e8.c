/* Ghidra pseudocode. PS2 address: 002489e8. Not validated source. */

undefined4 FUN_002489e8(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_002481b0(8);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    DAT_002d2650 = &DAT_002d2680;
    FUN_002669d0(0x2d2680,0x810);
    FUN_002669d0(0x2d2650,0xc);
    DAT_002a5274 = 3;
    lVar2 = FUN_00267268(0x2d2180,4,0,0x2d2650,0xc,0x2d1f80,8,0);
    uVar1 = DAT_002d1f80;
    if (lVar2 < 0) {
      DAT_002a5274 = 0;
      SignalSema(DAT_002a5240);
      uVar1 = 0;
    }
    else {
      DAT_002a5274 = 0;
      if (DAT_002d1f84 == 0) {
        puVar3 = &DAT_202d2680;
        if (((uint)param_1 & 7) == 0) {
          do {
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *param_1 = *puVar3;
            param_1[1] = uVar4;
            param_1[2] = uVar5;
            param_1[3] = uVar6;
            puVar3 = puVar3 + 4;
            param_1 = param_1 + 4;
          } while (puVar3 != (undefined8 *)&UNK_202d2a80);
        }
        else {
          do {
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *param_1 = *puVar3;
            param_1[1] = uVar4;
            param_1[2] = uVar5;
            param_1[3] = uVar6;
            puVar3 = puVar3 + 4;
            param_1 = param_1 + 4;
          } while (puVar3 != (undefined8 *)&UNK_202d2a80);
        }
      }
      else {
        puVar3 = &DAT_202d2680;
        if (((uint)param_1 & 7) == 0) {
          do {
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *param_1 = *puVar3;
            param_1[1] = uVar4;
            param_1[2] = uVar5;
            param_1[3] = uVar6;
            puVar3 = puVar3 + 4;
            param_1 = param_1 + 4;
          } while (puVar3 != (undefined8 *)&UNK_202d2e80);
        }
        else {
          do {
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *param_1 = *puVar3;
            param_1[1] = uVar4;
            param_1[2] = uVar5;
            param_1[3] = uVar6;
            puVar3 = puVar3 + 4;
            param_1 = param_1 + 4;
          } while (puVar3 != (undefined8 *)&UNK_202d2e80);
          puVar3 = (undefined8 *)&UNK_202d2e80;
        }
        uVar4 = puVar3[1];
        *param_1 = *puVar3;
        param_1[1] = uVar4;
      }
      SignalSema(DAT_002a5240);
    }
  }
  return uVar1;
}

