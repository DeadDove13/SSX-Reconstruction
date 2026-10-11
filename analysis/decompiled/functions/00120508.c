/* Ghidra pseudocode. PS2 address: 00120508. Not validated source. */

void FUN_00120508(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  float fVar2;
  
  piVar1 = (int *)param_1;
  piVar1[0x22d] = 1;
  piVar1[0x22b] = 0;
  fVar2 = *(float *)(*piVar1 + 0x8308);
  piVar1[0x22c] = 0;
  if (fVar2 < 0.5) {
    fVar2 = (float)FUN_0011f008(param_1,*piVar1 + 0x2d0);
    *param_2 = *param_2 & 0xffffc0ff | ((int)(-fVar2 * 31.0) & 0x3fU) << 8;
    piVar1[0x22a] = 0x1a;
  }
  return;
}

