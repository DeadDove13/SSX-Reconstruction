/* Ghidra pseudocode. PS2 address: 002666f0. Not validated source. */

undefined8
FUN_002666f0(uint param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
            uint param_6,long param_7)

{
  undefined8 uVar1;
  uint *puVar2;
  int iVar3;
  uint auStack_90 [8];
  
  if ((uint)param_4 - 0x10 < 0x61) {
    iVar3 = 0;
    puVar2 = (uint *)param_3;
    if (param_7 < 1) {
      puVar2[1] = 0;
      *puVar2 = (uint)(byte)*puVar2;
    }
    else {
      auStack_90[2] = (uint)param_7;
      puVar2[1] = param_6;
      iVar3 = 1;
      *puVar2 = (uint)(byte)*puVar2 | auStack_90[2] << 8;
      auStack_90[3] = 0;
      auStack_90[0] = param_5;
      auStack_90[1] = param_6;
      if ((param_2 & 4) != 0) {
        FUN_002669d0();
      }
    }
    auStack_90[iVar3 * 4] = (uint)puVar2;
    auStack_90[iVar3 * 4 + 1] = DAT_002d5a20;
    puVar2[2] = param_1;
    auStack_90[iVar3 * 4 + 2] = (uint)param_4;
    *(byte *)puVar2 = (byte)param_4;
    auStack_90[iVar3 * 4 + 3] = 0x44;
    FUN_002669d0(param_3,param_4);
    if ((param_2 & 1) == 0) {
      uVar1 = sceSifSetDma(auStack_90,iVar3 + 1);
    }
    else {
      uVar1 = isceSifSetDma(auStack_90);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

