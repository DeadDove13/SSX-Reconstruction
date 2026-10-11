/* Ghidra pseudocode. PS2 address: 00188d40. Not validated source. */

void FUN_00188d40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x80);
  if ((-1 < iVar6) && ((uVar3 = 1, iVar6 < 2 || (uVar3 = 2, iVar6 < 4)))) {
    *(undefined4 *)(param_1 + 0x298) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x298);
  lVar4 = FUN_0023a448(0x2b3958,0xc,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0,0xc);
  }
  uVar3 = FUN_0015f448(lVar4,9);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  iVar7 = 0;
  iVar6 = param_1;
  if (0 < *(int *)(param_1 + 0x298)) {
    do {
      lVar4 = FUN_0023a448(0x2c4e38,4000,0);
      if (lVar4 != 0) {
        FUN_0023bbd0(lVar4,0,4000);
      }
      uVar5 = FUN_0015b6f8(lVar4);
      uVar3 = *(undefined4 *)(param_1 + 0x84);
      *(int *)(iVar6 + 0xa0) = (int)uVar5;
      FUN_0015f500(uVar3,uVar5);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar7 < *(int *)(iVar1 + 0x80)) {
        puVar2 = *(undefined4 **)(iVar1 + iVar7 * 4 + 0x90);
        uVar3 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = *puVar2;
        }
LAB_00188e74:
        *(undefined4 *)(iVar6 + 0xa4) = uVar3;
      }
      else {
        if (iVar7 < *(int *)(iVar1 + 0x8c)) {
          uVar3 = *(undefined4 *)(iVar1 + ((*(int *)(iVar1 + 0x8c) - iVar7) + -1) * 4 + 200);
          goto LAB_00188e74;
        }
        *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(iVar1 + 200);
      }
      iVar1 = *(int *)(iVar6 + 0xa4);
      uVar3 = *(undefined4 *)(iVar6 + 0xa0);
      *(int *)(iVar1 + 0x24) = iVar7;
      FUN_0015bbe0(uVar3,iVar1);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x80;
    } while (iVar7 < *(int *)(param_1 + 0x298));
  }
  FUN_00188f68(param_1);
  return;
}

