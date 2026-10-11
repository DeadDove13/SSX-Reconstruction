/* Ghidra pseudocode. PS2 address: 00130688. Not validated source. */

void FUN_00130688(int param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_001a3760(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((**(int **)(iVar1 + 0x174) == 0) && (lVar2 = FUN_0018e858(0x28abe0), lVar2 == 0)) {
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 5:
      FUN_00131a38(param_1 + 0x4c,param_2);
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    }
  }
  return;
}

