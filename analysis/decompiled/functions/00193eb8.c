/* Ghidra pseudocode. PS2 address: 00193eb8. Not validated source. */

void FUN_00193eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iStack_50;
  undefined4 uStack_4c;
  
  iStack_50 = 0;
  uStack_4c = 0;
  for (lVar2 = FUN_001867d0(0x2c4dd8,param_3); lVar2 != 0;
      lVar2 = FUN_00186830(0x2c4dd8,lVar2,param_3)) {
    iStack_50 = iStack_50 + 1;
  }
  FUN_001973f0(param_2,&iStack_50,8);
  if ((0 < iStack_50) && (lVar2 = FUN_001867d0(0x2c4dd8,param_3), lVar2 != 0)) {
    iVar1 = *(int *)((int)lVar2 + 8);
    while( true ) {
      (**(code **)(iVar1 + 0x44))((int)lVar2 + (int)*(short *)(iVar1 + 0x40),param_2);
      lVar2 = FUN_00186830(0x2c4dd8,lVar2,param_3);
      if (lVar2 == 0) break;
      iVar1 = *(int *)((int)lVar2 + 8);
    }
  }
  return;
}

