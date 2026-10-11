/* Ghidra pseudocode. PS2 address: 001ae428. Not validated source. */

void FUN_001ae428(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  lVar5 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  if (lVar5 == 0) {
    iVar11 = (int)param_1;
    iVar12 = 0;
    do {
      iVar7 = iVar12 * 4;
      piVar10 = (int *)(iVar11 + 0x34 + iVar7);
      if ((*piVar10 == 0) ||
         (piVar8 = (int *)(iVar11 + 0x2c + iVar7), iVar3 = *piVar8 + -1, *piVar8 = iVar3,
         uVar1 = DAT_0027ba88, iVar3 != 0)) goto switchD_001ae51c_caseD_6;
      iVar9 = iVar12 * 0x20;
      iVar4 = iVar11 + 0x3c;
      *piVar10 = 0;
      *(undefined4 *)(iVar4 + iVar7) = 0;
      *(undefined4 *)(iVar11 + iVar7 + 0x44) = 0;
      *(undefined2 *)(&DAT_0028adb0 + iVar9) = 0;
      iVar3 = DAT_002859e4;
      switch(uVar1) {
      case 2:
      case 8:
        iVar3 = *(int *)(iVar12 * 0x80 + DAT_002859e4 + 0xa4);
        iVar2 = *(int *)(iVar3 + 0x9c);
        *(undefined4 *)(iVar4 + iVar7) = 1;
        FUN_001ae280(param_1,(&PTR_DAT_0028ad98)[iVar2],iVar12);
        FUN_001ae280(param_1,0x2b63e8,iVar12);
        uVar6 = FUN_0010b140(iVar3);
        FUN_001a2650(uVar6,&DAT_0028adb0 + iVar9);
        goto LAB_001ae730;
      case 3:
      case 5:
        iVar3 = *(int *)(iVar12 * 0x80 + DAT_002859e4 + 0xa4);
        uVar1 = *(undefined4 *)(iVar3 + 0x8440);
        if ((0.0 < (float)*(int *)(iVar3 + 0x348)) &&
           (FUN_0019a8f0(&DAT_0028adb0 + iVar9,0x2c5190,uVar1), DAT_0027b810 < 2)) {
          lVar5 = FUN_00159328(uVar1,DAT_0027ba84);
          if (lVar5 != 3) {
            *(undefined4 *)(iVar4 + iVar7) = 1;
            FUN_001ae338(param_1,&UNK_002b63b8 + (int)lVar5 * 0x10,iVar12);
            FUN_001ae280(param_1,(&PTR_DAT_0028ad98)[(int)lVar5],iVar12);
            FUN_001ae280(param_1,0x2b63e8,iVar12);
            goto LAB_001ae730;
          }
        }
        break;
      case 4:
        *(undefined4 *)(iVar4 + iVar7) = 1;
        iVar7 = *(int *)(iVar12 * 0x80 + iVar3 + 0xa4);
        iVar3 = *(int *)(iVar7 + 0x9c);
        lVar5 = FUN_00154078(0x27a598);
        if (lVar5 == 3) {
          lVar5 = FUN_00159388(iVar3);
          if (lVar5 != 3) {
            FUN_001ae338(param_1,&UNK_002b63b8 + (int)lVar5 * 0x10,iVar12);
          }
        }
        FUN_001ae280(param_1,(&PTR_DAT_0028ad98)[iVar3],iVar12);
        FUN_001ae280(param_1,0x2b63e8,iVar12);
        uVar6 = FUN_0010b140(iVar7);
        FUN_001a2650(uVar6,&DAT_0028adb0 + iVar9);
      }
switchD_001ae51c_caseD_6:
LAB_001ae730:
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
  }
  return;
}

