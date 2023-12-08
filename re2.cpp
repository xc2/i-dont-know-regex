#include <iostream>
#include <string>
#include <re2/re2.h>

using namespace std;
using namespace re2;

RE2 reg("b+$");

int main(int argc, char **argv){
  string s = string(500000, "b") + "a";

  RE2::GlobalReplace(&s, reg, "");

  count << s << endl;

  return 0;
}