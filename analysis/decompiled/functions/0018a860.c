/* Ghidra pseudocode. PS2 address: 0018a860. Not validated source. */

void FUN_0018a860(void)

{
  long lVar1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  FUN_0018a858(0xff);
  FUN_00266a80(0);
  FUN_0018a858(0x80ff80);
  FUN_00249218(0);
  FUN_0018a858(0x80ffff);
  FUN_0018ac08(0x2b3a90);
  do {
    lVar1 = FUN_00268af8(0x2b3ab0);
  } while (lVar1 == 0);
  FUN_0018a858(0x80ff80);
  do {
    lVar1 = FUN_00268ab0();
  } while (lVar1 == 0);
  FUN_0018a858(0xff80ff);
  FUN_0018ac08(0x2b3ad8);
  FUN_00266a80(0);
  FUN_0018a858(0xff00);
  FUN_00249218(0);
  FUN_00267a60();
  FUN_0018a858(0xff00ff);
  FUN_0018ac08(0x2b3af0);
  do {
    lVar1 = FUN_00268630(0x2b3b08,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0xffff00);
  FUN_0018ac08(0x2b3b30);
  do {
    lVar1 = FUN_00268630(0x2b3b48,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0xff0000);
  FUN_0018ac08(0x2b3b70);
  do {
    lVar1 = FUN_00268630(0x2b3b88,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0x80);
  FUN_0018ac08(0x2b3bb0);
  do {
    lVar1 = FUN_00268630(0x2b3bc8,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0x8000);
  FUN_0018ac08(0x2b3bf0);
  do {
    lVar1 = FUN_00268630(0x2b3c08,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0x8080);
  FUN_0018ac08(0x2b3c30);
  do {
    lVar1 = FUN_00268630(0x2b3c48,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0x808080);
  FUN_0018ac08(0x2b3c70);
  do {
    lVar1 = FUN_00268630(0x2b3c88,0,0);
  } while (lVar1 < 0);
  FUN_0018a858(0x1060c0);
  FUN_00250fd8();
  FUN_0018a858(0x800000);
  FUN_002469c8(0);
  FUN_0018a858(0x8020f0);
  FUN_00249c18(&uStack_a0);
  FUN_002109a0(uStack_a0 ^ uStack_9c << 3);
  FUN_0018ac08(0x2b3cb0,(uStack_9c._1_1_ & 0xf) + (uint)(uStack_9c._1_1_ >> 4) * 10,
               (uStack_9c._2_1_ & 0xf) + (uint)(uStack_9c._2_1_ >> 4) * 10,
               (uStack_9c._3_1_ & 0xf) + (uint)(uStack_9c._3_1_ >> 4) * 10,
               (uStack_a0._3_1_ & 0xf) + (uint)(uStack_a0._3_1_ >> 4) * 10,
               (uStack_a0._2_1_ & 0xf) + (uint)(uStack_a0._2_1_ >> 4) * 10,
               (uStack_a0._1_1_ & 0xf) + (uint)(uStack_a0._1_1_ >> 4) * 10);
  return;
}

