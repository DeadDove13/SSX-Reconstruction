/* Ghidra pseudocode. PS2 address: 0018cc40. Not validated source. */

undefined4 FUN_0018cc40(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_2 == 2) {
    iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 8);
    (**(code **)(iVar1 + 0xa4))
              (*(int *)(DAT_002859e4 + 0x14) + (int)*(short *)(iVar1 + 0xa0),
               *(int *)(param_1 + 0x11c) + -1);
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

