/* Ghidra pseudocode. PS2 address: 00224bb8. Not validated source. */

undefined8 FUN_00224bb8(int param_1)

{
  DAT_0029a820 = *(undefined8 *)(param_1 + 0x18);
  DAT_0029a828 = *(undefined8 *)(param_1 + 0x20);
  DAT_0029a830 = *(undefined8 *)(param_1 + 0x28);
  DAT_0029a838 = *(undefined8 *)(param_1 + 0x30);
  DAT_0029a840 = *(undefined8 *)(param_1 + 0x38);
  DAT_0029a848 = *(undefined8 *)(param_1 + 0x40);
  DAT_0029a850 = *(undefined8 *)(param_1 + 0x48);
  FUN_0022aec0();
  DAT_0029a858 = DAT_0029a820;
  DAT_0029a860 = DAT_0029a828;
  DAT_0029a868 = DAT_0029a830;
  DAT_0029a870 = DAT_0029a838;
  DAT_0029a878 = DAT_0029a840;
  DAT_0029a880 = DAT_0029a848;
  return 0;
}

