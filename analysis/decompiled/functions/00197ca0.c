/* Ghidra pseudocode. PS2 address: 00197ca0. Not validated source. */

undefined8 FUN_00197ca0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_50;
  ushort uStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  
  FUN_001978a0(param_3,&uStack_50,0xc);
  uVar2 = 0;
  if (uStack_50._2_2_ != -1) {
    uStack_40 = uStack_50;
    uVar2 = FUN_002237f8(0x299cc8,uStack_50);
    if (iStack_48 != 0) {
      iVar1 = (int)uVar2;
      *(undefined4 *)(iVar1 + 0x100) = param_2;
      *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0xffff0000 | (uint)uStack_4c;
    }
  }
  return uVar2;
}

