/* Ghidra pseudocode. PS2 address: 0012c008. Not validated source. */

long FUN_0012c008(undefined8 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  
  uVar1 = FUN_002109b0();
  lVar2 = 0;
  if (0 < (long)*(short *)(param_2 + 4)) {
    piVar3 = *(int **)(param_2 + 0x90);
    do {
      if (((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) * 1000.0 + 0.0 <=
          *(float *)(*piVar3 + 0x10)) {
        return lVar2;
      }
      lVar2 = (long)((int)lVar2 + 1);
      piVar3 = piVar3 + 1;
    } while (lVar2 < *(short *)(param_2 + 4));
  }
  return 0;
}

