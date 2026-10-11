/* Ghidra pseudocode. PS2 address: 00170e30. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00170e8c) */

undefined4 FUN_00170e30(undefined8 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  do {
    lVar2 = FUN_0023d388(DAT_002c5b98);
    if (lVar2 != 0) {
      iVar4 = *(int *)((int)lVar2 + 4);
      iVar3 = iVar4 + -8;
      uVar5 = iVar4 + 7U & 0xfffffff0;
      FUN_0023bac0(DAT_002c5ba0,(int)lVar2 + 8,iVar3);
      iVar4 = DAT_002c5ba0;
      for (; iVar3 < (int)uVar5; iVar3 = iVar3 + 4) {
        *(undefined4 *)(iVar4 + iVar3) = 0;
      }
      FUN_0023d4a8(DAT_002c5b98,lVar2);
LAB_00170f20:
      FUN_0024a528(param_1,DAT_002c5b9c,uVar5 - 0x10);
      return 1;
    }
    lVar2 = FUN_0023dbd0(DAT_002c5b98);
    if (lVar2 != 0) {
      uVar5 = 0x10;
      iVar4 = 0xc;
      puVar1 = (undefined4 *)(DAT_002c5ba0 + 0xc);
      do {
        *puVar1 = 0xb7010000;
        iVar4 = iVar4 + -4;
        puVar1 = puVar1 + -1;
      } while (-1 < iVar4);
      goto LAB_00170f20;
    }
    FUN_0023e608(0);
  } while( true );
}

