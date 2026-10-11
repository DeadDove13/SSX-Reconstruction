/* Ghidra pseudocode. PS2 address: 00102908. Not validated source. */

void FUN_00102908(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 auStack_60 [4];
  
  FUN_001f4ae8(DAT_002c56e8,5);
  iVar4 = 0;
  FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2a6d50);
  if (0 < *(int *)(param_2 + 0x8c)) {
    piVar3 = (int *)(param_2 + 200);
    do {
      FUN_00107c60(*piVar3);
      if (*(char *)(*(int *)(*piVar3 + 0x394) + 0x54) < '\0') {
        iVar2 = *(int *)(param_2 + 0x8c);
      }
      else {
        FUN_00104fa8();
        FUN_001e9428(auStack_60);
        uVar1 = FUN_001e9718(param_2 + 0x128,*piVar3,1,auStack_60[0]);
        *(undefined4 *)(param_2 + 0x440) = uVar1;
        iVar2 = *(int *)(param_2 + 0x8c);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar2);
  }
  *(undefined4 *)(param_2 + 0x438) = 1;
  FUN_00146df0(0x2795b8);
  return;
}

