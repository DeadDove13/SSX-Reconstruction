/* Ghidra pseudocode. PS2 address: 0021dbb8. Not validated source. */

void FUN_0021dbb8(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  FUN_0021dca8();
  param_1[1] = param_3;
  *param_1 = param_2;
  lVar2 = FUN_0023a448(0x2bdde0,param_2 * param_3,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,param_2 * param_3);
  }
  param_1[3] = (int)lVar2;
  puVar1 = (undefined4 *)FUN_0023a448(0x2bddf0,param_2 << 3,0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0023bbd0(puVar1,0xffffffffdeadc0ed,param_2 << 3);
  }
  param_1[2] = (int)puVar1;
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      *puVar1 = 0;
      iVar3 = iVar3 + 1;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    } while (iVar3 < *param_1);
  }
  return;
}

