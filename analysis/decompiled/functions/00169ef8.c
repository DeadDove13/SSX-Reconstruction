/* Ghidra pseudocode. PS2 address: 00169ef8. Not validated source. */

void FUN_00169ef8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)DAT_002859d4;
  FUN_00169c98();
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x10) != 0) {
    puVar1 = *(undefined4 **)(iVar2 + 0x10);
    do {
      FUN_001690f8(DAT_002c27ac,*puVar1);
      *(float *)(**(int **)(iVar2 + 0x10) + 0xb4) = fVar3;
      FUN_00169cb8(param_1);
      puVar1 = *(undefined4 **)(iVar2 + 0x10);
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}

