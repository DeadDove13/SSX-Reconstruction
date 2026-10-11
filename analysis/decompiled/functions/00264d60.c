/* Ghidra pseudocode. PS2 address: 00264d60. Not validated source. */

void FUN_00264d60(uint param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char acStack_20 [16];
  
  pcVar3 = acStack_20;
  uVar4 = 7;
  do {
    uVar2 = param_1 >> ((uVar4 & 7) << 2) & 0xf;
    cVar1 = (char)uVar2;
    if (uVar2 < 10) {
      cVar1 = cVar1 + '0';
    }
    else {
      cVar1 = cVar1 + 'W';
    }
    *pcVar3 = cVar1;
    uVar4 = uVar4 - 1;
    pcVar3 = pcVar3 + 1;
  } while (-1 < (int)uVar4);
  *pcVar3 = '\0';
  _print(acStack_20);
  return;
}

