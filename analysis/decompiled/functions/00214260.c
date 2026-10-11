/* Ghidra pseudocode. PS2 address: 00214260. Not validated source. */

long FUN_00214260(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar5 = FUN_0023a400(0x84);
  if (lVar5 != 0) {
    FUN_0025a60c(lVar5,0,0x84);
    puVar6 = (undefined4 *)lVar5;
    *puVar6 = 0x48554646;
    puVar6[1] = 0x84;
    puVar6[3] = puVar6[3] & 0xffffffef | 0xf;
    puVar6[2] = 100;
    puVar6[7] = 1;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    cVar2 = s_oFrANK_G__Barchard_002bd79f[0x11];
    uVar1 = s_oFrANK_G__Barchard_002bd79f._9_8_;
    *(undefined8 *)(puVar6 + 9) = s_oFrANK_G__Barchard_002bd79f._1_8_;
    *(undefined8 *)(puVar6 + 0xb) = uVar1;
    *(char *)(puVar6 + 0xd) = cVar2;
    *(char *)((int)puVar6 + 0x35) = s_oFrANK_G__Barchard_002bd79f[0x12];
    uVar4 = DAT_002c5884;
    puVar6[0x11] = DAT_002c5880;
    *(undefined1 *)(puVar6 + 0x12) = uVar4;
    puVar6[0x13] = DAT_002c5888;
    *(char (*) [8])(puVar6 + 0x15) = s_Huffman_002c5890;
    uVar3 = s_Huffman_RLE_002bd7b8._8_4_;
    *(undefined8 *)(puVar6 + 0x19) = s_Huffman_RLE_002bd7b8._0_8_;
    puVar6[0x1b] = uVar3;
  }
  return lVar5;
}

