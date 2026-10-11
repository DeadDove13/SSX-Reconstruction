/* Ghidra pseudocode. PS2 address: 0012b520. Not validated source. */

void FUN_0012b520(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x34) + -1;
  if ((*(int *)(iVar4 + 0x34) < 1) || (*(int *)(iVar4 + 0x34) = iVar1, iVar1 != 0)) {
    if (0 < *(int *)(iVar4 + 0x38)) {
      *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + -1;
    }
    if (*(float *)(iVar4 + 0x3c) <= 0.0) {
      lVar2 = FUN_00222970(0x299cc8,*(undefined4 *)(iVar4 + 0x28),4);
      if (lVar2 == -1) {
        FUN_001223f0(param_1);
      }
      else {
        lVar3 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c40e8,0,0);
        if (lVar3 != 0) {
          FUN_0023bbd0(lVar3,0xffffffffdeadc0de,0xf0);
        }
        FUN_00122ca8(lVar3,3,lVar2,*(undefined4 *)(iVar4 + 0x28),0,0,0);
      }
    }
  }
  else {
    (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4 + *(short *)(*(int *)(iVar4 + 8) + 0xb0),1);
  }
  return;
}

