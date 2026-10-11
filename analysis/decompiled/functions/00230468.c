/* Ghidra pseudocode. PS2 address: 00230468. Not validated source. */

undefined4 FUN_00230468(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0xd6c) != 0) {
    FUN_0022e880(*(undefined4 *)(param_1 + 0xd68),*(undefined1 *)(param_1 + 0xd74));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
  }
  if ((int)param_2 < 1) {
    uVar5 = *(undefined4 *)(param_1 + 0xd6c);
  }
  else {
    do {
      if ((int)(uint)*(ushort *)(param_1 + 0xd70) < *(int *)(param_1 + 0xd64)) {
        sVar4 = *(short *)(param_1 + 0xd72);
      }
      else {
        lVar6 = FUN_0022e2f8(*(undefined4 *)(param_1 + 0xd68),*(undefined1 *)(param_1 + 0xd74),
                             param_1 + 0xd64);
        *(undefined2 *)(param_1 + 0xd70) = 0;
        pcVar7 = (char *)lVar6;
        *(char **)(param_1 + 0xd60) = pcVar7;
        if (lVar6 == 0) {
          uVar5 = 0;
          if (*(int *)(param_1 + 0xd6c) != 0) {
            FUN_0022d8c8(param_4,param_2 << 2);
            uVar5 = *(undefined4 *)(param_1 + 0xd6c);
          }
          *(undefined4 *)(param_1 + 0xd64) = 0;
          return uVar5;
        }
        if (*pcVar7 == '\0') {
          bVar1 = pcVar7[1];
          *(undefined4 *)(param_1 + 0x18) = 8;
          *(char **)(param_1 + 0x10) = pcVar7 + 2;
          *(uint *)(param_1 + 0x14) = (uint)bVar1;
          sVar4 = *(short *)(param_1 + 0xd72);
        }
        else {
          *(undefined2 *)(param_1 + 0xd72) = 0;
          FUN_00231ce0(pcVar7 + 1,param_1 + 0x10);
          sVar4 = *(short *)(param_1 + 0xd72);
        }
      }
      if (sVar4 == 0) {
        FUN_00231ef8(param_1 + 0x10,0);
        *(undefined2 *)(param_1 + 0xd72) = 0x1b0;
        uVar2 = *(ushort *)(param_1 + 0xd70);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0xd70);
      }
      uVar3 = *(ushort *)(param_1 + 0xd72);
      uVar8 = *(int *)(param_1 + 0xd64) - (uint)uVar2;
      if ((int)param_2 < (int)uVar8) {
        uVar8 = param_2;
      }
      if ((int)(uint)uVar3 < (int)uVar8) {
        uVar8 = (uint)uVar3;
      }
      (**(code **)(param_1 + 0xd54))
                (param_1 + 0xd50,uVar8,param_1 + (0x1b0 - (uint)uVar3) * 4 + 0x690,param_4,0);
      param_2 = param_2 - uVar8;
      param_4 = param_4 + uVar8 * 2;
      *(short *)(param_1 + 0xd70) = *(short *)(param_1 + 0xd70) + (short)uVar8;
      *(short *)(param_1 + 0xd72) = *(short *)(param_1 + 0xd72) - (short)uVar8;
      *(uint *)(param_1 + 0xd6c) = *(int *)(param_1 + 0xd6c) + uVar8;
    } while (0 < (int)param_2);
    uVar5 = *(undefined4 *)(param_1 + 0xd6c);
  }
  return uVar5;
}

