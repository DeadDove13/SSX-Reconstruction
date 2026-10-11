/* Ghidra pseudocode. PS2 address: 0025be30. Not validated source. */

int FUN_0025be30(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar7 = (int)param_3 + -1;
  if (iVar7 == -1) {
LAB_0025bed0:
    uVar6 = (uint)*param_1;
  }
  else {
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      lVar5 = (long)((char)bVar1 + 0x20);
      if ((*(byte *)((int)&PTR_DAT_002c00a1 + (int)(char)bVar1) & 1) == 0) {
        lVar5 = (long)(char)bVar1;
      }
      lVar4 = (long)((char)bVar2 + 0x20);
      if ((*(byte *)((int)&PTR_DAT_002c00a1 + (int)(char)bVar2) & 1) == 0) {
        lVar4 = (long)(char)bVar2;
      }
      if (lVar5 != lVar4) {
        uVar6 = (uint)*param_1;
        goto LAB_0025bed4;
      }
      if (iVar7 == 0) {
        uVar6 = (uint)*param_1;
        goto LAB_0025bed4;
      }
      if ((long)(char)bVar1 == 0) {
        uVar6 = (uint)*param_1;
        goto LAB_0025bed4;
      }
      iVar7 = iVar7 + -1;
      if ((long)(char)bVar2 == 0) goto LAB_0025bed0;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (iVar7 != -1);
    uVar6 = (uint)*param_1;
  }
LAB_0025bed4:
  bVar1 = *param_2;
  uVar3 = uVar6 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_002c00a1 + uVar6) & 1) == 0) {
    uVar3 = uVar6;
  }
  uVar6 = bVar1 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)bVar1) & 1) == 0) {
    uVar6 = (uint)bVar1;
  }
  return uVar3 - uVar6;
}

