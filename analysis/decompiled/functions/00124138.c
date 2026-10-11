/* Ghidra pseudocode. PS2 address: 00124138. Not validated source. */

undefined8 FUN_00124138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_50 [4];
  
  iVar2 = (int)param_1;
  FUN_001860e8();
  *(undefined **)(iVar2 + 8) = &DAT_002a8eb8;
  FUN_001978a0(param_3,iVar2 + 0x30,0xb0);
  *(int *)(iVar2 + 0xc0) = DAT_00299cf4 + *(int *)(iVar2 + 0xc0);
  uVar1 = FUN_002229b8(0x299cc8,*(undefined4 *)(iVar2 + 0x44));
  *(undefined4 *)(iVar2 + 0xe0) = uVar1;
  FUN_001978a0(param_3,aiStack_50,4);
  if (aiStack_50[0] == -1) {
    *(undefined4 *)(iVar2 + 0xe8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xe8) =
         *(undefined4 *)(*(int *)(DAT_002859e4 + 0x14) + aiStack_50[0] * 4 + 200);
  }
  uVar1 = FUN_00197c30(param_3,param_3);
  *(undefined4 *)(iVar2 + 0xe4) = uVar1;
  return param_1;
}

