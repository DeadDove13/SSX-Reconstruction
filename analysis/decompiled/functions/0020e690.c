/* Ghidra pseudocode. PS2 address: 0020e690. Not validated source. */

undefined8 FUN_0020e690(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined4 *)param_1;
  iVar5 = 7;
  *puVar6 = &DAT_002bd468;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar6[0x28] = 0;
  puVar7 = (undefined8 *)&DAT_00298510;
  iVar5 = 7;
  puVar2 = puVar6;
  do {
    uVar1 = *puVar7;
    uVar3 = *(undefined4 *)(puVar7 + 1);
    uVar4 = *(undefined4 *)((int)puVar7 + 0xc);
    puVar2[4] = (int)uVar1;
    puVar2[5] = (int)((ulong)uVar1 >> 0x20);
    puVar2[6] = uVar3;
    puVar2[7] = uVar4;
    iVar5 = iVar5 + -1;
    puVar7 = puVar7 + 2;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar5);
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  puVar6[0x26] = 0;
  puVar6[0x27] = 0x3f800000;
  return param_1;
}

