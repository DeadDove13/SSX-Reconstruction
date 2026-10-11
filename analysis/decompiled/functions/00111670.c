/* Ghidra pseudocode. PS2 address: 00111670. Not validated source. */

undefined4 FUN_00111670(undefined8 param_1,ulong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x178) == 3) {
    if (*(float *)(iVar5 + 0xd8) <= 0.0) {
      return 0;
    }
    *(undefined4 *)(iVar5 + 0x178) = 0;
  }
  if (*(int *)(iVar5 + 0x174) != 0x1a) {
    lVar3 = FUN_00150ee0(*(undefined4 *)(iVar5 + 0x6cf4));
    if (lVar3 != 0) {
      iVar1 = *(int *)(iVar5 + 0x17c);
      if (iVar1 == 0) {
        FUN_001370c8(iVar5 + 0x8370,*(undefined4 *)(*(int *)(iVar5 + 0x6cf4) + 8));
        iVar1 = *(int *)(iVar5 + 0x17c);
      }
      uVar2 = DAT_002c56e8;
      *(int *)(iVar5 + 0x17c) = iVar1 + 1;
      FUN_00200a18(uVar2,param_1);
    }
    if (param_2 == 0) {
      iVar1 = *(int *)(iVar5 + 0x178);
    }
    else if (*(int *)(iVar5 + 0x178) == 0) {
      lVar3 = FUN_00150ee0(*(undefined4 *)(iVar5 + 0x6cf4));
      if (lVar3 == 0) {
        *(undefined4 *)(iVar5 + 0x178) = 2;
        return 1;
      }
      iVar1 = *(int *)(iVar5 + 0x178);
    }
    else {
      iVar1 = *(int *)(iVar5 + 0x178);
    }
    if (param_2 != (iVar1 != 0)) {
      if ((*(int *)(iVar5 + 0x174) != param_3) || (iVar1 != 0)) goto LAB_00111774;
      if (*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar5 + 0x6cf4) + 8) * 0xc) == 0xf) {
        lVar3 = FUN_00150ee0(*(int *)(iVar5 + 0x6cf4));
        if (lVar3 != 0) {
          FUN_00150c60(*(undefined4 *)(iVar5 + 0x6cf4));
          FUN_001371f0(iVar5 + 0x8370,*(undefined4 *)(*(int *)(iVar5 + 0x6cf4) + 8));
          *(undefined4 *)(iVar5 + 0x178) = 1;
          goto LAB_00111a84;
        }
        iVar1 = *(int *)(iVar5 + 0x6cf4);
      }
      else {
        iVar1 = *(int *)(iVar5 + 0x6cf4);
      }
      goto LAB_00111a88;
    }
    if (*(int *)(iVar5 + 0x174) != param_3) {
LAB_00111774:
      FUN_00200a20(DAT_002c56e8,param_1);
      iVar1 = *(int *)(iVar5 + 0x6cf4);
      if (*(int *)(&DAT_002ac2c4 + *(int *)(iVar1 + 8) * 0xc) == 0x10) {
        FUN_00111f90(iVar1,0x10);
      }
      else {
        lVar3 = FUN_00150ee0(iVar1);
        uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
        if (lVar3 == 0) {
          lVar3 = FUN_0014cd18(uVar2,0x52,0,5);
          if (lVar3 == 0x1a6) {
            FUN_001370c8(iVar5 + 0x8370,*(undefined4 *)(*(int *)(iVar5 + 0x6cf4) + 8));
            uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
          }
          else {
            uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
          }
        }
        FUN_00111f90(uVar2,0xf);
      }
      *(undefined4 *)(iVar5 + 0x178) = 0;
      *(undefined4 *)(iVar5 + 0x174) = 0x1a;
      *(undefined4 *)(iVar5 + 0x17c) = 0;
      goto LAB_00111a84;
    }
    goto LAB_0011175c;
  }
  if (param_3 == 0x1a) goto LAB_00111a84;
  lVar3 = 0x1a6;
  if (*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar5 + 0x6cf4) + 8) * 0xc) == 0x10)
  goto LAB_00111a84;
  *(float *)(*(int *)(iVar5 + 0x6cf4) + 0x10) =
       (float)*(byte *)(*(int *)(iVar5 + 0x394) + 0x14) * DAT_002c13c8 * DAT_002c13cc + DAT_002c13d0
  ;
  switch(param_3) {
  case 0:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xb8;
    break;
  case 1:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xb9;
    break;
  case 2:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xba;
    break;
  case 3:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xbb;
    break;
  case 4:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xd1;
    break;
  case 5:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xbc;
    break;
  case 6:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xbd;
    break;
  case 7:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xbe;
    break;
  case 8:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xbf;
    break;
  case 9:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc0;
    break;
  case 10:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc1;
    break;
  case 0xb:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc2;
    break;
  case 0xc:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc3;
    break;
  case 0xd:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc4;
    break;
  case 0xe:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc5;
    break;
  case 0xf:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc6;
    break;
  case 0x10:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 199;
    break;
  case 0x11:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 200;
    break;
  case 0x12:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xc9;
    break;
  case 0x13:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xca;
    break;
  case 0x14:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xcb;
    break;
  case 0x15:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xce;
    break;
  case 0x16:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xcc;
    break;
  case 0x17:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xcd;
    break;
  case 0x18:
    uVar2 = *(undefined4 *)(iVar5 + 0x6cf4);
    uVar4 = 0xcf;
    break;
  case 0x19:
    lVar3 = FUN_0014cd18(*(undefined4 *)(iVar5 + 0x6cf4),0xd0,0,5);
  default:
    goto switchD_001118fc_default;
  }
  lVar3 = FUN_0014cd18(uVar2,uVar4,0,5);
switchD_001118fc_default:
  *(undefined4 *)(*(int *)(iVar5 + 0x6cf4) + 0x10) = 0x3f800000;
  if (lVar3 == 0x1a6) {
LAB_00111a84:
    iVar1 = *(int *)(iVar5 + 0x6cf4);
LAB_00111a88:
    if ((*(int *)(&DAT_002ac2c4 + *(int *)(iVar1 + 8) * 0xc) == 0xf) ||
       (uVar2 = 0, *(int *)(&DAT_002ac2c4 + *(int *)(iVar1 + 8) * 0xc) == 0x10)) {
      lVar3 = FUN_00151070(iVar1,7);
      if (lVar3 == 0) {
LAB_0011175c:
        uVar2 = 1;
      }
      else {
        FUN_001372c8(iVar5 + 0x8370,*(undefined4 *)(*(int *)(iVar5 + 0x6cf4) + 8));
        uVar2 = 1;
      }
    }
  }
  else {
    *(int *)(iVar5 + 0x174) = param_3;
    uVar2 = 1;
    *(undefined4 *)(iVar5 + 0x17c) = 0;
    *(undefined4 *)(iVar5 + 0x178) = 0;
  }
  return uVar2;
}

