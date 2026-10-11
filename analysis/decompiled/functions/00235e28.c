/* Ghidra pseudocode. PS2 address: 00235e28. Not validated source. */

uint FUN_00235e28(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_0023ee58(DAT_002c5be4);
  if (((int)param_1 < 0x100) || (DAT_002c5bd0 <= (int)(param_1 & 0xff))) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)(DAT_002c5998 + (param_1 & 0xff) * 0x30);
    if (*puVar1 != param_1) {
      puVar1 = (uint *)0x0;
    }
  }
  uVar2 = 0xffffffff;
  if (puVar1 != (uint *)0x0) {
    uVar2 = (uint)(puVar1[7] == 0);
  }
  FUN_0023ea60(DAT_002c5be4);
  return uVar2;
}

