/* Ghidra pseudocode. PS2 address: 001cf8b8. Not validated source. */

void FUN_001cf8b8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  lVar1 = FUN_0023a448(0x2b7500,0x2af80,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x2af80);
  }
  *(int *)(iVar2 + 0x28) = (int)lVar1;
  *(undefined4 *)(iVar2 + 0x88) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x8c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  FUN_0018ac08(0x2b7510);
  *(undefined4 *)(iVar2 + 100) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x60) = 0xffffffff;
  *(undefined8 *)(iVar2 + 0x68) = 0;
  *(undefined8 *)(iVar2 + 0x70) = 0;
  *(undefined8 *)(iVar2 + 0x78) = 0;
  FUN_001cf988(param_1);
  return;
}

