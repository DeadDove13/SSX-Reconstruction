/* Ghidra pseudocode. PS2 address: 0012b858. Not validated source. */

undefined8 FUN_0012b858(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  FUN_00122128(param_1,param_2,0x11,param_3);
  fVar5 = *(float *)(param_4 + 8);
  iVar4 = (int)param_1;
  *(undefined **)(iVar4 + 8) = &DAT_002a9260;
  iVar3 = 1;
  do {
    iVar2 = 3;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(float *)(iVar4 + 0x4c) = fVar5 * 100.0;
  FUN_0012ba80(param_1);
  *(uint *)(*(int *)(iVar4 + 0x28) + 0xe8) =
       *(uint *)(*(int *)(iVar4 + 0x28) + 0xe8) & 0xfffffffd | 4;
  return param_1;
}

