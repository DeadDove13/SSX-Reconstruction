/* Ghidra pseudocode. PS2 address: 00263a10. Not validated source. */

long FUN_00263a10(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_00259d50(param_1,param_2 * param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puVar4 = (undefined4 *)lVar1;
    uVar3 = (puVar4[-1] & 0xfffffffc) - 4;
    if (uVar3 < 0x25) {
      puVar2 = puVar4;
      if (0x13 < uVar3) {
        *puVar4 = 0;
        puVar2 = puVar4 + 2;
        puVar4[1] = 0;
        if (0x1b < uVar3) {
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar2 = puVar4 + 4;
          if (0x23 < uVar3) {
            puVar4[4] = 0;
            puVar2 = puVar4 + 6;
            puVar4[5] = 0;
          }
        }
      }
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
    }
    else {
      FUN_0025a60c(lVar1,0);
    }
  }
  return lVar1;
}

