/* Ghidra pseudocode. PS2 address: 0020a060. Not validated source. */

undefined8 FUN_0020a060(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_001f32b0();
  iVar5 = (int)param_1;
  *(int *)(iVar5 + 0x35340) = param_3;
  *(undefined **)(iVar5 + 0x32000) = &DAT_002bd3c0;
  lVar2 = FUN_0023a448(0x2bd3a0,param_3 << 2,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,param_3 << 2);
  }
  iVar1 = *(int *)(iVar5 + 0x35340);
  *(int *)(iVar5 + 0x35344) = (int)lVar2;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar3 + *(int *)(iVar5 + 0x35344)) = 0;
    } while (iVar4 < iVar1);
  }
  return param_1;
}

