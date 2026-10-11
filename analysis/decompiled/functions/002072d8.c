/* Ghidra pseudocode. PS2 address: 002072d8. Not validated source. */

void FUN_002072d8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_140 [256];
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(iVar3 + 0x35f88);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if ((*(int *)(iVar2 + 0xf8) != 0) &&
       ((*(int *)(iVar2 + 0xf8) != 1 || (*(int *)(iVar1 * 0x1c + *(int *)(iVar3 + 0x351c4)) != 1))))
    {
      iVar2 = FUN_00206420(iVar2);
      FUN_0025b630(auStack_140,0x2c5748,iVar3 + 0x35b5c,
                   *(int *)(iVar3 + 0x35f88) + iVar2 * 0x20 + 0x58);
      FUN_001f3640(param_1,auStack_140,iVar1,iVar3 + 0x35f8c,350000);
    }
  }
  return;
}

