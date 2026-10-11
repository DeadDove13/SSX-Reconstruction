/* Ghidra pseudocode. PS2 address: 001d48c8. Not validated source. */

void FUN_001d48c8(float param_1,undefined8 param_2,long param_3,int param_4,int param_5,int *param_6
                 )

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (param_5 == 1) {
    iVar5 = 0x47;
  }
  else {
    iVar5 = 0x47;
    if (param_5 == 2) {
      iVar5 = 0x48;
    }
  }
  if (param_4 == 1) {
    lVar4 = 2;
  }
  else {
    lVar4 = 1;
    if (1 < param_4) {
      if (param_4 != 2) {
        puVar2 = (undefined8 *)*param_6;
        goto LAB_001d4924;
      }
      lVar4 = 6;
    }
  }
  puVar2 = (undefined8 *)*param_6;
LAB_001d4924:
  *puVar2 = 0x10000003;
  puVar2[3] = 0x5000000200000000;
  puVar2[4] = 0x1000000000008001;
  puVar2[5] = 0xe;
  *param_6 = (int)(puVar2 + 6);
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_3 == 1) {
    lVar3 = 2;
  }
  else {
    lVar3 = 1;
    if ((param_3 < 2) && (param_3 == 0)) {
      lVar3 = 3;
    }
  }
  puVar1 = (ulong *)*param_6;
  *puVar1 = lVar4 << 1 | lVar3 << 0x11 | (long)(int)(param_1 * 128.0) << 4 | 1U | 0x10000;
  puVar1[1] = (long)iVar5;
  *param_6 = (int)(puVar1 + 2);
  return;
}

