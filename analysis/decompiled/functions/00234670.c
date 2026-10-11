/* Ghidra pseudocode. PS2 address: 00234670. Not validated source. */

int FUN_00234670(int *param_1,long param_2,long param_3,uint param_4,int param_5,undefined8 param_6,
                undefined8 param_7)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uStack_b2;
  int *piStack_b0;
  
  iVar5 = *param_1;
  uStack_b2 = 0;
  piStack_b0 = param_1;
  if ((param_4 & 0x20) == 0) {
    puVar1 = (undefined2 *)FUN_00234640(&uStack_b2,param_2,param_3,param_7);
  }
  else {
    puVar1 = (undefined2 *)FUN_002345e0(&uStack_b2);
  }
  if ((param_4 & 0x18) == 8) {
    for (iVar2 = FUN_00234290(puVar1); iVar2 < param_5; iVar2 = iVar2 + 1) {
      puVar1 = puVar1 + -1;
      *puVar1 = 0x30;
    }
  }
  if ((param_3 == 10) && ((param_4 & 0x20) == 0)) {
    if (param_2 < 0) {
      puVar1 = puVar1 + -1;
      *puVar1 = 0x2d;
    }
    if ((0 < param_2) && ((param_4 & 1) != 0)) {
      puVar1 = puVar1 + -1;
      *puVar1 = 0x2b;
    }
    if ((param_2 == 0) && ((param_4 & 1) != 0)) {
      puVar1 = puVar1 + -1;
      *puVar1 = 0x20;
    }
    if ((-1 < param_2) && ((param_4 & 5) == 4)) {
      puVar1 = puVar1 + -1;
      *puVar1 = 0x20;
    }
  }
  if ((param_3 == 8) && ((param_4 & 2) != 0)) {
    puVar1 = puVar1 + -1;
    *puVar1 = 0x30;
  }
  if ((param_3 == 0x10) && ((param_4 & 2) != 0)) {
    puVar1[-1] = 0x78;
    puVar1 = puVar1 + -2;
    *puVar1 = 0x30;
  }
  if ((param_4 & 0x10) == 0) {
    uVar4 = 0x30;
    if ((param_4 & 8) == 0) {
      uVar4 = 0x20;
    }
    iVar2 = FUN_00234290(puVar1);
    iVar3 = param_5 - iVar2;
    if (iVar2 < param_5) {
      do {
        puVar1 = puVar1 + -1;
        iVar3 = iVar3 + -1;
        *puVar1 = uVar4;
      } while (iVar3 != 0);
    }
  }
  iVar2 = FUN_00234290(puVar1);
  FUN_00234428(iVar5,puVar1);
  puVar1 = (undefined2 *)(iVar5 + iVar2 * 2);
  if (((param_4 & 0x10) != 0) && (iVar2 < param_5)) {
    iVar5 = param_5 - iVar2;
    do {
      *puVar1 = 0x20;
      iVar5 = iVar5 + -1;
      puVar1 = puVar1 + 1;
      iVar2 = param_5;
    } while (iVar5 != 0);
  }
  *piStack_b0 = (int)puVar1;
  return iVar2;
}

