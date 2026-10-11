/* Ghidra pseudocode. PS2 address: 0016f448. Not validated source. */

void FUN_0016f448(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  lVar2 = FUN_0016dd88();
  if (lVar2 != 0) {
    FUN_0016e100(param_3,0xffffffffffffffff);
    fVar4 = 100.0;
    iVar1 = FUN_0016dd88(param_3,0xffffffffffffffff);
    fStack_4c = *(float *)(iVar1 + 0x84) - 400.0;
    uStack_44 = *(undefined4 *)(iVar1 + 0x8c);
    fStack_48 = *(float *)(iVar1 + 0x88) - fVar4;
    uStack_50 = *(undefined4 *)(iVar1 + 0x80);
    uVar3 = FUN_00165b08(param_1,param_2);
    FUN_0016e7e0(uVar3,param_3,(uint)&uStack_50 | 4,(uint)&uStack_50 | 8);
    fStack_48 = fStack_48 + fVar4;
    fStack_4c = fStack_4c + 400.0;
    FUN_0016e2f8(param_3,0xffffffffffffffff,&uStack_50);
  }
  return;
}

