/* Ghidra pseudocode. PS2 address: 0017f1a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0017f38c) */

void FUN_0017f1a8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 9;
  FUN_0016ff58(param_1,1);
  FUN_0016e858(param_1,0x362,0xe);
  FUN_0016e858(param_1,0x363,0xe);
  iVar2 = (int)param_1;
  FUN_0016eca0(param_1,0x284e98,*(undefined4 *)(*(int *)(iVar2 + 0xb3c) + 0x46c),0xffffffffffffffff)
  ;
  FUN_0016eb08(param_1,0x31a);
  *(undefined **)(iVar2 + 0xb2c) = &DAT_00284e78;
  *(undefined4 *)(iVar2 + 0xb28) = 0;
  FUN_0016e858(param_1,*(undefined4 *)(&DAT_00284e38 + *(int *)(iVar2 + 0xba0) * 4),8);
  FUN_0016e858(param_1,0x326,8);
  puVar4 = &DAT_00284e14;
  puVar3 = &DAT_00284dec;
  uVar1 = DAT_00284dec;
  while( true ) {
    iVar6 = iVar6 + -1;
    FUN_0016e858(param_1,uVar1,9);
    uVar1 = *puVar3;
    puVar3 = puVar3 + -1;
    FUN_0016eb08(param_1,uVar1);
    FUN_0016e858(param_1,*puVar4,9);
    uVar1 = *puVar4;
    puVar4 = puVar4 + -1;
    FUN_0016eb08(param_1,uVar1);
    if (iVar6 < 0) break;
    uVar1 = *puVar3;
  }
  *(undefined4 *)(iVar2 + 0xc84) = 0;
  piVar7 = (int *)(iVar2 + 3000);
  iVar6 = 9;
  uVar1 = FUN_00235a70((&PTR_s_data_textures_tb_mac_ssh_00284e58)[*(int *)(iVar2 + 0xba0)],0);
  *(undefined4 *)(iVar2 + 0xc90) = uVar1;
  *(undefined4 *)(iVar2 + 0xc94) = 1;
  piVar5 = &DAT_00285048;
  *(undefined4 *)(iVar2 + 0xc98) = 0;
  puVar3 = &DAT_00284dc8;
  do {
    iVar2 = FUN_0016dd88(param_1,*puVar3);
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
    *piVar5 = (int)*(short *)(DAT_00299ce8 +
                              *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x4c) + 0xcc) * 8
                                                        + DAT_00299ce0) + 0x24) + 0x24) * 0xc + 4);
    piVar5 = piVar5 + 1;
  } while (-1 < iVar6);
  iVar2 = 0;
  do {
    iVar6 = iVar2 % 10;
    iVar2 = iVar2 + 1;
    *piVar7 = iVar6;
    piVar7 = piVar7 + 1;
  } while (iVar2 < 0x32);
  FUN_0017ef40(param_1);
  FUN_0016e858(param_1,0x156,9);
  FUN_0016eb08(param_1,0x156);
  FUN_0016e858(param_1,0x10c,0xf);
  FUN_0016e858(param_1,0x10b,0xf);
  FUN_0016e858(param_1,0x10a,0xf);
  FUN_0016e858(param_1,0x109,0xf);
  FUN_0016e858(param_1,0x137,0xf);
  FUN_0016e858(param_1,0x126,0xf);
  FUN_0016e858(param_1,0x138,0xf);
  FUN_0016e858(param_1,0x125,0xf);
  FUN_0016e858(param_1,0x13d,0xf);
  FUN_0016e858(param_1,0x128,0xf);
  FUN_0016e858(param_1,0x13c,0xf);
  FUN_0016e858(param_1,0x127,0xf);
  FUN_0016e858(param_1,0x112,0xf);
  FUN_0016e858(param_1,0x113,0xf);
  FUN_0016e858(param_1,0x114,0xf);
  FUN_0016e858(param_1,0x115,0xf);
  FUN_0016e858(param_1,0x101,0xf);
  FUN_0016e858(param_1,0x10d,0xf);
  FUN_0016e858(param_1,0x139,0xf);
  FUN_0016e858(param_1,0x13a,0xf);
  FUN_0016e858(param_1,0x13b,0xf);
  FUN_0016e858(param_1,0x12a,0xf);
  FUN_0016e858(param_1,0x129,0xf);
  FUN_0016e858(param_1,0x31e,0xf);
  FUN_0016e858(param_1,799,0xf);
  FUN_0016e858(param_1,800,0xf);
  FUN_0016e858(param_1,0x321,0xf);
  FUN_0016e858(param_1,0x31b,0xf);
  FUN_0016e858(param_1,0x31c,0xf);
  FUN_0016e858(param_1,0x31d,0xf);
  FUN_0016e858(param_1,0x11e,0xf);
  FUN_0016e858(param_1,0x11f,0xf);
  FUN_0016e858(param_1,0x120,0xf);
  FUN_0016eb08(param_1,0x11f);
  FUN_0016eb08(param_1,0x31c);
  FUN_0016eb08(param_1,0x31b);
  FUN_0016eb08(param_1,0x31d);
  FUN_0016eb08(param_1,0x11e);
  FUN_0016eb08(param_1,0x120);
  FUN_0016eb08(param_1,0x31e);
  FUN_0016eb08(param_1,800);
  FUN_0016eb08(param_1,799);
  FUN_0016eb08(param_1,0x321);
  FUN_0016eb08(param_1,0x13a);
  FUN_0016eb08(param_1,0x139);
  FUN_0016eb08(param_1,0x13b);
  FUN_0016eb08(param_1,0x12a);
  FUN_0016eb08(param_1,0x129);
  FUN_0016eb08(param_1,0x10c);
  FUN_0016eb08(param_1,0x10b);
  FUN_0016eb08(param_1,0x109);
  FUN_0016eb08(param_1,0x10a);
  FUN_0016eb08(param_1,0x13d);
  FUN_0016eb08(param_1,0x128);
  FUN_0016eb08(param_1,0x137);
  FUN_0016eb08(param_1,0x126);
  FUN_0016eb08(param_1,0x13d);
  FUN_0016eb08(param_1,0x128);
  FUN_0016eb08(param_1,0x13c);
  FUN_0016eb08(param_1,0x127);
  return;
}

