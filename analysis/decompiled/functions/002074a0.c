/* Ghidra pseudocode. PS2 address: 002074a0. Not validated source. */

void FUN_002074a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)((int)param_1 + 0x35f88) != 0) {
    fVar3 = (float)FUN_00206610(param_2);
    fVar4 = (float)FUN_00206690(param_2);
    iVar1 = FUN_002066f0(param_2);
    uVar2 = FUN_00206478(param_2);
    FUN_00205720(param_1,(int)fVar4,DAT_002c5768,*(undefined4 *)((int)param_1 + 0x35f88),uVar2,
                 iVar1 + 1,(int)fVar3,0);
    return;
  }
  return;
}

