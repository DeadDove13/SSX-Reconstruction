/* Ghidra pseudocode. PS2 address: 00259188. Not validated source. */

uint * FUN_00259188(byte *param_1,undefined8 *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  bVar1 = *param_1;
  puVar13 = (uint *)(param_1 + 1);
  if ((bVar1 & 0x40) != 0) {
    uVar5 = *param_4;
    uVar10 = (bVar1 & 0x3f) * *(int *)(param_3 + 8);
LAB_00259264:
    *param_4 = uVar5 + uVar10;
    return puVar13;
  }
  uVar5 = bVar1 & 0x3f;
  if ((bVar1 & 0x80) != 0) {
LAB_0025929c:
    uStack_4c = uVar5;
    puVar13 = (uint *)FUN_00258988(puVar13,&iStack_50);
    iVar2 = *(int *)(param_3 + 0xc);
    *(undefined1 *)((int)param_2 + uStack_4c + 0x29c) = 1;
    param_2[uStack_4c + 3] = (long)(iStack_50 * iVar2);
    return puVar13;
  }
  if ((bVar1 & 0xc0) != 0) {
    *(undefined1 *)((int)param_2 + (bVar1 & 0x3f) + 0x29c) = 0;
    return puVar13;
  }
  switch(bVar1) {
  case 0:
  case 7:
  case 8:
    break;
  case 1:
    uVar5 = *puVar13;
    puVar13 = (uint *)(param_1 + 5);
    *param_4 = uVar5;
    break;
  case 2:
    uVar10 = (uint)(byte)*puVar13;
    uVar5 = *param_4;
    puVar13 = (uint *)(param_1 + 2);
    goto LAB_00259280;
  case 3:
    uVar10 = *puVar13;
    uVar5 = *param_4;
    puVar13 = (uint *)(param_1 + 3);
    uVar10 = (uint)(ushort)uVar10;
    goto LAB_00259264;
  case 4:
    uVar10 = *puVar13;
    uVar5 = *param_4;
    puVar13 = (uint *)(param_1 + 5);
LAB_00259280:
    *param_4 = uVar5 + uVar10;
    break;
  case 5:
    puVar13 = (uint *)FUN_00258988(puVar13,(uint)&iStack_50 | 4);
    uVar5 = uStack_4c;
    goto LAB_0025929c;
  case 6:
    puVar13 = (uint *)FUN_00258988(puVar13,(uint)&iStack_50 | 4);
    *(undefined1 *)((int)param_2 + uStack_4c + 0x29c) = 0;
    break;
  case 9:
    uVar4 = FUN_00258988(puVar13,(uint)&iStack_50 | 4);
    puVar13 = (uint *)FUN_00258988(uVar4,(uint)&iStack_50 | 8);
    *(undefined1 *)((int)param_2 + uStack_4c + 0x29c) = 2;
    param_2[uStack_4c + 3] = (ulong)uStack_48;
    break;
  case 10:
    puVar3 = (undefined8 *)FUN_00259ac0(0x2f8);
    puVar7 = param_2;
    puVar9 = puVar3;
    do {
      puVar8 = puVar9;
      puVar6 = puVar7;
      uVar4 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar8 = *puVar6;
      puVar8[1] = uVar4;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      puVar7 = puVar6 + 4;
      puVar9 = puVar8 + 4;
    } while (puVar7 != param_2 + 0x5c);
    uVar4 = puVar6[5];
    uVar11 = puVar6[6];
    puVar8[4] = *puVar7;
    puVar8[5] = uVar4;
    puVar8[6] = uVar11;
    *(undefined8 **)(param_2 + 0x5e) = puVar3;
    break;
  case 0xb:
    puVar7 = *(undefined8 **)(param_2 + 0x5e);
    puVar9 = puVar7;
    do {
      puVar6 = puVar9;
      puVar3 = param_2;
      uVar4 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar3 = *puVar6;
      puVar3[1] = uVar4;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar9 = puVar6 + 4;
      param_2 = puVar3 + 4;
    } while (puVar9 != puVar7 + 0x5c);
    uVar4 = puVar6[5];
    uVar11 = puVar6[6];
    puVar3[4] = *puVar9;
    puVar3[5] = uVar4;
    puVar3[6] = uVar11;
    FUN_00259ae8();
    return puVar13;
  case 0xc:
    uVar4 = FUN_00258988(puVar13,(uint)&iStack_50 | 4);
    puVar13 = (uint *)FUN_00258988(uVar4,&iStack_50);
    *(undefined2 *)(param_2 + 0x53) = (undefined2)uStack_4c;
    param_2[1] = (long)iStack_50;
    break;
  case 0xd:
    puVar13 = (uint *)FUN_00258988(puVar13,(uint)&iStack_50 | 4);
    *(undefined2 *)(param_2 + 0x53) = (undefined2)uStack_4c;
    break;
  case 0xe:
    puVar13 = (uint *)FUN_00258988(puVar13,&iStack_50);
    param_2[1] = (long)iStack_50;
    break;
  default:
    FUN_002599b8();
    break;
  case 0x2d:
    uVar5 = 0x10;
    do {
      uVar10 = uVar5 + 1;
      *(undefined1 *)((int)param_2 + uVar5 + 0x29c) = 1;
      param_2[uVar5 + 3] = (ulong)((uVar5 - 0x10) * 4);
      uVar5 = uVar10;
    } while (uVar10 < 0x20);
    return puVar13;
  case 0x2e:
    puVar13 = (uint *)FUN_00258988(puVar13,&iStack_50);
    param_2[2] = (long)iStack_50;
  }
  return puVar13;
}

