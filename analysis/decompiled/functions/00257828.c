/* Ghidra pseudocode. PS2 address: 00257828. Not validated source. */

void FUN_00257828(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  ulong uStack_60;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  ulong uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_70;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_002571e0(&uStack_30,&uStack_70);
  FUN_002571e0(&uStack_28,&uStack_50);
  uVar4 = uStack_60;
  if ((1 < uStack_70) && (puVar3 = &uStack_50, 1 < uStack_50)) {
    uStack_6c = uStack_6c ^ uStack_4c;
    if ((uStack_70 == 4) || (uStack_70 == 2)) {
      puVar3 = &uStack_70;
      if (uStack_70 == uStack_50) {
        puVar3 = (uint *)&DAT_002d54a8;
      }
    }
    else if (uStack_50 == 4) {
      uStack_60 = 0;
      iStack_68 = 0;
      puVar3 = &uStack_70;
      uVar4 = uStack_60;
    }
    else if (uStack_50 == 2) {
      uStack_70 = 4;
      puVar3 = &uStack_70;
    }
    else {
      iStack_68 = iStack_68 - iStack_48;
      bVar1 = false;
      if (uStack_60 < uStack_40) {
        iStack_68 = iStack_68 + -1;
        uStack_60 = uStack_60 << 1;
        bVar1 = uStack_60 < uStack_40;
      }
      uVar2 = 0x1000000000000000;
      uVar4 = 0;
      while( true ) {
        if (!bVar1) {
          uVar4 = uVar4 | uVar2;
          uStack_60 = uStack_60 - uStack_40;
        }
        uVar2 = uVar2 >> 1;
        uStack_60 = uStack_60 << 1;
        if (uVar2 == 0) break;
        bVar1 = uStack_60 < uStack_40;
      }
      puVar3 = &uStack_70;
      if ((uVar4 & 0xff) == 0x80) {
        if ((uVar4 & 0x100) == 0) {
          puVar3 = &uStack_70;
          if (uStack_60 != 0) {
            puVar3 = &uStack_70;
            uVar4 = uVar4 + 0x80;
          }
        }
        else {
          puVar3 = &uStack_70;
          uVar4 = uVar4 + 0x80;
        }
      }
    }
  }
  uStack_60 = uVar4;
  FUN_002570b0(puVar3);
  return;
}

