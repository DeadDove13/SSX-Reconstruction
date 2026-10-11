/* Ghidra pseudocode. PS2 address: 00219528. Not validated source. */

void FUN_00219528(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  if (param_1[3] == 0) {
    iVar1 = *param_1;
  }
  else {
    if (param_1[2] != 0) {
      return;
    }
    iVar1 = *param_1;
  }
  if (iVar1 != 0) {
    iVar1 = 0;
    puVar4 = &DAT_00298bbc;
    puVar3 = (undefined4 *)&DAT_00298bb0;
    do {
      if ((puVar3[-3] == 1) && ((int *)puVar3[-6] == param_1)) {
        uVar2 = FUN_00235a70(puVar4,*(undefined4 *)(puVar4 + -0x14));
        puVar3[-3] = 2;
        *puVar3 = (int)uVar2;
        FUN_00235d68(uVar2,0x219408);
        if (param_1[3] != 0) {
          param_1[2] = 1;
          return;
        }
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 0x16;
      puVar4 = puVar4 + 0x58;
    } while (iVar1 < 0x32);
  }
  return;
}

