/* Ghidra pseudocode. PS2 address: 00258e58. Not validated source. */

void FUN_00258e58(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  
  piVar3 = (int *)param_1[3];
  if (piVar3 == (int *)0x0) {
    iVar4 = FUN_00258d88(param_1[2]);
  }
  else {
    iVar4 = 0;
    if (*piVar3 != 0) {
      do {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        iVar1 = FUN_00258d88(iVar1);
        iVar4 = iVar4 + iVar1;
      } while (*piVar3 != 0);
      iVar1 = iVar4 * 4;
      goto LAB_00258ec0;
    }
  }
  iVar1 = iVar4 << 2;
LAB_00258ec0:
  param_1[4] = iVar4;
  uStack_80 = FUN_00259ac0(iVar1);
  uStack_78 = FUN_00259ac0(iVar1);
  piVar3 = (int *)param_1[3];
  uStack_70 = 0xffffffff;
  uStack_7c = 0;
  uStack_74 = 0;
  auStack_6c[0] = 0;
  if (piVar3 == (int *)0x0) {
    FUN_00258dd0(param_1[2],&uStack_80,&uStack_70,auStack_6c);
  }
  else if (*piVar3 != 0) {
    iVar1 = *piVar3;
    while( true ) {
      FUN_00258dd0(iVar1,&uStack_80,&uStack_70,auStack_6c);
      piVar3 = piVar3 + 1;
      if (*piVar3 == 0) break;
      iVar1 = *piVar3;
    }
  }
  uVar2 = FUN_00258b20(&uStack_80,iVar4);
  param_1[3] = uVar2;
  param_1[1] = auStack_6c[0];
  *param_1 = uStack_70;
  return;
}

