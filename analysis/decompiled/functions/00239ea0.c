/* Ghidra pseudocode. PS2 address: 00239ea0. Not validated source. */

void FUN_00239ea0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00239028();
  puVar3 = (undefined4 *)param_3;
  puVar3[8] = 0;
  if (param_2 == 1) {
    puVar3[2] = puVar3[2] + iVar1;
    puVar3[6] = puVar3[6] + iVar1;
    puVar3[4] = puVar3[4] + iVar1;
    if (iVar1 < (int)puVar3[5]) {
      puVar3[3] = 0;
    }
    else {
      puVar3[3] = puVar3[3] - iVar1;
    }
    if ((int)puVar3[3] < 1) {
      return;
    }
    if ((int)puVar3[3] < 0x8001) {
      puVar3[5] = puVar3[3];
    }
    else {
      puVar3[5] = 0x8000;
    }
    lVar2 = (*(code *)puVar3[7])(puVar3[1],puVar3[2],puVar3[6],puVar3[5],*puVar3,param_3);
    puVar3[8] = (int)lVar2;
    if (lVar2 != 0) {
      FUN_00238ea0(lVar2,0x239ea0);
      return;
    }
  }
  puVar3[3] = 0;
  return;
}

