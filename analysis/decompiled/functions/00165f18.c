/* Ghidra pseudocode. PS2 address: 00165f18. Not validated source. */

int FUN_00165f18(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if ((DAT_0027bc08 & 1) != 0) {
    FUN_001839d0(0x2852f8,1);
    FUN_001839d0(0x2852f8,0);
  }
  FUN_00167be0(param_1);
  iVar3 = DAT_002c48b0;
  piVar5 = (int *)param_1;
  *piVar5 = 0;
  piVar5[1] = 0;
  if (iVar3 == 0) {
    DAT_002c48b0 = 1;
    FUN_00184088(0x2852f8);
    FUN_00170bb8();
    FUN_00170f50(0x2b0040);
    FUN_001839d0(0x2852f8,1);
    FUN_00170f50(0x2b0058);
    FUN_001839d0(0x2852f8,0);
    FUN_00170c30();
  }
  FUN_001f86c8(DAT_002c56e8);
  if ((DAT_0027bc08 & 8) == 0) {
    if ((DAT_0027bc08 & 0x10) == 0) {
      FUN_001684a8(param_1);
      iVar2 = FUN_00167648(param_1,0);
      iVar3 = *(int *)(iVar2 + 4);
      piVar5[0x122] = iVar2;
      (**(code **)(iVar3 + 0x5c))(iVar2 + *(short *)(iVar3 + 0x58));
    }
    else {
      DAT_0027ba88 = 4;
      FUN_001684f8(param_1,3);
    }
  }
  else {
    FUN_001684f8(param_1,5);
  }
  bVar1 = true;
  FUN_00184088(0x2852f8);
  FUN_00168740(0x295e90);
  FUN_001839d0(0x2852f8,1);
  piVar5[2] = DAT_002859d4;
  do {
    FUN_00146c50(0x2795b8);
    iVar3 = *piVar5;
LAB_00166184:
    do {
      while( true ) {
        if (iVar3 != 0) goto LAB_001661d0;
        lVar4 = FUN_00182580(0x285290);
        if (lVar4 == 0) break;
        bVar1 = false;
        FUN_001681a8(param_1);
        if (piVar5[0x13b] == 1) {
          iVar3 = piVar5[0x122];
        }
        else {
          FUN_001701f0(piVar5[0x122],0xffffffffffffffff);
          FUN_001701f0(piVar5[0x122],0);
          FUN_001701f0(piVar5[0x122],1);
          iVar3 = *(int *)(piVar5[0x122] + 4);
          lVar4 = (**(code **)(iVar3 + 0x34))(piVar5[0x122] + (int)*(short *)(iVar3 + 0x30));
          if (lVar4 == 4) {
            FUN_00168320(param_1);
            piVar5[0x13b] = 1;
          }
          else {
            if (lVar4 != 3) {
              iVar3 = piVar5[0x122];
              goto LAB_0016616c;
            }
            FUN_001682a0(param_1);
            piVar5[0x13b] = 1;
          }
          iVar3 = piVar5[0x122];
          uVar6 = FUN_00165b00();
          *(undefined4 *)(iVar3 + 0xb48) = uVar6;
          iVar3 = piVar5[0x122];
        }
LAB_0016616c:
        (**(code **)(*(int *)(iVar3 + 4) + 100))(iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x60));
        iVar3 = *piVar5;
      }
      iVar3 = *piVar5;
      if (iVar3 != 0) break;
      if (bVar1) {
        iVar3 = *piVar5;
        goto LAB_00166184;
      }
      lVar4 = FUN_001c3a08(0x2913b0);
      iVar3 = *piVar5;
    } while (lVar4 == 0);
    if (iVar3 != 0) {
LAB_001661d0:
      FUN_001839d0(0x2852f8,0);
      return piVar5[1];
    }
    FUN_00168038(param_1);
    FUN_0023e608(0);
    FUN_001665d0(param_1);
  } while( true );
}

