/* Ghidra pseudocode. PS2 address: 0019e170. Not validated source. */

void FUN_0019e170(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint auStack_60 [4];
  
  puVar2 = (undefined4 *)param_1;
  FUN_00122680(puVar2 + 0xc);
  *puVar2 = 0x30;
  puVar2[1] = 0xdeadbef3;
  FUN_001973f0(param_2,param_1,0x30);
  auStack_60[0] = (uint)(puVar2[0x19] != 0);
  FUN_001973f0(param_2,auStack_60,4);
  if (auStack_60[0] != 0) {
    FUN_001973f0(param_2,puVar2[0x19],0x10);
    FUN_001973f0(param_2,puVar2[0x19] + 200,0xc);
  }
  if ((0 < (int)puVar2[0x17]) && (iVar1 = 0, 0 < (int)puVar2[0x17])) {
    iVar3 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_001d8668(puVar2[0x18] + iVar3,param_2);
      iVar3 = iVar3 + 0x70;
    } while (iVar1 < (int)puVar2[0x17]);
  }
  return;
}

