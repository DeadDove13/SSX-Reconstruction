/* Ghidra pseudocode. PS2 address: 00139568. Not validated source. */

void FUN_00139568(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(float *)(*param_1 + 0x198) == 0.0) {
    FUN_00112008(DAT_002c1d40);
    FUN_0010b340(*param_1,1);
    FUN_00111500(*param_1);
    uVar1 = *param_2;
  }
  else {
    FUN_001110f0();
    uVar1 = *param_2;
  }
  uVar3 = DAT_002c1d44;
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*param_1 + 0x210) != 0) {
      return;
    }
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  *(uint *)(iVar2 + 0x284) = (uVar1 ^ 1) & 1;
  FUN_00107070(uVar3);
  return;
}

