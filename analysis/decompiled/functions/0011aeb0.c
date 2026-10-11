/* Ghidra pseudocode. PS2 address: 0011aeb0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0011af30) */

void FUN_0011aeb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(DAT_002c1850,0x295e90,0,0);
  FUN_0011ed08(0x295e90,2,0);
  if (0 < *param_1) {
    iVar1 = param_1[1];
    while( true ) {
      piVar2 = param_1 + ((iVar1 + iVar3) % 0x28) * 0x54 + 0x10;
      if (*piVar2 == 0) {
        iVar1 = *param_1;
      }
      else {
        FUN_0011ecd8(0x295e90,piVar2[0x50],1);
        FUN_0011ed48(0x295e90,piVar2[0x51]);
        FUN_0011ed88(0x295e90,piVar2);
        iVar1 = *param_1;
      }
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) break;
      iVar1 = param_1[1];
    }
  }
  FUN_0011ed28(DAT_002c1854,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed08(0x295e90,0,0);
  FUN_0011ed48(0x295e90,3);
  return;
}

