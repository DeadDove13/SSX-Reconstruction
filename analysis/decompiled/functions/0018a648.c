/* Ghidra pseudocode. PS2 address: 0018a648. Not validated source. */

void FUN_0018a648(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0018a858(0x808000);
  PTR_FUN_002c5acc = FUN_0018a548;
  FUN_0018a858(0x808080);
  FUN_0023ea98(0);
  FUN_0018a858(0x8000);
  uVar2 = FUN_00259ac0(0x400);
  FUN_00259ae8(uVar2);
  puVar4 = (undefined4 *)(((int)uVar2 + 0x3fU & 0xffffffc0) + 0x800);
  iVar1 = EndOfHeap();
  iVar1 = iVar1 - (int)puVar4;
  FUN_0018ac08(0x2b3a20,puVar4,iVar1);
  for (puVar3 = puVar4; puVar3 < (undefined4 *)((int)puVar4 + iVar1); puVar3 = puVar3 + 1) {
    *puVar3 = 0xdeafc0de;
  }
  FUN_0023b2a0(puVar4,iVar1);
  FUN_0018a280(puVar4,uVar2,(int)puVar4 + iVar1);
  FUN_0018a858(0x20);
  FUN_00234f08(0x3c);
  FUN_0018a858(0x2000);
  DAT_002c5a50 = 0;
  FUN_00238c18(0x30,0,0x20);
  thunk_FUN_00238508(0x2c4e70);
  FUN_0018a858(0x200000);
  FUN_0018ac08(0x2b3a40);
  FUN_002358b0(0x10,0);
  FUN_0018a858(0x200020);
  DAT_002c5938 = FUN_00243f08(0);
  FUN_0021b5a8(0x2c5938);
  FUN_0018a858(0x2020);
  FUN_001bd2f8(0x295e90);
  FUN_0018ac08(0x2b3a60);
  FUN_0023e608(0);
  FUN_001f7420();
  FUN_0018ac08(0x2b3a78);
  return;
}

