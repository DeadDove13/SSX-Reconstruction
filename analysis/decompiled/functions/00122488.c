/* Ghidra pseudocode. PS2 address: 00122488. Not validated source. */

void FUN_00122488(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar3 = (int)param_1;
  if (iVar1 == 1) {
    iVar1 = *(int *)(iVar3 + 0x100);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0xb0),1);
    }
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar3 + 0x100);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x14) == 5) {
          return;
        }
        (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
      }
      *(uint *)(iVar3 + 0xe8) =
           *(uint *)(iVar3 + 0xe8) & 0xffff0100 | (int)*(uint *)(iVar3 + 0xe8) >> 0x10 | 2;
    }
  }
  else {
    if (iVar1 == 2) {
      iVar1 = *(int *)(iVar3 + 0x100);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x14) == 5) {
          return;
        }
        (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
      }
      lVar2 = FUN_002107c8(0x298590,0x2c,0x40000000,0x2a8ab8,0,0);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x2c);
      }
      FUN_001226c0(lVar2,param_1,0);
      return;
    }
    if (iVar1 == 3) {
      iVar1 = *(int *)(iVar3 + 0x100);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x14) == 5) {
          return;
        }
        (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
      }
      lVar2 = FUN_002107c8(0x298590,0x2c,0x40000000,0x2a8ab8,0,0);
      if (lVar2 != 0) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0de,0x2c);
      }
      FUN_001226c0(lVar2,param_1,1);
      return;
    }
  }
  return;
}

