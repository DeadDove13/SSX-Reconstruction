/* Ghidra pseudocode. PS2 address: 00126810. Not validated source. */

void FUN_00126810(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [48];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  iVar3 = (int)param_1;
  if ((*(uint *)(*(int *)(iVar3 + 0x28) + 0xe8) & 4) != 0) {
    lVar2 = FUN_001be110(0x295e90,iVar3 + 0x2a0,iVar3 + 0x2b0);
    if (lVar2 != 1) {
      FUN_00125438(auStack_120,param_1);
      FUN_00217948(auStack_160,auStack_120);
      iVar1 = 2;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
      iVar1 = 2;
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
      uStack_110 = uStack_130;
      uStack_10c = uStack_12c;
      uStack_108 = uStack_128;
      uStack_104 = uStack_124;
      FUN_0021d410(0x299cc8,&uStack_110,auStack_120,auStack_100,auStack_d0);
      FUN_001bd888(auStack_1e0,auStack_120,auStack_d0,auStack_100,auStack_c0,auStack_f0,auStack_b0,
                   auStack_e0);
      FUN_001bda58(auStack_1e0,auStack_160);
      FUN_001e8420(0x299cc8,*(int *)(iVar3 + 0x28) + 0xc0,auStack_160,auStack_1e0);
    }
  }
  return;
}

