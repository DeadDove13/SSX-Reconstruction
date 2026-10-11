/* Ghidra pseudocode. PS2 address: 00219408. Not validated source. */

void FUN_00219408(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  
  iVar4 = 0;
  do {
    iVar1 = iVar4 * 0x58;
    if (((&DAT_00298ba4)[iVar4 * 0x16] == 2) &&
       (piVar3 = (int *)(&DAT_00298bb0 + iVar1), *piVar3 == param_1)) {
      *piVar3 = 0;
      (&DAT_00298ba4)[iVar4 * 0x16] = 3;
      uStack_70 = 0;
      auStack_6c[0] = 0;
      uVar2 = FUN_00235eb0(param_1,&uStack_70,auStack_6c);
      *(undefined4 *)(&DAT_00298bac + iVar1) = auStack_6c[0];
      *(undefined4 *)(&DAT_00298bb4 + iVar1) = uStack_70;
      *piVar3 = 0;
      if (*(code **)(&DAT_00298b9c + iVar1) != (code *)0x0) {
        (**(code **)(&DAT_00298b9c + iVar1))(*(undefined4 *)(iVar1 + 0x298ba0),uStack_70,uVar2);
      }
      iVar1 = *(int *)(&DAT_00298b98 + iVar1);
      if (*(int *)(iVar1 + 0xc) != 0) {
        *(undefined4 *)(iVar1 + 8) = 0;
        (**(code **)(*(int *)(iVar1 + 0x10) + 0x24))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x20));
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x32);
  return;
}

