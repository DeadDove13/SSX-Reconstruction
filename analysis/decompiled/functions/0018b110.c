/* Ghidra pseudocode. PS2 address: 0018b110. Not validated source. */

void FUN_0018b110(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_e2 [18];
  undefined1 auStack_d0 [64];
  
  uVar4 = DAT_00285b34;
  param_2 = param_2 + -1;
  DAT_00285b34 = param_1;
  pcVar5 = (char *)FUN_0018b010();
  pcVar5 = pcVar5 + *pcVar5 + pcVar5[*pcVar5];
  do {
    if (param_3 <= DAT_00285b04) {
      DAT_00285b34 = uVar4;
      return;
    }
    if (*pcVar5 == '\0') {
      bVar1 = param_2 == 0;
      param_2 = param_2 + -1;
      if (bVar1) {
        DAT_00285b34 = uVar4;
        return;
      }
      DAT_00285b34 = DAT_00285b34 + 1;
      pcVar5 = (char *)FUN_0018b010();
      bVar3 = pcVar5[0x19];
    }
    else {
      bVar3 = pcVar5[0x19];
    }
    if ((bVar3 & 2) == 0) {
      FUN_0023bac0(auStack_e2 + 2,pcVar5 + 0x21,pcVar5[0x20] + -2);
      auStack_e2[pcVar5[0x20]] = 0;
      iVar7 = DAT_00285b40 + DAT_00285b04 * 0x4c;
      FUN_0025bbe4(iVar7,0x28ab80);
      FUN_0025b7e4(iVar7,auStack_e2 + 2);
      *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(pcVar5 + 2);
      *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(pcVar5 + 10);
      uVar6 = FUN_0018b0b8(iVar7);
      *(undefined4 *)(iVar7 + 0x40) = uVar6;
      DAT_00285b04 = DAT_00285b04 + 1;
      cVar2 = *pcVar5;
    }
    else {
      FUN_0025a55c(auStack_e2 + 2,pcVar5 + 0x21);
      auStack_e2[pcVar5[0x20] + 2] = 0x2f;
      auStack_e2[pcVar5[0x20] + 3] = 0;
      FUN_0025bbe4(auStack_d0,0x28ab80);
      FUN_0025b7e4(0x28ab80,auStack_e2 + 2);
      FUN_0018b110(*(undefined4 *)(pcVar5 + 2),*(uint *)(pcVar5 + 10) >> 0xb,param_3);
      FUN_0018b010();
      FUN_0025bbe4(0x28ab80,auStack_d0);
      cVar2 = *pcVar5;
    }
    pcVar5 = pcVar5 + cVar2;
  } while( true );
}

