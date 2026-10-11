/* Ghidra pseudocode. PS2 address: 002356e0. Not validated source. */

void FUN_002356e0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_0023ee58(DAT_002c5be4);
  puVar4 = (undefined4 *)param_1;
  puVar4[7] = 0;
  iVar1 = puVar4[4];
  pcVar2 = (code *)puVar4[6];
  iVar3 = puVar4[3];
  FUN_0023ea60(DAT_002c5be4);
  if (iVar1 == 0) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*puVar4);
    }
  }
  else if (iVar3 == 0) {
    FUN_00235688(param_1);
    return;
  }
  return;
}

