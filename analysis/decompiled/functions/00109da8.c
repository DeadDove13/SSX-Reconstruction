/* Ghidra pseudocode. PS2 address: 00109da8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00109dd8) */

void FUN_00109da8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar1 = *(int *)(param_1 + 0x6cf8);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x350) != 1)) &&
     (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 0x12 == 0)) {
    if (*(float *)(param_1 + 0xe0) < DAT_002c11f0) {
      FUN_001512f0(iVar1);
    }
    else {
      auVar4 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
      auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x7600));
      auVar6 = _vaddbc(in_vf0,in_vf0);
      auVar4 = _vmul(auVar4,auVar5);
      _vaddabc(auVar4,auVar4);
      _vmaddabc(auVar6,auVar4);
      auVar4 = _vmaddbc(auVar6,auVar4);
      auVar4 = _qmfc2(auVar4._0_4_);
      if (*(float *)(param_1 + 0xe0) < DAT_002c11f4) {
        if (auVar4._0_4_ < 0.0) {
          FUN_00151390(iVar1);
        }
        else {
          FUN_00151438(iVar1);
        }
      }
      else {
        auVar5 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
        auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x75f0));
        auVar7 = _vaddbc(in_vf0,in_vf0);
        auVar5 = _vmul(auVar5,auVar6);
        _vaddabc(auVar5,auVar5);
        _vmaddabc(auVar7,auVar5);
        auVar5 = _vmaddbc(auVar7,auVar5);
        auVar5 = _qmfc2(auVar5._0_4_);
        fVar3 = ABS(auVar5._0_4_);
        auVar6 = _lqc2(*(undefined1 (*) [16])(param_1 + 0xd0));
        auVar7 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x7610));
        auVar8 = _vaddbc(in_vf0,in_vf0);
        auVar6 = _vmul(auVar6,auVar7);
        _vaddabc(auVar6,auVar6);
        _vmaddabc(auVar8,auVar6);
        auVar6 = _vmaddbc(auVar8,auVar6);
        auVar6 = _qmfc2(auVar6._0_4_);
        fVar2 = ABS(auVar6._0_4_);
        if ((fVar2 <= fVar3) || (fVar2 <= DAT_002c11f8)) {
          if ((fVar3 <= fVar2) || (fVar3 <= DAT_002c11fc)) {
            if (auVar4._0_4_ < 0.0) {
              FUN_001514e0(*(undefined4 *)(param_1 + 0x6cf8));
            }
            else {
              FUN_00151588(*(undefined4 *)(param_1 + 0x6cf8));
            }
          }
          else if (auVar5._0_4_ < 0.0) {
            FUN_00151630(*(undefined4 *)(param_1 + 0x6cf8));
          }
          else {
            FUN_001516d8(*(undefined4 *)(param_1 + 0x6cf8));
          }
        }
        else if (auVar6._0_4_ < 0.0) {
          FUN_00151828(iVar1);
        }
        else {
          FUN_00151780(iVar1);
        }
      }
    }
  }
  return;
}

