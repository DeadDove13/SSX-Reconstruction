/* Ghidra pseudocode. PS2 address: 001965b8. Not validated source. */

undefined4 FUN_001965b8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar10 = (int)param_1;
  uVar5 = 0;
  if (*(int *)(iVar10 + 0x395c) == 0) {
    iVar1 = *(int *)(iVar10 + 0x2c);
    uVar5 = 0;
    if (iVar1 != *(int *)(iVar10 + 0x28)) {
      iVar2 = *(int *)(iVar10 + 0x1c);
      iVar3 = *(int *)(iVar10 + 0x394c + iVar2 * 4);
      iVar8 = 0;
      if (0 < iVar3) {
        piVar9 = (int *)(iVar2 * 0x40 + iVar10 + 0x3e68);
        do {
          iVar7 = iVar1 - *(int *)(*(int *)*piVar9 + 0x38);
          if ((-1 < iVar7) && (iVar7 <= ((int *)*piVar9)[1] + 0xb)) break;
          iVar8 = iVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar8 < iVar3);
        if (iVar8 < *(int *)(iVar10 + 0x394c + iVar2 * 4)) {
          *(int *)(iVar10 + 0x3960) = iVar1;
          piVar9 = (int *)(iVar10 + 0x3e68 + iVar8 * 4 + iVar2 * 0x40);
          iVar2 = *piVar9;
          *(int *)(iVar10 + 0x395c) = iVar2;
          *(int *)(iVar2 + 4) = iVar1 - *(int *)(*(int *)*piVar9 + 0x38);
          return 1;
        }
      }
      lVar6 = FUN_001962b0(param_1,*(undefined4 *)(iVar10 + 0x2c),*(undefined4 *)(iVar10 + 0x1c));
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        puVar11 = (undefined4 *)lVar6;
        *(undefined4 **)(iVar10 + 0x395c) = puVar11;
        *(undefined4 *)(iVar10 + 0x3960) = *(undefined4 *)(iVar10 + 0x2c);
        uVar5 = FUN_00193c38(param_1,1,*(undefined4 *)(iVar10 + 0x2c),0);
        puVar11[1] = 0;
        *puVar11 = uVar5;
        uVar4 = *(undefined4 *)(iVar10 + 0x1c);
        uVar5 = 1;
        puVar11[2] = 0;
        puVar11[4] = uVar4;
      }
    }
  }
  return uVar5;
}

