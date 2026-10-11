/* Ghidra pseudocode. PS2 address: 0016f668. Not validated source. */

void FUN_0016f668(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar1 = FUN_0016dd88();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      uVar2 = FUN_00165b08(0,*param_3);
      uVar3 = FUN_00165b08(0,param_3[1]);
      uStack_68 = FUN_00165b08(0,param_3[2]);
      uStack_64 = 0;
      uStack_70 = uVar2;
      uStack_6c = uVar3;
      FUN_0016f538(param_1,0xffffffffffffffff,&uStack_70);
    }
    else {
      uVar2 = FUN_00165b08(*param_3,0);
      uVar3 = FUN_00165b08(param_3[1],0);
      uStack_68 = FUN_00165b08(param_3[2],0);
      uStack_64 = 0;
      uStack_70 = uVar2;
      uStack_6c = uVar3;
      FUN_0016f538(param_1,0xffffffffffffffff,&uStack_70);
    }
  }
  return;
}

