/* Ghidra pseudocode. PS2 address: 00251638. Not validated source. */

uint FUN_00251638(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if (DAT_002a5d20 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = FUN_00267420(0x2d3e80);
    if ((param_1 == 0) && (lVar2 != 0)) {
      while (lVar2 = FUN_00267420(0x2d3e80), lVar2 != 0) {
        iVar1 = 100000;
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      lVar2 = 0;
    }
    uVar3 = (uint)(lVar2 == 0);
    if (param_2 != 0) {
      *(int *)param_2 = DAT_002a5d20;
    }
    if ((uVar3 != 0) && (DAT_002a5d20 = 0, param_3 != 0)) {
      *(undefined4 *)param_3 = DAT_002d5440;
    }
  }
  return uVar3;
}

