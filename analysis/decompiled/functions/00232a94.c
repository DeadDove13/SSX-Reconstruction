/* Ghidra pseudocode. PS2 address: 00232a94. Not validated source. */

void FUN_00232a94(uint param_1,float *param_2,undefined2 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  for (uVar1 = param_1 & 3; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    fVar2 = *param_2;
    fVar2 = (float)((int)fVar2 * (uint)(-32768.0 < fVar2) | (uint)(-32768.0 >= fVar2) * -0x39000000)
    ;
    param_1 = param_1 - 1;
    param_2 = param_2 + 1;
    *param_3 = (short)(int)(float)((int)fVar2 * (uint)(fVar2 < 32767.0) |
                                  (uint)(fVar2 >= 32767.0) * 0x46fffe00);
    param_3 = param_3 + 1;
  }
  do {
    fVar3 = *param_2;
    fVar2 = param_2[1];
    fVar5 = param_2[2];
    fVar4 = param_2[3];
    fVar3 = (float)((int)fVar3 * (uint)(-32768.0 < fVar3) | (uint)(-32768.0 >= fVar3) * -0x39000000)
    ;
    fVar2 = (float)((int)fVar2 * (uint)(-32768.0 < fVar2) | (uint)(-32768.0 >= fVar2) * -0x39000000)
    ;
    fVar5 = (float)((int)fVar5 * (uint)(-32768.0 < fVar5) | (uint)(-32768.0 >= fVar5) * -0x39000000)
    ;
    fVar4 = (float)((int)fVar4 * (uint)(-32768.0 < fVar4) | (uint)(-32768.0 >= fVar4) * -0x39000000)
    ;
    param_1 = param_1 - 4;
    param_2 = param_2 + 4;
    *param_3 = (short)(int)(float)((int)fVar3 * (uint)(fVar3 < 32767.0) |
                                  (uint)(fVar3 >= 32767.0) * 0x46fffe00);
    param_3[1] = (short)(int)(float)((int)fVar2 * (uint)(fVar2 < 32767.0) |
                                    (uint)(fVar2 >= 32767.0) * 0x46fffe00);
    param_3[2] = (short)(int)(float)((int)fVar5 * (uint)(fVar5 < 32767.0) |
                                    (uint)(fVar5 >= 32767.0) * 0x46fffe00);
    param_3[3] = (short)(int)(float)((int)fVar4 * (uint)(fVar4 < 32767.0) |
                                    (uint)(fVar4 >= 32767.0) * 0x46fffe00);
    param_3 = param_3 + 4;
  } while (0 < (int)param_1);
  return;
}

