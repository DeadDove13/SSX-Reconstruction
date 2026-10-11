/* Ghidra pseudocode. PS2 address: 0016a368. Not validated source. */

undefined4 FUN_0016a368(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar4 = 0xf;
  piVar3 = (int *)(param_1 + 0x290);
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) &&
       (lVar2 = (**(code **)(*(int *)(iVar1 + 0x284) + 0x34))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 0x284) + 0x30),param_2), lVar2 != 0))
    {
      uVar5 = 1;
    }
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar4);
  return uVar5;
}

