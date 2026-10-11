/* Ghidra pseudocode. PS2 address: 001388e8. Not validated source. */

void FUN_001388e8(undefined8 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar5 = *(int *)(iVar7 + 0x10);
  iVar1 = *(int *)(*(int *)(iVar5 + 0x6cf4) + 8);
  if (*(int *)(iVar5 + 0x348) < 0) {
    uVar4 = *param_2;
    iVar5 = *(int *)(iVar7 + 0x10);
  }
  else {
    if (iVar1 != 0x50) {
      FUN_0010b330(iVar5,6);
      return;
    }
    uVar4 = *param_2;
  }
  FUN_001099f0(iVar5,(int)uVar4 >> 4 & 1,(int)uVar4 >> 5 & 1);
  FUN_001110f0((float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0,*(undefined4 *)(iVar7 + 0x10));
  FUN_00111248((float)((int)(*param_2 << 0xc) >> 0x1a) / 31.0,
               (float)((int)(*param_2 << 6) >> 0x1a) / 31.0,*(undefined4 *)(iVar7 + 0x10));
  FUN_00111af8(*(undefined4 *)(iVar7 + 0x10),(int)*param_2 >> 6 & 1,(int)*param_2 >> 7 & 1);
  FUN_00138c18(param_1);
  FUN_00111c18(*(undefined4 *)(iVar7 + 0x10));
  if (*(int *)(iVar7 + 0xc) == 0) {
    uVar4 = 1;
    if ((*param_2 & 2) != 0) goto LAB_00138a1c;
  }
  else {
    uVar4 = (uint)((*param_2 & 6) != 0);
LAB_00138a1c:
    *(uint *)(iVar7 + 0xc) = uVar4;
  }
  iVar5 = *(int *)(*(int *)(iVar7 + 0x10) + 0x8584);
  iVar2 = *(int *)(iVar5 + 0x71c);
  if ((iVar2 != 0) && (*(int *)(iVar7 + 0xc) == 0)) {
    *(undefined4 *)(iVar5 + 0x71c) = 0;
  }
  if (iVar1 == 0x50) {
    lVar6 = FUN_00150f10(*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x6cf4));
    if (lVar6 != 0) {
      FUN_0014cd18(*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x6cf4),0x34,0,5);
      iVar5 = *(int *)(iVar7 + 0x10);
      *(undefined4 *)(iVar5 + 0x1ac) = 0;
      *(undefined4 *)(iVar5 + 0x1a4) = 0;
      *(undefined4 *)(iVar5 + 0x1a8) = 0;
      *(undefined4 *)(iVar5 + 0x1a0) = 0;
      *(undefined4 *)(iVar5 + 0x198) = 0;
      *(undefined4 *)(iVar5 + 0x19c) = 0;
      *(undefined4 *)(iVar5 + 0x194) = 0;
      *(undefined4 *)(iVar5 + 0x18c) = 0;
      *(undefined4 *)(iVar5 + 400) = 0;
    }
  }
  else {
    if (iVar2 == 0) {
      if (((*param_2 & 8) != 0) || (*(int *)(iVar7 + 0xc) != 0)) {
        FUN_00111360(0,*(undefined4 *)(iVar7 + 0x10));
        iVar5 = *(int *)(iVar7 + 0x10);
        if (*(float *)(iVar5 + 0x18c) == 0.0) {
          *(uint *)(*(int *)(iVar5 + 0x8584) + 0x718) = (int)*param_2 >> 3 & 1;
          FUN_0010b330(iVar5,0xe);
          iVar5 = **(int **)(iVar7 + 0x10);
          (**(code **)(iVar5 + 0x7c))((int)*(int **)(iVar7 + 0x10) + (int)*(short *)(iVar5 + 0x78));
          uVar4 = *param_2;
          goto LAB_00138bbc;
        }
        goto LAB_00138bb8;
      }
      iVar5 = *(int *)(iVar7 + 0x10);
    }
    else {
      iVar5 = *(int *)(iVar7 + 0x10);
    }
    if (DAT_002c1cf4 <= *(float *)(iVar5 + 0xe0)) {
      uVar4 = *param_2;
      goto LAB_00138bbc;
    }
    if (*(float *)(iVar5 + 0x198) <= 0.0) {
      uVar4 = *param_2;
      goto LAB_00138bbc;
    }
    if (DAT_002c1cf8 <= ABS(*(float *)(iVar5 + 0x1a4))) {
      uVar4 = *param_2;
      goto LAB_00138bbc;
    }
    if (*(float *)(iVar5 + 0x18c) == 0.0) {
      FUN_0014cd18(*(undefined4 *)(iVar5 + 0x6cf4),0x50,0,5);
    }
  }
LAB_00138bb8:
  uVar4 = *param_2;
LAB_00138bbc:
  uVar3 = DAT_002c1cfc;
  iVar5 = *(int *)(iVar7 + 0x10);
  if (((uVar4 & 1) != 0) || (*(int *)(iVar5 + 0x210) == 0)) {
    *(uint *)(iVar5 + 0x284) = (uVar4 ^ 1) & 1;
    FUN_00107070(uVar3,iVar5);
  }
  return;
}

