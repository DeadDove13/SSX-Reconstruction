/* Ghidra pseudocode. PS2 address: 00244bb0. Not validated source. */

bool FUN_00244bb0(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 in_vi0;
  undefined4 in_vi1;
  undefined4 in_vi2;
  undefined4 in_vi3;
  undefined4 in_vi4;
  undefined4 in_vi5;
  undefined4 in_vi6;
  undefined4 in_vi7;
  undefined4 in_vi8;
  undefined4 in_vi9;
  undefined4 in_vi10;
  undefined4 in_vi11;
  undefined4 in_vi12;
  undefined4 in_vi13;
  undefined4 in_vi14;
  undefined4 in_vi15;
  undefined4 in_vc0;
  undefined4 in_vc1;
  undefined4 in_vc2;
  undefined4 in_vc4;
  undefined4 in_vc5;
  undefined4 in_vc6;
  
  lVar1 = FUN_002449f0();
  if (lVar1 == 0) {
    uVar2 = _cfc2(in_vc0);
    *(int *)(param_1 + 0x200) = (int)uVar2;
    uVar2 = _cfc2(in_vc1);
    *(int *)(param_1 + 0x204) = (int)uVar2;
    uVar2 = _cfc2(in_vc2);
    *(int *)(param_1 + 0x208) = (int)uVar2;
    uVar2 = _cfc2(in_vc4);
    *(int *)(param_1 + 0x20c) = (int)uVar2;
    uVar2 = _cfc2(in_vc5);
    *(int *)(param_1 + 0x210) = (int)uVar2;
    uVar2 = _cfc2(in_vc6);
    *(int *)(param_1 + 0x214) = (int)uVar2;
    uVar2 = _cfc2(in_vi0);
    *(short *)(param_1 + 0x218) = (short)uVar2;
    uVar2 = _cfc2(in_vi1);
    *(short *)(param_1 + 0x21a) = (short)uVar2;
    uVar2 = _cfc2(in_vi2);
    *(short *)(param_1 + 0x21c) = (short)uVar2;
    uVar2 = _cfc2(in_vi3);
    *(short *)(param_1 + 0x21e) = (short)uVar2;
    uVar2 = _cfc2(in_vi4);
    *(short *)(param_1 + 0x220) = (short)uVar2;
    uVar2 = _cfc2(in_vi5);
    *(short *)(param_1 + 0x222) = (short)uVar2;
    uVar2 = _cfc2(in_vi6);
    *(short *)(param_1 + 0x224) = (short)uVar2;
    uVar2 = _cfc2(in_vi7);
    *(short *)(param_1 + 0x226) = (short)uVar2;
    uVar2 = _cfc2(in_vi8);
    *(short *)(param_1 + 0x228) = (short)uVar2;
    uVar2 = _cfc2(in_vi9);
    *(short *)(param_1 + 0x22a) = (short)uVar2;
    uVar2 = _cfc2(in_vi10);
    *(short *)(param_1 + 0x22c) = (short)uVar2;
    uVar2 = _cfc2(in_vi11);
    *(short *)(param_1 + 0x22e) = (short)uVar2;
    uVar2 = _cfc2(in_vi12);
    *(short *)(param_1 + 0x230) = (short)uVar2;
    uVar2 = _cfc2(in_vi13);
    *(short *)(param_1 + 0x232) = (short)uVar2;
    uVar2 = _cfc2(in_vi14);
    *(short *)(param_1 + 0x234) = (short)uVar2;
    uVar2 = _cfc2(in_vi15);
    *(short *)(param_1 + 0x236) = (short)uVar2;
  }
  return lVar1 == 0;
}

