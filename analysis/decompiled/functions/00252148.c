/* Ghidra pseudocode. PS2 address: 00252148. Not validated source. */

float FUN_00252148(float param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fStack_20;
  undefined4 uStack_1c;
  
  if ((uint)ABS(param_1) < 0x3f490fdb) {
    uStack_1c = 0;
    iVar2 = 1;
  }
  else {
    if (0x7f7fffff < (uint)ABS(param_1)) {
      return param_1 - param_1;
    }
    uVar1 = FUN_00253308(&fStack_20);
    iVar2 = (uVar1 & 1) * -2 + 1;
    param_1 = fStack_20;
  }
  fVar3 = (float)FUN_00255018(param_1,uStack_1c,iVar2);
  return fVar3;
}

