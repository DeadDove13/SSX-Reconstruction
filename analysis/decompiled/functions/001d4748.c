/* Ghidra pseudocode. PS2 address: 001d4748. Not validated source. */

void FUN_001d4748(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  
  if (param_3 == 1) {
    iVar4 = 8;
  }
  else {
    iVar4 = 8;
    if (param_3 != 2) {
      puVar2 = (undefined8 *)*param_4;
      goto LAB_001d477c;
    }
    iVar4 = 9;
  }
  puVar2 = (undefined8 *)*param_4;
LAB_001d477c:
  *puVar2 = 0x10000003;
  puVar2[3] = 0x5000000200000000;
  uVar3 = (ulong)(param_2 == 1);
  puVar2[4] = 0x1000000000008001;
  puVar2[5] = 0xe;
  *param_4 = (int)(puVar2 + 7);
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 == 1) {
    uVar3 = 5;
  }
  plVar1 = (long *)*param_4;
  puVar2[6] = uVar3;
  *plVar1 = (long)iVar4;
  *param_4 = (int)(plVar1 + 1);
  return;
}

