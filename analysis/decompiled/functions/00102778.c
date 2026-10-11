/* Ghidra pseudocode. PS2 address: 00102778. Not validated source. */

void FUN_00102778(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) == 4) {
    if (*(int *)(DAT_002859e4 + 0x38) == 0) {
      iVar9 = *(int *)(param_1 + 0x80);
    }
    else {
      iVar9 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
      if (iVar9 != 0 && iVar9 < 10) {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x80);
    }
    iVar8 = 0;
    if (0 < iVar9) {
      piVar7 = (int *)(param_1 + 0xe8);
      iVar9 = 0;
      do {
        puVar1 = (undefined4 *)piVar7[-0x16];
        lVar5 = FUN_00181688(puVar1[0x228],0x20);
        if (lVar5 == 0) {
          if (*piVar7 == 0) {
            uVar2 = puVar1[0x228];
          }
          else {
            lVar5 = FUN_00181638(puVar1[0x228],0x21);
            if (lVar5 != 0) {
              uVar6 = FUN_001093e8(*puVar1);
              FUN_0015f170(uVar6,1);
              iVar4 = *(int *)(param_1 + 0x80);
              goto LAB_0010288c;
            }
            uVar2 = puVar1[0x228];
          }
          uVar3 = FUN_00181688(uVar2,0x21);
          uVar2 = *puVar1;
          *(undefined4 *)(param_1 + 0xe8 + iVar9) = uVar3;
          uVar6 = FUN_001093e8(uVar2);
          FUN_0015f170(uVar6,0);
          iVar4 = *(int *)(param_1 + 0x80);
        }
        else {
          FUN_001fc4c0(DAT_002c56e8);
          uVar6 = FUN_001093e8(*puVar1);
          FUN_0015f100(uVar6);
          iVar4 = *(int *)(param_1 + 0x80);
        }
LAB_0010288c:
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar8 < iVar4);
    }
  }
  return;
}

