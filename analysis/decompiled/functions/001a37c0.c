/* Ghidra pseudocode. PS2 address: 001a37c0. Not validated source. */

void FUN_001a37c0(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1 << ((uint)param_2 & 0x1f);
  }
  lVar2 = (**(code **)(param_1[6] + 0x6c))((int)param_1 + (int)*(short *)(param_1[6] + 0x68));
  if (lVar2 == 0) {
    if (*param_1 == 0) {
      (**(code **)(param_1[6] + 0x5c))((int)param_1 + (int)*(short *)(param_1[6] + 0x58),param_2);
      uVar1 = *param_1;
    }
    else {
      uVar1 = *param_1;
    }
  }
  else if ((uVar3 & *param_1) == 0) {
    (**(code **)(param_1[6] + 0x5c))((int)param_1 + (int)*(short *)(param_1[6] + 0x58),param_2);
    uVar1 = *param_1;
  }
  else {
    uVar1 = *param_1;
  }
  *param_1 = uVar1 | uVar3;
  return;
}

