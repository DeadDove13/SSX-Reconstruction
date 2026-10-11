/* Ghidra pseudocode. PS2 address: 00100bb8. Not validated source. */

void FUN_00100bb8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  FUN_00186a08(0x2c4dd8,3);
  FUN_00186a08(0x2c4dd8,0xd);
  FUN_00186a08(0x2c4dd8,4);
  DAT_0027ba8c = FUN_002109b0();
  *(undefined4 *)(param_1 + 0xe4) = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  while( true ) {
    lVar3 = FUN_001867d0(0x2c4dd8,8);
    iVar10 = 0;
    if (lVar3 == 0) break;
    FUN_00186648(0x2c4dd8,lVar3);
  }
  iVar9 = 0;
  iVar7 = 0;
  if (0 < DAT_0027b810) {
    iVar11 = 0;
    puVar8 = (undefined4 *)(param_1 + 200);
    do {
      if ((char)(&DAT_0027b868)[iVar9 * 0x68] < '\0') {
        piVar6 = (int *)(param_1 + 0xa0 + iVar7 * 4);
        puVar2 = (undefined4 *)*piVar6;
        iVar7 = iVar7 + 1;
      }
      else {
        piVar6 = (int *)(param_1 + 0x90 + iVar10 * 4);
        puVar2 = (undefined4 *)*piVar6;
        iVar10 = iVar10 + 1;
      }
      FUN_00105050(*puVar2,iVar9);
      uVar4 = 0;
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        uVar4 = *(undefined4 *)*piVar6;
      }
      *puVar8 = uVar4;
      piVar6 = (int *)(param_1 + 200 + iVar11);
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 4;
      iVar1 = *(int *)(*piVar6 + 0x8584);
      puVar8 = puVar8 + 1;
      iVar5 = iVar1 + 0x868;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      FUN_00186448(0x2c4dd8,iVar5,8);
    } while (iVar9 < DAT_0027b810);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x7c))
            (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x78),1,1);
  return;
}

