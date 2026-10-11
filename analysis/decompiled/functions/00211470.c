/* Ghidra pseudocode. PS2 address: 00211470. Not validated source. */

void FUN_00211470(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 auStack_70 [32];
  
  puVar4 = (undefined4 *)param_1;
  *puVar4 = param_2;
  switch(param_2) {
  case 1:
    iVar2 = puVar4[0xf];
    puVar4[puVar4[3] * 5 + 0x55] = DAT_002c5828;
    if (iVar2 != 0) {
      FUN_0023a998(iVar2);
      puVar4[0xf] = 0;
    }
    if (-1 < (int)puVar4[6]) {
      lVar3 = FUN_00251278();
      DAT_002c5828 = (undefined4)lVar3;
      if (-1 < lVar3) {
        FUN_00211470(param_1,2);
      }
      puVar4[6] = 0xffffffff;
    }
    puVar4[8] = 0;
    puVar4[7] = 0xffffffff;
    puVar4[0xe] = 0;
    return;
  case 2:
  case 5:
  case 0xd:
  case 0xf:
  case 0x14:
  case 0x19:
  case 0x1c:
  case 0x26:
  case 0x28:
    goto switchD_002114b0_caseD_2;
  case 3:
    puVar4[0x19] = 0;
    return;
  default:
    if (puVar4[0x13] == 0) {
      FUN_00211c28(param_1,puVar4[3]);
      return;
    }
    return;
  case 6:
    puVar4[0xd] = 0;
    while( true ) {
      if ((int)puVar4[4] <= (int)puVar4[0xd]) {
        return;
      }
      lVar3 = FUN_002122a8(param_1);
      if (lVar3 != 0) break;
      puVar4[0xd] = puVar4[0xd] + 1;
    }
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5860,puVar4 + puVar4[0xd] * 0x1b + 0x5e,0x2bd548);
    FUN_00211470(param_1,7);
    return;
  case 7:
    lVar3 = FUN_00251158(puVar4[3],0,(int)puVar4 + 0xb6,1);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      FUN_002122e8(param_1,puVar4[0xd]);
      goto LAB_00211bd4;
    }
    break;
  case 8:
    lVar3 = FUN_00251278(puVar4[6]);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) goto LAB_00211bd4;
    break;
  case 9:
    lVar3 = FUN_00251428(puVar4[6],0x2987d0,0x3c4);
    DAT_002c5828 = (undefined4)lVar3;
    if (-1 < lVar3) {
      return;
    }
    FUN_002122e8(param_1,puVar4[0xd]);
    FUN_00211470(param_1,0xc);
    return;
  case 10:
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5848,puVar4 + puVar4[0xd] * 0x1b + 0x5e,
                 puVar4 + puVar4[0xd] * 0x1b + 0x5e);
    lVar3 = FUN_002518c8(puVar4[3],0,(int)puVar4 + 0xb6,0,1,puVar4 + 0x210);
    DAT_002c5828 = (undefined4)lVar3;
    goto joined_r0x00211ba8;
  case 0xb:
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5848,puVar4 + puVar4[0xd] * 0x1b + 0x5e,0x2bd4f0);
    lVar3 = FUN_002518c8(puVar4[3],0,(int)puVar4 + 0xb6,0,1,puVar4 + 0x210);
    DAT_002c5828 = (undefined4)lVar3;
joined_r0x00211ba8:
    if (-1 < lVar3) {
      return;
    }
