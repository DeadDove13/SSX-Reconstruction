/* Ghidra pseudocode. PS2 address: 001927a0. Not validated source. */

undefined8 FUN_001927a0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  
  iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38);
  iVar1 = *(int *)(iVar5 + 0xc);
  lVar6 = FUN_001a0840(0x3f800000,iVar5,PTR_DAT_002b4b40,0);
  lVar7 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                       PTR_DAT_002b4b38,0);
  lVar8 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                       PTR_s_Green_002b4b3c,0);
  if (lVar8 < lVar7) {
    lVar7 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                         PTR_DAT_002b4b38,0);
    iVar5 = *(int *)(param_2 + 4);
    if (lVar6 < lVar7) {
LAB_001928b0:
      lVar6 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(iVar5 + 0x110) + 0x38),
                           PTR_DAT_002b4b38,0);
      lVar7 = FUN_001a0840(0x3f800000,
                           *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                           PTR_s_Green_002b4b3c,0);
      if (lVar7 < lVar6) {
        uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38);
        puVar3 = PTR_DAT_002b4b38;
      }
      else {
        uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38);
        puVar3 = PTR_s_Green_002b4b3c;
      }
      iVar4 = FUN_001a0840(0x3f800000,uVar2,puVar3,0);
      iVar5 = *(int *)(param_2 + 4);
      goto LAB_00192958;
    }
    iVar5 = *(int *)(iVar5 + 0x110);
  }
  else {
    lVar7 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                         PTR_s_Green_002b4b3c,0);
    iVar5 = *(int *)(param_2 + 4);
    if (lVar6 < lVar7) goto LAB_001928b0;
    iVar5 = *(int *)(iVar5 + 0x110);
  }
  iVar4 = FUN_001a0840(0x3f800000,*(undefined4 *)(iVar5 + 0x38),PTR_DAT_002b4b40,0);
  iVar5 = *(int *)(param_2 + 4);
LAB_00192958:
  iVar5 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(iVar5 + 0x110) + 0x38),0x2c4f58,0);
  puVar9 = (undefined4 *)param_1;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = iVar4 + iVar5 + 0xf2;
  puVar9[3] = iVar1 + 4;
  return param_1;
}

