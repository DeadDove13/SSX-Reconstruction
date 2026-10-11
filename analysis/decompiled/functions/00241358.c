/* Ghidra pseudocode. PS2 address: 00241358. Not validated source. */

bool FUN_00241358(short *param_1,int param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  short *psVar6;
  
  bVar1 = *(byte *)(param_1 + 1);
  sVar2 = *param_1;
  *param_3 = -1;
  uVar5 = bVar1 & 0xf;
  bVar1 = bVar1 >> 4;
  param_3[1] = -1;
  if (bVar1 == 1) {
    if (uVar5 < 0xc) {
      iVar3 = *(int *)(uVar5 * 4 + param_2);
    }
    else {
      iVar3 = -2;
    }
    if (-1 < iVar3) {
      if (iVar3 < DAT_002c5b34) {
        if ((**(short **)(iVar3 * 4 + DAT_002c5b30) != sVar2) && (iVar3 != -2)) {
          iVar3 = -1;
        }
      }
      else {
        iVar3 = -2;
      }
    }
LAB_00241450:
    *param_3 = (short)iVar3;
  }
  else {
    if (bVar1 != 0) {
      if (bVar1 != 2) {
        sVar2 = *param_3;
        goto LAB_00241458;
      }
      iVar3 = FUN_00242fe8(sVar2);
      psVar6 = (short *)(uVar5 * 4 + param_2);
      lVar4 = FUN_00243050(iVar3,*(undefined4 *)psVar6);
      if (lVar4 == 0) {
        iVar3 = -1;
      }
      else {
        param_3[1] = *psVar6;
      }
      goto LAB_00241450;
    }
    sVar2 = FUN_00242fe8(sVar2);
    *param_3 = sVar2;
  }
  sVar2 = *param_3;
LAB_00241458:
  return -1 < sVar2;
}

