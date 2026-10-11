/* Ghidra pseudocode. PS2 address: 00241ad8. Not validated source. */

undefined4
FUN_00241ad8(short *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined1 param_5,undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_2;
  bVar1 = *(byte *)(iVar6 + 3) >> 2;
  if ((bVar1 < 0xd) && (lVar2 = FUN_00241a90(param_2,param_6), lVar2 != 0)) {
    lVar2 = FUN_00242c88(param_4,param_5,param_2);
    iVar5 = 0;
    if (lVar2 != 0) {
      *(byte *)(param_1 + 0x30) = bVar1;
      psVar4 = param_1;
      while( true ) {
        if ((int)(uint)bVar1 <= iVar5) {
          return 1;
        }
        *(undefined1 *)(psVar4 + 2) = *(undefined1 *)((int)param_1 + 0x61);
        iVar3 = iVar6 + (uint)*(byte *)(iVar6 + 4 + iVar5) * 4;
        lVar2 = FUN_00241358(iVar3,param_3,psVar4);
        if (lVar2 == 0) {
          if (*psVar4 != -2) {
            return 0;
          }
          *psVar4 = -1;
          return 0xffffffff;
        }
        lVar2 = FUN_00241640(param_1,psVar4,iVar3,param_3);
        iVar5 = iVar5 + 1;
        if (lVar2 == 0) break;
        *(char *)((int)psVar4 + 5) = (char)lVar2;
        psVar4 = psVar4 + 4;
      }
    }
  }
  return 0;
}

