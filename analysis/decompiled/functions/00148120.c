/* Ghidra pseudocode. PS2 address: 00148120. Not validated source. */

void FUN_00148120(float param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar1 = *(uint *)(param_2 + 0x214);
  }
  else {
    if ((float)(int)((*(uint *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1) <=
        *(float *)(param_2 + 0x1e8)) {
      iVar5 = *(int *)(param_2 + 0x1e4);
      puVar3 = (undefined4 *)(param_2 + 0x1e8);
      if (iVar5 < 1) {
        return;
      }
      do {
        *puVar3 = 0;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
      return;
    }
    uVar1 = *(uint *)(param_2 + 0x214);
  }
  *(uint *)(param_2 + 0x214) = uVar1 & 0xffff8000;
  iVar5 = 0;
  *(uint *)(param_2 + 0x218) = *(uint *)(param_2 + 0x218) & 0xffff8000;
  if (0 < *(int *)(param_2 + 0x1e4)) {
    fVar9 = 30.0;
    pfVar4 = (float *)(param_2 + 0x1e8);
    do {
      fVar7 = (param_1 * *(float *)(param_2 + 0x10) * fVar9) / 60.0;
      fVar8 = *pfVar4 + fVar7;
      if (iVar5 == 0) {
        FUN_00145cc8(*(undefined4 *)(param_2 + 0x1e8),fVar8,param_2 + 0x214,
                     *(undefined4 *)(param_2 + 0x224));
        if ((*(uint *)(param_2 + 0x214) & 8) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x20));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x10) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x21));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x20) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x22));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x40) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x23));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x80) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x24));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x100) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x25));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x200) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x26));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x400) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x27));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x800) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x28));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x1000) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x224) + 8) + 0x29));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x2000) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)((int)pfVar4[0xf] + 8) + 0x2a));
        }
        if ((*(uint *)(param_2 + 0x214) & 0x4000) != 0) {
          FUN_001fcec0(DAT_002c56e8,*(undefined4 *)(param_2 + 0x220),
                       *(undefined1 *)(*(int *)((int)pfVar4[0xf] + 8) + 0x2b));
        }
      }
      fVar6 = *pfVar4;
      *pfVar4 = fVar8;
      if (0.0 < fVar7) {
        if ((float)*(int *)(param_2 + 0x208) < fVar8) {
          *pfVar4 = (float)*(int *)(param_2 + 0x208);
        }
        iVar2 = (*(uint *)(*(int *)((int)pfVar4[0xf] + 8) + 0xc) >> 7 & 0xff) - 1;
        fVar7 = (float)iVar2;
        if (fVar7 < *pfVar4) {
          if ((fVar7 <= fVar6) && (*(int *)(param_2 + 0x20) == 0)) {
            *(undefined4 *)(param_2 + 0x24) = 1;
          }
          *pfVar4 = (float)iVar2;
          goto LAB_0014856c;
        }
        iVar2 = *(int *)(param_2 + 0x1e4);
      }
      else {
        if (fVar8 < (float)*(int *)(param_2 + 0x208)) {
          *pfVar4 = (float)*(int *)(param_2 + 0x208);
        }
        if (*pfVar4 < 0.0) {
          iVar2 = *(int *)(param_2 + 0x20);
          *pfVar4 = 0.0;
          if (iVar2 == 0) {
            *(undefined4 *)(param_2 + 0x24) = 1;
          }
LAB_0014856c:
          iVar2 = *(int *)(param_2 + 0x1e4);
        }
        else {
          iVar2 = *(int *)(param_2 + 0x1e4);
        }
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

