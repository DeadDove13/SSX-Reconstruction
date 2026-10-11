/* Ghidra pseudocode. PS2 address: 0010de58. Not validated source. */

undefined8 FUN_0010de58(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 0x3d4) = &DAT_002a8700;
  *(undefined **)(iVar2 + 0x1f0) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0(iVar2 + 0x20);
  *(undefined **)(iVar2 + 0x3c4) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0();
  FUN_001eac20(iVar2 + 0x20);
  *(undefined4 *)(iVar2 + 0x3cc) = 0;
  *(undefined4 *)(iVar2 + 0x3c8) = 0;
  *(undefined **)(iVar2 + 0x3d0) = &DAT_002ac220;
  FUN_0010e0f8(param_1);
  *(undefined **)(iVar2 + 0x3dc) = &DAT_002aec48;
  *(undefined **)(iVar2 + 0x3d4) = &DAT_002ae9d8;
  *(undefined **)(iVar2 + 0x3e0) = &DAT_002aec38;
  *(undefined **)(iVar2 + 0x3e4) = &DAT_002aec28;
  *(undefined **)(iVar2 + 1000) = &DAT_002aec18;
  *(undefined **)(iVar2 + 0x3ec) = &DAT_002aec08;
  *(undefined **)(iVar2 + 0x3f0) = &DAT_002aebf8;
  *(undefined **)(iVar2 + 0x3f4) = &DAT_002aebe8;
  *(undefined **)(iVar2 + 0x3f8) = &DAT_002aebd8;
  *(undefined **)(iVar2 + 0x3fc) = &DAT_002aebb8;
  *(undefined **)(iVar2 + 0x400) = &DAT_002aeba8;
  *(undefined **)(iVar2 + 0x3d8) = &DAT_002aec58;
  *(undefined **)(iVar2 + 0x404) = &DAT_002aeb98;
  *(undefined **)(iVar2 + 0x408) = &DAT_002aeb58;
  *(undefined **)(iVar2 + 0x40c) = &DAT_002aeb48;
  *(undefined **)(iVar2 + 0x410) = &DAT_002aeb38;
  *(undefined **)(iVar2 + 0x414) = &DAT_002aeb28;
  *(undefined **)(iVar2 + 0x418) = &DAT_002aeb18;
  *(undefined **)(iVar2 + 0x41c) = &DAT_002aeb08;
  *(undefined **)(iVar2 + 0x420) = &DAT_002aeaf8;
  *(undefined **)(iVar2 + 0x424) = &DAT_002aeae8;
  *(undefined **)(iVar2 + 0x428) = &DAT_002aead8;
  *(undefined **)(iVar2 + 0x42c) = &DAT_002aeac8;
  *(undefined **)(iVar2 + 0x430) = &DAT_002aeab8;
  *(undefined **)(iVar2 + 0x434) = &DAT_002aeaa8;
  *(undefined **)(iVar2 + 0x438) = &DAT_002aea98;
  *(undefined **)(iVar2 + 0x43c) = &DAT_002aea88;
  *(undefined **)(iVar2 + 0x440) = &DAT_002aea78;
  *(undefined **)(iVar2 + 0x444) = &DAT_002aea68;
  *(undefined **)(iVar2 + 0x448) = &DAT_002aea58;
  *(undefined **)(iVar2 + 0x44c) = &DAT_002aea48;
  *(undefined **)(iVar2 + 0x450) = &DAT_002aea38;
  *(undefined **)(iVar2 + 0x454) = &DAT_002aea28;
  *(undefined **)(iVar2 + 0x458) = &DAT_002aea18;
  return param_1;
}

