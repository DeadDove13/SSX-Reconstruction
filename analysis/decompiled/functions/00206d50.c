/* Ghidra pseudocode. PS2 address: 00206d50. Not validated source. */

void FUN_00206d50(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  FUN_00207008();
  iVar8 = (int)param_1;
  pfVar2 = *(float **)(iVar8 + 0x30000 + *(int *)(iVar8 + 0x3201c) * 4 + 0x20b0);
  cVar1 = *(char *)(iVar8 + 0x30000 + *(int *)(iVar8 + 0x3201c) * 4 + 0x20a0);
  if (pfVar2 != (float *)0x0) {
    fVar9 = (float)(int)cVar1 * *pfVar2;
    if (fVar9 < 127.0) {
      iVar6 = 0;
      if (0.0 <= fVar9) {
        if (fVar9 < 127.0) {
          iVar6 = (int)(char)(int)fVar9;
        }
        else {
          iVar6 = 0x7f;
        }
      }
    }
    else {
      iVar6 = 0x7f;
    }
    iVar7 = iVar8 + 0x320a0;
    *(int *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4) = iVar6;
    if ((0x7e < *(int *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4)) ||
       (uVar3 = 0, -1 < *(int *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4))) {
      if (*(int *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4) < 0x7f) {
        uVar3 = *(undefined1 *)(iVar7 + *(int *)(iVar8 + 0x3201c) * 4);
      }
      else {
        uVar3 = 0x7f;
      }
    }
    *(undefined1 *)(*(int *)(iVar8 + 0x3201c) * 0x18 + iVar8 + 0x32020) = uVar3;
  }
  if (param_2 == 0) {
    lVar5 = FUN_0023a448(0x2bd130,0x2130,0);
    if (lVar5 != 0) {
      FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x2130);
    }
    uVar4 = FUN_00205a18(lVar5,iVar8 + 0x35b5c,iVar8 + *(int *)(iVar8 + 0x35f80) * 0x20 + 0x35b7c,
                         param_1,cVar1,pfVar2,param_3);
    *(undefined4 *)(iVar8 + 0x35f88) = uVar4;
  }
  else {
    lVar5 = FUN_0023a448(0x2bd130,0x2130,0);
    if (lVar5 != 0) {
      FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x2130);
    }
    uVar4 = FUN_00205a18(lVar5,iVar8 + 0x35b5c,param_2,param_1,cVar1,pfVar2,param_3);
    *(undefined4 *)(iVar8 + 0x35f88) = uVar4;
  }
  FUN_002072d8(param_1);
  return;
}

