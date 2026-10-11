/* Ghidra pseudocode. PS2 address: 001786e8. Not validated source. */

void FUN_001786e8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0xb78);
  do {
    if (DAT_002c4a00 == 0) {
      if (iVar3 < *(int *)(param_1 + 0xb6c)) {
        if (*(int *)(iVar4 + *(int *)(param_1 + 0xb70)) == DAT_0027ba88) {
          FUN_001730e0(*(undefined4 *)(param_1 + 0xb78 + iVar4),0);
          goto LAB_001787b8;
        }
        uVar1 = *puVar2;
      }
      else {
        uVar1 = *puVar2;
      }
LAB_0017879c:
      FUN_001730e0(uVar1,1);
    }
    else if (DAT_002c4a00 == 1) {
      uVar1 = *puVar2;
      if ((2 < iVar3) || (iVar3 != DAT_0027ba9c)) goto LAB_0017879c;
      FUN_001730e0(uVar1,0);
    }
LAB_001787b8:
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + 4;
    if (3 < iVar3) {
      return;
    }
  } while( true );
}

