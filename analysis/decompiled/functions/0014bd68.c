/* Ghidra pseudocode. PS2 address: 0014bd68. Not validated source. */

undefined4 FUN_0014bd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)((int)param_2 + 8);
  if (fVar3 == 0.0) {
    FUN_001eacb0(param_3);
    iVar2 = 0;
    do {
      lVar1 = FUN_001eac38(param_3,iVar2);
      iVar2 = iVar2 + 1;
      if (lVar1 != 0) {
        return *(undefined4 *)((int)lVar1 + 0x1dc);
      }
    } while (iVar2 < 10);
  }
  if (fVar3 == 1.0) {
    FUN_001479a0(param_2,10);
  }
  return param_4;
}

