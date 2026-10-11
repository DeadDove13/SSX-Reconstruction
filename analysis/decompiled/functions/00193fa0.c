/* Ghidra pseudocode. PS2 address: 00193fa0. Not validated source. */

void FUN_00193fa0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00186a08(0x2c4dd8,3);
  FUN_00186a08(0x2c4dd8,0xd);
  FUN_00186a08(0x2c4dd8,4);
  thunk_FUN_00197388(param_2);
  FUN_00210ac8(param_2);
  iVar3 = 0;
  do {
    iVar4 = iVar4 + 1;
    lVar2 = FUN_001867d0(0x2c4dd8,*(undefined4 *)(&DAT_002b51f0 + iVar3));
    if (lVar2 != 0) {
      iVar1 = *(int *)((int)lVar2 + 8);
      while( true ) {
        (**(code **)(iVar1 + 0x4c))((int)lVar2 + (int)*(short *)(iVar1 + 0x48),param_2);
        lVar2 = FUN_00186830(0x2c4dd8,lVar2,*(undefined4 *)(&DAT_002b51f0 + iVar3));
        if (lVar2 == 0) break;
        iVar1 = *(int *)((int)lVar2 + 8);
      }
    }
    iVar3 = iVar4 * 4;
  } while (iVar4 < 4);
  FUN_001940d0(param_1,param_2,3);
  FUN_001940d0(param_1,param_2,4);
  FUN_00194cd8(param_1,param_2);
  return;
}

