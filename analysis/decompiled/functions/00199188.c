/* Ghidra pseudocode. PS2 address: 00199188. Not validated source. */

void FUN_00199188(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  puVar1 = *(undefined4 **)(param_1 + 0x5d9c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = *puVar1;
    *(undefined4 *)(param_1 + 0x5d78) = 0x3fc;
    *(undefined4 **)(param_1 + 0x5d74) = puVar1 + 1;
    *(undefined4 *)(param_1 + 0x5d9c) = uVar3;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x5d98);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x5d74) = 0;
    *(undefined4 *)(param_1 + 0x5d78) = 0;
    *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x5d70);
    *puVar2 = 0x11111113;
    uVar3 = puVar1[0xc];
    iVar9 = 0;
    uVar4 = puVar1[0xe];
    puVar2[3] = 0x11111111;
    puVar2[1] = uVar4;
    puVar5 = (undefined4 *)*puVar1;
    uVar4 = puVar1[5];
    puVar2[2] = uVar3;
    puVar2[4] = uVar4;
    for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
      iVar9 = iVar9 + 1;
    }
    iVar6 = puVar1[3];
    iVar7 = puVar1[1];
    iVar8 = puVar1[10];
    uVar3 = *puVar1;
    puVar2[5] = iVar9;
    puVar2[6] = (iVar6 + -4) - iVar7;
    *(undefined4 **)(param_1 + 0x5d74) = puVar2;
    *(undefined4 *)(param_1 + 0x5d78) = 0x1c;
    *(undefined4 *)(param_1 + 0x5d9c) = uVar3;
    *(int *)(param_1 + 0x5d98) = iVar8;
    if ((iVar8 != 0) && (iVar8 == *(int *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x5d98) = *(undefined4 *)(iVar8 + 0x28);
      return;
    }
  }
  return;
}

