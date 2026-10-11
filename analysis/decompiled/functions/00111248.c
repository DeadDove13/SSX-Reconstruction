/* Ghidra pseudocode. PS2 address: 00111248. Not validated source. */

void FUN_00111248(float param_1,float param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_002c139c;
  uVar4 = DAT_002c1398;
  iVar3 = (int)param_3;
  if ((param_1 <= 0.0) || (iVar2 = iVar3 + 0x18c, *(float *)(iVar3 + 0x18c) == 0.0)) {
    if ((param_2 == 0.0) || (iVar2 = iVar3 + 0x198, *(float *)(iVar3 + 0x198) <= 0.0)) {
      FUN_001112f8(param_3);
      FUN_00111360(param_2,param_3);
      return;
    }
    *(undefined4 *)(iVar3 + 0x1a0) = 0;
    uVar4 = uVar1;
  }
  else {
    *(undefined4 *)(iVar3 + 0x194) = 0;
  }
  *(undefined4 *)(iVar2 + 4) = uVar4;
  return;
}

