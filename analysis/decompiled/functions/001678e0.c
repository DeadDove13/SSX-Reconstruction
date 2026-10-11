/* Ghidra pseudocode. PS2 address: 001678e0. Not validated source. */

void FUN_001678e0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00168128();
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x488);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x54))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x50));
    iVar1 = *(int *)(iVar4 + 0x488);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
    }
    *(undefined4 *)(iVar4 + 0x488) = 0;
  }
  FUN_00168430(param_1);
  if (-1 < *(int *)(iVar4 + 0x490)) {
    uVar2 = *(undefined4 *)(iVar4 + 0x46c);
    uVar3 = FUN_0016f2a8(*(undefined4 *)(iVar4 + 0x488),*(int *)(iVar4 + 0x490),uVar2);
    FUN_0016fd90(*(undefined4 *)(iVar4 + 0x488),uVar3,uVar2);
    *(undefined4 *)(iVar4 + 0x490) = 0xffffffff;
  }
  return;
}

