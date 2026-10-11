/* Ghidra pseudocode. PS2 address: 00100130. Not validated source. */

void FUN_00100130(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x440) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x43c) = 0xffffffff;
  lVar3 = FUN_0023a448(0x2a6b10,0x41000,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,0x41000);
  }
  *(int *)(param_1 + 0x444) = (int)lVar3;
  iVar1 = *(int *)(param_1 + 8);
  iVar4 = 3;
  puVar2 = (undefined4 *)(param_1 + 0x7c);
  do {
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  (**(code **)(iVar1 + 100))(param_1 + *(short *)(iVar1 + 0x60));
  return;
}

