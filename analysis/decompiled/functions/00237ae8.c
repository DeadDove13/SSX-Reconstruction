/* Ghidra pseudocode. PS2 address: 00237ae8. Not validated source. */

void FUN_00237ae8(uint param_1,uint param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = (uint *)(DAT_002a3374 + (param_1 >> 0x18) * 0x30);
  if ((param_1 & 0xfffff) == (*puVar8 & 0xfffff)) {
    FUN_0023ee58(DAT_002a336c);
    uVar7 = puVar8[4];
    puVar8[4] = param_2;
    puVar6 = DAT_002a337c;
    if ((((1 < DAT_002a3364) && (puVar8 != DAT_002a3370)) && (puVar8[2] == 0)) && (uVar7 != param_2)
       ) {
      puVar6 = (uint *)0x0;
      if (DAT_002a337c == (uint *)0x0) {
        puVar5 = (uint *)puVar8[0xb];
      }
      else {
        puVar5 = (uint *)puVar8[0xb];
        puVar4 = DAT_002a337c;
        do {
          if (puVar4 == puVar8) break;
          puVar1 = puVar4 + 0xb;
          puVar6 = puVar4;
          puVar4 = (uint *)*puVar1;
        } while ((uint *)*puVar1 != (uint *)0x0);
      }
      if (puVar6 != (uint *)0x0) {
        puVar6[0xb] = (uint)puVar5;
        puVar5 = DAT_002a337c;
      }
      DAT_002a337c = puVar5;
      puVar6 = DAT_002a337c;
      uVar7 = 0;
      bVar2 = DAT_002a337c != (uint *)0x0;
      puVar8[0xb] = (uint)DAT_002a337c;
      if ((bVar2) && ((int)puVar6[4] <= (int)puVar8[4])) {
        uVar7 = puVar8[0xb];
        while( true ) {
          uVar3 = *(uint *)(uVar7 + 0x2c);
          puVar8[0xb] = uVar3;
          if ((uVar3 == 0) || ((int)puVar8[4] < *(int *)(uVar3 + 0x10))) break;
          uVar7 = puVar8[0xb];
        }
      }
      puVar6 = puVar8;
      if (uVar7 != 0) {
        *(uint **)(uVar7 + 0x2c) = puVar8;
        puVar6 = DAT_002a337c;
      }
    }
    DAT_002a337c = puVar6;
    FUN_0023ea60(DAT_002a336c);
  }
  return;
}

