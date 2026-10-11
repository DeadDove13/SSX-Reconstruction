/* Ghidra pseudocode. PS2 address: 001c1be0. Not validated source. */

undefined8 FUN_001c1be0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00185ef0();
  iVar5 = (int)param_1;
  *(undefined **)(iVar5 + 8) = &DAT_002b6ec8;
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      iVar2 = 1;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + -1;
    } while (bVar1);
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  *(undefined4 *)(iVar5 + 0x490) = 0;
  *(undefined4 *)(iVar5 + 0x494) = 0;
  *(undefined4 *)(iVar5 + 0x498) = 0;
  *(undefined4 *)(iVar5 + 0x49c) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x4a0) = 0;
  *(undefined4 *)(iVar5 + 0x4a4) = 0;
  *(undefined4 *)(iVar5 + 0x4a8) = 0xc3960000;
  *(undefined4 *)(iVar5 + 0x4ac) = 0;
  *(undefined4 *)(iVar5 + 0x4b4) = 0x3f000000;
  *(undefined4 *)(iVar5 + 0x4b0) = 0x3e400000;
  *(undefined4 *)(iVar5 + 0x4b8) = 0x43af0000;
  *(undefined4 *)(iVar5 + 0x4bc) = 0x40000000;
  *(undefined4 *)(iVar5 + 0x4c0) = 0x40400000;
  FUN_001c1cf0(param_1);
  return param_1;
}

