https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash

cd ~/lab0/build
cmake ..
make

cd ~/lab0/test
clang -emit-llvm -S -fno-discard-value-names -c simple0.c

cd ~
opt -load lab0/build/PrereqPass.so -Prereqs -disable-output lab0/test/simple0.ll

cd ~/lab0

exit 
