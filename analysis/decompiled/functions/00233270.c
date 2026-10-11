/* Ghidra pseudocode. PS2 address: 00233270. Not validated source. */

void FUN_00233270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar6 = (undefined2 *)(param_1 + 0x32);
  puVar5 = (undefined2 *)(param_1 + 0x22);
  puVar4 = (undefined2 *)(param_1 + 0x12);
  iVar7 = 6;
  iVar2 = param_2 * 32000 >> 0xf;
  iVar3 = 0x7fff - iVar2;
  iVar1 = iVar3 * 0x10000 >> 0x10;
  *(short *)(param_1 + 0x10) = (short)iVar2 + -0x8000;
  *(short *)(param_1 + 0x20) = (short)iVar3;
  if (iVar1 == 0) {
    trap(7);
  }
  *(short *)(param_1 + 0x30) = (short)(0x3fde00 / iVar1);
  do {
    iVar7 = iVar7 + -1;
    *puVar4 = *(undefined2 *)(param_1 + 0x10);
    puVar4 = puVar4 + 1;
    *puVar5 = *(undefined2 *)(param_1 + 0x20);
    puVar5 = puVar5 + 1;
    *puVar6 = *(undefined2 *)(param_1 + 0x30);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar7);
  return;
}

