/* Ghidra pseudocode. PS2 address: 00197e00. Not validated source. */

void FUN_00197e00(undefined8 param_1,int param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  uint uStack_18;
  
  if (param_3 == 0) {
    uStack_18 = 0;
    uStack_20 = CONCAT22(0xffff,(undefined2)uStack_20);
    uStack_1c = 0;
  }
  else {
    iVar1 = (int)param_3;
    uStack_1c = *(undefined2 *)(iVar1 + 0xe8);
    uStack_20 = *(undefined4 *)(iVar1 + 0xc0);
    uStack_18 = (uint)(*(int *)(iVar1 + 0x100) == param_2);
  }
  FUN_001973f0(param_4,&uStack_20,0xc);
  return;
}

