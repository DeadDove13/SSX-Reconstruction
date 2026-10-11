/* Ghidra pseudocode. PS2 address: 001c5860. Not validated source. */

void FUN_001c5860(float param_1,float param_2,float param_3,float param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar2 = *(int *)(param_5 + 0x240) + -1;
  if (iVar3 < 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    uVar1 = (undefined2)iVar3;
  }
  *(undefined2 *)(param_5 + 0x1e0) = uVar1;
  iVar3 = (int)param_2;
  iVar2 = *(int *)(param_5 + 0x244) + -1;
  if (iVar3 < 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    uVar1 = (undefined2)iVar3;
  }
  *(undefined2 *)(param_5 + 0x1e2) = uVar1;
  iVar3 = (int)param_3;
  iVar2 = *(int *)(param_5 + 0x240) - (uint)*(ushort *)(param_5 + 0x1e0);
  if (iVar3 < 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    uVar1 = (undefined2)iVar3;
  }
  *(undefined2 *)(param_5 + 0x1e4) = uVar1;
  iVar3 = (int)param_4;
  iVar2 = *(int *)(param_5 + 0x244) - (uint)*(ushort *)(param_5 + 0x1e2);
  if (iVar3 < 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    uVar1 = (undefined2)iVar3;
  }
  *(undefined2 *)(param_5 + 0x1e6) = uVar1;
  FUN_001d3748(*(undefined4 *)(param_5 + 8),param_5 + 0x1e0);
  return;
}

