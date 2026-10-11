/* Ghidra pseudocode. PS2 address: 00194de8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00195128) */

void FUN_00194de8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  
  while (iVar4 = (int)param_1, param_2 == 0) {
    if (*(uint *)(iVar4 + 0x2c) < *(uint *)(iVar4 + 0x28)) {
      if (*(int *)(iVar4 + 0x3928) == 0) {
        iVar6 = *(int *)(iVar4 + 0x1c);
      }
      else {
        uVar2 = FUN_0019a400();
        if (*(uint *)(iVar4 + 0x2c) < uVar2) {
          iVar6 = *(int *)(iVar4 + 0x1c);
        }
        else {
          lVar3 = FUN_0019a428(*(undefined4 *)(iVar4 + 0x3928));
          if (lVar3 == 0) {
            if (*(int *)(iVar4 + 0x4c) != 0) {
              iVar6 = *(int *)(DAT_002859e4 + 0x54);
              *(int *)(iVar4 + 0x1c) = iVar6;
              if (iVar6 < 0) {
                *(undefined4 *)(iVar4 + 0x1c) = 0;
              }
              *(undefined4 *)(iVar4 + 0x3928) = 0;
              *(undefined4 *)(iVar4 + 0x2c) = 0;
              FUN_001939f8(param_1);
              FUN_00194de8(param_1,1);
              piVar5 = *(int **)(*(int *)(DAT_002859e4 + 0x14) + *(int *)(iVar4 + 0x1c) * 4 + 0x90);
              iVar4 = 0;
              if (piVar5 != (int *)0x0) {
                iVar4 = *piVar5;
              }
              FUN_0015fae0(&uStack_6c,&uStack_68,&uStack_64,&uStack_60,auStack_5c);
              FUN_0015fba0(uStack_6c,uStack_68,uStack_64,uStack_60,*(undefined4 *)(iVar4 + 0x390),0)
              ;
              return;
            }
            *(undefined4 *)(iVar4 + 0x18) = 3;
            return;
          }
          FUN_001939f8(param_1);
          FUN_00194de8(param_1,1);
          iVar6 = *(int *)(iVar4 + 0x1c);
        }
      }
      lVar3 = FUN_0019a2a8(iVar4 + iVar6 * 0xe24 + 0x50,*(undefined4 *)(iVar4 + 0x2c));
      if (lVar3 == 0) {
        iVar6 = *(int *)(iVar4 + 0x30);
      }
      else {
        FUN_00195188(param_1);
        iVar6 = *(int *)(iVar4 + 0x30);
      }
      if (iVar6 == 0) {
        trap(7);
      }
      if (*(int *)(iVar4 + 0x2c) % iVar6 == 0) {
        FUN_001032d0(*(undefined4 *)(DAT_002859e4 + 0x18));
        iVar6 = *(int *)(iVar4 + 0x2c);
      }
      else if (*(int *)(iVar4 + 0x2c) % 10 == 0) {
        FUN_00132490(*(undefined4 *)(DAT_002859e4 + 0x28));
        FUN_00132a98(*(undefined4 *)(DAT_002859e4 + 0x28));
        iVar6 = *(int *)(iVar4 + 0x2c);
      }
      else {
        iVar6 = *(int *)(iVar4 + 0x2c);
      }
      *(int *)(iVar4 + 0x2c) = iVar6 + 1;
      return;
    }
    if (*(int *)(iVar4 + 0x4c) == 0) {
      *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x28);
      *(undefined4 *)(iVar4 + 0x18) = 3;
      return;
    }
    *(undefined4 *)(iVar4 + 0x3928) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    FUN_001939f8(param_1);
    param_2 = 1;
  }
  if (*(int *)(iVar4 + 0x3928) == 0) {
    uVar1 = FUN_00195330(param_1,*(undefined4 *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0xc) = uVar1;
  }
  else {
    uVar1 = FUN_0019a540();
    *(undefined4 *)(iVar4 + 0xc) = uVar1;
  }
  piVar5 = (int *)(iVar4 + 0x393c);
  iVar6 = 3;
  *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x38);
  do {
    if (*piVar5 != 0) {
      FUN_00196ad0(*piVar5,*(undefined4 *)(iVar4 + 0x2c));
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + 1;
  } while (-1 < iVar6);
  FUN_00193ea8(param_1,*(undefined4 *)(iVar4 + 0xc));
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),7,0xffffffffffffffff);
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),4,0xffffffffffffffff);
  FUN_00101488(*(undefined4 *)(DAT_002859e4 + 0x14));
  if (*(int *)(iVar4 + 0x4c) == 0) {
    iVar6 = *(int *)(iVar4 + 0x1c);
  }
  else {
    if (*(int *)(iVar4 + 0x3928) != 0) {
      iVar6 = FUN_0019a3c0(iVar4 + 0x38e0);
      piVar5 = *(int **)(*(int *)(DAT_002859e4 + 0x14) + *(int *)(iVar6 + 0x10) * 4 + 0x90);
      iVar6 = 0;
      if (piVar5 != (int *)0x0) {
        iVar6 = *piVar5;
      }
      FUN_0015fae0(&uStack_80,(uint)&uStack_80 | 4,(uint)&uStack_80 | 8,(uint)&uStack_80 | 0xc,
                   auStack_70);
      FUN_0015fba0(uStack_80,uStack_7c,uStack_78,uStack_74,*(undefined4 *)(iVar6 + 0x390),0);
      FUN_0015f830(7);
      iVar4 = *(int *)(iVar4 + 0x3928);
      goto LAB_00194f64;
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
  }
  FUN_0019a240(iVar4 + iVar6 * 0xe24 + 0x50,*(undefined4 *)(iVar4 + 0x2c));
  FUN_00195188(param_1);
  iVar4 = *(int *)(iVar4 + 0x3928);
LAB_00194f64:
  if (iVar4 != 0) {
    FUN_0015c970();
  }
  FUN_001032d0(*(undefined4 *)(DAT_002859e4 + 0x18));
  return;
}

