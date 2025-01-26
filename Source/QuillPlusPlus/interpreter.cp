package "qpp.adaves1.lang";

#include <stdnms.hp>

#region GRAMMAR_IMPORTANT        // Grammar for mandatory objects like package
#ifndef
#DEFINE package 0
#DEFINE import 1
#DEFINE whitespace 2
#DEFINE newline 3
#DEFINE interf 4
#endif
#endregion

#DEFINE EXTENSION ".qpp"                // Quill extension was .quill, quill++ will be .qpp

function interpret(void file){      
  if file[4: -0] != EXTENSION {
    printf("<QUILL++ INTERPRETER> <ERROR> File extension %f{file[4 : -0]} is not a valid file extension!");
    return 1;
  }

  else {
    f = content(file);
  }
}
