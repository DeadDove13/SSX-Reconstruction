/* Ghidra pseudocode. PS2 address: 0025b730. Not validated source. */

int FUN_0025b730(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  bVar2 = *param_1;
  if (*param_1 == 0) {
    uVar7 = (uint)*param_1;
  }
  else {
    do {
      bVar1 = *param_2;
      iVar6 = (int)(char)bVar2;
      iVar3 = iVar6 + 0x20;
      if ((*(byte *)((int)&PTR_DAT_002c00a1 + iVar6) & 1) == 0) {
        iVar3 = iVar6;
      }
      lVar4 = (long)((char)bVar1 + 0x20);
      if ((*(byte *)((int)&PTR_DAT_002c00a1 + (int)(char)bVar1) & 1) == 0) {
        lVar4 = (long)(char)bVar1;
      }
      if (iVar3 != lVar4) {
        uVar7 = (uint)*param_1;
        goto LAB_0025b7ac;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar2 = *param_1;
    } while (*param_1 != 0);
    uVar7 = (uint)*param_1;
  }
LAB_0025b7ac:
  bVar2 = *param_2;
  uVar5 = uVar7 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_002c00a1 + uVar7) & 1) == 0) {
    uVar5 = uVar7;
  }
  uVar7 = bVar2 + 0x20;
  if ((*(byte *)((int)&PTR_DAT_002c00a1 + (uint)bVar2) & 1) == 0) {
    uVar7 = (uint)bVar2;
  }
  return uVar5 - uVar7;
}

