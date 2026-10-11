/* Ghidra pseudocode. PS2 address: 0017ee28. Not validated source. */

void FUN_0017ee28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0016dd88();
  iVar2 = FUN_0016dd88(param_1,param_3);
  *(undefined4 *)
   (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x4c) + 0xcc) * 8 + DAT_00299ce0) + 0x24) + 0x24) =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x4c) + 0xcc) * 8 + DAT_00299ce0) + 0x24) +
        0x24);
  return;
}

