/* Ghidra pseudocode. PS2 address: 002302e0. Not validated source. */

undefined4 FUN_002302e0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  if (*(uint *)(param_1 + 0xd68) < *(uint *)(param_1 + 0xd60)) {
    iVar2 = *(uint *)(param_1 + 0xd68) + param_2;
    iVar5 = iVar2 - *(uint *)(param_1 + 0xd60);
    *(int *)(param_1 + 0xd68) = iVar2;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    else {
      param_2 = param_2 - iVar5;
    }
    iVar2 = *(int *)(param_1 + 0xd64);
    iVar3 = iVar2;
    if (param_2 < iVar2) {
      iVar3 = param_2;
    }
    param_2 = param_2 - iVar3;
    (**(code **)(param_1 + 0xd54))
              (param_1 + 0xd50,iVar3,param_1 + (0x1b0 - iVar2) * 4 + 0x690,param_4,0);
    puVar4 = (undefined2 *)((int)param_4 + iVar3 * 2);
    *(int *)(param_1 + 0xd64) = *(int *)(param_1 + 0xd64) - iVar3;
    if (0 < param_2) {
      do {
        FUN_00231ef8(param_1 + 0x10,0);
        iVar2 = 0x1b0;
        if (param_2 < 0x1b0) {
          iVar2 = param_2;
        }
        *(undefined4 *)(param_1 + 0xd64) = 0x1b0;
        (**(code **)(param_1 + 0xd54))(param_1 + 0xd50,iVar2,param_1 + 0x690,puVar4,0);
        param_2 = param_2 - iVar2;
        puVar4 = puVar4 + iVar2;
        *(int *)(param_1 + 0xd64) = *(int *)(param_1 + 0xd64) - iVar2;
      } while (0 < param_2);
    }
    uVar1 = 1;
    if (0 < iVar5) {
      do {
        *puVar4 = 0;
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + 1;
      } while (0 < iVar5);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

