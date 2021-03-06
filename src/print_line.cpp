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

#include <fstream>
#include <iostream>

#include "debug.h"

void PrintLine(const char* name, int line) {
  std::ifstream input(name);
  std::string s;

  // Get the line before the parameter.
  int cnt = 0;
  while (cnt < line - 1) {
    if (!std::getline(input, s)) {
      std::cerr << "Error finding the error line" << std::endl;
      return;
    }
    cnt++;
  }

  // Now get the error line.
  if (!std::getline(input, s)) {
    std::cerr << "Error finding the error line" << std::endl;
    return;
  }

  // Finally print the line.
  std::cerr << "Error in this line number " << line << ": " << s << std::endl;
}
