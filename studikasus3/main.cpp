#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main(){
  Input input;
  input.cetak_menu();
  input.cetak_jarak();
  input.tofile();

  Proses proses;
  proses.getdata();
  proses.cetak_nama();
  proses.hitung_menu();
  proses.hitungjarak();
  proses.totalpembelian();
  proses.tofile();

  Output output;
  output.getdata();
  output.cetak();
  return 0;
}