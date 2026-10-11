/* Ghidra pseudocode. PS2 address: 001469b8. Not validated source. */

undefined8 FUN_001469b8(int param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  uVar1 = FUN_00146418(param_1 + 0x220);
  FUN_00146718(param_1 + param_2 * 0x10,param_3,uVar1);
  piVar6 = (int *)uVar1;
  iVar3 = (int)param_3;
  *piVar6 = iVar3;
  piVar6[1] = param_2;
  uVar7 = *(uint *)(piVar6[2] + 0xc) >> 0xf & 0xf;
  iVar4 = 0;
  if (uVar7 != 0) {
    do {
      iVar3 = iVar3 + 1;
      uVar2 = FUN_00146418(param_1 + 0x220);
      FUN_00146718(param_1 + param_2 * 0x10,iVar3,uVar2);
      *(int *)uVar2 = iVar3;
      ((int *)uVar2)[1] = param_2;
      iVar5 = iVar4 + 1;
      FUN_00147658(uVar1,iVar4,uVar2);
      iVar4 = iVar5;
    } while (iVar5 < (int)uVar7);
  }
  return uVar1;
}

