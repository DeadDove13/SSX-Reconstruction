/* Ghidra pseudocode. PS2 address: 0015f558. Not validated source. */

void FUN_0015f558(void)

{
  long lVar1;
  
  lVar1 = 0;
  switch(DAT_0027ba84) {
  case 0:
    lVar1 = 0x2afb20;
    break;
  case 1:
    lVar1 = 0x2afb40;
    break;
  case 3:
  case 7:
    lVar1 = 0x2afbe0;
    break;
  case 4:
    lVar1 = 0x2afb78;
    break;
  case 5:
    lVar1 = 0x2afb60;
    break;
  case 6:
    lVar1 = 0x2afb90;
    break;
  case 8:
    lVar1 = 0x2afbc8;
    break;
  case 9:
    lVar1 = 0x2afba8;
    break;
  case 10:
    lVar1 = 0x2afc00;
  }
  if (lVar1 == 0) {
    FUN_00160a70(0x2c4728,0x2afc20);
  }
  else {
    FUN_00160a70(0x2c4728);
  }
  FUN_00160a70(0x2c4730,0x2afc20);
  return;
}

