/* Ghidra pseudocode. PS2 address: 00218a00. Not validated source. */

void FUN_00218a00(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)param_2;
  for (; *(float *)(iVar2 + 0x14) <= param_1; param_1 = param_1 - *(float *)(iVar2 + 0x14)) {
  }
  fVar3 = *(float *)(*(int *)(iVar2 + 0xc) + 0x78);
  if (param_1 < fVar3) {
    uVar1 = FUN_00218968(param_1,param_2);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  else {
    if (param_1 <= fVar3 + *(float *)(*(int *)(iVar2 + 0xc) + 0x74)) {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
      goto LAB_00218aa4;
    }
    uVar1 = FUN_002188d8(param_1);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
LAB_00218aa4:
  FUN_00218710(param_1,uVar1,param_3,param_4);
  return;
}

