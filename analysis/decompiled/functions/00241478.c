/* Ghidra pseudocode. PS2 address: 00241478. Not validated source. */

void FUN_00241478(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = param_2 + 7;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  pbVar2 = (byte *)(param_1 + (uint)*(byte *)(param_1 + 5) * ((*(byte *)(param_1 + 4) & 0xf) + 2) +
                   (iVar1 >> 3) + 0xd);
  *pbVar2 = *pbVar2 & ~(byte)(1 << (param_2 + (iVar1 >> 3) * -8 & 0x1fU));
  return;
}

