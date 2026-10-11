/* Ghidra pseudocode. PS2 address: 001741d8. Not validated source. */

void FUN_001741d8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  FUN_00173278();
  iVar2 = (int)param_2;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    uStack_d0 = DAT_002c4938;
    uStack_cf = DAT_002c4939;
    uStack_c0 = DAT_002c4940;
    uStack_bf = DAT_002c4941;
    iVar1 = FUN_001a0840(0x3f800000,param_3,&uStack_d0,0);
    fVar4 = (float)iVar1 * param_1;
    iVar1 = FUN_001a0840(0x3f800000,param_3,
                         *(undefined4 *)(**(int **)(iVar2 + 0x2c) * 4 + *(int *)(iVar2 + 0x34)),0);
    iVar3 = (int)param_4 + (int)fVar4;
    fVar4 = (float)iVar1 * param_1;
    FUN_00172dd0(param_1,param_2,param_3,iVar3,param_5,
                 *(undefined4 *)(**(int **)(iVar2 + 0x2c) * 4 + *(int *)(iVar2 + 0x34)),0);
    if ((*(int *)(iVar2 + 0xc) != 0) &&
       (**(char **)(**(int **)(iVar2 + 0x2c) * 4 + *(int *)(iVar2 + 0x34)) != '\0')) {
      uStack_b0 = 0x3f800000;
      iVar2 = (int)param_5 + 1;
      uStack_ac = 0x3f400000;
      uStack_a8 = 0x3f400000;
      uStack_a4 = 0x3f800000;
      FUN_00172e10(param_1,param_2,param_3,param_4,iVar2,&uStack_b0,&uStack_d0,0);
      uStack_b0 = 0x3f800000;
      uStack_a8 = 0x3f400000;
      uStack_a4 = 0x3f800000;
      uStack_ac = 0x3f400000;
      FUN_00172e10(param_1,param_2,param_3,iVar3 + (int)fVar4,iVar2,&uStack_b0,&uStack_c0,0);
    }
  }
  return;
}

