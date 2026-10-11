/* Ghidra pseudocode. PS2 address: 00181950. Not validated source. */

undefined4 FUN_00181950(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_80 [80];
  
  FUN_0025b630(auStack_80,0x2b2eb0,param_2);
  lVar2 = FUN_002368e8(auStack_80);
  if ((lVar2 == 0) || (lVar2 = FUN_002369a0(auStack_80,0), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0023b460(lVar2);
    *(undefined4 *)param_1 = (int)lVar2;
    ((undefined4 *)param_1)[1] = uVar1;
    FUN_001819e0(param_1);
    FUN_00103710(lVar2);
    uVar1 = 1;
  }
  return uVar1;
}

