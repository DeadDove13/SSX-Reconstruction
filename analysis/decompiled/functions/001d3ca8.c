/* Ghidra pseudocode. PS2 address: 001d3ca8. Not validated source. */

void FUN_001d3ca8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  FUN_001d3018(param_1,auStack_80);
  puVar1 = (undefined8 *)*(undefined4 *)param_2;
  *puVar1 = 0x10000001;
  puVar1[3] = 0x1000000000000000;
  *(undefined4 *)param_2 = puVar1 + 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_001d49e8(param_1,uStack_74,0,uStack_70,param_2);
  FUN_001d4748(param_1,uStack_6c,1,param_2);
  FUN_001d44d0(param_1,uStack_68,1,param_2);
  FUN_001d4800(param_1,uStack_64,1,param_2);
  FUN_001d48c8(uStack_58,param_1,uStack_60,uStack_5c,1,param_2);
  FUN_001d4748(param_1,uStack_54,2,param_2);
  FUN_001d44d0(param_1,uStack_50,2,param_2);
  FUN_001d4800(param_1,uStack_4c,2,param_2);
  FUN_001d48c8(uStack_40,param_1,uStack_48,uStack_44,2,param_2);
  return;
}

