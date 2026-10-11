/* Ghidra pseudocode. PS2 address: 00156388. Not validated source. */

void FUN_00156388(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = (int)param_1;
  iVar2 = iVar4 + 0x1508;
  puVar3 = (undefined4 *)(iVar4 + 0x150c);
  do {
    if (-1 < *(char *)(puVar3 + -1)) {
      *puVar3 = *(undefined4 *)(iVar4 + 0x744 + *(char *)(puVar3 + -1) * 4);
      FUN_00158808(param_1,iVar2,iVar4 + 0x127c);
      *(undefined4 *)(iVar4 + 0x1278) = 1;
      return;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x50;
    puVar3 = puVar3 + 0x14;
  } while (iVar1 < 4);
  return;
}

