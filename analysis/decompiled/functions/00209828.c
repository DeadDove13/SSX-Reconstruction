/* Ghidra pseudocode. PS2 address: 00209828. Not validated source. */

undefined8 FUN_00209828(undefined8 param_1,int param_2,ulong param_3,int param_4)

{
  float *pfVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  
  puVar8 = (undefined4 *)param_1;
  puVar8[1] = 0xffffffff;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  iVar7 = param_2 + 0x320a0;
  puVar8[0x14] = 0;
  pfVar1 = *(float **)(param_2 + *(int *)(param_2 + 0x3201c) * 4 + 0x320b0);
  uVar4 = *(undefined4 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4);
  puVar8[3] = pfVar1;
  *(char *)(puVar8 + 2) = (char)uVar4;
  if (pfVar1 != (float *)0x0) {
    fVar9 = *pfVar1;
    piVar6 = (int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4);
    if ((((float)*(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4) * fVar9 < 127.0) &&
        (iVar3 = 0, (float)*(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4) * fVar9 < 0.0)) ||
       (iVar3 = 0x7f, 127.0 <= (float)*(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4) * fVar9)) {
      *piVar6 = iVar3;
    }
    else {
      *piVar6 = (int)((float)*(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4) * fVar9);
    }
    iVar7 = param_2 + 0x320a0;
    if ((0x7e < *(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4)) ||
       (uVar2 = 0, -1 < *(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4))) {
      if (*(int *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4) < 0x7f) {
        uVar2 = *(undefined1 *)(iVar7 + *(int *)(param_2 + 0x3201c) * 4);
      }
      else {
        uVar2 = 0x7f;
      }
    }
    *(undefined1 *)(*(int *)(param_2 + 0x3201c) * 0x18 + param_2 + 0x32020) = uVar2;
  }
  iVar7 = FUN_002272d0(8,300);
  iVar7 = iVar7 + param_4;
  if ((param_3 & 0x40000000) == 0) {
    if ((param_3 & 0xc000000) == 0) {
      lVar5 = FUN_0023a448(0x2c57c0,iVar7,param_3 & 0x3ffffff);
    }
    else {
      lVar5 = FUN_00210840(0x28ac20,iVar7,param_3,0x2c57c0,0,0);
    }
  }
  else {
    lVar5 = FUN_002107c8(0x298590,iVar7,param_3,0x2c57c0,0,0);
  }
  if (lVar5 != 0) {
    if ((long)param_3 < 0) {
      FUN_0023bbd0(lVar5,0,iVar7);
    }
    else {
      FUN_0023bbd0(lVar5,0xffffffffdeadc0ed,iVar7);
    }
  }
  iVar3 = *(int *)(param_2 + 0x3201c);
  *puVar8 = (int)lVar5;
  uVar4 = FUN_00226a00(param_2 + iVar3 * 0x18 + 0x32020,8,300,lVar5,iVar7);
  puVar8[1] = uVar4;
  return param_1;
}

