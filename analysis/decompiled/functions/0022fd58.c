/* Ghidra pseudocode. PS2 address: 0022fd58. Not validated source. */

void FUN_0022fd58(int param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = 0x40000;
  if (param_2 < 0x40001) {
    lVar6 = param_2;
  }
  iVar5 = DAT_002a1c9c + param_1 * 0x54;
  if (*(int *)(iVar5 + 0x44) == 0) {
    uVar4 = FUN_00225218(0x30);
    iVar3 = (int)uVar4;
    *(int *)(iVar5 + 0x44) = iVar3;
    bVar2 = DAT_0029a830._6_1_;
    *(undefined2 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 8) = 0;
    FUN_00233790(uVar4,DAT_0029a88f,0x31 < bVar2);
    FUN_00230038(iVar5 + 0x34,*(undefined4 *)(iVar5 + 0x44));
    uVar1 = *(undefined4 *)(iVar5 + 0x44);
  }
  else {
    uVar1 = *(undefined4 *)(iVar5 + 0x44);
  }
  FUN_00233800(uVar1,lVar6);
  return;
}

