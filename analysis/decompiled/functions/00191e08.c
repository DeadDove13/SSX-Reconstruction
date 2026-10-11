/* Ghidra pseudocode. PS2 address: 00191e08. Not validated source. */

undefined8 FUN_00191e08(undefined8 param_1,int param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iStack_84;
  
  if (param_3 == 0) {
LAB_00191f48:
    iVar2 = 0;
  }
  else {
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar2 = FUN_001a0840(0x3f800000,
                           *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),param_4,0
                          );
      lVar4 = FUN_001a0840(0x3f800000,
                           *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),param_3,0
                          );
      lVar5 = FUN_001a0840(0x3f800000,
                           *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),param_5,0
                          );
      if (lVar5 < lVar4) {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38);
        param_5 = param_3;
      }
      else {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38);
      }
      iVar3 = FUN_001a0840(0x3f800000,uVar1,param_5,0);
      iVar2 = iVar2 + iVar3 * 2 + 0x28;
      iStack_84 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38) + 0xc);
      goto LAB_00191fe8;
    }
    if (param_3 == 0) goto LAB_00191f48;
    iVar2 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                         param_3,0);
  }
  if (param_4 != 0) {
    iVar3 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                         param_4,0);
    iVar2 = iVar2 + iVar3;
  }
  if (param_5 != 0) {
    iVar3 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38),
                         param_5,0);
    iVar2 = iVar2 + iVar3;
  }
  iStack_84 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x110) + 0x38) + 0xc);
  if (((param_3 != 0) && ((param_4 != 0 || (param_5 != 0)))) || ((param_4 != 0 && (param_5 != 0))))
  {
    iVar2 = iVar2 + 0x14;
  }
LAB_00191fe8:
  if (iVar2 < 200) {
    iVar2 = 200;
  }
  puVar6 = (undefined4 *)param_1;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = iVar2 + 0x14;
  puVar6[3] = iStack_84 + 4;
  return param_1;
}

