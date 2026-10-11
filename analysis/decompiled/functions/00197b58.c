/* Ghidra pseudocode. PS2 address: 00197b58. Not validated source. */

undefined4 FUN_00197b58(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_0023bac0(auStack_50,param_3,0x10);
  iVar3 = 0;
  piVar2 = (int *)param_1;
  if (0 < iStack_48) {
    do {
      iVar1 = FUN_00197320(param_1);
      if ((int *)piVar2[1] == (int *)0x0) {
        piVar2[1] = iVar1;
        *piVar2 = iVar1;
      }
      else {
        *(int *)piVar2[1] = iVar1;
        piVar2[1] = iVar1;
      }
      iVar3 = iVar3 + 1;
      FUN_0023bac0(iVar1 + 4,*param_2,0x3fc);
      *param_2 = *param_2 + 0x3fc;
    } while (iVar3 < iStack_48);
  }
  piVar2[5] = iStack_4c;
  piVar2[3] = piVar2[1] + iStack_44 + 4;
  FUN_00197388(param_1);
  return 1;
}

