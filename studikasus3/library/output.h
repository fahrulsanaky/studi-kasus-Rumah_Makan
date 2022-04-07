using namespace std;

class Output{
  public:
  void cetak(){
    cout<<"Struk Pembelian \n";
    cout<<"Nama Makanan    = "<<data_file[0]<<endl;
    cout<<"Harga Makanan   = "<<data_file[1]<<endl; 
    cout<<"Ongkir          = "<<data_file[2]<<endl;
    cout<<"Jarak Anda      = "<<data_file[3]<<" Km"<<endl;
    cout<<"Pemotongan      = "<<data_file[4]<<endl;
    cout<<"Total Pembelian = "<<data_file[5]<<endl;
  }

  void getdata(){
    ambil_data.open("api_data.txt");
    while (!ambil_data.eof()){
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

  private:
  ifstream ambil_data;
  string data_file[30];
  int index = 0;
};