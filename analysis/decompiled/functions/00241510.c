/* Ghidra pseudocode. PS2 address: 00241510. Not validated source. */

undefined8 FUN_00241510(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((long)*(short *)(param_1 + 2) < (long)(ulong)*(ushort *)(param_2 + 10)) {
    iVar3 = 0;
    bVar1 = *(byte *)(param_2 + 5);
    if ((*(byte *)(param_2 + 4) & 0xf0) != 0) {
      iVar3 = ((int)(bVar1 + 7) >> 3) + 1;
    }
    iVar3 = param_2 + (uint)bVar1 * ((*(byte *)(param_2 + 4) & 0xf) + 2) + 0xc + iVar3;
    if (*(byte *)(param_2 + 6) != 0) {
      iVar3 = iVar3 + *(byte *)(param_2 + 6) + 1;
    }
    uVar2 = FUN_002414d8(iVar3,(uint)bVar1 * (int)*(short *)(param_1 + 2) + param_3);
  }
  return uVar2;
}

