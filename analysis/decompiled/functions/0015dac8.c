/* Ghidra pseudocode. PS2 address: 0015dac8. Not validated source. */

void FUN_0015dac8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x28) == 1) &&
     ((lVar1 = FUN_0025baa0(iVar2 + 0x18,0x2af910), lVar1 != 0 || (*(int *)(iVar2 + 0x418) != 4))))
  {
    FUN_0015f258(param_1);
  }
  FUN_0015ea60(param_1);
  FUN_0015d890(param_1);
  *(undefined4 *)(iVar2 + 0x410) = 0;
  *(undefined4 *)(iVar2 + 0xf94) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  return;
}

