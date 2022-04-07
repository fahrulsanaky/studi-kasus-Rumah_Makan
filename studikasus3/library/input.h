using namespace std;

class Input{
  public:
    void cetak_menu(){
    cout << "==================================\n";
    cout << "1. Ayam Geprek  : 21000\n" << endl;
    cout << "2. Ayam Goreng  : 17000\n" << endl;
    cout << "3. Udang Goreng : 19000\n" << endl;
    cout << "4. Cumi Goreng  : 20000\n" << endl;
    cout << "5. Ayam Bakar   : 25000\n" << endl;
    cout << "Pilih menu : ";
    cin >> menu;
 }
    void cetak_jarak(){
    cout<<"masukan jarak anda sekarang = ";
	  cin>>jarak;
    cout << "==================================\n";
  }
   void tofile(){
    tulis_data.open("api_data.txt");
    tulis_data << menu<<endl; 
    tulis_data << jarak; 
    tulis_data.close();
  }

  private:
    int menu;
    float jarak;
    ofstream tulis_data;
};