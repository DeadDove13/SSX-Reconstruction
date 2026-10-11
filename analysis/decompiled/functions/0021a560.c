/* Ghidra pseudocode. PS2 address: 0021a560. Not validated source. */

void FUN_0021a560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (int)param_3 + 0x7f;
  lVar3 = FUN_0023a448(0x2bdd78,iVar5,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar5);
  }
  uVar1 = (int)lVar3 + 0x7fU & 0xffffff80;
  piVar4 = (int *)param_1;
  *piVar4 = (int)lVar3;
  piVar4[1] = uVar1;
  FUN_0023bac0(uVar1,param_2,param_3);
  piVar2 = (int *)FUN_0021a870(piVar4[1]);
  piVar4[4] = *piVar2;
  iVar5 = piVar2[1];
  piVar4[5] = iVar5;
  if ((iVar5 != 0) && (piVar4[2] = (int)(piVar2 + 2), 0 < iVar5)) {
    do {
      piVar2 = piVar2 + 3;
      *(undefined2 *)piVar2 = 0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0021a658(param_1);
  return;
}

