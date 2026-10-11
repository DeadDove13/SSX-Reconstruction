/* Ghidra pseudocode. PS2 address: 00230790. Not validated source. */

undefined4 FUN_00230790(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < param_2) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x14);
    while( true ) {
      iVar3 = (uVar2 - iVar1) + 1;
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_0022d7d0(param_4,*(int *)(param_1 + 0x10) + iVar1 * 2,iVar3 << 1);
        uVar2 = *(uint *)(param_1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x14);
      }
      param_4 = param_4 + iVar3 * 2;
      param_2 = param_2 - iVar3;
      *(int *)(param_1 + 0x14) = iVar1 + iVar3;
      if (uVar2 < (uint)(iVar1 + iVar3)) {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      }
      if (param_2 < 1) break;
      iVar1 = *(int *)(param_1 + 0x14);
    }
  }
  return 1;
}

