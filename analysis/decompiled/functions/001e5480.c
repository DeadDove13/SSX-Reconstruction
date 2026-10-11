/* Ghidra pseudocode. PS2 address: 001e5480. Not validated source. */

void FUN_001e5480(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 400) = 0;
  do {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80) <= iVar2) {
LAB_001e54f0:
      if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x44) == 0) {
        *(undefined4 *)(*(int *)(DAT_002859e4 + 0x38) + 0x1c) = *(undefined4 *)(iVar3 + 400);
      }
      *(undefined4 *)(iVar3 + 400) = *(undefined4 *)(*(int *)(DAT_002859e4 + 0x38) + 0x1c);
      FUN_00198a88();
      FUN_001d9840(param_1);
      *(undefined4 *)(iVar3 + 0x188) = 0xffffffff;
      *(undefined4 *)(*(int *)(iVar3 + 0x16c) + 0x24) = 0x110000;
      *(undefined4 *)(iVar3 + 0x28) = 0x12fb88;
      FUN_001d87a8(param_1,0);
      uVar1 = FUN_0015bd28(*(undefined4 *)(DAT_002859e4 + 0xa0));
      *(undefined4 *)(iVar3 + 0x18c) = uVar1;
      DAT_00291648 = 2;
      return;
    }
    if (**(int **)(*(int *)(*(int *)(DAT_002859e4 + 0x14) + iVar2 * 4 + 0x90) + 0x8a0) ==
        DAT_002c5128) {
      *(int *)(iVar3 + 400) = iVar2;
      goto LAB_001e54f0;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

