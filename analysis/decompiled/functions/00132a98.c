/* Ghidra pseudocode. PS2 address: 00132a98. Not validated source. */

void FUN_00132a98(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  
  puVar10 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar10 == (undefined4 *)0x0) {
    iVar4 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar4 = puVar10[2];
    while( true ) {
      if (iVar4 == 0) {
        puVar10 = (undefined4 *)puVar10[3];
      }
      else {
        FUN_00132f70(*puVar10);
        puVar10 = (undefined4 *)puVar10[3];
      }
      if (puVar10 == (undefined4 *)0x0) break;
      iVar4 = puVar10[2];
    }
    iVar4 = *(int *)(param_1 + 0x24);
  }
  if ((iVar4 == 0) || (piVar12 = *(int **)(iVar4 + 0x1c), piVar12 == (int *)0x0)) {
    return;
  }
  iVar4 = *piVar12;
  do {
    piVar1 = (int *)piVar12[7];
    piVar11 = (int *)piVar12[6];
    iVar2 = *(int *)(*(int *)(iVar4 + 0x84) + 8);
    uVar5 = (**(code **)(iVar2 + 0x34))(*(int *)(iVar4 + 0x84) + (int)*(short *)(iVar2 + 0x30));
    iVar4 = *(int *)(*(int *)(piVar12[1] + 0x84) + 8);
    uVar6 = (**(code **)(iVar4 + 0x34))(*(int *)(piVar12[1] + 0x84) + (int)*(short *)(iVar4 + 0x30))
    ;
    uVar7 = uVar5;
    if (uVar5 < uVar6) {
      uVar7 = uVar6;
      uVar6 = uVar5;
    }
    if (piVar11 != (int *)0x0) {
      iVar4 = *piVar11;
      piVar13 = piVar1;
      while( true ) {
        iVar2 = *(int *)(*(int *)(iVar4 + 0x84) + 8);
        uVar8 = (**(code **)(iVar2 + 0x34))(*(int *)(iVar4 + 0x84) + (int)*(short *)(iVar2 + 0x30));
        iVar4 = *(int *)(*(int *)(piVar11[1] + 0x84) + 8);
        uVar9 = (**(code **)(iVar4 + 0x34))
                          (*(int *)(piVar11[1] + 0x84) + (int)*(short *)(iVar4 + 0x30));
        uVar5 = uVar8;
        if (uVar8 < uVar9) {
          uVar5 = uVar9;
          uVar9 = uVar8;
        }
        if ((uVar6 << 0x20) + (uVar7 & 0xffffffff) <= (uVar9 << 0x20) + (uVar5 & 0xffffffff)) break;
        piVar3 = (int *)piVar11[6];
        if (piVar13 == (int *)0x0) {
          *(int **)(param_1 + 0x20) = piVar11;
        }
        else {
          piVar13[6] = (int)piVar11;
        }
        if (piVar3 == (int *)0x0) {
          *(int **)(param_1 + 0x24) = piVar12;
        }
        else {
          piVar3[7] = (int)piVar12;
        }
        piVar12[7] = (int)piVar11;
        piVar12[6] = (int)piVar3;
        piVar11[7] = (int)piVar13;
        piVar11[6] = (int)piVar12;
        if (piVar3 == (int *)0x0) break;
        iVar4 = *piVar3;
        piVar13 = piVar11;
        piVar11 = piVar3;
      }
    }
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar4 = *piVar1;
    piVar12 = piVar1;
  } while( true );
}

