using namespace std;

class Proses{
  public:
   	void getdata(){
    ambil_data.open("api_data.txt");
    bool nilai_menu = true;
    while (!ambil_data.eof()){
      if (nilai_menu){
        ambil_data >> menu;
        nilai_menu = false;
      }else{
        ambil_data >> jarak;
      }
    }
    ambil_data.close(); 
  }

  void hitung_menu(){
    if (menu == 1){
		  x = 21000;
	  }else if(menu == 2){
		  x = 17000;
	  }else if(menu == 3){
		  x = 19000;
	  }else if(menu == 4){
	  	x = 20000;
	  }else{
		  x = 25000;
	  }
  }

    void hitungjarak(){
	  if(jarak <= 3){
		  ongkir = 15000;
		  total_awal = x + ongkir;
	  }else{
		  ongkir = 25000;
		  total_awal = x + ongkir;
	  }
  }
    void totalpembelian(){
  	if(total_awal >= 26000 && total_awal < 50000){
  		total_pembelian = (total_awal - 3000);
  		pemotongan = "Ongkir_senilai_3000";
  	}else if(total_awal >= 50000 && total_awal < 150000){
  		total_pembelian = (total_awal - 5000);
		  total_pembelian = total_pembelian-(total_pembelian*0.15);
  		pemotongan = "Ongkir_senilai_5000_dan_diskon_15%";
  	}else{
  		total_pembelian = (total_awal - 8000);
		  total_pembelian = total_pembelian-(total_pembelian*0.35);
  		pemotongan = "Ongkir_senilai_8000_dan_diskon_35%";
  	}
  }

void cetak_nama(){
	if (menu == 1){
		nama = "Ayam_Geprek";
	}else if (menu == 2){
		nama = "Ayam_Goreng";
	}else if (menu == 3){
		nama = "Udang_Goreng";
	}else if (menu == 4){
		nama = "Cumi_Goreng";
	}else {
		nama = "Ayam_Bakar";
	}
}

    void tofile(){
      tulis_data.open("api_data.txt");
      tulis_data << nama<<endl;
      tulis_data << x<<endl; 
      tulis_data << ongkir<<endl;
      tulis_data << jarak<<endl;
      tulis_data << pemotongan<<endl;
      tulis_data << total_pembelian;
      tulis_data.close();
    }

  private:
  int menu;
  float jarak, ongkir, x, total_awal, total_pembelian;
  string nama, pemotongan;
  ofstream tulis_data;
  ifstream ambil_data;
};