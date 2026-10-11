/* Ghidra pseudocode. PS2 address: 0022aec0. Not validated source. */

undefined8 FUN_0022aec0(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_0029a808._7_1_ < DAT_0029a828._2_1_) {
    DAT_0029a828._2_1_ = DAT_0029a808._7_1_;
  }
  if (DAT_0029a808._6_1_ < DAT_0029a828._1_1_) {
    DAT_0029a828._1_1_ = DAT_0029a808._6_1_;
  }
  DAT_0029a890 = (ushort)DAT_0029a828._2_1_ + (ushort)DAT_0029a828._1_1_;
  if ((byte)DAT_0029a828 < DAT_0029a808._4_1_) {
    DAT_0029a828._0_1_ = DAT_0029a808._4_1_;
  }
  if (DAT_0029a808._5_1_ < (byte)DAT_0029a828) {
    DAT_0029a828._0_1_ = DAT_0029a808._5_1_;
  }
  bVar1 = 24000 < DAT_0029a820._6_2_;
  DAT_0029a820._6_2_ = 24000;
  if (bVar1) {
    DAT_0029a820._6_2_ = 48000;
  }
  if (((DAT_0029a888 != '\0') && (DAT_0029e8d0 != (byte)DAT_0029a828)) &&
     (lVar3 = 0, DAT_0029a890 != 0)) {
    iVar4 = 0;
    do {
      if (*(char *)(iVar4 + DAT_0029a8f0 + 0xb) == '\x01') {
        if (*(short *)(iVar4 + DAT_0029a8f0 + 0x18) < 0) {
          lVar2 = (long)DAT_0029a890;
        }
        else {
          FUN_0022be90(lVar3);
          lVar2 = (long)DAT_0029a890;
        }
      }
      else {
        lVar2 = (long)DAT_0029a890;
      }
      lVar3 = (long)((int)lVar3 + 1);
      iVar4 = iVar4 + 0x6c;
    } while (lVar3 < lVar2);
  }
  DAT_0029e8d0 = (byte)DAT_0029a828;
  return 0;
}

