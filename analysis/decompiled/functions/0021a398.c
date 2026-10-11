/* Ghidra pseudocode. PS2 address: 0021a398. Not validated source. */

void FUN_0021a398(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_170 [256];
  
  FUN_0025b630(auStack_170,0x2c5928,param_2);
  FUN_002368e8(auStack_170);
  lVar6 = FUN_002370d0(auStack_170);
  iVar3 = (int)lVar6;
  if (lVar6 == 0) {
    iVar3 = FUN_00236908(auStack_170);
  }
  lVar6 = FUN_0023a448(0x2bdd60,iVar3 + 0x7f,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0ed,iVar3 + 0x7f);
  }
  uVar1 = (int)lVar6 + 0x7fU & 0xffffff80;
  piVar8 = (int *)param_1;
  *piVar8 = (int)lVar6;
  piVar8[1] = uVar1;
  FUN_00237148(auStack_170,uVar1,0);
  piVar4 = (int *)FUN_0021a870(piVar8[1]);
  piVar8[4] = *piVar4;
  iVar3 = piVar4[1];
  piVar8[5] = iVar3;
  if (iVar3 != 0) {
    piVar8[2] = (int)(piVar4 + 2);
  }
  if (param_3 == 0) {
    iVar3 = piVar8[5];
    if (0 < iVar3) {
      puVar5 = (undefined2 *)(piVar8[2] + 4);
      do {
        *puVar5 = 0;
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + 6;
      } while (iVar3 != 0);
    }
  }
  else {
    if (param_4 == 0) {
      FUN_0025b630(auStack_170,0x2c5930,param_2);
    }
    else {
      FUN_0025b630(auStack_170,0x2c5930,param_4);
    }
    sVar2 = FUN_00223380(0x299cc8,auStack_170);
    iVar3 = piVar8[5];
    if (0 < iVar3) {
      iVar7 = piVar8[2];
      do {
        iVar3 = iVar3 + -1;
        *(short *)(iVar7 + 4) = *(short *)(iVar7 + 4) + sVar2;
        iVar7 = iVar7 + 0xc;
      } while (iVar3 != 0);
    }
  }
  FUN_0021a658(param_1);
  return;
}

