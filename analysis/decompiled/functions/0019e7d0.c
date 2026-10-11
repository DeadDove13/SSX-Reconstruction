/* Ghidra pseudocode. PS2 address: 0019e7d0. Not validated source. */

undefined8
FUN_0019e7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = (int)param_1;
  FUN_0019cc48(iVar4 + 0x1c,param_2,0x102,param_3,param_4,param_5,0);
  iVar2 = DAT_00299ce0;
  iVar1 = *(int *)((int)param_3 + 0xcc);
  iVar5 = (int)param_4;
  fVar6 = *(float *)(iVar5 + 0x24);
  *(undefined **)(iVar4 + 0x54) = &DAT_002b53a8;
  iVar1 = *(int *)(iVar1 * 8 + iVar2);
  if (fVar6 < 0.0) {
    fVar6 = *(float *)(iVar5 + 0x10);
  }
  *(float *)(iVar4 + 0x10) = fVar6;
  fVar6 = *(float *)(iVar5 + 0x28);
  if (fVar6 < 0.0) {
    fVar6 = *(float *)(iVar1 + 0xc);
  }
  *(float *)(iVar4 + 0x14) = fVar6;
  fVar6 = DAT_002c2afc;
  fVar7 = *(float *)(iVar5 + 0x2c);
  *(bool *)(iVar4 + 0x1a) = *(int *)(iVar5 + 0x30) != 0;
  iVar1 = *(int *)(iVar4 + 0x78);
  *(byte *)(iVar4 + 0x1b) = (byte)((uint)*(undefined4 *)(iVar5 + 0x30) >> 0x1f);
  *(float *)(iVar4 + 8) = fVar7 * fVar6 * 30.0;
  lVar3 = FUN_002107c8(0x298590,iVar1 << 6,0x40000000,0x2b52a0,0,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar1 << 6);
  }
  iVar2 = iVar1 + -1;
  if (iVar1 != 0) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  *(int *)(iVar4 + 0x84) = (int)lVar3;
  *(undefined1 *)(iVar4 + 0x18) = 0;
  *(undefined1 *)(iVar4 + 0x19) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  FUN_0019ed68(param_1);
  return param_1;
}

