/* Ghidra pseudocode. PS2 address: 00101ea8. Not validated source. */

void FUN_00101ea8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined4 auStack_50 [4];
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 8) != 0) {
    FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),3,0xffffffffffffffff);
  }
  iVar1 = DAT_002859e4;
  *(undefined4 *)(iVar4 + 4) = 3;
  FUN_0015da00(*(undefined4 *)(iVar1 + 0xa0),*(undefined4 *)(*(int *)(iVar4 + 8) * 0x18 + 0x277ad4))
  ;
  lVar3 = FUN_00101818(param_1);
  if (lVar3 != 0) {
    FUN_001f4ae8(DAT_002c56e8,5);
  }
  *(undefined4 *)(param_2 + 0x438) = 1;
  FUN_00146df0(0x2795b8);
  lVar3 = FUN_00101818(param_1);
  if (lVar3 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_2 + 0x8c)) {
      piVar5 = (int *)(param_2 + 200);
      do {
        iVar4 = iVar4 + 1;
        if (-1 < *(char *)(*(int *)(*piVar5 + 0x394) + 0x54)) {
          FUN_00104fa8();
          FUN_001e93f0(auStack_50);
          uVar2 = FUN_001e9718(param_2 + 0x128,*piVar5,1,auStack_50[0]);
          *(undefined4 *)(param_2 + 0x440) = uVar2;
          return;
        }
        piVar5 = piVar5 + 1;
      } while (iVar4 < *(int *)(param_2 + 0x8c));
    }
  }
  return;
}

