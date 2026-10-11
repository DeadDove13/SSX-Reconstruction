/* Ghidra pseudocode. PS2 address: 00202c48. Not validated source. */

undefined8 FUN_00202c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_450 [1024];
  
  piVar8 = (int *)param_1;
  piVar8[0x11] = 0;
  uVar1 = *(undefined4 *)((int)param_2 + 4);
  piVar8[0x12] = 0;
  *(undefined4 *)((int)param_2 + 8) = uVar1;
  *piVar8 = (int)auStack_450;
  FUN_00204de8(param_2,param_3);
  FUN_00204de8(param_2,param_4);
LAB_00203288:
  lVar4 = FUN_002051a8(param_2);
  if (lVar4 != 0) {
    iVar7 = piVar8[0x11];
    *(undefined1 *)(*piVar8 + iVar7) = 0x7f;
    iVar7 = iVar7 + 1;
    piVar8[0x11] = iVar7;
    lVar4 = FUN_0023a448(0x2bcc48,iVar7,0);
    if (lVar4 != 0) {
      FUN_0023bbd0(lVar4,0xffffffffdeadc0ed,iVar7);
    }
    FUN_0025a55c(lVar4,auStack_450,piVar8[0x11]);
    *piVar8 = (int)lVar4;
    return param_1;
  }
  uVar3 = FUN_00204f90(param_2);
  lVar4 = FUN_0025b730(0x2c5630,uVar3);
  if (lVar4 == 0) {
    iVar7 = piVar8[0x11];
    *(undefined1 *)(*piVar8 + iVar7) = 0;
    piVar8[0x11] = iVar7 + 1;
    uVar3 = FUN_00204f90(param_2);
    lVar4 = FUN_0025b730(0x2c5638,uVar3);
    if (lVar4 == 0) {
      iVar7 = piVar8[0x11];
      *(undefined1 *)(*piVar8 + iVar7) = 0;
      piVar8[0x11] = iVar7 + 1;
      goto LAB_00203288;
    }
    lVar4 = FUN_0025b730(0x2c5640,uVar3);
    if (lVar4 == 0) {
      iVar7 = piVar8[0x11];
      uVar5 = 1;
    }
    else {
      lVar4 = FUN_0025b730(0x2c5648,uVar3);
      if (lVar4 == 0) {
        iVar7 = piVar8[0x11];
        uVar5 = 2;
      }
      else {
        lVar4 = FUN_0025b730(0x2c5650,uVar3);
        if (lVar4 == 0) {
          iVar7 = piVar8[0x11];
          uVar5 = 3;
        }
        else {
          lVar4 = FUN_0025b730(0x2c5658,uVar3);
          uVar5 = 4;
          if (lVar4 != 0) goto LAB_00203288;
          iVar7 = piVar8[0x11];
        }
      }
    }
  }
  else {
    lVar4 = FUN_0025b730(0x2bcc18,uVar3);
    if (lVar4 == 0) {
      iVar7 = piVar8[0x11];
      *(undefined1 *)(*piVar8 + iVar7) = 1;
      piVar8[0x11] = iVar7 + 1;
      iVar7 = FUN_002050c0(param_2);
      iVar6 = 3;
      do {
        iVar2 = piVar8[0x11];
        iVar6 = iVar6 + -1;
        *(char *)(*piVar8 + iVar2) = (char)iVar7;
        piVar8[0x11] = iVar2 + 1;
        iVar7 = iVar7 >> 8;
      } while (-1 < iVar6);
      goto LAB_00203288;
    }
    lVar4 = FUN_0025b730(0x2c5660,uVar3);
    if (lVar4 == 0) {
      iVar7 = piVar8[0x11];
      *(undefined1 *)(*piVar8 + iVar7) = 2;
      piVar8[0x11] = iVar7 + 1;
      iVar7 = FUN_002050c0(param_2);
      iVar6 = 3;
      do {
        iVar2 = piVar8[0x11];
        iVar6 = iVar6 + -1;
        *(char *)(*piVar8 + iVar2) = (char)iVar7;
        piVar8[0x11] = iVar2 + 1;
        iVar7 = iVar7 >> 8;
      } while (-1 < iVar6);
      goto LAB_00203288;
    }
    lVar4 = FUN_0025b730(0x2c5668,uVar3);
    if (lVar4 == 0) {
      iVar7 = piVar8[0x11];
      uVar5 = 3;
    }
    else {
      lVar4 = FUN_0025b730(0x2c5670,uVar3);
      if (lVar4 == 0) {
        iVar7 = piVar8[0x11];
        uVar5 = 4;
      }
      else {
        lVar4 = FUN_0025b730(0x2c5678,uVar3);
        if (lVar4 == 0) {
          iVar7 = piVar8[0x11];
          uVar5 = 5;
        }
        else {
          lVar4 = FUN_0025b730(0x2c5680,uVar3);
          if (lVar4 == 0) {
            iVar7 = piVar8[0x11];
            *(undefined1 *)(*piVar8 + iVar7) = 6;
            piVar8[0x11] = iVar7 + 1;
            iVar7 = FUN_002050c0(param_2);
            iVar6 = 3;
            do {
              iVar2 = piVar8[0x11];
              iVar6 = iVar6 + -1;
              *(char *)(*piVar8 + iVar2) = (char)iVar7;
              piVar8[0x11] = iVar2 + 1;
              iVar7 = iVar7 >> 8;
            } while (-1 < iVar6);
            goto LAB_00203288;
          }
          lVar4 = FUN_0025b730(0x2c5688,uVar3);
          if (lVar4 == 0) {
            iVar7 = piVar8[0x11];
            *(undefined1 *)(*piVar8 + iVar7) = 7;
            piVar8[0x11] = iVar7 + 1;
            iVar7 = FUN_002050c0(param_2);
            iVar6 = 3;
            do {
              iVar2 = piVar8[0x11];
              iVar6 = iVar6 + -1;
              *(char *)(*piVar8 + iVar2) = (char)iVar7;
              piVar8[0x11] = iVar2 + 1;
              iVar7 = iVar7 >> 8;
            } while (-1 < iVar6);
            goto LAB_00203288;
          }
          lVar4 = FUN_0025b730(0x2c5690,uVar3);
          if (lVar4 == 0) {
            iVar7 = piVar8[0x11];
            *(undefined1 *)(*piVar8 + iVar7) = 8;
            piVar8[0x11] = iVar7 + 1;
            iVar7 = FUN_002050c0(param_2);
            iVar6 = 3;
            do {
              iVar2 = piVar8[0x11];
              iVar6 = iVar6 + -1;
              *(char *)(*piVar8 + iVar2) = (char)iVar7;
              piVar8[0x11] = iVar2 + 1;
              iVar7 = iVar7 >> 8;
            } while (-1 < iVar6);
            goto LAB_00203288;
          }
          lVar4 = FUN_0025b730(0x2c5698,uVar3);
          if (lVar4 == 0) {
            iVar7 = piVar8[0x11];
            *(undefined1 *)(*piVar8 + iVar7) = 9;
            piVar8[0x11] = iVar7 + 1;
            iVar7 = FUN_002050c0(param_2);
            iVar6 = 3;
            do {
              iVar2 = piVar8[0x11];
              iVar6 = iVar6 + -1;
              *(char *)(*piVar8 + iVar2) = (char)iVar7;
              piVar8[0x11] = iVar2 + 1;
              iVar7 = iVar7 >> 8;
            } while (-1 < iVar6);
            goto LAB_00203288;
          }
          lVar4 = FUN_0025b730(0x2c56a0,uVar3);
          if (lVar4 == 0) {
            iVar7 = piVar8[0x11];
            uVar5 = 10;
          }
          else {
            lVar4 = FUN_0025b730(0x2c56a8,uVar3);
            if (lVar4 == 0) {
              iVar7 = piVar8[0x11];
              uVar5 = 0xb;
            }
            else {
              lVar4 = FUN_0025b730(0x2c56b0,uVar3);
              if (lVar4 == 0) {
                iVar7 = piVar8[0x11];
                *(undefined1 *)(*piVar8 + iVar7) = 0xc;
                piVar8[0x11] = iVar7 + 1;
                iVar7 = FUN_002050c0(param_2);
                iVar6 = 3;
                do {
                  iVar2 = piVar8[0x11];
                  iVar6 = iVar6 + -1;
                  *(char *)(*piVar8 + iVar2) = (char)iVar7;
                  piVar8[0x11] = iVar2 + 1;
                  iVar7 = iVar7 >> 8;
                } while (-1 < iVar6);
                iVar7 = FUN_002050c0(param_2);
                iVar6 = 3;
                do {
                  iVar2 = piVar8[0x11];
                  iVar6 = iVar6 + -1;
                  *(char *)(*piVar8 + iVar2) = (char)iVar7;
                  piVar8[0x11] = iVar2 + 1;
                  iVar7 = iVar7 >> 8;
                } while (-1 < iVar6);
                goto LAB_00203288;
              }
              lVar4 = FUN_0025b730(0x2c56b8,uVar3);
              if (lVar4 == 0) {
                iVar7 = piVar8[0x11];
                uVar5 = 0xd;
              }
              else {
                lVar4 = FUN_0025b730(0x2c56c0,uVar3);
                if (lVar4 == 0) {
                  iVar7 = piVar8[0x11];
                  uVar5 = 0xe;
                }
                else {
                  lVar4 = FUN_0025b730(0x2c56c8,uVar3);
                  if (lVar4 == 0) {
                    iVar7 = piVar8[0x11];
                    uVar5 = 0xf;
                  }
                  else {
                    lVar4 = FUN_0025b730(0x2c56d0,uVar3);
                    if (lVar4 == 0) {
                      iVar7 = piVar8[0x11];
                      uVar5 = 0x10;
                    }
                    else {
                      lVar4 = FUN_0025b730(0x2c56d8,uVar3);
                      if (lVar4 == 0) {
                        iVar7 = piVar8[0x11];
                        uVar5 = 0x11;
                      }
                      else {
                        lVar4 = FUN_0025b730(0x2c56e0,uVar3);
                        if (lVar4 == 0) {
                          iVar7 = piVar8[0x11];
                          uVar5 = 0x12;
                        }
                        else {
                          lVar4 = FUN_0025b730(0x2bcc28,uVar3);
                          if (lVar4 == 0) {
                            iVar7 = piVar8[0x11];
                            uVar5 = 0x13;
                            goto LAB_00203274;
                          }
                          lVar4 = FUN_0025b730(0x2bcc38,uVar3);
                          uVar5 = 0x14;
                          if (lVar4 != 0) goto LAB_00203288;
                          iVar7 = piVar8[0x11];
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00203274:
  *(undefined1 *)(*piVar8 + iVar7) = uVar5;
  piVar8[0x11] = iVar7 + 1;
  goto LAB_00203288;
}

