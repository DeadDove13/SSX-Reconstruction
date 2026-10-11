/* Ghidra pseudocode. PS2 address: 00268450. Not validated source. */

undefined4 FUN_00268450(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_00268390();
  if (lVar3 < 0) {
    uVar2 = 0xffff0000;
  }
  else {
    FUN_0025c0c8(0x2d7c48,param_1,0xfc);
    DAT_002d7d43 = 0;
    if (param_3 == (undefined8 *)0x0) {
      DAT_002d7d44 = 0;
      DAT_002d7c40 = 0;
    }
    else if (param_2 < 0xfd) {
      FUN_0025a55c(0x2d7d44,param_3,param_2);
      DAT_002d7c40 = (undefined4)param_2;
    }
    else {
      puVar4 = (undefined8 *)&DAT_002d7d44;
      if ((((uint)param_3 | 0x2d7d44) & 7) == 0) {
        puVar1 = param_3 + 0x1c;
        do {
          uVar5 = param_3[1];
          uVar6 = param_3[2];
          uVar7 = param_3[3];
          *puVar4 = *param_3;
          puVar4[1] = uVar5;
          puVar4[2] = uVar6;
          puVar4[3] = uVar7;
          param_3 = param_3 + 4;
          puVar4 = puVar4 + 4;
        } while (param_3 != puVar1);
      }
      else {
        puVar1 = param_3 + 0x1c;
        do {
          uVar5 = param_3[1];
          uVar6 = param_3[2];
          uVar7 = param_3[3];
          *puVar4 = *param_3;
          puVar4[1] = uVar5;
          puVar4[2] = uVar6;
          puVar4[3] = uVar7;
          param_3 = param_3 + 4;
          puVar4 = puVar4 + 4;
        } while (param_3 != puVar1);
      }
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar2 = *(undefined4 *)(param_3 + 3);
      *puVar4 = *param_3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      *(undefined4 *)(puVar4 + 3) = uVar2;
      DAT_002d7c40 = 0xfc;
    }
    lVar3 = FUN_00267268(0x2d7e40,param_4,0,0x2d7c40,0x200,0x2d7c40,4,0);
    uVar2 = DAT_002d7c40;
    if (lVar3 < 0) {
      uVar2 = 0xfffeffff;
    }
  }
  return uVar2;
}

