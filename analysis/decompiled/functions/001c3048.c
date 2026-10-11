/* Ghidra pseudocode. PS2 address: 001c3048. Not validated source. */

void FUN_001c3048(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  puVar1 = &DAT_002962a8;
  iVar6 = 0;
  puVar4 = &DAT_0029632c;
  *(undefined4 *)(param_1 + 0x210) = 6;
  *(undefined **)(param_1 + 0x218) = &DAT_002962a8;
  do {
    if (*(int *)(puVar1 + 0x88) == 2) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = 0x20;
      if (*(int *)(puVar1 + 0x88) == 1) {
        uVar5 = 0x18;
      }
    }
    iVar6 = iVar6 + 1;
    iVar2 = FUN_001c2f98(puVar4[-1],*puVar4,puVar4[1],puVar4[2]);
    uVar3 = FUN_00258948((float)(iVar2 << 8) * 0.0009765625);
    FUN_0025b630(puVar1,0x2b70c0,puVar4[-1],*puVar4,uVar5,uVar3);
    puVar4 = puVar4 + 0x25;
    puVar1 = puVar1 + 0x94;
  } while (iVar6 < *(int *)(param_1 + 0x210));
  return;
}

