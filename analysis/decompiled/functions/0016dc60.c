/* Ghidra pseudocode. PS2 address: 0016dc60. Not validated source. */

undefined8 FUN_0016dc60(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  iVar3 = (int)param_1;
  iVar5 = iVar3 + 0x550;
  piVar4 = (int *)(iVar3 + 0x7d4);
  FUN_00167fd8(*(undefined4 *)(iVar3 + 0xb3c));
  FUN_00167f88(*(undefined4 *)(iVar3 + 0xb3c));
  do {
    iVar1 = *piVar4;
    iVar6 = iVar6 + -1;
    piVar4 = piVar4 + 0xb8;
    (**(code **)(iVar1 + 0x14))(iVar5 + *(short *)(iVar1 + 0x10));
    iVar5 = iVar5 + 0x2e0;
  } while (-1 < iVar6);
  uVar2 = FUN_001703b8(param_1,*(undefined4 *)(*(int *)(iVar3 + 0xb3c) + 0x46c));
  if (*(int *)(iVar3 + 0xb10) == 0) {
    piVar4 = (int *)(iVar3 + 0x7d4);
    iVar5 = 1;
    iVar3 = iVar3 + 0x550;
    do {
      iVar6 = *piVar4;
      piVar4 = piVar4 + 0xb8;
      iVar5 = iVar5 + -1;
      (**(code **)(iVar6 + 0x34))(iVar3 + *(short *)(iVar6 + 0x30),uVar2);
      iVar3 = iVar3 + 0x2e0;
    } while (-1 < iVar5);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar3 + 4) + 0x94))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x90),uVar2);
  }
  return uVar2;
}

