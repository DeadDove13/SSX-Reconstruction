/* Ghidra pseudocode. PS2 address: 00209cb8. Not validated source. */

void FUN_00209cb8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [4];
  
  FUN_00209d90(param_1,aiStack_30);
  iVar1 = (int)param_1;
  if (aiStack_30[0] == 0) {
    *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + 1;
  }
  else if (aiStack_30[0] == 2) {
    *(undefined4 *)(iVar1 + 0x58) = 0;
  }
  if (*(int *)(iVar1 + 0x58) < 0x79) {
    if (*(float **)(iVar1 + 0xc) != (float *)0x0) {
      iVar2 = (int)((float)(int)*(char *)(iVar1 + 8) * **(float **)(iVar1 + 0xc));
      if (0x7f < iVar2) {
        iVar2 = 0x7f;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      FUN_00227660(*(undefined4 *)(iVar1 + 4),iVar2);
    }
  }
  else {
    FUN_0020a010(param_1);
  }
  return;
}

