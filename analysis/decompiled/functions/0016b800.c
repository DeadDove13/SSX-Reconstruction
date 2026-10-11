/* Ghidra pseudocode. PS2 address: 0016b800. Not validated source. */

void FUN_0016b800(undefined8 param_1,undefined4 *param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = -40.0;
  if (param_3 == 1) {
    fVar4 = -10.0;
  }
  iVar2 = 0;
  if (0 < param_3) {
    fVar3 = 1.0;
    do {
      if (iVar2 == param_4) {
        FUN_0011ed18(0x295e90,0xb);
        FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
        FUN_0011ed48(0x295e90,3);
        lVar1 = FUN_0019a7c0(*param_2);
        if (lVar1 != 0) {
          FUN_0016b6d0(0xffffffffffffff7e,(int)(fVar4 - fVar3),0xe6,0x15);
        }
        FUN_0011ed48(0x295e90,0);
        FUN_0011ed18(0x295e90,0xc);
        FUN_0016b110(0xc3020000,fVar4,0x43660000,0x41a00000,fVar3,fVar3,param_1,*param_2,0,0,1);
      }
      else {
        FUN_0016b110(0xc3020000,fVar4,0x43660000,0x41a00000,fVar3,fVar3,param_1,*param_2,0,0,0);
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
      fVar4 = fVar4 + 20.0;
    } while (iVar2 < param_3);
  }
  return;
}

