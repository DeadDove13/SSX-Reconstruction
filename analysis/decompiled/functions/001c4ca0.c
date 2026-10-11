/* Ghidra pseudocode. PS2 address: 001c4ca0. Not validated source. */

void FUN_001c4ca0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1;
  uVar1 = puVar4[0x516];
  FUN_001d3aa0(puVar4[2],puVar4 + 0x516);
  FlushCache(0);
  WaitSema(puVar4[0xab]);
  uVar2 = puVar4[0xab];
  puVar4[0xa4] = puVar4[0x51a];
  puVar4[0xa5] = uVar1;
  puVar4[puVar4[0xa4] + 0xa1] = 2;
  SignalSema(uVar2);
  SignalSema(puVar4[0xaa]);
  iVar3 = puVar4[0x51a];
  puVar4[0x51a] = (uint)(iVar3 == 0);
  iVar3 = puVar4[0x519] + (uint)(iVar3 == 0) * 0x198f80;
  puVar4[0x516] = iVar3;
  puVar4[0x517] = iVar3;
  FUN_001c50b8(param_1);
  FUN_001d2f98(puVar4[2]);
  FUN_001d21d0(*puVar4);
  return;
}

