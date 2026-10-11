/* Ghidra pseudocode. PS2 address: 00173148. Not validated source. */

void FUN_00173148(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = DAT_002c2830;
  fVar1 = DAT_002c2828;
  iVar4 = 0;
  if (-1 < param_4) {
    fVar6 = (float)param_4;
    uVar7 = DAT_002c2834;
    uVar8 = DAT_002c282c;
    do {
      fVar5 = (float)iVar4;
      iVar3 = param_2 + iVar4;
      DAT_0028ad38 = uVar2;
      iVar4 = iVar4 + 1;
      DAT_0028ad30 = (fVar5 / fVar6) * fVar1 + fVar1;
      DAT_0028ad34 = uVar8;
      DAT_0028ad3c = uVar7;
      FUN_0019f6d8((float)param_1,(float)iVar3,(float)param_3,0x3f800000,0x28ad30);
    } while (iVar4 <= param_4);
  }
  return;
}

