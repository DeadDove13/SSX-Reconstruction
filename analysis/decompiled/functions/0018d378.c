/* Ghidra pseudocode. PS2 address: 0018d378. Not validated source. */

void FUN_0018d378(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = FUN_00207178(DAT_002c56e8);
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14c);
    do {
      iVar2 = DAT_002c56e8;
      iVar1 = *(int *)(DAT_002c56e8 + 0x35f80);
      *piVar4 = iVar5;
      iVar5 = iVar5 + 1;
      piVar4[-1] = iVar2 + iVar1 * 0x20 + 0x35b7c;
      FUN_00207268(iVar2);
      piVar4 = piVar4 + 2;
    } while (iVar5 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  FUN_002071b8(DAT_002c56e8,0);
  *(int *)(param_1 + 0x43c) = iVar3;
  *(char **)(param_1 + 0x438) = "Music Selection";
  *(int *)(param_1 + 0x440) = param_1 + 0x148;
  *(int *)(param_1 + 0x444) = param_1 + 0x144;
  return;
}

