/* Ghidra pseudocode. PS2 address: 001810b0. Not validated source. */

void FUN_001810b0(undefined8 param_1,int param_2)

{
  *(int *)param_1 = param_2;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | *(uint *)(param_2 + 0xc);
  FUN_001816f8(param_1,0,0xffffffffffffffff,0);
  FUN_001816f8(param_1,1,0xffffffffffffffff,0);
  FUN_001816f8(param_1,2,0xffffffffffffffff,0);
  FUN_001816f8(param_1,3,0xffffffffffffffff,0);
  FUN_001816f8(param_1,4,0xffffffffffffffff,0);
  FUN_001816f8(param_1,5,0xffffffffffffffff,0);
  FUN_001816f8(param_1,6,0xffffffffffffffff,0);
  FUN_001816f8(param_1,7,0xffffffffffffffff,0);
  FUN_001816f8(param_1,8,0xffffffffffffffff,0);
  FUN_001816f8(param_1,9,0xffffffffffffffff,0);
  FUN_001816f8(param_1,10,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0xb,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0xc,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0xd,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0xe,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0xf,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x10,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x11,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x12,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x13,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x14,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x15,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x16,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x17,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x18,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x19,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x1b,0x3600,0);
  FUN_001816f8(param_1,0x1c,0x800,0);
  FUN_001816f8(param_1,0x1d,0x4000,0);
  FUN_001816f8(param_1,0x1e,0xffffffffffffffff,0);
  FUN_001816f8(param_1,0x1f,0x20,0);
  FUN_001816f8(param_1,0x20,0x40,0);
  FUN_001816f8(param_1,0x21,0x40,0);
  FUN_001816f8(param_1,0x22,0x1000,0);
  FUN_001816f8(param_1,0x23,0x2000,0);
  FUN_001816f8(param_1,0x24,0x10,0);
  FUN_001816f8(param_1,0x25,0x10,0);
  FUN_001816f8(param_1,0x26,0x10,0);
  FUN_001816f8(param_1,0x27,0x10,0);
  FUN_001816f8(param_1,0x28,0xffffffffffffffff,0x3600);
  FUN_001816f8(param_1,0x29,0x100,0);
  FUN_001816f8(param_1,0x2a,0x801,0);
  FUN_001816f8(param_1,0x2b,0x200,0);
  FUN_001816f8(param_1,0x2c,0x400,0);
  FUN_001816f8(param_1,0x2d,0x200,0);
  FUN_001816f8(param_1,0x2e,0x400,0);
  FUN_001816f8(param_1,0x2f,0x40,0);
  FUN_00181718(param_1,0,0x20020,1);
  FUN_00181718(param_1,1,0x10010,0);
  FUN_00181718(param_1,2,0x1001,1);
  FUN_00181718(param_1,3,0x8008,1);
  FUN_00181718(param_1,4,0x1001,0);
  FUN_00181718(param_1,5,0x40,0);
  FUN_00181718(param_1,6,0,0);
  FUN_00181718(param_1,7,0,0);
  FUN_00181718(param_1,8,0,0);
  FUN_00181718(param_1,9,0x1001,0);
  FUN_00181718(param_1,10,0x8008,0);
  FUN_00181718(param_1,0xb,0,0);
  FUN_00181718(param_1,0xc,0x1001,1);
  FUN_00181718(param_1,0xd,0x8008,1);
  FUN_00181718(param_1,0xe,0x8008,0);
  return;
}

