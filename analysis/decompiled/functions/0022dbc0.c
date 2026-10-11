/* Ghidra pseudocode. PS2 address: 0022dbc0. Not validated source. */

ulong FUN_0022dbc0(uint param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = FUN_00256a78(param_1 & 0xffff,param_2 & 0xffff);
  uVar3 = FUN_00256a78(param_1 & 0xffff,param_2 >> 0x10);
  uVar4 = FUN_00256a78(param_1 >> 0x10,param_2 & 0xffff);
  iVar1 = FUN_00256a78(param_1 >> 0x10,param_2 >> 0x10);
  return (uVar2 & 0xffffffff) + uVar3 * 0x10000 + uVar4 * 0x10000 & 0xffffffff |
         (long)((int)(uVar3 >> 0x10) +
                (int)((uVar2 >> 0x10) + (uVar3 & 0xffff) + (uVar4 & 0xffff) >> 0x10) +
               iVar1 + (int)(uVar4 >> 0x10)) << 0x20;
}

