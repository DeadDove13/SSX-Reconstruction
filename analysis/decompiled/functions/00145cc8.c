/* Ghidra pseudocode. PS2 address: 00145cc8. Not validated source. */

void FUN_00145cc8(float param_1,float param_2,uint *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = param_1;
  if (param_2 <= param_1) {
    fVar3 = param_2;
    param_2 = param_1;
  }
  if ((float)*(byte *)(*(int *)(param_4 + 8) + 0x10) < param_2) {
    param_3[1] = param_3[1] | 1;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x10)) {
      *param_3 = *param_3 | 1;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
    bVar1 = *(byte *)(iVar2 + 0x11);
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_4 + 8) + 0x11);
  }
  if ((float)bVar1 < param_2) {
    param_3[1] = param_3[1] | 2;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x11)) {
      *param_3 = *param_3 | 2;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x12) < param_2) {
    param_3[1] = param_3[1] | 4;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x12)) {
      *param_3 = *param_3 | 4;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x13) < param_2) {
    param_3[1] = param_3[1] | 8;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x13)) {
      *param_3 = *param_3 | 8;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x14) < param_2) {
    param_3[1] = param_3[1] | 0x10;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x14)) {
      *param_3 = *param_3 | 0x10;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x15) < param_2) {
    param_3[1] = param_3[1] | 0x20;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x15)) {
      *param_3 = *param_3 | 0x20;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x16) < param_2) {
    param_3[1] = param_3[1] | 0x40;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x16)) {
      *param_3 = *param_3 | 0x40;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x17) < param_2) {
    param_3[1] = param_3[1] | 0x80;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x17)) {
      *param_3 = *param_3 | 0x80;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x18) < param_2) {
    param_3[1] = param_3[1] | 0x100;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x18)) {
      *param_3 = *param_3 | 0x100;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x19) < param_2) {
    param_3[1] = param_3[1] | 0x200;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x19)) {
      *param_3 = *param_3 | 0x200;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x1a) < param_2) {
    param_3[1] = param_3[1] | 0x400;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x1a)) {
      *param_3 = *param_3 | 0x400;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x1b) < param_2) {
    param_3[1] = param_3[1] | 0x800;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x1b)) {
      *param_3 = *param_3 | 0x800;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x1c) < param_2) {
    param_3[1] = param_3[1] | 0x1000;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x1c)) {
      *param_3 = *param_3 | 0x1000;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if ((float)*(byte *)(iVar2 + 0x1d) < param_2) {
    param_3[1] = param_3[1] | 0x2000;
    if (fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x1d)) {
      *param_3 = *param_3 | 0x2000;
      iVar2 = *(int *)(param_4 + 8);
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
    }
  }
  else {
    iVar2 = *(int *)(param_4 + 8);
  }
  if (((float)*(byte *)(iVar2 + 0x1e) < param_2) &&
     (param_3[1] = param_3[1] | 0x4000, fVar3 <= (float)*(byte *)(*(int *)(param_4 + 8) + 0x1e))) {
    *param_3 = *param_3 | 0x4000;
  }
  return;
}

