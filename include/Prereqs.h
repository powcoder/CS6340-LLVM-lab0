https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "llvm/IR/Module.h"

using namespace llvm;

namespace prereqs {
struct Prereqs : public ModulePass {
  static char ID;
  Prereqs();

  bool runOnModule(Module &M);
  void print(Module &M);

  int NumOfFunctions = 0;
  int NumOfInstructions = 0;
};
} // namespace prereqs
