/* Ghidra pseudocode. PS2 address: 00196198. Not validated source. */

void FUN_00196198(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  FUN_0019a6a8(param_2);
  uVar2 = FUN_00195550(param_1);
  puVar7 = (undefined4 *)param_2;
  *puVar7 = uVar2;
  piVar6 = (int *)param_1;
  iVar3 = *piVar6;
  puVar7[1] = piVar6[10];
  if (iVar3 != 0) {
    puVar4 = puVar7 + 2;
    do {
      if (*(int *)(iVar3 + 0x30) == 0) {
        uVar2 = *(undefined4 *)(iVar3 + 0x38);
LAB_001961f4:
        *puVar4 = uVar2;
        iVar3 = *(int *)(iVar3 + 0x28);
      }
      else {
        if (iVar3 == piVar6[5]) {
          uVar2 = *(undefined4 *)(iVar3 + 0x38);
          goto LAB_001961f4;
        }
        iVar3 = *(int *)(iVar3 + 0x28);
      }
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0);
  }
  puVar7[0x82] = 0;
  if (0 < piVar6[piVar6[7] + 0xe53]) {
    iVar3 = piVar6[7];
    iVar5 = 0;
    while( true ) {
      iVar1 = puVar7[0x82];
      puVar7[iVar1 + 0x83] = piVar6[iVar3 * 0x10 + iVar5 + 0xf9a];
      puVar7[0x82] = iVar1 + 1;
      if (piVar6[piVar6[7] + 0xe53] <= iVar5 + 1) break;
      iVar3 = piVar6[7];
      iVar5 = iVar5 + 1;
    }
  }
  puVar7[0x93] = piVar6 + piVar6[7] * 0x389 + 0x14;
  return;
}

