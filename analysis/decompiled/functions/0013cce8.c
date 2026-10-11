/* Ghidra pseudocode. PS2 address: 0013cce8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0013cd44) */

void FUN_0013cce8(int param_1)

{
  int iVar1;
  float fVar2;
  
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x6cf4) + 8) == 0x10) &&
     (fVar2 = *(float *)(param_1 + 8) + DAT_002c1f64, *(float *)(param_1 + 8) = fVar2, 1.0 < fVar2))
  {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = FUN_002109e0();
    switch(iVar1 % 0xf) {
    case 0:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x17,0,5);
      return;
    case 1:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x18,0,5);
      return;
    case 2:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0xf,0,5);
      return;
    case 3:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x19,0,5);
      return;
    case 4:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x1a,0,5);
      return;
    case 5:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x1b,0,5);
      return;
    case 6:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x1c,0,5);
      return;
    case 7:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x11,0,5);
      return;
    case 8:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x1d,0,5);
      return;
    case 9:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x1e,0,5);
      return;
    case 10:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x1f,0,5);
      return;
    case 0xb:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x21,0,5);
      return;
    case 0xc:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x22,0,5);
      return;
    case 0xd:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x24,0,5);
      return;
    case 0xe:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6cf4),0x26,0,5);
      return;
    }
  }
  return;
}

