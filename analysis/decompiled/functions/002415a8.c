/* Ghidra pseudocode. PS2 address: 002415a8. Not validated source. */

undefined8 FUN_002415a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  uVar2 = 1;
  if ((long)(ulong)*(byte *)(iVar3 + 5) < param_3) {
    uVar2 = 0;
  }
  else {
    if (*(short *)((int)param_1 + 2) == -1) {
      bVar1 = *(byte *)(iVar3 + 4);
    }
    else {
      uVar2 = FUN_00241510(param_1,param_2,param_3);
      bVar1 = *(byte *)(iVar3 + 4);
    }
    if ((bVar1 & 0xf0) != 0) {
      uVar2 = FUN_002414d8((uint)*(byte *)(iVar3 + 5) * ((bVar1 & 0xf) + 2) + iVar3 + 0xd,param_3);
    }
  }
  return uVar2;
}

