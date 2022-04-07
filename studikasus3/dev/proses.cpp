#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main(){
  Proses proses;
  proses.getdata();
  proses.cetak_nama();
  proses.hitung_menu();
  proses.hitungjarak();
  proses.totalpembelian();
  proses.tofile();
  return 0;
}