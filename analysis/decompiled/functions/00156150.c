/* Ghidra pseudocode. PS2 address: 00156150. Not validated source. */

void FUN_00156150(undefined8 param_1,undefined1 *param_2,long param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = FUN_00156b78(param_1,*param_2);
  iVar5 = DAT_002c4670;
  fVar4 = DAT_002c2458;
  fVar3 = DAT_002c2454;
  piVar7 = (int *)(iVar6 * 0x10 + (int)param_1 + 0x19d0);
  iVar6 = 0;
  do {
    iVar8 = (int)((float)*(byte *)(param_4 + 0x10 + iVar6) * fVar3);
    iVar9 = 0;
    if (param_3 != 0) {
      iVar9 = (int)((float)*(byte *)((int)param_3 + 0xc + iVar6) * fVar4);
    }
    iVar2 = *(int *)(param_2 + 0x1c);
    *param_5 = piVar7[0x10];
    bVar1 = *(byte *)(iVar2 + iVar6 + 0x10);
    param_5[2] = iVar9;
    param_5[1] = (uint)bVar1;
    param_5[3] = iVar8;
    param_5[4] = *piVar7 + iVar8 + iVar9;
    if (iVar5 != 0) {
      param_5[1] = *piVar7;
    }
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 1;
    param_5 = param_5 + 5;
  } while (iVar6 < 4);
  return;
}

