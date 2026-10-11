/* Ghidra pseudocode. PS2 address: 0012b3d0. Not validated source. */

undefined8
FUN_0012b3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00122128(param_1,param_2,0xe,param_3);
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002a9430;
  FUN_00129150(iVar2 + 0x40);
  uVar3 = *(undefined4 *)(param_4 + 0xc);
  *(int *)(iVar2 + 0x34) = (int)(*(float *)(param_4 + 8) * 60.0);
  *(undefined4 *)(iVar2 + 0x3c) = uVar3;
  *(undefined4 *)(iVar2 + 0x38) = 0x1e;
  FUN_0012b788(param_1,param_5);
  iVar1 = *(int *)(iVar2 + 0x28);
  *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0xfffffffd | 4;
  FUN_00129170(iVar2 + 0x40,iVar1,0xffffffffffffffff);
  return param_1;
}

