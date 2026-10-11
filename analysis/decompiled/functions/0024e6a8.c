/* Ghidra pseudocode. PS2 address: 0024e6a8. Not validated source. */

void FUN_0024e6a8(int param_1,undefined8 param_2,int param_3,int param_4,long param_5,long param_6,
                 undefined8 param_7,undefined8 param_8,int param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_5 != 1) {
    uVar1 = FUN_0024eec8(1);
    puVar2 = (undefined4 *)(param_4 * 4 + param_3);
    *puVar2 = uVar1;
    FUN_0024e828(param_1 + param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
    uVar1 = FUN_0024eec8(1);
    puVar2[2] = uVar1;
    FUN_0024e828(param_1 + param_4 * 8 + 0x10,param_2,param_7,param_8,param_9,param_10,0);
    return;
  }
  if ((param_6 == 0) && (param_9 == 0)) {
    uVar1 = FUN_0024eec8(1);
    puVar2 = (undefined4 *)(param_4 * 4 + param_3);
    puVar2[2] = uVar1;
    *puVar2 = uVar1;
  }
  puVar2 = (undefined4 *)(param_1 + param_4 * 8);
  FUN_0024e828(puVar2,param_2,param_7,param_8,param_9,param_10,0);
  puVar2[4] = *puVar2;
  puVar2[5] = puVar2[1];
  return;
}

