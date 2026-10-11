/* Ghidra pseudocode. PS2 address: 0025c3f8. Not validated source. */

void FUN_0025c3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_002a6614;
  iVar4 = (int)param_1;
  puVar3 = *(undefined **)(iVar4 + 0x54);
  if (*(undefined **)(iVar4 + 0x54) == (undefined *)0x0) {
    *(undefined **)(iVar4 + 0x54) = PTR_DAT_002a6614;
    puVar3 = puVar2;
  }
  if (*(int *)(puVar3 + 0x38) == 0) {
    FUN_00260098(puVar3);
    uVar1 = *(undefined4 *)(iVar4 + 0x54);
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x54);
  }
  FUN_0025c470(uVar1,param_1,param_2,param_3);
  return;
}

