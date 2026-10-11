/* Ghidra pseudocode. PS2 address: 001d3828. Not validated source. */

void FUN_001d3828(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  if (*param_2 == *(int *)(param_1 + 0xd028)) {
    iVar1 = param_2[1];
  }
  else {
    *(int *)(param_1 + 0xd028) = *param_2;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[1];
  }
  if (iVar1 == *(int *)(param_1 + 0xd02c)) {
    iVar1 = param_2[2];
  }
  else {
    *(int *)(param_1 + 0xd02c) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[2];
  }
  if (iVar1 == *(int *)(param_1 + 0xd030)) {
    iVar1 = param_2[3];
  }
  else {
    *(int *)(param_1 + 0xd030) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[3];
  }
  if (iVar1 == *(int *)(param_1 + 0xd034)) {
    iVar1 = param_2[4];
  }
  else {
    *(int *)(param_1 + 0xd034) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[4];
  }
  if (iVar1 == *(int *)(param_1 + 0xd038)) {
    iVar1 = param_2[6];
  }
  else {
    *(int *)(param_1 + 0xd038) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[6];
  }
  if (iVar1 == *(int *)(param_1 + 0xd040)) {
    iVar1 = param_2[5];
  }
  else {
    *(int *)(param_1 + 0xd040) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[5];
  }
  if (iVar1 == *(int *)(param_1 + 0xd03c)) {
    iVar1 = param_2[7];
  }
  else {
    *(int *)(param_1 + 0xd03c) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[7];
  }
  if (iVar1 == *(int *)(param_1 + 0xd044)) {
    iVar1 = param_2[8];
  }
  else {
    *(int *)(param_1 + 0xd044) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[8];
  }
  if (iVar1 == *(int *)(param_1 + 0xd048)) {
    iVar1 = param_2[9];
  }
  else {
    *(int *)(param_1 + 0xd048) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[9];
  }
  if (iVar1 != *(int *)(param_1 + 0xd04c)) {
    *(int *)(param_1 + 0xd04c) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
  }
  if ((float)param_2[10] == *(float *)(param_1 + 0xd050)) {
    iVar1 = param_2[0xc];
  }
  else {
    *(int *)(param_1 + 0xd050) = param_2[10];
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[0xc];
  }
  if (iVar1 == *(int *)(param_1 + 0xd058)) {
    iVar1 = param_2[0xb];
  }
  else {
    *(int *)(param_1 + 0xd058) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[0xb];
  }
  if (iVar1 == *(int *)(param_1 + 0xd054)) {
    iVar1 = param_2[0xd];
  }
  else {
    *(int *)(param_1 + 0xd054) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[0xd];
  }
  if (iVar1 == *(int *)(param_1 + 0xd05c)) {
    iVar1 = param_2[0xe];
  }
  else {
    *(int *)(param_1 + 0xd05c) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[0xe];
  }
  if (iVar1 == *(int *)(param_1 + 0xd060)) {
    iVar1 = param_2[0xf];
  }
  else {
    *(int *)(param_1 + 0xd060) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    iVar1 = param_2[0xf];
  }
  if (iVar1 == *(int *)(param_1 + 0xd064)) {
    fVar2 = (float)param_2[0x10];
  }
  else {
    *(int *)(param_1 + 0xd064) = iVar1;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
    fVar2 = (float)param_2[0x10];
  }
  if (fVar2 != *(float *)(param_1 + 0xd068)) {
    *(float *)(param_1 + 0xd068) = fVar2;
    *(undefined4 *)(param_1 + 0xd07c) = 0;
  }
  return;
}

