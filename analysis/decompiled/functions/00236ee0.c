/* Ghidra pseudocode. PS2 address: 00236ee0. Not validated source. */

undefined4 FUN_00236ee0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 auStack_80 [2];
  int iStack_78;
  undefined4 uStack_74;
  
  uVar6 = 1;
  iVar5 = 0;
  if (0 < *param_2) {
    do {
      iVar4 = iVar5 * 4;
      iStack_78 = param_2[3];
      uStack_74 = 0;
      iVar5 = iVar5 + 1;
      auStack_80[0] = *(undefined4 *)(iVar4 + param_2[1]);
      uVar2 = FUN_0023e600(auStack_80[0]);
      lVar3 = FUN_002395c8(0x2366c0,uVar2,DAT_002c59a0,auStack_80);
      if (lVar3 == 0) {
        uVar6 = 0;
      }
      iVar1 = *param_2;
      *(int *)(iVar4 + param_2[2]) = (int)lVar3;
    } while (iVar5 < iVar1);
  }
  return uVar6;
}

