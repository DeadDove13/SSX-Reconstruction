/* Ghidra pseudocode. PS2 address: 0021f668. Not validated source. */

undefined4 FUN_0021f668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = (float)FUN_0021e000(0x299cc8,param_2,param_3,0);
  uVar1 = 1;
  if (fVar3 <= 0.0) {
    fVar3 = (float)FUN_0021e828(0x299cc8,param_2,param_3);
    uVar1 = 0;
    if (0.0 < fVar3) {
      lVar2 = FUN_002237f8(0x299cc8,*(undefined4 *)((int)param_3 + 0x38));
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
        if ((*(uint *)((int)lVar2 + 0xe8) & 0x80) == 0) {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

