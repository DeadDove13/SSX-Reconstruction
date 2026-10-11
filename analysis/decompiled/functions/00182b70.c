/* Ghidra pseudocode. PS2 address: 00182b70. Not validated source. */

void FUN_00182b70(int param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char acStack_80 [2];
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x5c) == 0) {
    lVar5 = FUN_00246bf0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                         param_1 + 0xc0);
    if (lVar5 == 1) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
      goto LAB_00182bc8;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
LAB_00182bc8:
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  lVar5 = FUN_00246ed0(uVar2,*(undefined4 *)(param_1 + 0x3c));
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
  }
  switch(uVar2) {
  case 1:
    if (lVar5 == 6) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      lVar5 = FUN_002472b0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),1,0);
      if (lVar5 != 0) {
        lVar6 = FUN_002472b0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),2,0);
        if (lVar6 == 4) {
          *(undefined4 *)(param_1 + 0x5c) = 2;
        }
        else if (lVar6 < 5) {
          if ((lVar6 == 0) && (lVar5 == 4)) {
            *(undefined4 *)(param_1 + 0x5c) = 10;
          }
        }
        else if (lVar6 == 7) {
          *(undefined4 *)(param_1 + 0x4c) = 1;
          *(undefined4 *)(param_1 + 0x5c) = 2;
        }
      }
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0x54)) {
      if ((*(int *)(param_1 + 0x58) != 0) || (*(int *)(param_1 + 0x40) == 0)) {
        uVar7 = 2;
        if (*(int *)(param_1 + 0x58) != 0) {
          uVar7 = 3;
        }
        lVar5 = FUN_002473b8(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                             *(int *)(param_1 + 0x54) != 0,uVar7);
        if (lVar5 == 1) {
          *(undefined4 *)(param_1 + 0x5c) = 3;
        }
        break;
      }
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 7;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 4;
    }
    break;
  case 3:
    lVar5 = FUN_00246ed0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    if (lVar5 != 5) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    break;
  case 4:
    lVar5 = FUN_002476f0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    if (lVar5 == 1) {
LAB_00182dac:
      *(undefined4 *)(param_1 + 0x5c) = 5;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 10;
    }
    break;
  case 5:
    lVar5 = FUN_00247720(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    uVar2 = 6;
    if (lVar5 == 1) {
      *(undefined4 *)(param_1 + 0x60) = 0;
LAB_00182e2c:
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
    }
    break;
  case 6:
    lVar5 = FUN_00247038(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    if (lVar5 == 1) goto LAB_00182dac;
    if (lVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar3;
      if (4 < iVar3) {
        *(undefined4 *)(param_1 + 0x48) = 1;
        *(undefined4 *)(param_1 + 0x5c) = 7;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    break;
  case 7:
    lVar5 = FUN_002470d8(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                         0xffffffffffffffff,0);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 10;
    }
    else {
LAB_00182e50:
      *(undefined4 *)(param_1 + 0x5c) = 8;
    }
    break;
  case 8:
    lVar5 = FUN_00247500(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),0x2c4d88);
    uVar2 = 9;
    if (lVar5 == 1) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      goto LAB_00182e2c;
    }
    break;
  case 9:
    lVar5 = FUN_00247038(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    if (lVar5 == 1) goto LAB_00182e50;
    if (lVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar3;
      if (4 < iVar3) {
        *(undefined4 *)(param_1 + 0x50) = 1;
        *(undefined4 *)(param_1 + 0x5c) = 10;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    break;
  case 10:
    lVar5 = FUN_00246e40(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),acStack_80)
    ;
    if ((lVar5 == 0) || (acStack_80[0] != '\0')) {
      *(undefined4 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
      bVar1 = true;
    }
  }
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  else {
    puVar8 = (undefined1 *)param_2;
    if (bVar1) {
      *(undefined4 *)(puVar8 + 0x10) = 1;
      *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(param_1 + 0x4c);
      iVar3 = *(int *)(param_1 + 0x48);
      *(ushort *)(puVar8 + 0x18) = ~CONCAT11(uStack_7e,uStack_7d);
      *(uint *)(puVar8 + 0x24) = (uint)bStack_7c;
      *(uint *)(puVar8 + 0x28) = (uint)bStack_7b;
      *(uint *)(puVar8 + 0x1c) = (uint)bStack_7a;
      *(uint *)(puVar8 + 0x20) = (uint)bStack_79;
      if (iVar3 == 0) {
        FUN_0023bbd0(param_2,0,0x10);
        iVar3 = *(int *)(param_1 + 0x5c);
        goto LAB_00182fc0;
      }
      *puVar8 = uStack_76;
      puVar8[1] = uStack_75;
      puVar8[2] = uStack_78;
      puVar8[3] = uStack_77;
      puVar8[4] = uStack_71;
      puVar8[5] = uStack_74;
      puVar8[6] = uStack_73;
      puVar8[9] = uStack_70;
      puVar8[10] = uStack_6f;
      puVar8[0xb] = uStack_72;
      puVar8[0xc] = uStack_6e;
      puVar8[0xd] = uStack_6d;
      puVar8[0xf] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[0xe] = 0;
    }
    else {
      FUN_0023bbd0(param_2,0,0x2c);
      if (*(int *)(param_1 + 0x40) != 0) {
        *(undefined4 *)(puVar8 + 0x10) = 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x5c);
  }
LAB_00182fc0:
  iVar4 = -1;
  if (iVar3 == 10) {
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 < 1) {
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x7c) = 1;
        *(undefined1 *)(param_1 + 0x74) = 0;
        goto LAB_00183000;
      }
      iVar4 = *(int *)(param_1 + 0x84);
    }
    else {
      *(int *)(param_1 + 0x80) = iVar3 + -1;
LAB_00183000:
      iVar4 = *(int *)(param_1 + 0x84);
    }
    if (iVar4 < 1) {
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x7c) = 1;
        *(undefined1 *)(param_1 + 0x75) = 0;
      }
      goto LAB_00183040;
    }
    iVar4 = iVar4 + -1;
  }
  else {
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  *(int *)(param_1 + 0x84) = iVar4;
LAB_00183040:
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00247468(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}

