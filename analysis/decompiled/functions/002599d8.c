/* Ghidra pseudocode. PS2 address: 002599d8. Not validated source. */

int FUN_002599d8(undefined8 param_1,int param_2,uint param_3,long param_4,code *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_3 != 0) {
    if (param_4 == 0) {
      return 0;
    }
    uVar4 = param_3;
    if (param_3 == 0) {
      return 0;
    }
    do {
      uVar2 = param_3 >> 1;
      iVar3 = uVar2 * (int)param_4 + param_2;
      lVar1 = (*param_5)(param_1,iVar3);
      if ((-1 < lVar1) && (uVar5 = uVar2 + 1, uVar2 = uVar4, lVar1 < 1)) {
        return iVar3;
      }
      param_3 = uVar5 + uVar2;
      uVar4 = uVar2;
    } while (uVar5 < uVar2);
  }
  return 0;
}

