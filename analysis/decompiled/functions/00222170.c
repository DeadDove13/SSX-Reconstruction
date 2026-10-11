/* Ghidra pseudocode. PS2 address: 00222170. Not validated source. */

void FUN_00222170(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_001d6510(DAT_002859d0);
  piVar4 = (int *)param_1;
  if (DAT_002859e8 == 0) {
    FUN_0019c468(0x28acf8);
    FUN_00165520(piVar4[0x2ba]);
    if (piVar4[0x2ba] == 0) {
      piVar4[0x2ba] = 0;
    }
    else {
      FUN_00165420(piVar4[0x2ba],3);
      piVar4[0x2ba] = 0;
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = *piVar4;
  }
  iVar3 = 0x1ff;
  piVar2 = piVar4 + 0x2b6;
  do {
    *piVar2 = -1;
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar3);
  if (iVar1 == 0) {
    iVar1 = piVar4[1];
  }
  else {
    FUN_00103710();
    iVar1 = piVar4[1];
  }
  *piVar4 = 0;
  piVar4[6] = 0;
  piVar4[3] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  if (iVar1 != 0) {
    FUN_00103710();
  }
  piVar4[1] = 0;
  if (piVar4[2] != 0) {
    FUN_00103710();
  }
  piVar4[2] = 0;
  piVar4[4] = 0;
  if (piVar4[5] != 0) {
    FUN_00103710();
  }
  piVar4[5] = 0;
  FUN_00223348(param_1);
  FUN_002227f8(param_1);
  FUN_0021dca8(piVar4 + 0xf);
  return;
}

