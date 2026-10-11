/* Ghidra pseudocode. PS2 address: 0016c598. Not validated source. */

undefined4 FUN_0016c598(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x544);
  iVar3 = 2;
  *(undefined4 *)(param_1 + 0x544) = param_2;
  puVar2 = (undefined4 *)(param_1 + 0x538);
  do {
    puVar2[-6] = 0;
    iVar3 = iVar3 + -1;
    puVar2[-3] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  return uVar1;
}

