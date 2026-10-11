/* Ghidra pseudocode. PS2 address: 002562e8. Not validated source. */

long FUN_002562e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = FUN_00259668(param_1,param_3);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    piVar3 = (int *)lVar2;
    if (*(char *)((int)(int *)param_2 + *(ushort *)(piVar3 + 0xa6) + 0x29c) == '\0') {
      *piVar3 = *(int *)param_2;
    }
    else {
      puVar1 = (undefined8 *)FUN_002561e0(*(ushort *)(piVar3 + 0xa6),param_2,0);
      *piVar3 = (int)*puVar1;
    }
    *piVar3 = *piVar3 + piVar3[2];
  }
  return lVar2;
}

