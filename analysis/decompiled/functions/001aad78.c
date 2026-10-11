/* Ghidra pseudocode. PS2 address: 001aad78. Not validated source. */

undefined4 FUN_001aad78(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = FUN_001a94b0();
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0xdc) == 0) {
    iVar1 = *(int *)(iVar4 + 0xd8);
  }
  else {
    if ((uVar3 & 0x40) != 0) {
      FUN_001a94a0(param_1);
      *(undefined4 *)(iVar4 + 0xcc) = 0;
      return 3;
    }
    iVar1 = *(int *)(iVar4 + 0xd8);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + 0xd4);
  }
  else {
    if ((uVar3 & 0x120) != 0) {
      FUN_001a94a0(param_1);
      *(undefined4 *)(iVar4 + 0xcc) = 0;
      return 2;
    }
    iVar1 = *(int *)(iVar4 + 0xd4);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((uVar3 & 0x800) != 0) {
      FUN_001a94a8(param_1);
      *(undefined4 *)(iVar4 + 0xcc) = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

