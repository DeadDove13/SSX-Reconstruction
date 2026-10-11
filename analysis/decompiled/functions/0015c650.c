/* Ghidra pseudocode. PS2 address: 0015c650. Not validated source. */

void FUN_0015c650(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_100 [16];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  FUN_00160530(auStack_100,param_2,0x2c4728,0x2c4730);
  piVar3 = (int *)param_1;
  if (*piVar3 == 0) {
    fStack_f0 = (float)piVar3[0x11d];
    iStack_c0 = piVar3[0x129];
    fStack_ec = (float)piVar3[0x11e];
    iStack_cc = piVar3[0x126];
    iStack_bc = piVar3[0x12a];
    fStack_e8 = (float)piVar3[0x11f];
    iStack_b8 = piVar3[299];
    iStack_e4 = piVar3[0x120];
    iStack_b4 = piVar3[300];
    iStack_e0 = piVar3[0x121];
    iStack_b0 = piVar3[0x12d];
    iStack_dc = piVar3[0x122];
    iStack_d8 = piVar3[0x123];
    iStack_d4 = piVar3[0x124];
    iStack_d0 = piVar3[0x125];
    iStack_c8 = piVar3[0x127];
    iStack_c4 = piVar3[0x128];
    iStack_ac = piVar3[0x12e];
    iStack_9c = piVar3[0x132];
    iStack_a8 = piVar3[0x12f];
    iStack_a4 = piVar3[0x130];
    iStack_a0 = piVar3[0x131];
    uVar2 = FUN_00160570(auStack_100);
    iVar1 = FUN_00160d98(uVar2,piVar3 + 0x11d,piVar3 + 0x373,*piVar3);
    fStack_68 = (float)piVar3[0x11f] - fStack_e8;
    fStack_70 = (float)piVar3[0x11d] - fStack_f0;
    fStack_7c = 1.0 - (float)piVar3[5];
    fStack_6c = (float)piVar3[0x11e] - fStack_ec;
    fStack_78 = fStack_68 * fStack_7c;
    fStack_80 = fStack_70 * fStack_7c;
    fStack_7c = fStack_6c * fStack_7c;
    piVar3[0x3e6] = iVar1;
    fStack_88 = fStack_e8 + fStack_78;
    fStack_90 = fStack_f0 + fStack_80;
    fStack_8c = fStack_ec + fStack_7c;
    piVar3[0x11d] = (int)fStack_90;
    piVar3[0x11e] = (int)fStack_8c;
    piVar3[0x11f] = (int)fStack_88;
  }
  else {
    uVar2 = FUN_00160570(auStack_100);
    FUN_00160d98(uVar2,piVar3 + 0x11d,piVar3 + 0x373,*piVar3);
  }
  if ((piVar3[0x106] < 7) && (1 < piVar3[0x106])) {
    uVar2 = FUN_00160580(auStack_100);
    FUN_00163f68(uVar2,piVar3 + 0x11d,piVar3 + 0x373,*piVar3,piVar3 + 3,piVar3[0x3e4],1);
  }
  else {
    uVar2 = FUN_00160580(auStack_100);
    FUN_00163f68(uVar2,piVar3 + 0x11d,piVar3 + 0x373,*piVar3,piVar3 + 3,piVar3[0x3e4],0);
  }
  FUN_0015bf40(param_1);
  FUN_0015f350(auStack_100,2);
  return;
}

