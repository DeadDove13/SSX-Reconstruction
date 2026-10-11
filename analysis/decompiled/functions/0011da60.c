/* Ghidra pseudocode. PS2 address: 0011da60. Not validated source. */

void FUN_0011da60(int *param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *(undefined8 *)(*param_1 + 0x7620);
  uStack_38 = *(undefined8 *)(*param_1 + 0x7628);
  FUN_0021d410(0x299cc8,&uStack_40,param_1 + 0xff,param_1 + 0x103,param_1 + 0x110);
  iVar1 = param_1[0xf8];
  param_1[0xff] = (int)((float)param_1[0xff] + *(float *)(iVar1 + 0x4b84));
  param_1[0x100] = (int)((float)param_1[0x100] + *(float *)(iVar1 + 0x4b88));
  param_1[0x101] = (int)((float)param_1[0x101] + *(float *)(iVar1 + 0x4b8c));
  param_1[0x102] = (int)((float)param_1[0x102] + *(float *)(iVar1 + 0x4b90));
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_1 + 0xff);
  *(undefined8 *)(param_1 + 0x11e) = *(undefined8 *)(param_1 + 0x101);
  uStack_40._0_4_ = (float)*(undefined8 *)(param_1 + 0x103);
  uStack_40._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x103) >> 0x20);
  uStack_38._0_4_ = (float)*(undefined8 *)(param_1 + 0x105);
  uStack_38._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x105) >> 0x20);
  param_1[0x11c] =
       (int)((float)param_1[0x11c] +
            (float)uStack_40 + (float)param_1[0x107] + (float)param_1[0x10b]);
  param_1[0x11d] =
       (int)((float)param_1[0x11d] + uStack_40._4_4_ + (float)param_1[0x108] + (float)param_1[0x10c]
            );
  param_1[0x11e] =
       (int)((float)param_1[0x11e] +
            (float)uStack_38 + (float)param_1[0x109] + (float)param_1[0x10d]);
  param_1[0x11f] =
       (int)((float)param_1[0x11f] + uStack_38._4_4_ + (float)param_1[0x10a] + (float)param_1[0x10e]
            );
  return;
}

