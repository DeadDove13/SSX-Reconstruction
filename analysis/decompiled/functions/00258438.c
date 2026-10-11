/* Ghidra pseudocode. PS2 address: 00258438. Not validated source. */

void FUN_00258438(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  
  puVar3 = &uStack_50;
  uStack_30 = param_1;
  auStack_2c[0] = param_2;
  FUN_00257eb8(&uStack_30,&uStack_50);
  FUN_00257eb8(auStack_2c,&uStack_40);
  uVar4 = uStack_44;
  if ((1 < uStack_50) && (puVar3 = &uStack_40, 1 < uStack_40)) {
    uStack_4c = uStack_4c ^ uStack_3c;
    if ((uStack_50 == 4) || (uStack_50 == 2)) {
      puVar3 = &uStack_50;
      if (uStack_50 == uStack_40) {
        puVar3 = (uint *)&DAT_002d54c0;
      }
    }
    else if (uStack_40 == 4) {
      uStack_44 = 0;
      iStack_48 = 0;
      puVar3 = &uStack_50;
      uVar4 = uStack_44;
    }
    else if (uStack_40 == 2) {
      uStack_50 = 4;
      puVar3 = &uStack_50;
    }
    else {
      iStack_48 = iStack_48 - iStack_38;
      bVar1 = false;
      if (uStack_44 < uStack_34) {
        iStack_48 = iStack_48 + -1;
        uStack_44 = uStack_44 << 1;
        bVar1 = uStack_44 < uStack_34;
      }
      uVar2 = 0x40000000;
      uVar4 = 0;
      while( true ) {
        if (!bVar1) {
          uVar4 = uVar4 | uVar2;
          uStack_44 = uStack_44 - uStack_34;
        }
        uVar2 = uVar2 >> 1;
        uStack_44 = uStack_44 << 1;
        if (uVar2 == 0) break;
        bVar1 = uStack_44 < uStack_34;
      }
      puVar3 = &uStack_50;
      if ((uVar4 & 0x7f) == 0x40) {
        if ((uVar4 & 0x80) == 0) {
          puVar3 = &uStack_50;
          if (uStack_44 != 0) {
            puVar3 = &uStack_50;
            uVar4 = uVar4 + 0x40;
          }
        }
        else {
          puVar3 = &uStack_50;
          uVar4 = uVar4 + 0x40;
        }
      }
    }
  }
  uStack_44 = uVar4;
  FUN_00257da8(puVar3);
  return;
}

