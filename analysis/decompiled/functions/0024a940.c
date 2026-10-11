/* Ghidra pseudocode. PS2 address: 0024a940. Not validated source. */

undefined4 FUN_0024a940(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = 0;
  if ((puVar1[0x36] & 0x3f) == 0) {
    DAT_002a5b40 = 0;
LAB_0024a9b8:
    do {
      uVar3 = FUN_0024f118();
      if (uVar3 != 0) {
        if (DAT_002a546c != puVar1[0x35]) goto LAB_0024a9b8;
      }
      if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0024a9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_002bf1c0)[(int)uVar3])();
        return uVar2;
      }
    } while (DAT_002a5b40 == 0);
    uVar2 = 1;
  }
  else {
    FUN_0024af68(0x2bf178);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

