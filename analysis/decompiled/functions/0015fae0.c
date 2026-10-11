/* Ghidra pseudocode. PS2 address: 0015fae0. Not validated source. */

void FUN_0015fae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_80 [16];
  
  FUN_00160530(auStack_80,0x2afc80,0x2c4728,0x2c4730);
  iVar2 = FUN_00160570(auStack_80);
  iVar3 = FUN_00160580(auStack_80);
  uVar1 = DAT_002c4738;
  iVar2 = *(int *)(iVar2 + 0x118);
  iVar3 = *(int *)(iVar3 + 0x44);
  *param_1 = *(undefined4 *)(iVar2 + 0xd8);
  *param_5 = uVar1;
  *param_2 = *(undefined4 *)(iVar2 + 0xfc);
  *param_3 = *(undefined4 *)(iVar2 + 200);
  *param_4 = *(undefined4 *)(iVar3 + 0x20);
  FUN_0015f350(auStack_80,2);
  return;
}

