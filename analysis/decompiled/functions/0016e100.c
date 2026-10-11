/* Ghidra pseudocode. PS2 address: 0016e100. Not validated source. */

void FUN_0016e100(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = FUN_0016dd88();
  puVar1 = *(undefined8 **)(iVar2 + 0x4c);
  *(undefined8 *)(iVar2 + 0x50) = *puVar1;
  *(undefined8 *)(iVar2 + 0x58) = puVar1[1];
  *(undefined8 *)(iVar2 + 0x60) = puVar1[2];
  *(undefined8 *)(iVar2 + 0x68) = puVar1[3];
  *(undefined8 *)(iVar2 + 0x70) = puVar1[4];
  *(undefined8 *)(iVar2 + 0x78) = puVar1[5];
  *(undefined8 *)(iVar2 + 0x80) = puVar1[6];
  *(undefined8 *)(iVar2 + 0x88) = puVar1[7];
  return;
}

