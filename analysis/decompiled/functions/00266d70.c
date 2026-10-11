/* Ghidra pseudocode. PS2 address: 00266d70. Not validated source. */

void FUN_00266d70(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0x8000000a) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x1c) + 0x1c);
    if (pcVar2 == (code *)0x0) {
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
    }
    else {
      (*pcVar2)(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
    }
  }
  else if (uVar1 < 0x8000000b) {
    if (uVar1 == 0x80000009) {
      iVar3 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0x2c);
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
    }
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x1c);
  }
  if (-1 < (int)puVar4[2]) {
    iSignalSema();
  }
  FUN_00266ce0(*puVar4);
  *puVar4 = 0;
  return;
}

