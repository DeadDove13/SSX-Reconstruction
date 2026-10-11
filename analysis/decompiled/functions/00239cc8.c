/* Ghidra pseudocode. PS2 address: 00239cc8. Not validated source. */

void FUN_00239cc8(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  int aiStack_70 [4];
  
  while( true ) {
    lVar2 = FUN_0025b910(param_2,0x2c);
    puVar3 = (undefined1 *)lVar2;
    if (lVar2 != 0) {
      *puVar3 = 0;
    }
    aiStack_70[0] = 0;
    if (param_2 != (undefined1 *)0x0) {
      FUN_002398a0(param_1,param_2,0,aiStack_70,0x2c5a00);
    }
    iVar1 = (int)param_1 + aiStack_70[0];
    if (aiStack_70[0] == 0) {
      iVar1 = 0;
    }
    *param_3 = iVar1;
    param_3 = param_3 + 1;
    if (lVar2 == 0) break;
    *puVar3 = 0x2c;
    param_2 = puVar3 + 1;
    if (param_2 == (undefined1 *)0x0) {
      return;
    }
  }
  return;
}

