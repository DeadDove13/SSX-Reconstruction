/* Ghidra pseudocode. PS2 address: 001a3880. Not validated source. */

void FUN_001a3880(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1 << ((uint)param_2 & 0x1f);
  }
  lVar1 = (**(code **)(param_1[6] + 0x6c))((int)param_1 + (int)*(short *)(param_1[6] + 0x68));
  if (lVar1 == 0) {
    if ((*param_1 != 0) && (uVar2 = *param_1 & ~uVar2, *param_1 = uVar2, uVar2 == 0)) {
      (**(code **)(param_1[6] + 100))((int)param_1 + (int)*(short *)(param_1[6] + 0x60),param_2);
    }
  }
  else {
    if ((uVar2 & *param_1) != 0) {
      (**(code **)(param_1[6] + 100))((int)param_1 + (int)*(short *)(param_1[6] + 0x60),param_2);
    }
    *param_1 = *param_1 & ~uVar2;
  }
  return;
}

