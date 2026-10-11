/* Ghidra pseudocode. PS2 address: 002271a0. Not validated source. */

undefined4 FUN_002271a0(int *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = 0;
  if ((int)((uint)*(byte *)((int)param_1 + 0x17) << 0x18) <
      (int)((uint)*(byte *)((int)param_1 + 0x15) << 0x18)) {
    iVar5 = *param_1 + *(char *)((int)param_1 + 0x17) * 0x2c;
    uVar1 = 0;
    if (((*(int *)(iVar5 + 0x10) != 0) &&
        (uVar1 = 1, -1 < (int)((uint)*(ushort *)(iVar5 + 0x28) << 0x10))) &&
       (uVar1 = 0, *(short *)(iVar5 + 0x28) != 0)) {
      uVar2 = FUN_0023db48(param_1[1]);
      iVar4 = 4000000;
      if (*(int *)(iVar5 + 0x10) == 0) {
        trap(7);
      }
      if (uVar2 < 0x3d0901) {
        iVar4 = (int)uVar2;
      }
      if (((uint)((iVar4 * 1000) / *(int *)(iVar5 + 0x10)) < (uint)(int)*(short *)(iVar5 + 0x28)) &&
         (lVar3 = FUN_0023db90(param_1[1]), lVar3 != 2)) {
        return 1;
      }
      *(undefined2 *)(iVar5 + 0x28) = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}

