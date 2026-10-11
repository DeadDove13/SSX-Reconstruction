/* Ghidra pseudocode. PS2 address: 00187a38. Not validated source. */

void FUN_00187a38(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x38) != 0) {
    FUN_00193b28();
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar1 = *(int *)(iVar2 + 0x30);
      goto LAB_00187a7c;
    }
    FUN_0018a028(*(int *)(iVar2 + 0x38),3);
  }
  iVar1 = *(int *)(iVar2 + 0x30);
LAB_00187a7c:
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  DAT_0028ac18 = 0;
  FUN_001a04d8(*(undefined4 *)(iVar2 + 0x58));
  if (*(int *)(iVar2 + 0x58) != 0) {
    FUN_001a0410(*(int *)(iVar2 + 0x58),3);
  }
  FUN_001a04d8(*(undefined4 *)(iVar2 + 0x5c));
  if (*(int *)(iVar2 + 0x5c) != 0) {
    FUN_001a0410(*(int *)(iVar2 + 0x5c),3);
  }
  FUN_00168730(0x295e90);
  iVar1 = FUN_00258848(0);
  DAT_00292684 = iVar1 << 0x10;
  thunk_FUN_00104050(*(undefined4 *)(iVar2 + 0xc));
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x14) + 8);
  (**(code **)(iVar1 + 0x74))(*(int *)(iVar2 + 0x14) + (int)*(short *)(iVar1 + 0x70));
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  FUN_00188ed0(param_1);
  FUN_0021b420(*(undefined4 *)(iVar2 + 0x1c));
  FUN_00103778(*(undefined4 *)(iVar2 + 0x1c));
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_0021c648(*(undefined4 *)(iVar2 + 0x20));
  FUN_00103778(*(undefined4 *)(iVar2 + 0x20));
  iVar1 = *(int *)(iVar2 + 0x18);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  iVar1 = *(int *)(iVar2 + 0x2c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  iVar1 = *(int *)(iVar2 + 0x80);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  *(undefined4 *)(iVar2 + 0x80) = 0;
  FUN_001863a0(0x2c4dd8);
  FUN_00210780(0x298590);
  if (*(int *)(iVar2 + 0x28) == 0) {
    iVar1 = *(int *)(iVar2 + 0x7c);
  }
  else {
    FUN_00132020(*(int *)(iVar2 + 0x28),3);
    iVar1 = *(int *)(iVar2 + 0x7c);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  else {
    FUN_00189fd8(iVar1,3);
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  FUN_00222170(0x299cc8);
  if (*(int *)(iVar2 + 0x34) != 0) {
    FUN_001bfdd8(*(int *)(iVar2 + 0x34),3);
  }
  FUN_00210780(0x28ac20);
  DAT_00291648 = 1;
  FUN_00146b60(0x2795b8,1);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

