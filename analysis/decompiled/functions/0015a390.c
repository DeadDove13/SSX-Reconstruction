/* Ghidra pseudocode. PS2 address: 0015a390. Not validated source. */

bool FUN_0015a390(undefined8 param_1,int param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (-1 < param_3) {
    FUN_00158c78(param_1,&DAT_0027c380 + (int)param_3 * 0xf,
                 *(int *)(*(int *)(iVar3 + 0x10) + 0x1c) + (int)param_3 * 4 + 100,
                 *(int *)(iVar3 + 8) + param_2 * 0x68 + 4);
  }
  else {
    pcVar1 = *(char **)(iVar3 + 0x10);
    iVar2 = *(int *)(iVar3 + 8);
    *(undefined4 *)(pcVar1 + 4) = *(undefined4 *)(*(int *)(iVar3 + 4) + *pcVar1 * 4 + 0x740);
    FUN_00158808(param_1,pcVar1,iVar2 + param_2 * 0x68 + 4);
    *(undefined4 *)(*(int *)(iVar3 + 8) + param_2 * 0x68 + 0x60) = *(undefined4 *)(iVar3 + 0x18);
  }
  return -1 >= param_3;
}

