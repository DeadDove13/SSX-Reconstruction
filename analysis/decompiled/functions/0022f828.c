/* Ghidra pseudocode. PS2 address: 0022f828. Not validated source. */

void FUN_0022f828(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  
  FUN_0025a60c(auStack_40,0,0x10);
  puVar3 = (undefined1 *)(DAT_002a1c9c + (int)param_1 * 0x54);
  FUN_0022f8c8(0,param_1,auStack_40);
  FUN_0022ed70(puVar3,0x100);
  do {
    piVar2 = *(int **)(puVar3 + 0x34);
    if ((code *)piVar2[2] != (code *)0x0) {
      (*(code *)piVar2[2])(piVar2);
      piVar2 = *(int **)(puVar3 + 0x34);
    }
    iVar1 = *piVar2;
    FUN_002253d0(piVar2);
    *(int *)(puVar3 + 0x34) = iVar1;
  } while (iVar1 != 0);
  *puVar3 = 0;
  return;
}

