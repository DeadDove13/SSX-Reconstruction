/* Ghidra pseudocode. PS2 address: 00154518. Not validated source. */

void FUN_00154518(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x14f0) - 4U < 2) {
    uVar1 = FUN_00159938(iVar2 + 0x1648);
    *(undefined4 *)(iVar2 + 0x1670) = uVar1;
  }
  else {
    if (*(int *)(iVar2 + 0x14f0) == 6) {
      *(undefined4 *)(iVar2 + 0x14f0) = 4;
    }
    *(undefined4 *)(iVar2 + 0x1670) = 2;
  }
  FUN_00156fe0(param_1);
  return;
}

