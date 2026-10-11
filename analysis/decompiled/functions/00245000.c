/* Ghidra pseudocode. PS2 address: 00245000. Not validated source. */

undefined4 FUN_00245000(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 in_vc13;
  
  uVar2 = _cfc2(in_vc13);
  if ((uVar2 & 0x200) == 0) {
    if ((uVar2 & 0x400) == 0) {
      if ((uVar2 & 0x800) == 0) {
        uVar1 = 4;
        if ((uVar2 & 0x100) == 0) {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

