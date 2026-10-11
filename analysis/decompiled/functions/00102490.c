/* Ghidra pseudocode. PS2 address: 00102490. Not validated source. */

void FUN_00102490(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 5;
  puVar2 = (undefined4 *)(param_2 + 0xfc);
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
    *(float *)(param_2 + 0x14) = (float)*(int *)(&DAT_0027e14c + DAT_0027ba84 * 0x18) / 100.0;
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x8c)) {
    puVar2 = (undefined4 *)(param_2 + 200);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_00107a68(uVar1);
      if (*(int *)(param_2 + 0x8c) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}

