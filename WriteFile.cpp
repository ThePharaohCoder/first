#include "WriteFile.h"

#include <iostream>
using namespace std;

WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}


void WriteFile::close()
{
 if (!closed){
    output_file.close();
    closed = true;
 }
}

void WriteFile::writeLine(String* line)
{   
   if (!closed && line->length() > 0){
      output_file << line->getText() << endl;
   }     
}


WriteFile::~WriteFile()
{ 
  close();
}
