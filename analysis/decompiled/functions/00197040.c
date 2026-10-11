/* Ghidra pseudocode. PS2 address: 00197040. Not validated source. */

undefined4 FUN_00197040(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_0023bac0(auStack_60,*param_2,0x10);
  *param_2 = *param_2 + 0x10;
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = uStack_5c;
  if (0 < iStack_58) {
    do {
      iVar1 = FUN_00196ce0(param_1);
      FUN_0023bac0(iVar1 + 4,*param_2,1000);
      *param_2 = *param_2 + 1000;
      if (iVar2 == iStack_54) {
        *(int *)((int)param_1 + 8) = iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_58);
  }
  return 1;
}

