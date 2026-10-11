/* Ghidra pseudocode. PS2 address: 00159328. Not validated source. */

int FUN_00159328(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_001592e0(param_2,auStack_30);
  piVar2 = (int *)(iVar1 + 0xc);
  iVar1 = 0;
  do {
    if (*piVar2 <= param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 3);
  return 3;
}

