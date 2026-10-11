/* Ghidra pseudocode. PS2 address: 002358b0. Not validated source. */

void FUN_002358b0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((DAT_002c5998 == 0) && (param_1 < 0x101)) {
    DAT_002c5bd0 = param_1;
    DAT_002c5998 = FUN_0023a448(0x2be438,param_1 * 0x30,param_2);
    DAT_002c5bdc = DAT_002c5998 + param_1 * 0x30 + -0x30;
    DAT_002c5bd8 = DAT_002c5998;
    DAT_002c5be4 = FUN_0023ee10();
    iVar4 = 0;
    if (0 < param_1) {
      do {
        iVar2 = DAT_002c5998;
        iVar1 = iVar4 * 0x30;
        piVar3 = (int *)(DAT_002c5998 + iVar1);
        *piVar3 = iVar4;
        iVar4 = iVar4 + 1;
        piVar3[1] = iVar2 + iVar1 + 0x30;
        piVar3[7] = 0;
      } while (iVar4 < param_1);
    }
    *(undefined4 *)(param_1 * 0x30 + DAT_002c5998 + -0x2c) = 0;
  }
  return;
}

