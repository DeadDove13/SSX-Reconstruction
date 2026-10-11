/* Ghidra pseudocode. PS2 address: 00230ca8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00230df0) */
/* WARNING: Removing unreachable block (ram,0x00230d88) */
/* WARNING: Removing unreachable block (ram,0x00230e18) */
/* WARNING: Removing unreachable block (ram,0x00230d38) */

undefined4 FUN_00230ca8(int param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 auStack_d0 [2];
  undefined1 auStack_cc [60];
  
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  if (0 < param_2) {
    iVar3 = *(int *)(param_1 + 0x34);
    while( true ) {
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x28);
        if (iVar3 + 0x1b < *(int *)(param_1 + 0x30)) {
          *(undefined4 *)(param_1 + 0x10) = 0x1c;
          param_2 = param_2 + -0x1c;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) + (iVar3 * 0xf) / 0x1c;
          (**(code **)(param_1 + 0x38))(param_1 + 0x10);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x1c;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0x1c;
          uVar2 = *(undefined4 *)(param_1 + 0x1c);
          *(int *)(param_1 + 0x1c) = param_1 + 0x44;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) + (iVar3 * 0xf) / 0x1c;
          (**(code **)(param_1 + 0x38))(param_1 + 0x10,*(code **)(param_1 + 0x38),param_2);
          iVar3 = *(int *)(param_1 + 0x2c) / 0x1c;
          *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x3c);
          *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x3e);
          *(int *)(param_1 + 0x34) =
               0x1d - ((*(int *)(param_1 + 0x28) + 0x1c) - *(int *)(param_1 + 0x30));
          *(int *)(param_1 + 0x28) = iVar3 * 0x1c;
          if (*(int *)(param_1 + 0x2c) % 0x1c != 0) {
            *(undefined4 *)(param_1 + 0x10) = 0x1c;
            *(undefined1 **)(param_1 + 0x1c) = auStack_cc;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) + (iVar3 * 0x1a4) / 0x1c;
            (**(code **)(param_1 + 0x38))(param_1 + 0x10);
            iVar3 = *(int *)(param_1 + 0x28) + 0x1c;
            iVar4 = iVar3 - *(int *)(param_1 + 0x2c);
            *(int *)(param_1 + 0x28) = iVar3;
            puVar5 = auStack_d0 + (0x1e - iVar4);
            if (0 < iVar4) {
              iVar3 = *(int *)(param_1 + 0x34);
              do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                *(undefined2 *)(param_1 + 0x44 + iVar3 * 2) = uVar1;
                iVar4 = iVar4 + -1;
                iVar3 = iVar3 + 1;
              } while (iVar4 != 0);
              *(int *)(param_1 + 0x34) = iVar3;
            }
          }
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else {
        iVar3 = FUN_00231500(iVar3,param_1 + 0x44,param_2,param_1 + 0x1c);
        param_2 = param_2 - iVar3;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - iVar3;
      }
      if (param_2 < 1) break;
      iVar3 = *(int *)(param_1 + 0x34);
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2 * 2;
  if (param_2 < 0) {
    do {
      iVar3 = *(int *)(param_1 + 0x34);
      param_2 = param_2 + 1;
      puVar5 = *(undefined2 **)(param_1 + 0x1c);
      uVar1 = *puVar5;
      *(int *)(param_1 + 0x34) = iVar3 + 1;
      *(undefined2 *)(param_1 + 0x44 + iVar3 * 2) = uVar1;
      *(undefined2 **)(param_1 + 0x1c) = puVar5 + 1;
    } while (param_2 < 0);
  }
  return 1;
}

