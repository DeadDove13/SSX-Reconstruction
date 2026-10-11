/* Ghidra pseudocode. PS2 address: 0018ecf8. Not validated source. */

undefined8 FUN_0018ecf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar2 = (int)param_2;
  if ((*(int *)(iVar2 + 0x14) == 0) || (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_00191e08(param_1,param_2,0,*(undefined4 *)(iVar2 + 0x10),0);
  }
  else {
    FUN_00191e08(&uStack_50,param_2,*(undefined4 *)(iVar2 + 0x10),0);
    uStack_70 = uStack_50;
    uStack_68 = uStack_48;
    FUN_00191e08(&uStack_50,param_2,*(undefined4 *)(iVar2 + 0x10),0,*(undefined4 *)(iVar2 + 0x18));
    uStack_60 = uStack_50;
    uStack_58 = uStack_48;
    uStack_58._0_4_ = (int)uStack_48;
    puVar1 = &uStack_60;
    if ((int)uStack_58 < (int)uStack_68) {
      puVar1 = &uStack_70;
    }
    puVar3 = (undefined4 *)param_1;
    *puVar3 = *(undefined4 *)puVar1;
    puVar3[1] = *(undefined4 *)((int)puVar1 + 4);
    puVar3[2] = *(undefined4 *)(puVar1 + 1);
    puVar3[3] = *(undefined4 *)((int)puVar1 + 0xc);
  }
  return param_1;
}

