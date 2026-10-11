/* Ghidra pseudocode. PS2 address: 001b1408. Not validated source. */

void FUN_001b1408(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x438) == 0) {
    *(undefined4 *)(iVar8 + 0x1b4) = *(undefined4 *)(iVar8 + 0x1c8);
  }
  else {
    *(undefined4 *)(iVar8 + 0x1b4) = 0;
  }
  if (*(int *)(iVar8 + 0x178) == 2) {
    FUN_001d98f0(param_1);
    if (*(int *)(iVar8 + 0x44) == 1) {
      if (*(int *)(iVar8 + 0x1c) == 0) {
        *(undefined4 *)(iVar8 + 0x178) = 0;
      }
      else {
        FUN_00152fc8(0x27a598);
        FUN_00152df8(0x27a598);
        *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
      }
      FUN_001d98b8(param_1);
      return;
    }
  }
  else {
    FUN_001ab908(iVar8 + 0x180);
    iVar5 = *(int *)(iVar8 + 0x174);
    if (*(int *)(iVar5 + 0xcc) == 0) {
      uVar7 = FUN_001a94b0(iVar5,0xffffffffffffffff);
      if ((uVar7 != 0) && (0 < *(int *)(iVar8 + 0x1b4))) {
        if ((uVar7 & 0x800) == 0) {
          if ((uVar7 & 0x20001) == 0) {
            if ((uVar7 & 0x40002) != 0) {
              FUN_001a9498(*(undefined4 *)(iVar8 + 0x174));
              if (*(int *)(iVar8 + 0x1b4) == 0) {
                trap(7);
              }
              *(int *)(iVar8 + 0x1b8) = (*(int *)(iVar8 + 0x1b8) + 1) % *(int *)(iVar8 + 0x1b4);
            }
          }
          else {
            FUN_001a9498(*(undefined4 *)(iVar8 + 0x174));
            iVar5 = *(int *)(iVar8 + 0x1b8) + -1;
            *(int *)(iVar8 + 0x1b8) = iVar5;
            if (iVar5 < 0) {
              *(int *)(iVar8 + 0x1b8) = *(int *)(iVar8 + 0x1b4) + -1;
            }
          }
        }
        else {
          FUN_001a94a8(*(undefined4 *)(iVar8 + 0x174));
          switch(*(undefined4 *)(iVar8 + *(int *)(iVar8 + 0x1b8) * 8 + 0x18c)) {
          case 0:
            FUN_001028c8(*(undefined4 *)(DAT_002859e4 + 0x14));
            break;
          case 1:
            FUN_001028f8(*(undefined4 *)(DAT_002859e4 + 0x14));
            break;
          case 2:
            FUN_001028d8(*(undefined4 *)(DAT_002859e4 + 0x14));
            break;
          case 3:
            lVar6 = FUN_00152f20(0x27a598);
            uVar4 = DAT_002c5228;
            uVar3 = DAT_002c5224;
            uVar2 = DAT_002c5220;
            uVar1 = DAT_002c521c;
            if (lVar6 == 0) {
              *(undefined4 *)(iVar8 + 0x178) = 0;
              FUN_001a9e20(*(undefined4 *)(iVar8 + 0x174),DAT_002c522c,0,DAT_002c5224,0,DAT_002c5220
                          );
            }
            else {
              *(undefined4 *)(iVar8 + 0x178) = 1;
              FUN_001a9e20(*(undefined4 *)(iVar8 + 0x174),uVar4,0,uVar3,uVar2,uVar1);
            }
            break;
          case 4:
            FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),1,0xffffffffffffffff);
            FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),0xb,0xffffffffffffffff);
            break;
          case 5:
            FUN_001028e8(*(undefined4 *)(DAT_002859e4 + 0x14));
          }
        }
      }
    }
    else {
      lVar6 = FUN_001aad78(iVar5,0xffffffffffffffff);
      if (lVar6 != 0) {
        if ((lVar6 == 3) && (*(int *)(iVar8 + 0x178) != 1)) {
          *(undefined4 *)(iVar8 + 0x1b8) = 0;
          return;
        }
        if (lVar6 != 2) {
          if ((lVar6 == 1) && (*(int *)(iVar8 + 0x178) == 1)) {
            *(undefined4 *)(iVar8 + 0x178) = 2;
            *(undefined4 *)(iVar8 + 0x17c) = 0xb1;
            FUN_001d9840(param_1);
            *(undefined4 *)(*(int *)(iVar8 + 0x16c) + 0x24) = 0x1274;
            *(undefined4 *)(iVar8 + 0x28) = 0x20dfc;
            FUN_001d87a8(param_1,1);
            FUN_001d98f0(param_1);
            FUN_001dc3c8(param_1);
            return;
          }
          FUN_00152fc8(0x27a598);
          FUN_00152df8(0x27a598);
          *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
          return;
        }
        *(undefined4 *)(iVar8 + 0x178) = 0;
      }
      *(undefined4 *)(iVar8 + 0x1b8) = 0;
    }
  }
  return;
}

