/* Ghidra pseudocode. PS2 address: 001f27c0. Not validated source. */

void FUN_001f27c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 auStack_40 [4];
  
  if ((*(int *)((int)param_2 + 0x348) < 0) && (lVar1 = FUN_00209480(param_1,1), lVar1 != 0)) {
    auStack_40[0] = FUN_001f24d8(param_2);
    iVar2 = (int)param_2 + 0xc0;
    lVar1 = FUN_001f8bc0(0x41000000,param_1,iVar2);
    if (lVar1 != 0) {
      FUN_00209700(param_1,1,iVar2);
      FUN_001f0818(auStack_40);
      FUN_00209728(param_1,1);
    }
  }
  return;
}

