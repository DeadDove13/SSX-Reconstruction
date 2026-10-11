/* Ghidra pseudocode. PS2 address: 001e9ae8. Not validated source. */

void FUN_001e9ae8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  iVar5 = 2;
  puVar7 = (uint *)param_1;
  puVar8 = puVar7 + param_2 * 0x18 + 4;
  uVar1 = puVar8[1];
  puVar4 = puVar8 + 4;
  do {
    if ((int)*puVar4 < 0) {
      puVar4[3] = 0;
    }
    else {
      iVar2 = *(int *)(puVar7[2] + 0x10);
      (**(code **)(iVar2 + 0x3c))(puVar7[2] + (int)*(short *)(iVar2 + 0x38));
      iVar2 = *(int *)(puVar7[2] + 0x10);
      uVar3 = (**(code **)(iVar2 + 0x44))(puVar7[2] + (int)*(short *)(iVar2 + 0x40),*puVar4,0x10);
      puVar4[3] = uVar3;
    }
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar5);
  puVar6 = puVar8 + 0x11;
  puVar4 = puVar8 + 10;
  iVar5 = 6;
  do {
    if ((int)*puVar4 < 0) {
      *puVar6 = 0;
    }
    else {
      iVar2 = *(int *)(puVar7[3] + 0x10);
      (**(code **)(iVar2 + 0x3c))(puVar7[3] + (int)*(short *)(iVar2 + 0x38));
      iVar2 = *(int *)(puVar7[3] + 0x10);
      uVar3 = (**(code **)(iVar2 + 0x44))(puVar7[3] + (int)*(short *)(iVar2 + 0x40),*puVar4,0x10);
      *puVar6 = uVar3;
    }
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar5);
  if (((*puVar7 >> 2 & 1) != 0) && (*(int *)(uVar1 + 0x6c4c) != 0)) {
    FUN_00104fa8(uVar1,puVar8);
  }
  FUN_001e8a90(param_1,puVar8);
  return;
}

