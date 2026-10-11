/* Ghidra pseudocode. PS2 address: 00147f08. Not validated source. */

void FUN_00147f08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f0) = uVar3;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  *(undefined4 *)(param_1 + 0x1e8) = uVar3;
  *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 500) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x208) = 1000;
  piVar1 = (int *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x1dc) = 0x1a6;
  iVar2 = 2;
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) & 0xffff8000;
  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) & 0xffff8000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  do {
    if (*piVar1 != 0) {
      FUN_00147828();
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar2);
  FUN_0023bbd0(param_1 + 0x230,0xffffffffffffffff,6);
  return;
}

