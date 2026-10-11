/* Ghidra pseudocode. PS2 address: 00147828. Not validated source. */

void FUN_00147828(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 8) != 0) {
    uVar3 = 0;
    piVar1 = (int *)(iVar4 + 0xc);
    if ((*(uint *)(*(int *)(iVar4 + 8) + 0xc) >> 0xf & 0xf) != 0) {
      do {
        if (*piVar1 == 0) {
          iVar2 = *(int *)(iVar4 + 8);
        }
        else {
          FUN_00147828();
          iVar2 = *(int *)(iVar4 + 8);
        }
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar3 < (*(uint *)(iVar2 + 0xc) >> 0xf & 0xf));
    }
  }
  FUN_001491c0(0x2795b8,param_1);
  return;
}

