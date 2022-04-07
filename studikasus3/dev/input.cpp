#include <iostream>
#include <fstream>
#include "../library/input.h"

int main(){
  Input input;
  input.cetak_menu();
  input.cetak_jarak();
  input.tofile();
  return 0;
}