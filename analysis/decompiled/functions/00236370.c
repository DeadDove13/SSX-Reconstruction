/* Ghidra pseudocode. PS2 address: 00236370. Not validated source. */

undefined8 FUN_00236370(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = ((byte *)param_1)[1];
  uVar2 = 0;
  if ((bVar1 == 0xfb) || (bVar1 == 0x32)) {
    switch(*(byte *)param_1 & 0xfe) {
    case 0x10:
      uVar2 = FUN_001859f8(param_1,param_2,1);
      break;
    case 0x18:
      uVar2 = FUN_0023f310(param_1,param_2,1);
      break;
    case 0x1e:
      if (DAT_002c599c == (code *)0x0) {
        return 0;
      }
      uVar2 = (*DAT_002c599c)(param_1);
      break;
    case 0x30:
    case 0x32:
    case 0x34:
      uVar2 = FUN_0023f678(param_1,param_2,1);
      break;
    case 0x46:
      uVar2 = FUN_0023f100(param_1);
    }
  }
  return uVar2;
}

