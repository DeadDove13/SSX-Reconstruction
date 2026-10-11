/* Ghidra pseudocode. PS2 address: 002377b8. Not validated source. */

undefined4 FUN_002377b8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined1 auStack_80 [64];
  int aiStack_40 [4];
  
  FUN_00237618(param_1,auStack_80,aiStack_40);
  puVar5 = (uint *)param_3;
  if (aiStack_40[0] == 1) {
    lVar1 = FUN_0018bb30(auStack_80,param_2,param_3);
    lVar3 = 0x1000000;
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = *puVar5;
  }
  else {
    if (aiStack_40[0] != 2) {
      return 0;
    }
    param_2 = param_2 & 7;
    if (param_2 == 1) {
      uVar4 = 1;
    }
    else if (param_2 == 0) {
      uVar4 = 0x103;
    }
    else {
      if (param_2 != 6) {
        *puVar5 = 0xffffffff;
        return 0;
      }
      uVar4 = 0x603;
    }
    lVar3 = FUN_00267a70(auStack_80,uVar4);
    *puVar5 = (uint)lVar3;
    if (lVar3 < 0) {
      *puVar5 = 0;
      return 0;
    }
    uVar2 = aiStack_40[0] << 0x18;
  }
  *puVar5 = (uint)lVar3 | uVar2;
  return 1;
}

