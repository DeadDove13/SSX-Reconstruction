/* Ghidra pseudocode. PS2 address: 00233790. Not validated source. */

void FUN_00233790(int param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(code **)(param_1 + 4) = FUN_00233300;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (param_3 == 1) {
    uVar1 = 4;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  else {
    uVar1 = 2;
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  *(undefined1 *)(param_1 + 0x26) = uVar1;
  lVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x26)) {
    do {
      iVar2 = (int)lVar3;
      lVar3 = (long)(iVar2 + 1);
      *(undefined2 *)(param_1 + 0x28 + iVar2 * 2) = 0;
    } while (lVar3 < *(char *)(param_1 + 0x26));
  }
  return;
}

