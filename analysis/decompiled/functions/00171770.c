/* Ghidra pseudocode. PS2 address: 00171770. Not validated source. */

undefined4 FUN_00171770(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_2) {
  case 0x179:
    uVar1 = 2;
    break;
  case 0x17a:
    uVar1 = 1;
    break;
  case 0x17b:
    uVar1 = 6;
    break;
  case 0x17c:
    uVar1 = 0;
    break;
  case 0x17d:
    uVar1 = 5;
    break;
  case 0x17e:
    uVar1 = 7;
    break;
  case 0x17f:
    uVar1 = 4;
    break;
  case 0x180:
    uVar1 = 3;
  }
  return uVar1;
}

