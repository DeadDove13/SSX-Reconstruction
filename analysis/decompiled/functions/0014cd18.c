/* Ghidra pseudocode. PS2 address: 0014cd18. Not validated source. */

long FUN_0014cd18(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = 0x1a6;
  uVar2 = FUN_0014bfe0();
  iVar1 = *(int *)(param_1 + 0x3d4);
  *(int *)((int)uVar2 + 0x1dc) = (int)param_2;
  (**(code **)(iVar1 + 0xc))(param_1 + *(short *)(iVar1 + 8),uVar2);
  uVar4 = 0;
  switch(param_2) {
  case 0:
    lVar5 = FUN_001497f8(param_1 + 0x3d8,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac2c0);
    goto LAB_0014fda0;
  case 1:
    lVar5 = FUN_001498d8(param_1 + 0x3e0,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac2cc);
    goto LAB_0014fda0;
  case 2:
    uVar4 = 0x2ac2d8;
    break;
  case 3:
    uVar4 = 0x2ac2e4;
    break;
  case 4:
    uVar4 = 0x2ac2f0;
    break;
  case 5:
    uVar4 = 0x2ac2fc;
    break;
  case 6:
    uVar4 = 0x2ac308;
    break;
  case 7:
    uVar4 = 0x2ac314;
    break;
  case 8:
    uVar4 = 0x2ac320;
    break;
  case 9:
    uVar4 = 0x2ac32c;
    break;
  case 10:
    uVar4 = 0x2ac338;
    break;
  case 0xb:
    uVar4 = 0x2ac344;
    break;
  case 0xc:
    uVar4 = 0x2ac350;
    break;
  case 0xd:
    uVar4 = 0x2ac35c;
    break;
  case 0xe:
    uVar4 = 0x2ac368;
    break;
  case 0xf:
    uVar4 = 0x2ac374;
    break;
  case 0x10:
    uVar4 = 0x2ac380;
    break;
  case 0x11:
    uVar4 = 0x2ac38c;
    break;
  case 0x12:
    uVar4 = 0x2ac398;
    break;
  case 0x13:
    uVar4 = 0x2ac3a4;
    break;
  case 0x14:
    uVar4 = 0x2ac3b0;
    break;
  case 0x15:
    uVar4 = 0x2ac3bc;
    break;
  case 0x16:
    uVar4 = 0x2ac3c8;
    break;
  case 0x17:
    uVar4 = 0x2ac3d4;
    break;
  case 0x18:
    uVar4 = 0x2ac3e0;
    break;
  case 0x19:
    uVar4 = 0x2ac3ec;
    break;
  case 0x1a:
    uVar4 = 0x2ac3f8;
    break;
  case 0x1b:
    uVar4 = 0x2ac404;
    break;
  case 0x1c:
    uVar4 = 0x2ac410;
    break;
  case 0x1d:
    uVar4 = 0x2ac41c;
    break;
  case 0x1e:
    uVar4 = 0x2ac428;
    break;
  case 0x1f:
    uVar4 = 0x2ac434;
    break;
  case 0x20:
    uVar4 = 0x2ac440;
    break;
  case 0x21:
    uVar4 = 0x2ac44c;
    break;
  case 0x22:
    uVar4 = 0x2ac458;
    break;
  case 0x23:
    uVar4 = 0x2ac464;
    break;
  case 0x24:
    uVar4 = 0x2ac470;
    break;
  case 0x25:
    uVar4 = 0x2ac47c;
    break;
  case 0x26:
    uVar4 = 0x2ac488;
    break;
  case 0x27:
    uVar4 = 0x2ac494;
    break;
  case 0x28:
    uVar4 = 0x2ac4a0;
    break;
  case 0x29:
    uVar4 = 0x2ac4ac;
    break;
  case 0x2a:
    uVar4 = 0x2ac4b8;
    break;
  case 0x2b:
    uVar4 = 0x2ac4c4;
    break;
  case 0x2c:
    uVar4 = 0x2ac4d0;
    break;
  case 0x2d:
    uVar4 = 0x2ac4dc;
    break;
  case 0x2e:
    uVar4 = 0x2ac4e8;
    break;
  case 0x2f:
    uVar4 = 0x2ac4f4;
    break;
  case 0x30:
    uVar4 = 0x2ac500;
    break;
  case 0x31:
    uVar4 = 0x2ac50c;
    break;
  case 0x32:
    uVar4 = 0x2ac518;
    break;
  case 0x33:
    uVar4 = 0x2ac524;
    break;
  case 0x34:
    lVar5 = FUN_00149868(param_1 + 0x3dc,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac530);
    goto LAB_0014d738;
  case 0x35:
    uVar4 = 0x2ac53c;
    goto LAB_0014d728;
  case 0x36:
    uVar4 = 0x2ac548;
    goto LAB_0014d728;
  case 0x37:
    uVar4 = 0x2ac554;
    goto LAB_0014d728;
  case 0x38:
    uVar4 = 0x2ac560;
    goto LAB_0014d728;
  case 0x39:
    uVar4 = 0x2ac56c;
    goto LAB_0014d728;
  case 0x3a:
    lVar5 = FUN_00149b98(param_1 + 1000,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac578);
    goto LAB_0014d5dc;
  case 0x3b:
    lVar5 = FUN_00149b98(param_1 + 1000,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac584);
    goto LAB_0014d5dc;
  case 0x3c:
    lVar5 = FUN_00149a90(param_1 + 0x3ec,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac590);
    goto LAB_0014d5dc;
  case 0x3d:
    lVar5 = FUN_00149a90(param_1 + 0x3ec,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac59c);
    goto LAB_0014d5dc;
  case 0x3e:
    lVar5 = FUN_00149a90(param_1 + 0x3ec,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac5a8);
    goto LAB_0014d5dc;
  case 0x3f:
    uVar4 = 0x2ac5b4;
    goto LAB_0014d5cc;
  case 0x40:
    uVar4 = 0x2ac5c0;
    goto LAB_0014d5cc;
  case 0x41:
    uVar4 = 0x2ac5cc;
    goto LAB_0014d5cc;
  case 0x42:
    uVar4 = 0x2ac5d8;
    goto LAB_0014d5cc;
  case 0x43:
    uVar4 = 0x2ac5e4;
    goto LAB_0014d5cc;
  case 0x44:
    lVar5 = FUN_00149c78(param_1 + 0x3f0,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac5f0);
    goto LAB_0014d5dc;
  case 0x45:
    uVar4 = 0x2ac5fc;
LAB_0014d5cc:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
LAB_0014d5dc:
    uVar4 = 6;
    goto switchD_0014cd90_default;
  case 0x46:
    uVar4 = 0x2ac608;
    goto LAB_0014d6f8;
  case 0x47:
    uVar4 = 0x2ac614;
    goto LAB_0014d6f8;
  case 0x48:
    uVar4 = 0x2ac620;
    goto LAB_0014d6f8;
  case 0x49:
    uVar4 = 0x2ac62c;
    goto LAB_0014d6f8;
  case 0x4a:
    uVar4 = 0x2ac638;
    goto LAB_0014d6f8;
  case 0x4b:
    uVar4 = 0x2ac644;
    goto LAB_0014d6f8;
  case 0x4c:
    uVar4 = 0x2ac650;
    goto LAB_0014d6f8;
  case 0x4d:
    uVar4 = 0x2ac65c;
    goto LAB_0014d6f8;
  case 0x4e:
    uVar4 = 0x2ac668;
    goto LAB_0014d6f8;
  case 0x4f:
    uVar4 = 0x2ac674;
LAB_0014d6f8:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 7;
    goto switchD_0014cd90_default;
  case 0x50:
    uVar4 = 0x2ac680;
LAB_0014d728:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
LAB_0014d738:
    uVar4 = 2;
    goto switchD_0014cd90_default;
  case 0x51:
    uVar4 = 0x2ac68c;
    goto LAB_0014d7ac;
  case 0x52:
    uVar4 = 0x2ac698;
    goto LAB_0014d7ac;
  case 0x53:
    uVar4 = 0x2ac6a4;
    goto LAB_0014d7ac;
  case 0x54:
    uVar4 = 0x2ac6b0;
LAB_0014d7ac:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0;
    goto switchD_0014cd90_default;
  case 0x55:
    uVar4 = 0x2ac6bc;
    goto LAB_0014e354;
  case 0x56:
    uVar4 = 0x2ac6c8;
    goto LAB_0014e354;
  case 0x57:
    uVar4 = 0x2ac6d4;
    goto LAB_0014e354;
  case 0x58:
    uVar4 = 0x2ac6e0;
    goto LAB_0014e354;
  case 0x59:
    uVar4 = 0x2ac6ec;
    goto LAB_0014e354;
  case 0x5a:
    uVar4 = 0x2ac6f8;
    goto LAB_0014e354;
  case 0x5b:
    uVar4 = 0x2ac704;
    goto LAB_0014e354;
  case 0x5c:
    uVar4 = 0x2ac710;
    goto LAB_0014e354;
  case 0x5d:
    uVar4 = 0x2ac71c;
    goto LAB_0014d980;
  case 0x5e:
    uVar4 = 0x2ac728;
    goto LAB_0014d980;
  case 0x5f:
    uVar4 = 0x2ac734;
    goto LAB_0014d980;
  case 0x60:
    uVar4 = 0x2ac740;
    goto LAB_0014d980;
  case 0x61:
    uVar4 = 0x2ac74c;
    goto LAB_0014d980;
  case 0x62:
    uVar4 = 0x2ac758;
    goto LAB_0014d980;
  case 99:
    uVar4 = 0x2ac764;
    goto LAB_0014d980;
  case 100:
    uVar4 = 0x2ac770;
LAB_0014d980:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0xd;
    goto switchD_0014cd90_default;
  case 0x65:
    uVar4 = 0x2ac77c;
    goto LAB_0014e354;
  case 0x66:
    uVar4 = 0x2ac788;
    goto LAB_0014e354;
  case 0x67:
    uVar4 = 0x2ac794;
    goto LAB_0014e354;
  case 0x68:
    uVar4 = 0x2ac7a0;
    goto LAB_0014e354;
  case 0x69:
    uVar4 = 0x2ac7ac;
    goto LAB_0014e354;
  case 0x6a:
    uVar4 = 0x2ac7b8;
    goto LAB_0014e354;
  case 0x6b:
    uVar4 = 0x2ac7c4;
    goto LAB_0014e354;
  case 0x6c:
    uVar4 = 0x2ac7d0;
    goto LAB_0014e354;
  case 0x6d:
    lVar5 = FUN_001499e0(param_1 + 0x3e4,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac7dc);
    goto LAB_0014db3c;
  case 0x6e:
    uVar4 = 0x2ac7e8;
    goto LAB_0014db2c;
  case 0x6f:
    uVar4 = 0x2ac7f4;
    goto LAB_0014db2c;
  case 0x70:
    uVar4 = 0x2ac800;
    goto LAB_0014db2c;
  case 0x71:
    uVar4 = 0x2ac80c;
    goto LAB_0014db2c;
  case 0x72:
    uVar4 = 0x2ac818;
LAB_0014db2c:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
LAB_0014db3c:
    uVar4 = 8;
    goto switchD_0014cd90_default;
  case 0x73:
    uVar4 = 0x2ac824;
    goto LAB_0014dbe8;
  case 0x74:
    uVar4 = 0x2ac830;
    goto LAB_0014dbe8;
  case 0x75:
    uVar4 = 0x2ac83c;
    goto LAB_0014dbe8;
  case 0x76:
    uVar4 = 0x2ac848;
    goto LAB_0014dbe8;
  case 0x77:
    uVar4 = 0x2ac854;
    goto LAB_0014dbe8;
  case 0x78:
    uVar4 = 0x2ac860;
LAB_0014dbe8:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 1;
    goto switchD_0014cd90_default;
  case 0x79:
    uVar4 = 0x2ac86c;
    goto LAB_0014ddec;
  case 0x7a:
    uVar4 = 0x2ac878;
    goto LAB_0014ddec;
  case 0x7b:
    uVar4 = 0x2ac884;
    goto LAB_0014ddec;
  case 0x7c:
    uVar4 = 0x2ac890;
    goto LAB_0014dd30;
  case 0x7d:
    uVar4 = 0x2ac89c;
    goto LAB_0014dd30;
  case 0x7e:
    uVar4 = 0x2ac8a8;
    goto LAB_0014dd30;
  case 0x7f:
    uVar4 = 0x2ac8b4;
    goto LAB_0014dd30;
  case 0x80:
    uVar4 = 0x2ac8c0;
    goto LAB_0014dd30;
  case 0x81:
    uVar4 = 0x2ac8cc;
    goto LAB_0014dd30;
  case 0x82:
    uVar4 = 0x2ac8d8;
    goto LAB_0014dd30;
  case 0x83:
    uVar4 = 0x2ac8e4;
LAB_0014dd30:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0x11;
    goto switchD_0014cd90_default;
  case 0x84:
    uVar4 = 0x2ac8f0;
    goto LAB_0014ddec;
  case 0x85:
    uVar4 = 0x2ac8fc;
    goto LAB_0014ddec;
  case 0x86:
    uVar4 = 0x2ac908;
    goto LAB_0014ddec;
  case 0x87:
    uVar4 = 0x2ac914;
    goto LAB_0014ddec;
  case 0x88:
    uVar4 = 0x2ac920;
    goto LAB_0014ddec;
  case 0x89:
    uVar4 = 0x2ac92c;
LAB_0014ddec:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0x12;
    goto switchD_0014cd90_default;
  case 0x8a:
    uVar4 = 0x2ac938;
    goto LAB_0014df18;
  case 0x8b:
    uVar4 = 0x2ac944;
    goto LAB_0014df18;
  case 0x8c:
    uVar4 = 0x2ac950;
    goto LAB_0014df18;
  case 0x8d:
    uVar4 = 0x2ac95c;
    goto LAB_0014df18;
  case 0x8e:
    uVar4 = 0x2ac968;
    goto LAB_0014df18;
  case 0x8f:
    uVar4 = 0x2ac974;
    goto LAB_0014df18;
  case 0x90:
    uVar4 = 0x2ac980;
    goto LAB_0014df18;
  case 0x91:
    uVar4 = 0x2ac98c;
    goto LAB_0014df18;
  case 0x92:
    uVar4 = 0x2ac998;
    goto LAB_0014df18;
  case 0x93:
    uVar4 = 0x2ac9a4;
LAB_0014df18:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 5;
    goto switchD_0014cd90_default;
  case 0x94:
    uVar4 = 0x2ac9b0;
    goto LAB_0014e228;
  case 0x95:
    lVar5 = FUN_00149d28(param_1 + 0x3f4,uVar2,param_1 + 0x20,param_2,param_3,param_4,0x2ac9bc);
    goto LAB_0014e238;
  case 0x96:
    uVar4 = 0x2ac9c8;
    goto LAB_0014e228;
  case 0x97:
    uVar4 = 0x2ac9d4;
    goto LAB_0014e228;
  case 0x98:
    uVar4 = 0x2ac9e0;
    goto LAB_0014e08c;
  case 0x99:
    uVar4 = 0x2ac9ec;
    goto LAB_0014e08c;
  case 0x9a:
    uVar4 = 0x2ac9f8;
    goto LAB_0014e08c;
  case 0x9b:
    uVar4 = 0x2aca04;
    goto LAB_0014e08c;
  case 0x9c:
    uVar4 = 0x2aca10;
    goto LAB_0014e08c;
  case 0x9d:
    uVar4 = 0x2aca1c;
    goto LAB_0014e08c;
  case 0x9e:
    uVar4 = 0x2aca28;
    goto LAB_0014e08c;
  case 0x9f:
    uVar4 = 0x2aca34;
LAB_0014e08c:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0xb;
    goto switchD_0014cd90_default;
  case 0xa0:
    uVar4 = 0x2aca40;
    goto LAB_0014e228;
  case 0xa1:
    uVar4 = 0x2aca4c;
    goto LAB_0014e228;
  case 0xa2:
    uVar4 = 0x2aca58;
    goto LAB_0014e228;
  case 0xa3:
    uVar4 = 0x2aca64;
    goto LAB_0014e228;
  case 0xa4:
    uVar4 = 0x2aca70;
    goto LAB_0014e228;
  case 0xa5:
    uVar4 = 0x2aca7c;
    goto LAB_0014e228;
  case 0xa6:
    uVar4 = 0x2aca88;
    goto LAB_0014e228;
  case 0xa7:
    uVar4 = 0x2aca94;
    goto LAB_0014e228;
  case 0xa8:
    uVar4 = 0x2acaa0;
    goto LAB_0014e228;
  case 0xa9:
    uVar4 = 0x2acaac;
    goto LAB_0014e228;
  case 0xaa:
    uVar4 = 0x2acab8;
    goto LAB_0014e228;
  case 0xab:
    uVar4 = 0x2acac4;
    goto LAB_0014e228;
  case 0xac:
    uVar4 = 0x2acad0;
    goto LAB_0014e228;
  case 0xad:
    uVar4 = 0x2acadc;
LAB_0014e228:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
LAB_0014e238:
    uVar4 = 10;
    goto switchD_0014cd90_default;
  case 0xae:
    uVar4 = 0x2acae8;
    goto LAB_0014e354;
  case 0xaf:
    uVar4 = 0x2acaf4;
    goto LAB_0014e354;
  case 0xb0:
    uVar4 = 0x2acb00;
    goto LAB_0014e354;
  case 0xb1:
    uVar4 = 0x2acb0c;
    goto LAB_0014e354;
  case 0xb2:
    uVar4 = 0x2acb18;
    goto LAB_0014e354;
  case 0xb3:
    uVar4 = 0x2acb24;
    goto LAB_0014e354;
  case 0xb4:
    uVar4 = 0x2acb30;
    goto LAB_0014e354;
  case 0xb5:
    uVar4 = 0x2acb3c;
    goto LAB_0014e354;
  case 0xb6:
    uVar4 = 0x2acb48;
    goto LAB_0014e354;
  case 0xb7:
    uVar4 = 0x2acb54;
LAB_0014e354:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0xc;
    goto switchD_0014cd90_default;
  case 0xb8:
    uVar4 = 0x2acb60;
    goto LAB_0014e640;
  case 0xb9:
    uVar4 = 0x2acb6c;
    goto LAB_0014e640;
  case 0xba:
    uVar4 = 0x2acb78;
    goto LAB_0014e640;
  case 0xbb:
    uVar4 = 0x2acb84;
    goto LAB_0014e640;
  case 0xbc:
    uVar4 = 0x2acb90;
    goto LAB_0014e640;
  case 0xbd:
    uVar4 = 0x2acb9c;
    goto LAB_0014e640;
  case 0xbe:
    uVar4 = 0x2acba8;
    goto LAB_0014e640;
  case 0xbf:
    uVar4 = 0x2acbb4;
    goto LAB_0014e640;
  case 0xc0:
    uVar4 = 0x2acbc0;
    goto LAB_0014e640;
  case 0xc1:
    uVar4 = 0x2acbcc;
    goto LAB_0014e640;
  case 0xc2:
    uVar4 = 0x2acbd8;
    goto LAB_0014e640;
  case 0xc3:
    uVar4 = 0x2acbe4;
    goto LAB_0014e640;
  case 0xc4:
    uVar4 = 0x2acbf0;
    goto LAB_0014e640;
  case 0xc5:
    uVar4 = 0x2acbfc;
    goto LAB_0014e640;
  case 0xc6:
    uVar4 = 0x2acc08;
    goto LAB_0014e640;
  case 199:
    uVar4 = 0x2acc14;
    goto LAB_0014e640;
  case 200:
    uVar4 = 0x2acc20;
    goto LAB_0014e640;
  case 0xc9:
    uVar4 = 0x2acc2c;
    goto LAB_0014e640;
  case 0xca:
    uVar4 = 0x2acc38;
    goto LAB_0014e640;
  case 0xcb:
    uVar4 = 0x2acc44;
    goto LAB_0014e640;
  case 0xcc:
    uVar4 = 0x2acc50;
    goto LAB_0014e640;
  case 0xcd:
    uVar4 = 0x2acc5c;
    goto LAB_0014e640;
  case 0xce:
    uVar4 = 0x2acc68;
    goto LAB_0014e640;
  case 0xcf:
    uVar4 = 0x2acc74;
    goto LAB_0014e640;
  case 0xd0:
    uVar4 = 0x2acc80;
    goto LAB_0014e640;
  case 0xd1:
    uVar4 = 0x2acc8c;
LAB_0014e640:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0xf;
    goto switchD_0014cd90_default;
  case 0xd2:
    uVar4 = 0x2acc98;
    goto LAB_0014e92c;
  case 0xd3:
    uVar4 = 0x2acca4;
    goto LAB_0014e92c;
  case 0xd4:
    uVar4 = 0x2accb0;
    goto LAB_0014e92c;
  case 0xd5:
    uVar4 = 0x2accbc;
    goto LAB_0014e92c;
  case 0xd6:
    uVar4 = 0x2accc8;
    goto LAB_0014e92c;
  case 0xd7:
    uVar4 = 0x2accd4;
    goto LAB_0014e92c;
  case 0xd8:
    uVar4 = 0x2acce0;
    goto LAB_0014e92c;
  case 0xd9:
    uVar4 = 0x2accec;
    goto LAB_0014e92c;
  case 0xda:
    uVar4 = 0x2accf8;
    goto LAB_0014e92c;
  case 0xdb:
    uVar4 = 0x2acd04;
    goto LAB_0014e92c;
  case 0xdc:
    uVar4 = 0x2acd10;
    goto LAB_0014e92c;
  case 0xdd:
    uVar4 = 0x2acd1c;
    goto LAB_0014e92c;
  case 0xde:
    uVar4 = 0x2acd28;
    goto LAB_0014e92c;
  case 0xdf:
    uVar4 = 0x2acd34;
    goto LAB_0014e92c;
  case 0xe0:
    uVar4 = 0x2acd40;
    goto LAB_0014e92c;
  case 0xe1:
    uVar4 = 0x2acd4c;
    goto LAB_0014e92c;
  case 0xe2:
    uVar4 = 0x2acd58;
    goto LAB_0014e92c;
  case 0xe3:
    uVar4 = 0x2acd64;
    goto LAB_0014e92c;
  case 0xe4:
    uVar4 = 0x2acd70;
    goto LAB_0014e92c;
  case 0xe5:
    uVar4 = 0x2acd7c;
    goto LAB_0014e92c;
  case 0xe6:
    uVar4 = 0x2acd88;
    goto LAB_0014e92c;
  case 0xe7:
    uVar4 = 0x2acd94;
    goto LAB_0014e92c;
  case 0xe8:
    uVar4 = 0x2acda0;
    goto LAB_0014e92c;
  case 0xe9:
    uVar4 = 0x2acdac;
    goto LAB_0014e92c;
  case 0xea:
    uVar4 = 0x2acdb8;
    goto LAB_0014e92c;
  case 0xeb:
    uVar4 = 0x2acdc4;
LAB_0014e92c:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 0x10;
    goto switchD_0014cd90_default;
  case 0xec:
    uVar4 = 0x2acdd0;
    goto LAB_0014edbc;
  case 0xed:
    uVar4 = 0x2acddc;
    goto LAB_0014edbc;
  case 0xee:
    uVar4 = 0x2acde8;
    goto LAB_0014edbc;
  case 0xef:
    uVar4 = 0x2acdf4;
    goto LAB_0014edbc;
  case 0xf0:
    uVar4 = 0x2ace00;
    goto LAB_0014edbc;
  case 0xf1:
    uVar4 = 0x2ace0c;
    goto LAB_0014edbc;
  case 0xf2:
    uVar4 = 0x2ace18;
    goto LAB_0014edbc;
  case 0xf3:
    uVar4 = 0x2ace24;
    goto LAB_0014edbc;
  case 0xf4:
    uVar4 = 0x2ace30;
    goto LAB_0014edbc;
  case 0xf5:
    uVar4 = 0x2ace3c;
    goto LAB_0014edbc;
  case 0xf6:
    uVar4 = 0x2ace48;
    goto LAB_0014edbc;
  case 0xf7:
    uVar4 = 0x2ace54;
    goto LAB_0014edbc;
  case 0xf8:
    uVar4 = 0x2ace60;
    goto LAB_0014edbc;
  case 0xf9:
    uVar4 = 0x2ace6c;
    goto LAB_0014edbc;
  case 0xfa:
    uVar4 = 0x2ace78;
    goto LAB_0014edbc;
  case 0xfb:
    uVar4 = 0x2ace84;
    goto LAB_0014edbc;
  case 0xfc:
    uVar4 = 0x2ace90;
    goto LAB_0014edbc;
  case 0xfd:
    uVar4 = 0x2ace9c;
    goto LAB_0014edbc;
  case 0xfe:
    uVar4 = 0x2acea8;
    goto LAB_0014edbc;
  case 0xff:
    uVar4 = 0x2aceb4;
    goto LAB_0014edbc;
  case 0x100:
    uVar4 = 0x2acec0;
    goto LAB_0014edbc;
  case 0x101:
    uVar4 = 0x2acecc;
    goto LAB_0014edbc;
  case 0x102:
    uVar4 = 0x2aced8;
    goto LAB_0014edbc;
  case 0x103:
    uVar4 = 0x2acee4;
    goto LAB_0014edbc;
  case 0x104:
    uVar4 = 0x2acef0;
    goto LAB_0014edbc;
  case 0x105:
    uVar4 = 0x2acefc;
    goto LAB_0014edbc;
  case 0x106:
    uVar4 = 0x2acf08;
    goto LAB_0014edbc;
  case 0x107:
    uVar4 = 0x2acf14;
    goto LAB_0014edbc;
  case 0x108:
    uVar4 = 0x2acf20;
    goto LAB_0014edbc;
  case 0x109:
    uVar4 = 0x2acf2c;
    goto LAB_0014edbc;
  case 0x10a:
    uVar4 = 0x2acf38;
    goto LAB_0014edbc;
  case 0x10b:
    uVar4 = 0x2acf44;
    goto LAB_0014edbc;
  case 0x10c:
    uVar4 = 0x2acf50;
    goto LAB_0014edbc;
  case 0x10d:
    uVar4 = 0x2acf5c;
    goto LAB_0014edbc;
  case 0x10e:
    uVar4 = 0x2acf68;
    goto LAB_0014edbc;
  case 0x10f:
    uVar4 = 0x2acf74;
    goto LAB_0014edbc;
  case 0x110:
    uVar4 = 0x2acf80;
    goto LAB_0014edbc;
  case 0x111:
    uVar4 = 0x2acf8c;
    goto LAB_0014edbc;
  case 0x112:
    uVar4 = 0x2acf98;
    goto LAB_0014edbc;
  case 0x113:
    uVar4 = 0x2acfa4;
    goto LAB_0014edbc;
  case 0x114:
    uVar4 = 0x2acfb0;
LAB_0014edbc:
    lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
    uVar4 = 3;
    goto switchD_0014cd90_default;
  case 0x115:
    uVar4 = 0x2acfbc;
    break;
  case 0x116:
    uVar4 = 0x2acfc8;
    break;
  case 0x117:
    uVar4 = 0x2acfd4;
    break;
  case 0x118:
    uVar4 = 0x2acfe0;
    break;
  case 0x119:
    uVar4 = 0x2acfec;
    break;
  case 0x11a:
    uVar4 = 0x2acff8;
    break;
  case 0x11b:
    uVar4 = 0x2ad004;
    break;
  case 0x11c:
    uVar4 = 0x2ad010;
    break;
  case 0x11d:
    uVar4 = 0x2ad01c;
    break;
  case 0x11e:
    uVar4 = 0x2ad028;
    break;
  case 0x11f:
    uVar4 = 0x2ad034;
    break;
  case 0x120:
    uVar4 = 0x2ad040;
    break;
  case 0x121:
    uVar4 = 0x2ad04c;
    break;
  case 0x122:
    uVar4 = 0x2ad058;
    break;
  case 0x123:
    uVar4 = 0x2ad064;
    break;
  case 0x124:
    uVar4 = 0x2ad070;
    break;
  case 0x125:
    uVar4 = 0x2ad07c;
    break;
  case 0x126:
    uVar4 = 0x2ad088;
    break;
  case 0x127:
    uVar4 = 0x2ad094;
    break;
  case 0x128:
    uVar4 = 0x2ad0a0;
    break;
  case 0x129:
    uVar4 = 0x2ad0ac;
    break;
  case 0x12a:
    uVar4 = 0x2ad0b8;
    break;
  case 299:
    uVar4 = 0x2ad0c4;
    break;
  case 300:
    uVar4 = 0x2ad0d0;
    break;
  case 0x12d:
    uVar4 = 0x2ad0dc;
    break;
  case 0x12e:
    uVar4 = 0x2ad0e8;
    break;
  case 0x12f:
    uVar4 = 0x2ad0f4;
    break;
  case 0x130:
    uVar4 = 0x2ad100;
    break;
  case 0x131:
    uVar4 = 0x2ad10c;
    break;
  case 0x132:
    uVar4 = 0x2ad118;
    break;
  case 0x133:
    uVar4 = 0x2ad124;
    break;
  case 0x134:
    uVar4 = 0x2ad130;
    break;
  case 0x135:
    uVar4 = 0x2ad13c;
    break;
  case 0x136:
    uVar4 = 0x2ad148;
    break;
  case 0x137:
    uVar4 = 0x2ad154;
    break;
  case 0x138:
    uVar4 = 0x2ad160;
    break;
  case 0x139:
    uVar4 = 0x2ad16c;
    break;
  case 0x13a:
    uVar4 = 0x2ad178;
    break;
  case 0x13b:
    uVar4 = 0x2ad184;
    break;
  case 0x13c:
    uVar4 = 0x2ad190;
    break;
  case 0x13d:
    uVar4 = 0x2ad19c;
    break;
  case 0x13e:
    uVar4 = 0x2ad1a8;
    break;
  case 0x13f:
    uVar4 = 0x2ad1b4;
    break;
  case 0x140:
    uVar4 = 0x2ad1c0;
    break;
  case 0x141:
    uVar4 = 0x2ad1cc;
    break;
  case 0x142:
    uVar4 = 0x2ad1d8;
    break;
  case 0x143:
    uVar4 = 0x2ad1e4;
    break;
  case 0x144:
    uVar4 = 0x2ad1f0;
    break;
  case 0x145:
    uVar4 = 0x2ad1fc;
    break;
  case 0x146:
    uVar4 = 0x2ad208;
    break;
  case 0x147:
    uVar4 = 0x2ad214;
    break;
  case 0x148:
    uVar4 = 0x2ad220;
    break;
  case 0x149:
    uVar4 = 0x2ad22c;
    break;
  case 0x14a:
    uVar4 = 0x2ad238;
    break;
  case 0x14b:
    uVar4 = 0x2ad244;
    break;
  case 0x14c:
    uVar4 = 0x2ad250;
    break;
  case 0x14d:
    uVar4 = 0x2ad25c;
    break;
  case 0x14e:
    uVar4 = 0x2ad268;
    break;
  case 0x14f:
    uVar4 = 0x2ad274;
    break;
  case 0x150:
    uVar4 = 0x2ad280;
    break;
  case 0x151:
    uVar4 = 0x2ad28c;
    break;
  case 0x152:
    uVar4 = 0x2ad298;
    break;
  case 0x153:
    uVar4 = 0x2ad2a4;
    break;
  case 0x154:
    uVar4 = 0x2ad2b0;
    break;
  case 0x155:
    uVar4 = 0x2ad2bc;
    break;
  case 0x156:
    uVar4 = 0x2ad2c8;
    break;
  case 0x157:
    uVar4 = 0x2ad2d4;
    break;
  case 0x158:
    uVar4 = 0x2ad2e0;
    break;
  case 0x159:
    uVar4 = 0x2ad2ec;
    break;
  case 0x15a:
    uVar4 = 0x2ad2f8;
    break;
  case 0x15b:
    uVar4 = 0x2ad304;
    break;
  case 0x15c:
    uVar4 = 0x2ad310;
    break;
  case 0x15d:
    uVar4 = 0x2ad31c;
    break;
  case 0x15e:
    uVar4 = 0x2ad328;
    break;
  case 0x15f:
    uVar4 = 0x2ad334;
    break;
  case 0x160:
    uVar4 = 0x2ad340;
    break;
  case 0x161:
    uVar4 = 0x2ad34c;
    break;
  case 0x162:
    uVar4 = 0x2ad358;
    break;
  case 0x163:
    uVar4 = 0x2ad364;
    break;
  case 0x164:
    uVar4 = 0x2ad370;
    break;
  case 0x165:
    uVar4 = 0x2ad37c;
    break;
  case 0x166:
    uVar4 = 0x2ad388;
    break;
  case 0x167:
    uVar4 = 0x2ad394;
    break;
  case 0x168:
    uVar4 = 0x2ad3a0;
    break;
  case 0x169:
    uVar4 = 0x2ad3ac;
    break;
  case 0x16a:
    uVar4 = 0x2ad3b8;
    break;
  case 0x16b:
    uVar4 = 0x2ad3c4;
    break;
  case 0x16c:
    uVar4 = 0x2ad3d0;
    break;
  case 0x16d:
    uVar4 = 0x2ad3dc;
    break;
  case 0x16e:
    uVar4 = 0x2ad3e8;
    break;
  case 0x16f:
    uVar4 = 0x2ad3f4;
    break;
  case 0x170:
    uVar4 = 0x2ad400;
    break;
  case 0x171:
    uVar4 = 0x2ad40c;
    break;
  case 0x172:
    uVar4 = 0x2ad418;
    break;
  case 0x173:
    uVar4 = 0x2ad424;
    break;
  case 0x174:
    uVar4 = 0x2ad430;
    break;
  case 0x175:
    uVar4 = 0x2ad43c;
    break;
  case 0x176:
    uVar4 = 0x2ad448;
    break;
  case 0x177:
    uVar4 = 0x2ad454;
    break;
  case 0x178:
    uVar4 = 0x2ad460;
    break;
  case 0x179:
    uVar4 = 0x2ad46c;
    break;
  case 0x17a:
    uVar4 = 0x2ad478;
    break;
  case 0x17b:
    uVar4 = 0x2ad484;
    break;
  case 0x17c:
    uVar4 = 0x2ad490;
    break;
  case 0x17d:
    uVar4 = 0x2ad49c;
    break;
  case 0x17e:
    uVar4 = 0x2ad4a8;
    break;
  case 0x17f:
    uVar4 = 0x2ad4b4;
    break;
  case 0x180:
    uVar4 = 0x2ad4c0;
    break;
  case 0x181:
    uVar4 = 0x2ad4cc;
    break;
  case 0x182:
    uVar4 = 0x2ad4d8;
    break;
  case 0x183:
    uVar4 = 0x2ad4e4;
    break;
  case 0x184:
    uVar4 = 0x2ad4f0;
    break;
  case 0x185:
    uVar4 = 0x2ad4fc;
    break;
  case 0x186:
    uVar4 = 0x2ad508;
    break;
  case 0x187:
    uVar4 = 0x2ad514;
    break;
  case 0x188:
    uVar4 = 0x2ad520;
    break;
  case 0x189:
    uVar4 = 0x2ad52c;
    break;
  case 0x18a:
    uVar4 = 0x2ad538;
    break;
  case 0x18b:
    uVar4 = 0x2ad544;
    break;
  case 0x18c:
    uVar4 = 0x2ad550;
    break;
  case 0x18d:
    uVar4 = 0x2ad55c;
    break;
  case 0x18e:
    uVar4 = 0x2ad568;
    break;
  case 399:
    uVar4 = 0x2ad574;
    break;
  case 400:
    uVar4 = 0x2ad580;
    break;
  case 0x191:
    uVar4 = 0x2ad58c;
    break;
  case 0x192:
    uVar4 = 0x2ad598;
    break;
  case 0x193:
    uVar4 = 0x2ad5a4;
    break;
  case 0x194:
    uVar4 = 0x2ad5b0;
    break;
  case 0x195:
    uVar4 = 0x2ad5bc;
    break;
  case 0x196:
    uVar4 = 0x2ad5c8;
    break;
  case 0x197:
    uVar4 = 0x2ad5d4;
    break;
  case 0x198:
    uVar4 = 0x2ad5e0;
    break;
  case 0x199:
    uVar4 = 0x2ad5ec;
    break;
  case 0x19a:
    uVar4 = 0x2ad5f8;
    break;
  case 0x19b:
    uVar4 = 0x2ad604;
    break;
  case 0x19c:
    uVar4 = 0x2ad610;
    break;
  case 0x19d:
    uVar4 = 0x2ad61c;
    break;
  case 0x19e:
    uVar4 = 0x2ad628;
    break;
  case 0x19f:
    uVar4 = 0x2ad634;
    break;
  case 0x1a0:
    uVar4 = 0x2ad640;
    break;
  case 0x1a1:
    uVar4 = 0x2ad64c;
    break;
  case 0x1a2:
    uVar4 = 0x2ad658;
    break;
  case 0x1a3:
    uVar4 = 0x2ad664;
    break;
  case 0x1a4:
    uVar4 = 0x2ad670;
    break;
  default:
    goto switchD_0014cd90_default;
  }
  lVar5 = FUN_00149dd0(param_1 + 0x3f8,uVar2,param_1 + 0x20,param_2,param_3,param_4,uVar4);
LAB_0014fda0:
  uVar4 = 0xe;
switchD_0014cd90_default:
  lVar3 = 0x1a6;
  if (lVar5 != 0x1a6) {
    FUN_001fceb8(DAT_002c56e8,uVar4);
    *(int *)(param_1 + 8) = (int)lVar5;
    lVar3 = lVar5;
  }
  return lVar3;
}

