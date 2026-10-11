/* Ghidra pseudocode. PS2 address: 001014f0. Not validated source. */

void FUN_001014f0(int param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if (*(int *)(param_1 + 0x438) != 0) {
    bVar1 = true;
    bVar2 = false;
    if (*(int *)(param_1 + 0x43c) == -2) {
      *(undefined4 *)(param_1 + 0x43c) = 0;
      if ((param_2 == 0) || (*(char *)(*(int *)(*(int *)(param_1 + 200) + 0x394) + 0x54) < '\0')) {
        FUN_001e9428(&uStack_70);
        iVar6 = *(int *)(param_1 + 0x43c);
      }
      else {
        FUN_001e93d8(&uStack_70);
        iVar6 = *(int *)(param_1 + 0x43c);
      }
      uVar3 = FUN_001e9718(param_1 + 0x128,*(undefined4 *)(param_1 + iVar6 * 4 + 200),1,uStack_70);
      *(undefined4 *)(param_1 + 0x440) = uVar3;
    }
    if (-1 < *(int *)(param_1 + 0x440)) {
      iVar6 = param_1 + 0x128;
      bVar2 = true;
      lVar4 = FUN_001e95f8();
      if (lVar4 == 0) {
        bVar1 = false;
      }
      else if (-1 < *(int *)(param_1 + 0x43c)) {
        FUN_001e9ae8(iVar6,*(undefined4 *)(param_1 + 0x440));
        FUN_001e9538(iVar6,*(undefined4 *)(param_1 + 0x440));
        iVar5 = *(int *)(param_1 + 0x43c) + 1;
        *(int *)(param_1 + 0x43c) = iVar5;
        if (iVar5 < *(int *)(param_1 + 0x8c)) {
          if ((param_2 == 0) ||
             (*(char *)(*(int *)(*(int *)(param_1 + 200 + iVar5 * 4) + 0x394) + 0x54) < '\0')) {
            FUN_001e9428((uint)&uStack_70 | 4);
            iVar5 = *(int *)(param_1 + 0x43c);
          }
          else {
            FUN_001e93d8((uint)&uStack_70 | 4);
            iVar5 = *(int *)(param_1 + 0x43c);
          }
          bVar1 = false;
          uVar3 = FUN_001e9718(iVar6,*(undefined4 *)(param_1 + 200 + iVar5 * 4),1,uStack_6c);
          *(undefined4 *)(param_1 + 0x440) = uVar3;
        }
        else {
          *(undefined4 *)(param_1 + 0x440) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x43c) = 0xffffffff;
        }
      }
    }
    lVar4 = FUN_00146c50(0x2795b8);
    if (((lVar4 == 0) || (!bVar1)) || (*(int *)(*(int *)(DAT_002c56e8 + 0x351c4) + 0x8c) == 2)) {
      FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),8,0xffffffffffffffff);
    }
    else {
      FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),8,0xffffffffffffffff);
      if (bVar2) {
        iVar6 = param_1 + 0x128;
        if (-1 < *(int *)(param_1 + 0x440)) {
          FUN_001e95f8(iVar6);
          FUN_001e9ae8(iVar6,*(undefined4 *)(param_1 + 0x440));
          FUN_001e9538(iVar6,*(undefined4 *)(param_1 + 0x440));
          *(undefined4 *)(param_1 + 0x440) = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x438) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x438) = 0;
      }
    }
  }
  return;
}

