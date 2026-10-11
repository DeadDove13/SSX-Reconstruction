/* Ghidra pseudocode. PS2 address: 0021b718. Not validated source. */

void FUN_0021b718(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 9;
  puVar4 = &DAT_11004200;
  do {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    iVar6 = iVar6 + -1;
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    uVar1 = puVar4[5];
    uVar2 = puVar4[6];
    uVar3 = puVar4[7];
    param_2[4] = puVar4[4];
    param_2[5] = uVar1;
    param_2[6] = uVar2;
    param_2[7] = uVar3;
    uVar1 = puVar4[9];
    uVar2 = puVar4[10];
    uVar3 = puVar4[0xb];
    param_2[8] = puVar4[8];
    param_2[9] = uVar1;
    param_2[10] = uVar2;
    param_2[0xb] = uVar3;
    uVar1 = puVar4[0xd];
    uVar2 = puVar4[0xe];
    uVar3 = puVar4[0xf];
    param_2[0xc] = puVar4[0xc];
    param_2[0xd] = uVar1;
    param_2[0xe] = uVar2;
    param_2[0xf] = uVar3;
    uVar1 = puVar4[0x11];
    uVar2 = puVar4[0x12];
    uVar3 = puVar4[0x13];
    param_2[0x10] = puVar4[0x10];
    param_2[0x11] = uVar1;
    param_2[0x12] = uVar2;
    param_2[0x13] = uVar3;
    uVar1 = puVar4[0x15];
    uVar2 = puVar4[0x16];
    uVar3 = puVar4[0x17];
    param_2[0x14] = puVar4[0x14];
    param_2[0x15] = uVar1;
    param_2[0x16] = uVar2;
    param_2[0x17] = uVar3;
    uVar1 = puVar4[0x19];
    uVar2 = puVar4[0x1a];
    uVar3 = puVar4[0x1b];
    param_2[0x18] = puVar4[0x18];
    param_2[0x19] = uVar1;
    param_2[0x1a] = uVar2;
    param_2[0x1b] = uVar3;
    uVar1 = puVar4[0x1d];
    uVar2 = puVar4[0x1e];
    uVar3 = puVar4[0x1f];
    param_2[0x1c] = puVar4[0x1c];
    param_2[0x1d] = uVar1;
    param_2[0x1e] = uVar2;
    param_2[0x1f] = uVar3;
    uVar1 = puVar4[0x21];
    uVar2 = puVar4[0x22];
    uVar3 = puVar4[0x23];
    puVar5 = puVar4 + 0x24;
    param_2[0x20] = puVar4[0x20];
    param_2[0x21] = uVar1;
    param_2[0x22] = uVar2;
    param_2[0x23] = uVar3;
    uVar1 = puVar4[0x25];
    uVar2 = puVar4[0x26];
    uVar3 = puVar4[0x27];
    puVar4 = puVar4 + 0x28;
    param_2[0x24] = *puVar5;
    param_2[0x25] = uVar1;
    param_2[0x26] = uVar2;
    param_2[0x27] = uVar3;
    param_2 = param_2 + 0x28;
  } while (-1 < iVar6);
  return;
}