LAB_00211bd4:
    FUN_00211470(param_1,0xd);
    return;
  case 0xc:
    lVar3 = FUN_00251278(puVar4[6]);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_00211bd4;
    }
    break;
  case 0x12:
    lVar3 = FUN_00251500(puVar4[6],puVar4[0xe],puVar4[8]);
    DAT_002c5828 = (undefined4)lVar3;
    puVar4[0xb] = puVar4[8];
    puVar4[0xe] = 0;
    puVar4[8] = 0;
    goto LAB_002119e8;
  case 0x13:
    if ((int)puVar4[6] < 0) {
      FUN_00211470(param_1,0x14);
      return;
    }
    lVar3 = FUN_00251278();
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x17:
    lVar3 = FUN_00251428(puVar4[6],puVar4[0xe],puVar4[8]);
    DAT_002c5828 = (undefined4)lVar3;
    goto LAB_002119e8;
  case 0x18:
    if ((int)puVar4[6] < 0) {
      FUN_00211470(param_1,0x19);
      return;
    }
    lVar3 = FUN_00251278();
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x1d:
    puVar4[0x15] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5850,(int)puVar4 + 0xf6);
    lVar3 = FUN_00251240(puVar4[3],0,(int)puVar4 + 0xb6);
    DAT_002c5828 = (undefined4)lVar3;
    goto LAB_002119e8;
  case 0x1e:
    FUN_0025b630((int)puVar4 + 0x116,0x2bd4e0,(int)puVar4 + 0xf6);
    lVar3 = FUN_00251158(puVar4[3],0,(int)puVar4 + 0x116,0x203);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x1f:
    puVar4[0x10] = 1;
    FUN_0023bbd0(0x2987d0,0,0x3c4);
    DAT_002987d0 = DAT_002c5858;
    DAT_002987d4 = DAT_002c585c;
    FUN_00213130(param_1,0x298890,puVar4 + 0x1b);
    DAT_002987d6 = *(undefined2 *)(puVar4 + 2);
    DAT_002987dc = 0x60;
    FUN_0023bac0(0x2987e0,0x298670,0x40);
    FUN_0023bac0(0x298820,0x2986b0,0x30);
    FUN_0023bac0(0x298850,0x2986e0,0x30);
    FUN_0023bac0(0x298880,0x298710,0x10);
    DAT_002988d4 = DAT_002bd4f0;
    DAT_002988dc = DAT_002bd4f8;
    DAT_00298914 = DAT_002bd500;
    DAT_0029891c = DAT_002bd508;
    DAT_00298954 = DAT_002bd510;
    DAT_0029895c = DAT_002bd518;
    lVar3 = FUN_00251500(puVar4[6],0x2987d0,0x3c4);
    DAT_002c5828 = (undefined4)lVar3;
    puVar4[0xb] = 0x3c4;
    goto LAB_002119e8;
  case 0x20:
    lVar3 = FUN_00251278(puVar4[6]);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x21:
    if (puVar4[0xf] != 0) {
      FUN_0023a998();
      puVar4[0xf] = 0;
    }
    FUN_0025b630(auStack_70,0x2bd520,puVar4[0x10]);
    uVar1 = FUN_00235a70(auStack_70,0x10);
    puVar4[0x12] = uVar1;
    return;
  case 0x22:
    FUN_0025b630((int)puVar4 + 0x116,0x2bd538,(int)puVar4 + 0xf6,puVar4[0x10]);
    lVar3 = FUN_00251158(0,0,(int)puVar4 + 0x116,0x203);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x23:
    lVar3 = FUN_00251500(puVar4[6],puVar4[0xf],puVar4[0x11]);
    DAT_002c5828 = (undefined4)lVar3;
    puVar4[0xb] = puVar4[0x11];
    goto LAB_002119e8;
  case 0x24:
    if (puVar4[0xf] == 0) {
      iVar2 = puVar4[0x10];
    }
    else {
      FUN_0023a998();
      puVar4[0xf] = 0;
      iVar2 = puVar4[0x10];
    }
    puVar4[0x10] = iVar2 + 1;
    lVar3 = FUN_00251278(puVar4[6]);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x25:
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5860,(int)puVar4 + 0xf6,(int)puVar4 + 0xf6);
    lVar3 = FUN_00251158(puVar4[3],0,(int)puVar4 + 0xb6,0x203);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x27:
    puVar4[0x14] = 0;
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5860,(int)puVar4 + 0xf6,(int)puVar4 + 0xf6);
    lVar3 = FUN_00251158(puVar4[3],0,(int)puVar4 + 0xb6,1);
    DAT_002c5828 = (undefined4)lVar3;
    if (lVar3 < 0) {
      puVar4[6] = 0xffffffff;
      goto LAB_002119f4;
    }
    break;
  case 0x29:
    puVar4[puVar4[3] * 5 + 0x55] = 0;
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5860,(int)puVar4 + 0xf6,(int)puVar4 + 0xf6);
    uVar1 = puVar4[3];
    goto LAB_002119d8;
  case 0x2a:
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5860,(int)puVar4 + 0xf6,0x2bd4f0);
    uVar1 = puVar4[3];
    goto LAB_002119d8;
  case 0x2b:
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5860,(int)puVar4 + 0xf6,0x2bd548);
    uVar1 = puVar4[3];
    goto LAB_002119d8;
  case 0x2c:
    FUN_0025b630((int)puVar4 + 0xb6,0x2c5850,(int)puVar4 + 0xf6);
    uVar1 = puVar4[3];
LAB_002119d8:
    lVar3 = FUN_00251bb0(uVar1,0,(int)puVar4 + 0xb6);
    DAT_002c5828 = (undefined4)lVar3;
LAB_002119e8:
    if (-1 < lVar3) {
      return;
    }
LAB_002119f4:
    FUN_00211470(param_1,1);
    return;
  }
  puVar4[6] = 0xffffffff;
switchD_002114b0_caseD_2:
  return;
}

