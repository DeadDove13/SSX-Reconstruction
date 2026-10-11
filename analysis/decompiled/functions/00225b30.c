/* Ghidra pseudocode. PS2 address: 00225b30. Not validated source. */

undefined8 FUN_00225b30(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_100 [160];
  int aiStack_60 [4];
  
  aiStack_60[0] = param_1 + 4;
  do {
    lVar1 = FUN_002297d0(aiStack_60,auStack_100);
    FUN_0022cc68(auStack_100,param_2,param_3);
    FUN_002256a8(auStack_100,0);
  } while (lVar1 != 0);
  return 0;
}

