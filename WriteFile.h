
#if !defined WRITE_FILE_H  //include guard
#define WRITE_FILE_H

#include "Text.h"
#include <fstream>
using namespace std;

//compiler needs to know the size
class WriteFile
{
   private:
     ofstream output_file;
     bool closed;

   public:
      WriteFile(const char* file_name);
      ~WriteFile();
      void close();
      void writeLine(String* line);
      
};

#endif