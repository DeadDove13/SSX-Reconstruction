/* Ghidra pseudocode. PS2 address: 0010b140. Not validated source. */

int FUN_0010b140(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)((int)param_1 + 0x348) < 0) {
    fVar2 = (float)FUN_0010af78(param_1);
    fVar3 = (float)FUN_001055f8(param_1);
    fVar3 = fVar2 - fVar3;
    if (fVar3 <= 0.0) {
      iVar1 = FUN_0010af80(param_1);
    }
    else {
      iVar1 = FUN_0010af80(param_1);
      iVar1 = (int)(((float)iVar1 * fVar2) / fVar3);
    }
  }
  else {
    iVar1 = FUN_0010af80();
  }
  return iVar1;
}

