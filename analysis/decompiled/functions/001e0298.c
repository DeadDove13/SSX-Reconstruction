/* Ghidra pseudocode. PS2 address: 001e0298. Not validated source. */

void FUN_001e0298(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_001be110(0x295e90,param_1 + 0x150,param_1 + 0x160);
  uVar1 = DAT_002c36f4;
  if (lVar2 == 1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (7 < iVar3) {
    iVar3 = 7;
  }
  if (iVar3 == 0) {
    iVar3 = 5;
  }
  else if (iVar3 == 5) {
    iVar3 = 0;
  }
  else if (iVar3 == 1) {
    iVar3 = 3;
  }
  else if (iVar3 == 3) {
    iVar3 = 1;
  }
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(uVar1,0x295e90,0,0);
  FUN_0011ed48(0x295e90,iVar3);
  FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + *(int *)(param_1 + 4) * 4),1
              );
  FUN_0011ed88(0x295e90,param_1 + 0x10);
  FUN_0011ed28(uVar1,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  return;
}

