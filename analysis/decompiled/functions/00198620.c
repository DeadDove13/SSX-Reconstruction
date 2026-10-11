/* Ghidra pseudocode. PS2 address: 00198620. Not validated source. */

void FUN_00198620(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 auStack_58 [6];
  
  piVar6 = (int *)(param_1 + 0xc);
  iVar5 = 2;
  iVar1 = *(int *)param_2;
  uStack_60 = 0x11111114;
  iStack_5c = 0;
  *(int *)param_2 = iVar1 + 0x14;
  piVar3 = (int *)*piVar6;
  piVar4 = piVar6;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar4 = piVar4 + 1;
    if (piVar3 != (int *)0x0) {
      puVar2 = auStack_58 + iStack_5c;
      iStack_5c = iStack_5c + 1;
      *puVar2 = *(undefined4 *)(*piVar3 + 0x38);
    }
    if (iVar5 < 0) break;
    piVar3 = (int *)*piVar4;
  }
  iVar5 = 2;
  FUN_0023bac0(iVar1,&uStack_60,0x14);
  iVar1 = *piVar6;
  while( true ) {
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
    if (iVar1 != 0) {
      FUN_00198848(iVar1,param_2);
    }
    if (iVar5 < 0) break;
    iVar1 = *piVar6;
  }
  return;
}

