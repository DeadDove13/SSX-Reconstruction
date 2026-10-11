/* Ghidra pseudocode. PS2 address: 002093a0. Not validated source. */

void FUN_002093a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00242d40(0x5622,0x10,1);
  uVar2 = (**(code **)(*(int *)(DAT_002c5bcc + 0x32000) + 0x1c))
                    (DAT_002c5bcc + *(short *)(*(int *)(DAT_002c5bcc + 0x32000) + 0x18));
  FUN_0018db98(0x2bd2c0,uVar2);
  FUN_00242e70(0x2088f8,uVar2,uVar1);
  FUN_00242e28(0x3c);
  return;
}

