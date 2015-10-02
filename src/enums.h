/*
// Copyright (c) 2015 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/
#ifndef H_ENUMS
#define H_ENUMS

enum ETYPE {
  VOID,
  FLOAT_32,
  FLOAT_64,
  INT_32,
  INT_64,
  PTR_32,
  PTR_64
};

enum OPERATION {
  EQ_OPER,
  NEQ_OPER,
  LE_OPER,
  LT_OPER,
  GE_OPER,
  GT_OPER,
  DIV_OPER,
  ADD_OPER,
  SUB_OPER,
  MUL_OPER,
  REM_OPER,
  AND_OPER,
  OR_OPER,
  XOR_OPER,
  SHL_OPER,
  SHR_OPER,
  CLZ_OPER,
  CTZ_OPER,
  POPCNT_OPER
};

#endif
