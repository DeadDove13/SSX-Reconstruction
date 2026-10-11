/* Ghidra pseudocode. PS2 address: 001f2550. Not validated source. */

void FUN_001f2550(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_60 [4];
  
  if ((*(int *)((int)param_3 + 0x348) < 0) && (lVar1 = FUN_00209480(param_2,1), lVar1 != 0)) {
    iVar3 = (int)param_3 + 0xc0;
    auStack_60[0] = FUN_001f24d8(param_3);
    lVar1 = FUN_001f8bc0(0x41a00000,param_2,iVar3);
    if (lVar1 != 0) {
      uVar2 = FUN_00258948(param_1);
      FUN_0018db98(0x2bc530,auStack_60[0],uVar2);
      FUN_00209700(param_2,1,iVar3);
      FUN_001f06d8(auStack_60);
      FUN_00209728(param_2,1);
    }
  }
  return;
}

