/* Ghidra pseudocode. PS2 address: 00235d68. Not validated source. */

void FUN_00235d68(uint param_1,code *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (((int)param_1 < 0x100) || (DAT_002c5bd0 <= (int)(param_1 & 0xff))) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(DAT_002c5998 + (param_1 & 0xff) * 0x30);
    puVar3 = (uint *)0x0;
    if (*puVar2 == param_1) {
      puVar3 = puVar2;
    }
  }
  if ((puVar3 != (uint *)0x0) && (puVar3[6] == 0)) {
    FUN_0023ee58(DAT_002c5be4);
    uVar1 = puVar3[7];
    puVar3[6] = (uint)param_2;
    FUN_0023ea60(DAT_002c5be4);
    if (uVar1 == 0) {
      (*param_2)(param_1);
    }
  }
  return;
}

