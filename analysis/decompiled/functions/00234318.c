/* Ghidra pseudocode. PS2 address: 00234318. Not validated source. */

int FUN_00234318(short *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  short *psVar4;
  int iVar5;
  
  uVar2 = FUN_00234290(param_2);
  iVar1 = -1;
  iVar5 = 0;
  psVar4 = param_1;
  if (*param_1 != 0) {
    while (iVar1 = iVar5, lVar3 = FUN_002343d8(psVar4,param_2,uVar2), lVar3 != 0) {
      iVar5 = iVar1 + 1;
      if (param_1[iVar5] == 0) {
        return -1;
      }
      psVar4 = param_1 + iVar5;
    }
  }
  return iVar1;
}

