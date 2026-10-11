/* Ghidra pseudocode. PS2 address: 001c3160. Not validated source. */

void FUN_001c3160(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x214) != param_2) {
    iVar1 = param_2 * 0x94 + *(int *)(iVar2 + 0x218);
    FUN_001c3630(param_1,*(undefined4 *)(iVar1 + 0x80),*(undefined4 *)(iVar1 + 0x84),
                 *(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),0,
                 *(int *)(iVar1 + 0x90) != 0,0);
    *(int *)(iVar2 + 0x214) = param_2;
    FUN_001c4ef0(param_1);
    return;
  }
  return;
}

