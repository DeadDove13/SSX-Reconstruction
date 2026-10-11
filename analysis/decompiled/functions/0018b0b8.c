/* Ghidra pseudocode. PS2 address: 0018b0b8. Not validated source. */

uint FUN_0018b0b8(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  cVar2 = *param_1;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    uVar3 = uVar3 * 0x10 + (int)cVar2;
    uVar4 = uVar3 & 0xf0000000;
    param_1 = param_1 + 1;
    if (uVar4 != 0) {
      uVar3 = uVar3 ^ uVar4 >> 0x18 ^ uVar4;
    }
    cVar2 = *param_1;
    cVar1 = *param_1;
  }
  return uVar3;
}

