/* Ghidra pseudocode. PS2 address: 0023b924. Not validated source. */

uint FUN_0023b924(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0xfb;
  uVar3 = 0xea;
  while (-1 < param_2 + -4) {
    uVar4 = (uint)param_1[1] ^ (byte)(&DAT_002a3408)[*param_1 ^ uVar3] ^ uVar4;
    bVar1 = param_1[2] ^ (&DAT_002a3408)[uVar4] ^ (&DAT_002a3508)[*param_1 ^ uVar3];
    bVar2 = param_1[3] ^ (&DAT_002a3408)[bVar1] ^ (&DAT_002a3508)[uVar4];
    uVar4 = (uint)(byte)(&DAT_002a3508)[bVar2];
    uVar3 = (uint)(byte)((&DAT_002a3408)[bVar2] ^ (&DAT_002a3508)[bVar1]);
    param_1 = param_1 + 4;
    param_2 = param_2 + -4;
  }
  while (param_2 = param_2 + -1, -1 < param_2) {
    uVar5 = *param_1 ^ uVar3;
    uVar3 = (byte)(&DAT_002a3408)[uVar5] ^ uVar4;
    param_1 = param_1 + 1;
    uVar4 = (uint)(byte)(&DAT_002a3508)[uVar5];
  }
  return uVar3 | uVar4 << 8;
}

