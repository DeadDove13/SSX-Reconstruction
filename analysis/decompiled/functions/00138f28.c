/* Ghidra pseudocode. PS2 address: 00138f28. Not validated source. */

void FUN_00138f28(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x6cf4) + 8);
  if (iVar2 == 0x37) {
    FUN_0010b330(iVar1,5);
    uVar4 = *param_2;
  }
  else if ((iVar2 == 0x34) || (iVar2 == 0x50)) {
    if ((*param_2 & 0xc) == 0) {
      FUN_0010b330(iVar1,3);
      uVar4 = *param_2;
    }
    else {
      *(uint *)(*(int *)(iVar1 + 0x8584) + 0x718) = (int)*param_2 >> 3 & 1;
      FUN_0010b330(iVar1,0xe);
      uVar4 = *param_2;
    }
  }
  else {
    uVar4 = *param_2;
  }
  FUN_001110f0((float)((int)(uVar4 << 0x12) >> 0x1a) / 31.0,*param_1);
  FUN_001112f8((float)((int)(*param_2 << 0xc) >> 0x1a) / 31.0,*param_1);
  uVar3 = DAT_002c1d20;
  if ((*param_2 & 1) == 0) {
    if (*(int *)(*param_1 + 0x210) != 0) {
      return;
    }
    iVar1 = *param_1;
  }
  else {
    iVar1 = *param_1;
  }
  *(uint *)(iVar1 + 0x284) = (*param_2 ^ 1) & 1;
  FUN_00107070(uVar3);
  return;
}

