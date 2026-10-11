/* Ghidra pseudocode. PS2 address: 00261690. Not validated source. */

undefined8 FUN_00261690(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((param_3 & 3) != 0) {
    param_2 = FUN_00261080(param_1,param_2,*(undefined4 *)(&DAT_002c08d0 + ((param_3 & 3) - 1) * 4),
                           0);
  }
  param_3 = (int)param_3 >> 2;
  if (param_3 != 0) {
    puVar1 = *(undefined4 **)((int)param_1 + 0x48);
    uVar3 = param_2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_00261428(param_1,0x271);
      *(undefined4 **)((int)param_1 + 0x48) = puVar1;
      *puVar1 = 0;
    }
    while( true ) {
      puVar2 = puVar1;
      param_2 = uVar3;
      if ((param_3 & 1) != 0) {
        param_2 = FUN_00261460(param_1,uVar3,puVar2);
        FUN_00261050(param_1,uVar3);
      }
      param_3 = (int)param_3 >> 1;
      if (param_3 == 0) break;
      uVar3 = param_2;
      puVar1 = (undefined4 *)*puVar2;
      if ((undefined4 *)*puVar2 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_00261460(param_1,puVar2,puVar2);
        *puVar2 = puVar1;
        *puVar1 = 0;
      }
    }
  }
  return param_2;
}

