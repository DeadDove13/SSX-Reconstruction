/* Ghidra pseudocode. PS2 address: 00242880. Not validated source. */

undefined4 FUN_00242880(int param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar2 = 0;
  uVar6 = (uint)(*(byte *)(param_1 + 3) >> 2);
  uVar5 = 0;
  if (uVar6 != 0) {
    iVar4 = param_1 + (uint)*(byte *)(param_1 + 4) * 4;
    if (((ulong)*(byte *)(iVar4 + 2) & 0xf) != param_2) {
      bVar1 = *(byte *)(iVar4 + 4);
      do {
        if (((ulong)bVar1 & 0xf) == param_2) {
LAB_002428f4:
          uVar5 = 1;
        }
        else {
          for (iVar3 = 1; iVar3 < 4; iVar3 = iVar3 + 1) {
            if (((ulong)*(byte *)(iVar4 + iVar3 + 4) & 0xf) == param_2) goto LAB_002428f4;
          }
        }
        iVar2 = iVar2 + 1;
        if ((int)uVar6 <= iVar2) {
          return uVar5;
        }
        iVar4 = param_1 + (uint)*(byte *)(param_1 + iVar2 + 4) * 4;
        if (((ulong)*(byte *)(iVar4 + 2) & 0xf) == param_2) {
          return 1;
        }
        bVar1 = *(byte *)(iVar4 + 4);
      } while( true );
    }
    uVar5 = 1;
  }
  return uVar5;
}

