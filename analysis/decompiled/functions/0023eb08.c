/* Ghidra pseudocode. PS2 address: 0023eb08. Not validated source. */

undefined4
FUN_0023eb08(undefined4 param_1,undefined8 param_2,long param_3,undefined4 param_4,
            undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  
  lVar3 = 0x2000;
  if (param_3 != 0) {
    lVar3 = param_3;
  }
  uVar2 = FUN_0023a448(0x2be938,lVar3,0x10);
  param_6[2] = param_4;
  uStack_94 = (undefined4)lVar3;
  param_6[1] = uStack_94;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[5] = 0;
  param_6[6] = 0;
  puStack_90 = &_mips_gp0_value;
  uStack_98 = (undefined4)uVar2;
  uStack_9c = param_1;
  uStack_8c = param_4;
  lVar3 = CreateThread(auStack_a0);
  param_6[4] = (int)lVar3;
  if (lVar3 == 0) {
    FUN_0023a998(uVar2);
    uVar1 = 0;
  }
  else {
    _StartThread(lVar3,param_2);
    uVar1 = param_6[4];
  }
  return uVar1;
}

