/* Ghidra pseudocode. PS2 address: 001a0518. Not validated source. */

void FUN_001a0518(undefined8 param_1,int param_2,char param_3,int param_4)

{
  byte *pbVar1;
  ushort uVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  puVar10 = (uint *)param_1;
  uVar6 = *puVar10;
  puVar10[4] = (int)*(char *)(param_2 + 0x10);
  puVar10[5] = *(char *)(param_2 + 0x11) + param_4;
  iVar8 = *(short *)(param_2 + 10) * 0xc;
  puVar10[1] = (int)*(short *)(param_2 + 10);
  if ((uVar6 & 0x40000000) == 0) {
    if ((uVar6 & 0xc000000) == 0) {
      lVar4 = FUN_0023a448(0x2c50b8,iVar8,uVar6 & 0x3ffffff);
    }
    else {
      lVar4 = FUN_00210840(0x28ac20,iVar8,uVar6,0x2c50b8,0,0);
    }
  }
  else {
    lVar4 = FUN_002107c8(0x298590,iVar8,uVar6,0x2c50b8,0,0);
  }
  if (lVar4 != 0) {
    if ((int)uVar6 < 0) {
      FUN_0023bbd0(lVar4,0,iVar8);
      iVar8 = *(int *)(param_2 + 0x14);
      goto LAB_001a0640;
    }
    FUN_0023bbd0(lVar4,0xffffffffdeadc0ed,iVar8);
  }
  iVar8 = *(int *)(param_2 + 0x14);
LAB_001a0640:
  iVar9 = 0;
  pbVar3 = (byte *)(param_2 + iVar8);
  puVar10[2] = (uint)lVar4;
  if (0 < (int)puVar10[1]) {
    iVar8 = 0;
    do {
      iVar9 = iVar9 + 1;
      uVar6 = puVar10[2];
      *(short *)(iVar8 + uVar6) = (ushort)*pbVar3 + (ushort)pbVar3[1] * 0x100;
      *(byte *)((short *)(iVar8 + uVar6) + 1) = pbVar3[2];
      *(byte *)(iVar8 + puVar10[2] + 3) = pbVar3[3];
      iVar5 = iVar8 + puVar10[2];
      *(ushort *)(iVar5 + 4) = (ushort)pbVar3[4] + (ushort)pbVar3[5] * 0x100;
      *(ushort *)(iVar5 + 6) = (ushort)pbVar3[6] + (ushort)pbVar3[7] * 0x100;
      *(byte *)(iVar5 + 8) = pbVar3[8] + param_3;
      *(byte *)(iVar8 + puVar10[2] + 9) = pbVar3[9];
      pbVar1 = pbVar3 + 10;
      pbVar3 = pbVar3 + 0xb;
      *(byte *)(iVar8 + puVar10[2] + 10) = *pbVar1;
      iVar8 = iVar8 + 0xc;
    } while (iVar9 < (int)puVar10[1]);
  }
  puVar7 = (ushort *)puVar10[2];
  iVar8 = 0;
  uVar2 = *puVar7;
  puVar10[3] = 0;
  puVar10[9] = (uint)uVar2;
  puVar10[8] = (uint)uVar2;
  if (0 < (int)puVar10[1]) {
    do {
      if ((iVar8 != 0) && ((uint)*puVar7 == puVar10[9] + 1)) {
        puVar10[9] = (uint)*puVar7;
      }
      uVar6 = (uint)*(byte *)((int)puVar7 + 3) + (int)(char)puVar7[5];
      if ((int)puVar10[3] < (int)uVar6) {
        puVar10[3] = uVar6;
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 6;
    } while (iVar8 < (int)puVar10[1]);
  }
  FUN_001a0d20(param_1,param_2 + *(int *)(param_2 + 0x1c));
  return;
}

