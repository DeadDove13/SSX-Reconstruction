/* Ghidra pseudocode. PS2 address: 00168600. Not validated source. */

void FUN_00168600(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x488);
  uVar3 = *(undefined4 *)(param_1 + 0x46c);
  iVar4 = *(int *)(iVar2 + 4);
  sVar1 = *(short *)(iVar4 + 0x98);
  uVar7 = FUN_0016f348(iVar2,uVar3);
  uVar6 = (**(code **)(iVar4 + 0x9c))(iVar2 + sVar1,uVar7,uVar3);
  iVar2 = *(int *)(param_1 + 0x488);
  iVar4 = DAT_002c48ac * 0xc;
  iVar5 = DAT_002c48ac * 3;
  *(undefined4 *)(&DAT_00280e54 + iVar4) = uVar6;
  DAT_002c48ac = DAT_002c48ac + 1;
  (&DAT_00280e50)[iVar5] = *(undefined4 *)(iVar2 + 0xb38);
  *(undefined4 *)(iVar4 + 0x280e58) = uVar3;
  *(undefined4 *)(param_1 + 0x490) = 0xffffffff;
  return;
}

