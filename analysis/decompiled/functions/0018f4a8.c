/* Ghidra pseudocode. PS2 address: 0018f4a8. Not validated source. */

long FUN_0018f4a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0018dc18();
  lVar2 = FUN_0018dd28(param_1);
  if (((lVar2 == 0) && (lVar1 == 0)) && (lVar2 = FUN_0018dd60(param_1), lVar2 == 0xd)) {
    FUN_0018ea68(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110),
                 *(undefined4 *)((int)param_1 + 0x14));
  }
  return lVar1;
}

