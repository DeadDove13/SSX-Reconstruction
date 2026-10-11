/* Ghidra pseudocode. PS2 address: 001cb560. Not validated source. */

void FUN_001cb560(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  *(int *)(param_1 + 0x1474) = param_2;
  uVar1 = *(ushort *)(param_1 + 0x1e2);
  uVar2 = *(ushort *)(param_1 + 0x1e4);
  *(uint *)(param_1 + param_2 * 0x10 + *(int *)(param_1 + 0x1468) * 0x20 + 0x1478) =
       (uint)*(ushort *)(param_1 + 0x1e0);
  uVar3 = *(ushort *)(param_1 + 0x1e6);
  *(uint *)(param_1 + *(int *)(param_1 + 0x1474) * 0x10 + *(int *)(param_1 + 0x1468) * 0x20 + 0x147c
           ) = (uint)uVar1;
  *(uint *)(param_1 + *(int *)(param_1 + 0x1474) * 0x10 + *(int *)(param_1 + 0x1468) * 0x20 + 0x1480
           ) = (uint)uVar2;
  *(uint *)(param_1 + *(int *)(param_1 + 0x1474) * 0x10 + *(int *)(param_1 + 0x1468) * 0x20 + 0x1484
           ) = (uint)uVar3;
  return;
}

