/* Ghidra pseudocode. PS2 address: 001d5be8. Not validated source. */

uint FUN_001d5be8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0xd080);
  iVar4 = *piVar1;
  if (iVar4 == 1) {
    iVar6 = 0;
  }
  else if (iVar4 < 2) {
    iVar6 = 0;
    if (iVar4 == 0) {
      iVar6 = 0x3ff;
    }
  }
  else {
    iVar6 = 0;
    if (iVar4 == 2) {
      iVar6 = piVar1[1];
    }
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 0xd080) + 0xc)) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 5;
    break;
  case 2:
    iVar4 = 6;
    break;
  case 3:
    iVar4 = 7;
    break;
  case 4:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 3;
    break;
  case 6:
  case 7:
  case 10:
    iVar4 = 1;
    break;
  case 8:
  case 9:
    iVar4 = 2;
    break;
  default:
    iVar4 = 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0xd080) + 0x44);
  uVar5 = 0;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  iVar3 = 0;
  if (-1 < **(int **)(param_1 + 0xd078)) {
    iVar3 = **(int **)(param_1 + 0xd078);
  }
  return (0x13 - piVar1[2]) * 0x8000000 | uVar5 | iVar4 << 0xe | iVar6 << 0x11 | iVar3 << 3;
}

