/* Ghidra pseudocode. PS2 address: 00130f28. Not validated source. */

void FUN_00130f28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2aa108);
  FUN_0012fe30(param_2);
  iVar4 = (int)param_2;
  iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x394) + 0x24);
  if (iVar1 != 3) {
    if (iVar1 < 4) {
      if (iVar1 == 2) {
        uVar2 = FUN_002109b0();
        uVar2 = uVar2 & 1;
        puVar3 = &DAT_002c4130;
        goto LAB_00130ff4;
      }
    }
    else {
      if (iVar1 == 4) {
        uVar2 = FUN_002109b0();
        puVar3 = &DAT_002c4120;
        uVar2 = uVar2 & 1;
        goto LAB_00130ff4;
      }
      if (iVar1 == 6) {
        uVar2 = FUN_002109b0();
        puVar3 = &DAT_002c4128;
        uVar2 = uVar2 & 1;
        goto LAB_00130ff4;
      }
    }
  }
  uVar2 = FUN_002109b0();
  puVar3 = &DAT_002c4118;
  uVar2 = uVar2 & 1;
LAB_00130ff4:
  FUN_0014cd18(*(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x6cf4),*(undefined4 *)(puVar3 + uVar2 * 4),
               0,5);
  if (*(int *)(*(int *)(*(int *)(iVar4 + 0x40) + 0x394) + 0x24) != 1) {
    *(undefined4 *)(iVar4 + 0x3c) = 1;
  }
  FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),10,0xffffffffffffffff);
  return;
}

