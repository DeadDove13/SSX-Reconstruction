/* Ghidra pseudocode. PS2 address: 00194bf0. Not validated source. */

void FUN_00194bf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iStack_40;
  undefined4 uStack_3c;
  
  iStack_40 = 0;
  uStack_3c = 0;
  for (lVar2 = FUN_001867d0(0x2c4dd8,0xd); lVar2 != 0; lVar2 = FUN_00186830(0x2c4dd8,lVar2,0xd)) {
    iStack_40 = iStack_40 + 1;
  }
  FUN_001973f0(param_2,&iStack_40,8);
  if ((0 < iStack_40) && (lVar2 = FUN_001867d0(0x2c4dd8,0xd), lVar2 != 0)) {
    iVar1 = *(int *)((int)lVar2 + 8);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 0x5c))((int)lVar2 + (int)*(short *)(iVar1 + 0x58));
      FUN_001973f0(param_2,iVar1 + 0xc0,4);
      lVar2 = FUN_00186830(0x2c4dd8,lVar2,0xd);
      if (lVar2 == 0) break;
      iVar1 = *(int *)((int)lVar2 + 8);
    }
  }
  return;
}

