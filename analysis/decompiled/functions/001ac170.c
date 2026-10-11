/* Ghidra pseudocode. PS2 address: 001ac170. Not validated source. */

void FUN_001ac170(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (int)param_1;
  iVar4 = 0;
  FUN_001ac988(param_1,0);
  *(undefined4 *)(iVar5 + 0x3fc) = 1;
  if (0 < *(int *)(iVar5 + 0x2d0)) {
    do {
      puVar3 = (undefined4 *)(iVar5 + iVar4 * 0x18 + 0x2d4);
      switch(*puVar3) {
      case 6:
        fVar6 = (float)FUN_00187e00(DAT_002859e4);
        break;
      case 7:
        uVar1 = FUN_00187dc8(DAT_002859e4);
        puVar3[2] = uVar1;
        goto LAB_001ac2d8;
      case 8:
        uVar1 = FUN_00188090(DAT_002859e4);
        puVar3[2] = uVar1;
        goto LAB_001ac2d8;
      case 9:
        puVar3[2] = *(undefined4 *)(DAT_002c56e8 + 0x35f80);
        goto LAB_001ac2d8;
      case 10:
        fVar6 = *(float *)(DAT_002c56e8 + 0x8b6d8);
        break;
      case 0xb:
        fVar6 = *(float *)(DAT_002c56e8 + 0x8b6dc);
        break;
      case 0xc:
        fVar6 = *(float *)(DAT_002c56e8 + 0x8b6e0);
        break;
      default:
        puVar3[2] = 0;
LAB_001ac2d8:
        iVar2 = *(int *)(iVar5 + 0x2d0);
        goto LAB_001ac2dc;
      case 0xf:
        fVar6 = *(float *)(DAT_002c56e8 + 0x8b6e4);
      }
      puVar3[2] = (int)(fVar6 * 50.0);
      iVar2 = *(int *)(iVar5 + 0x2d0);
LAB_001ac2dc:
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  *(undefined4 *)(iVar5 + 0x178) = 0;
  return;
}

