/* Ghidra pseudocode. PS2 address: 00208968. Not validated source. */

undefined8 FUN_00208968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_190 [256];
  
  puVar5 = (undefined4 *)param_1;
  iVar1 = *(int *)(DAT_002c5778 + 0x32000);
  iVar4 = DAT_002c5778 + *(short *)(iVar1 + 0x10);
  lVar3 = FUN_0025bcf8(param_3);
  (**(code **)(iVar1 + 0x14))(iVar4,lVar3 < 0x40,0x2bd1d8,0x2bd1f8,0x23);
  FUN_0025b630(puVar5 + 1,0x2c5780,param_2,param_3);
  FUN_0025b630(auStack_190,0x2c5788,puVar5 + 1);
  lVar3 = FUN_002369a0(auStack_190,0);
  iVar4 = DAT_002c5778;
  puVar5[0x11] = (int)lVar3;
  iVar1 = *(int *)(iVar4 + 0x32000);
  (**(code **)(iVar1 + 0x14))(iVar4 + *(short *)(iVar1 + 0x10),lVar3 != 0,0x2bd220,0x2bd1f8,0x2a);
  uVar2 = FUN_002432a8(puVar5[0x11]);
  *puVar5 = uVar2;
  return param_1;
}

