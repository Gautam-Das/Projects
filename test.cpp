#include <memory>
#include <iostream>
#include <string>
#include <fstream>

int main(void){
    std::string text;
    std::fstream file;
    file.open ("move_records.txt",  std::ios::out | std::ios::in);

    if (file.is_open()){
      while ( getline(file,text)){
        std::cout << text << '\n';
      }

      file.close();
    }

    // std::cin.getline(text, sizeof(text));
    return 0;
}
