/* Ghidra pseudocode. PS2 address: 00192e80. Not validated source. */

void FUN_00192e80(undefined8 param_1,int *param_2)

{
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iStack_50 = *param_2;
  iStack_4c = param_2[1];
  iStack_48 = param_2[2];
  iStack_44 = param_2[3];
  FUN_00192200(param_1,&iStack_50,*(undefined4 *)((int)param_1 + 0x14),0,0);
  FUN_00168720(0x28ad30,*(undefined4 *)((int)param_1 + 0x10));
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,0);
  iStack_44 = 0x17;
  iStack_4c = param_2[1] + 4;
  iStack_50 = *param_2 + param_2[2] + -0x21;
  iStack_48 = 0x17;
  FUN_00193018(0x28ad30,&iStack_50);
  return;
}

