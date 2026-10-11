/* Ghidra pseudocode. PS2 address: 001f2190. Not validated source. */

void FUN_001f2190(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_c0 [4];
  uint uStack_bc;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [12];
  
  if ((((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0)) &&
      (uStack_b4 = FUN_001f2138(), iVar3 = DAT_0027ba88, DAT_0027ba88 < 6)) && (3 < DAT_0027ba88)) {
    iVar2 = FUN_001f8290(param_1);
    iVar2 = *(int *)(iVar2 + 0x9c);
    if (iVar3 == 5) {
      iVar3 = FUN_001f8290(param_1);
      if (0.0 < (float)*(int *)(iVar3 + 0x348)) {
        lVar4 = FUN_00159328(DAT_0027bcac,DAT_0027ba84);
        if (lVar4 == 1) {
          iVar2 = 1;
        }
        else if (lVar4 < 2) {
          iVar2 = 5;
          if (lVar4 == 0) {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = 5;
          if (lVar4 == 2) {
            iVar2 = 2;
          }
        }
      }
      else {
        iVar2 = 5;
      }
    }
    FUN_001f1910(auStack_c0,iVar2,iVar2);
    uVar5 = FUN_00154078(0x27a598);
    FUN_001f1460(&uStack_bc,uVar5,DAT_0027ba84,DAT_0027ba88);
    uVar5 = FUN_00154078(0x27a598);
    FUN_001f1550(auStack_b8,uVar5,DAT_0027ba84,DAT_0027ba88);
    if ((uStack_bc & 0x78) != 0) {
      FUN_001f0490(auStack_c0,&uStack_b4);
      iVar8 = 0;
      FUN_00209728(param_1,0);
      iVar3 = DAT_002c4694;
      if (0 < DAT_002c4694) {
        do {
          bVar1 = false;
          iVar9 = iVar8 + 1;
          if (0 < iVar8) {
            puVar7 = &DAT_0027e9ac;
            iVar6 = iVar8;
            do {
              if ((&DAT_0027e9ac)[iVar8 * 3] == *puVar7) {
                bVar1 = true;
              }
              if (((uint)(&DAT_0027e9ac)[iVar8 * 3] < 3) && (*puVar7 < 3)) {
                bVar1 = true;
              }
              iVar6 = iVar6 + -1;
              puVar7 = puVar7 + 3;
            } while (iVar6 != 0);
          }
          if (bVar1) goto LAB_001f2464;
          switch((&DAT_0027e9ac)[iVar8 * 3]) {
          case 0:
          case 1:
          case 2:
            uStack_b0 = 8;
            FUN_001f03f0(&uStack_b0,&uStack_b4);
            FUN_001f1608(auStack_ac,(&DAT_0027e9b0)[iVar8 * 3]);
            FUN_001f0398(auStack_ac,&uStack_b4);
            break;
          case 3:
            uStack_b0 = 0x10;
            goto LAB_001f2428;
          case 4:
            uStack_b0 = 2;
LAB_001f2428:
            FUN_001f03f0(&uStack_b0,&uStack_b4);
            break;
          case 5:
            uStack_b0 = 4;
            FUN_001f03f0(&uStack_b0,&uStack_b4);
          default:
          }
          FUN_00209728(param_1,0);
LAB_001f2464:
          iVar8 = iVar9;
        } while (iVar9 < iVar3);
      }
    }
    if (iVar2 < 3) {
      FUN_001f02d8(auStack_b8,auStack_c0,&uStack_b4);
    }
    else {
      FUN_001f0340(&uStack_bc,&uStack_b4);
    }
    FUN_00209728(param_1,0);
  }
  return;
}

