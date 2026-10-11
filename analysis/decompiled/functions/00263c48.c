/* Ghidra pseudocode. PS2 address: 00263c48. Not validated source. */

int * FUN_00263c48(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)FUN_00259d50(param_1,param_3);
    return piVar1;
  }
  piVar1 = param_2 + -2;
  FUN_0025a6d0(param_1);
  uVar8 = param_2[-1];
  uVar4 = (int)param_3 + 0x13;
  uVar6 = uVar8 & 0xfffffffc;
  if (uVar4 < 0x1f) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = uVar4 & 0xfffffff0;
  }
  piVar3 = param_2;
  if (uVar6 < uVar4) {
    puVar9 = (undefined *)((int)piVar1 + uVar6);
    if ((puVar9 == PTR_DAT_002a6620) ||
       ((*(uint *)(puVar9 + (*(uint *)(puVar9 + 4) & 0xfffffffe) + 4) & 1) == 0)) {
      uVar12 = *(uint *)(puVar9 + 4) & 0xfffffffc;
      if (puVar9 == PTR_DAT_002a6620) {
        if (uVar4 + 0x10 <= uVar12 + uVar6) {
          PTR_DAT_002a6620 = (undefined *)((int)piVar1 + uVar4);
          *(uint *)(PTR_DAT_002a6620 + 4) = (uVar12 + uVar6) - uVar4 | 1;
          param_2[-1] = param_2[-1] & 1U | uVar4;
          FUN_0025a6d8(param_1);
          return param_2;
        }
        uVar8 = param_2[-1];
      }
      else {
        if (uVar4 <= uVar12 + uVar6) {
          iVar2 = *(int *)(puVar9 + 8);
          iVar7 = *(int *)(puVar9 + 0xc);
          *(int *)(iVar2 + 0xc) = iVar7;
          *(int *)(iVar7 + 8) = iVar2;
          uVar6 = uVar12 + uVar6;
          goto LAB_00264118;
        }
        uVar8 = param_2[-1];
      }
    }
    else {
      puVar9 = (undefined *)0x0;
      uVar12 = 0;
      uVar8 = param_2[-1];
    }
    if ((uVar8 & 1) == 0) {
      piVar11 = (int *)((int)piVar1 - *piVar1);
      uVar8 = piVar11[1] & 0xfffffffc;
      if (puVar9 == (undefined *)0x0) {
LAB_00263f18:
        uVar12 = uVar8 + uVar6;
        if ((piVar11 == (int *)0x0) || (uVar12 < uVar4)) goto LAB_00264000;
        iVar2 = piVar11[3];
        iVar7 = piVar11[2];
      }
      else {
        if (puVar9 == PTR_DAT_002a6620) {
          uVar12 = uVar12 + uVar8 + uVar6;
          if (uVar4 + 0x10 <= uVar12) {
            iVar2 = piVar11[3];
            iVar7 = piVar11[2];
            *(int *)(iVar7 + 0xc) = iVar2;
            *(int *)(iVar2 + 8) = iVar7;
            uVar6 = uVar6 - 4;
            piVar3 = piVar11 + 2;
            if (uVar6 < 0x25) {
              piVar1 = param_2;
              piVar5 = piVar3;
              if (0x13 < uVar6) {
                piVar1 = param_2 + 2;
                piVar5 = piVar11 + 4;
                piVar11[2] = *param_2;
                piVar11[3] = param_2[1];
                if (0x1b < uVar6) {
                  piVar1 = param_2 + 4;
                  piVar5 = piVar11 + 6;
                  piVar11[4] = param_2[2];
                  piVar11[5] = param_2[3];
                  if (0x23 < uVar6) {
                    piVar1 = param_2 + 6;
                    piVar5 = piVar11 + 8;
                    piVar11[6] = param_2[4];
                    piVar11[7] = param_2[5];
                  }
                }
              }
              *piVar5 = *piVar1;
              piVar5[1] = piVar1[1];
              piVar5[2] = piVar1[2];
            }
            else {
              FUN_0025a55c(piVar3,param_2);
            }
            PTR_DAT_002a6620 = (undefined *)((int)piVar11 + uVar4);
            *(uint *)(PTR_DAT_002a6620 + 4) = uVar12 - uVar4 | 1;
            piVar11[1] = piVar11[1] & 1U | uVar4;
            goto LAB_0026417c;
          }
          goto LAB_00263f18;
        }
        uVar12 = uVar12 + uVar8 + uVar6;
        if (uVar12 < uVar4) goto LAB_00263f18;
        iVar2 = *(int *)(puVar9 + 8);
        iVar7 = *(int *)(puVar9 + 0xc);
        *(int *)(iVar2 + 0xc) = iVar7;
        *(int *)(iVar7 + 8) = iVar2;
        iVar2 = piVar11[3];
        iVar7 = piVar11[2];
      }
      piVar3 = piVar11 + 2;
      *(int *)(iVar7 + 0xc) = iVar2;
      *(int *)(iVar2 + 8) = iVar7;
      uVar8 = uVar6 - 4;
      piVar1 = piVar11;
      uVar6 = uVar12;
      if (uVar8 < 0x25) {
        piVar5 = piVar3;
        piVar10 = param_2;
        if (0x13 < uVar8) {
          piVar10 = param_2 + 2;
          piVar5 = piVar11 + 4;
          piVar11[2] = *param_2;
          piVar11[3] = param_2[1];
          if (0x1b < uVar8) {
            piVar10 = param_2 + 4;
            piVar5 = piVar11 + 6;
            piVar11[4] = param_2[2];
            piVar11[5] = param_2[3];
            if (0x23 < uVar8) {
              piVar10 = param_2 + 6;
              piVar5 = piVar11 + 8;
              piVar11[6] = param_2[4];
              piVar11[7] = param_2[5];
            }
          }
        }
        *piVar5 = *piVar10;
        piVar5[1] = piVar10[1];
        piVar5[2] = piVar10[2];
        uVar8 = piVar11[1];
      }
      else {
        FUN_0025a55c(piVar3,param_2);
        uVar8 = piVar11[1];
      }
    }
    else {
LAB_00264000:
      piVar3 = (int *)FUN_00259d50(param_1,param_3);
      if (piVar3 == (int *)0x0) {
        FUN_0025a6d8(param_1);
        return (int *)0x0;
      }
      uVar8 = param_2[-1];
      uVar12 = uVar6 - 4;
      if (piVar3 + -2 != (int *)((int)piVar1 + (uVar8 & 0xfffffffe))) {
        if (uVar12 < 0x25) {
          piVar1 = param_2;
          piVar11 = piVar3;
          if (0x13 < uVar12) {
            piVar1 = param_2 + 2;
            piVar11 = piVar3 + 2;
            *piVar3 = *param_2;
            piVar3[1] = param_2[1];
            if (0x1b < uVar12) {
              piVar1 = param_2 + 4;
              piVar11 = piVar3 + 4;
              piVar3[2] = param_2[2];
              piVar3[3] = param_2[3];
              if (0x23 < uVar12) {
                piVar1 = param_2 + 6;
                piVar11 = piVar3 + 6;
                piVar3[4] = param_2[4];
                piVar3[5] = param_2[5];
              }
            }
          }
          *piVar11 = *piVar1;
          piVar11[1] = piVar1[1];
          piVar11[2] = piVar1[2];
        }
        else {
          FUN_0025a55c(piVar3,param_2);
        }
        FUN_00260248(param_1,param_2);
        goto LAB_0026417c;
      }
      uVar6 = uVar6 + (piVar3[-1] & 0xfffffffcU);
      piVar3 = param_2;
    }
  }
LAB_00264118:
  uVar12 = uVar6 - uVar4;
  if (uVar12 < 0x10) {
    piVar1[1] = uVar8 & 1 | uVar6;
    *(uint *)((int)piVar1 + uVar6 + 4) = *(uint *)((int)piVar1 + uVar6 + 4) | 1;
  }
  else {
    piVar1[1] = uVar8 & 1 | uVar4;
    *(uint *)((int)piVar1 + uVar4 + 4) = uVar12 | 1;
    *(uint *)((int)piVar1 + uVar12 + uVar4 + 4) = *(uint *)((int)piVar1 + uVar12 + uVar4 + 4) | 1;
    FUN_00260248(param_1,(int)piVar1 + uVar4 + 8);
  }
LAB_0026417c:
  FUN_0025a6d8(param_1);
  return piVar3;
}

