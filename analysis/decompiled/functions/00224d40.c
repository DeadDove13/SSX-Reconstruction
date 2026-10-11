/* Ghidra pseudocode. PS2 address: 00224d40. Not validated source. */

void FUN_00224d40(uint param_1)

{
  uint uVar1;
  
  if ((DAT_0029a888 != '\0') && (DAT_0029a88a == '\0')) {
    if (param_1 != (int)DAT_0029a920) {
      DAT_0029a920 = (short)param_1;
      DAT_0029a894 = 0;
      DAT_0029a91c = 0;
    }
    if (DAT_0029a88b == '\0') {
      DAT_0029a88a = 1;
      DAT_0029a91c = DAT_0029a91c + 1;
      if (param_1 == 0) {
        trap(7);
      }
      uVar1 = DAT_0029a91c * 100;
      while ((ulong)(long)DAT_0029a894 <= (ulong)(uVar1 / param_1)) {
        (*DAT_0029a898)();
      }
      DAT_0029a88a = '\0';
    }
    else {
      DAT_0029a922 = DAT_0029a922 + 1;
    }
  }
  return;
}

