/* Ghidra pseudocode. PS2 address: 0019ba80. Not validated source. */

undefined8 FUN_0019ba80(float param_1,undefined8 param_2,int param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined4 *)param_2;
  pfVar1 = (float *)(*(int *)(param_3 + 0x18) + 0xc);
  for (iVar3 = 0; puVar4 = (undefined4 *)(*(int *)(param_3 + 0x18) + iVar3 * 0x10),
      iVar3 != *(int *)(param_3 + 8) + -1; iVar3 = iVar3 + 1) {
    fVar5 = *pfVar1;
    pfVar1 = pfVar1 + 4;
    if (param_1 <= fVar5) break;
    param_1 = param_1 - fVar5;
  }
  *puVar2 = *puVar4;
  puVar2[1] = puVar4[1];
  uVar6 = puVar4[2];
  puVar2[3] = 0;
  puVar2[2] = uVar6;
  return param_2;
}

