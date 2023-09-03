#include <iostream>
using namespace std;

//Deklarasi variabel global
void makanan(),minuman(),kembalian();
int total = 0,bayar,kembali,no;
string nama;
char lanjutan;

login()
{

	int i;
	string user,pass;
	
	string username ="IF";    
	string password = "12320";    
	string login = "block";    
	i = 1;
      
	do {      
		cout << "\n\t Username  = "; cin>>user;        
		cout << "\t Password  = "; cin>>pass;        
		if (user == username && pass == password) {    
			system("cls");  
			cout << "\t\t++++++++++++++++++++\n";            
			cout << "\t\t|| Login Berhasil ||"<<endl;                      
			cout << "\t\t++++++++++++++++++++\n\n";
		
	 i = 4;
           login = "berhasil";        } 
       else {            
           cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";            
           cout << " | Username / Password Salah ! ("<<i<<"x)|\n";
		   cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";            
           i = i +1;
       }  
    } while (i <= 3);
	
    if(login != "berhasil"){
		cout<<"        -----!WARNING!-----"<<endl;
		cout<<"     'Anda Telah 3X GAGAL Login'\n";       
		cout<<" Silahkan Menghubungi Office Restaurant \n"<<endl;  
	exit(0);
	}  
	return 0; 	
}
//Fungsi main
main() 
{
	char pilih;
	login();	
	bool y=true;
	do 
	{
		cout << "     ========================================"<<endl;
		cout << "     |^^^^^^^^^^HEALTHY RESTAURANT^^^^^^^^^^|"<<endl;
		cout << "     ========================================"<<endl;
		cout << "       ~~~WELCOME TO HEALTHY RESTAURANT~~~"<<endl;
		
		cout << "\n      No. Pemesanan   : "; cin>>no;
		cout << "      Nama Pemesan    : " ; cin>>nama;
		
		string nama[2];
		nama[0] = "Vegetarian Food";
		nama[1] = "Healthy Drink";
		cout << "\n            -MENU HARI INI- "<<endl;
		cout << "      Menu Pertama : "<<nama[0]<<endl;
		cout << "      Menu Kedua   : "<<nama[1]<<endl;
		
		cout<<"\n      Lanjutkan Pemesanan ? (y/n) : "; cin>>lanjutan;
		if (lanjutan=='y' || lanjutan=='Y')
		{
			system("cls");
		} 
		else 
		{
			return 0;
		}
		
		system("cls");
		
		makanan();
		minuman();
		system("cls");
		kembalian();
		
		cout << "\n Ingin Memesan Lagi (y/n) ? "; cin >> pilih;
		
		//jika user memilih 'Y' atau 'y', makan program akan terulang kembali
		if (pilih=='y' || pilih=='Y')
		{
			system("cls");
			total = 0;
		} 
		else 
		{
			y = false;
		}
	}
	while (y==true);

	return 0;
}

//Fungsi Menu Makanan
void makanan()
{
	
	bool y=true;
	do 
	{
		string makan[6]={" -Black Bean Burger       >Rp21.000"," -Mixed Stir Fry          >Rp18.000"," -Lentil Salad            >Rp17.000",
						 " -Olivas Rellenas         >Rp15.000"," -Verduras Con Olivada    >Rp12.000"," -Patatas Bravas          >Rp10.000"};
			
		int menuMakanan, jmlhmkn;
		char pilih2;
		cout << "\n -----------------------------------------"<<endl;
		cout << " |         MENU MAKAN VEGETARIAN         |"<<endl;
		cout << " -----------------------------------------"<<endl;
		cout << " | 1."<<makan[0]<<" |"<<endl;
		cout << " | 2."<<makan[1]<<" |"<<endl;
		cout << " | 3."<<makan[2]<<" |"<<endl;
		cout << " | 4."<<makan[3]<<" |"<<endl;
		cout << " | 5."<<makan[4]<<" |"<<endl;
		cout << " | 6."<<makan[5]<<" |"<<endl;
		cout << " -----------------------------------------"<<endl;
		
		//user memasukkan pilihan menu menggunakan angka	
		cout << "\n Masukkan Pilihan Anda (angka) : "; cin >> menuMakanan;
		//user menginput jumlah makanan yang ingin dipesan dari menu yang sudah dipilih
		cout << " Masukkan Jumlah Pesanan       : "; cin >> jmlhmkn;
		cout << endl;
		switch (menuMakanan)
		{
			case 1:
			total = total + (jmlhmkn*21000);
			cout<<" Anda Memesan :"<<endl;
			cout<<makan[0]<<"  ("<<jmlhmkn<<")";
			break;
			case 2:
			total = total + (jmlhmkn*18000);
			cout<<" Anda Memesan :"<<endl;
			cout<<makan[1]<<"  ("<<jmlhmkn<<")";
			break;
			case 3:
			total = total + (jmlhmkn*17000);
			cout<<" Anda Memesan :"<<endl;
			cout<<makan[2]<<"  ("<<jmlhmkn<<")";
			break;
			case 4:
			total = total + (jmlhmkn*15000);
			cout<<" Anda Memesan :"<<endl;
			cout<<makan[3]<<"  ("<<jmlhmkn<<")";
			break;
			case 5:
			total = total + (jmlhmkn*12000);
			cout<<" Anda Memesan :"<<endl;
			cout<<makan[4]<<"  ("<<jmlhmkn<<")";
			break;
			case 6:
			total = total + (jmlhmkn*10000);
			cout<<" Anda Memesan :"<<endl;
			cout<<makan[5]<<"  ("<<jmlhmkn<<")";
			break;
		}
				
			cout << "\n\n Ingin Memesan Makanan Lagi (y/n) ? "; cin >> pilih2;
			if (pilih2=='y' || pilih2=='Y')
			{}
			else
			{
				y=false;
			}
	} while (y==true);
}

//Fungsi Menu Minuman
void minuman()
{
	bool y=true;
	do
	{
		string minum[6]={" -Autumn Hervest Juice      >Rp16.000",
						 " -Mean Green Juice          >Rp15.000",
						 " -ABC Juice                 >Rp13.000",
						 " -Lemon Ginger Zinger       >Rp12.000",
						 " -Coconut Milk              >Rp10.000",
						 " -Premium Drink             >Rp7.000 "};
		
		int menuMinuman, jmlhmin;
		char pilih3;
		cout << "\n -------------------------------------------"<<endl;
		cout << " |             MENU HEALTHY DRINK          |"<<endl;
		cout << " -------------------------------------------"<<endl;
		cout << " | 1."<<minum[0]<<" |"<<endl;
		cout << " | 2."<<minum[1]<<" |"<<endl;
		cout << " | 3."<<minum[2]<<" |"<<endl;
		cout << " | 4."<<minum[3]<<" |"<<endl;;
		cout << " | 5."<<minum[4]<<" |"<<endl;
		cout << " | 6."<<minum[5]<<" |"<<endl;
		cout << " -------------------------------------------"<<endl;
		
		//user memasukkan pilihan menu menggunakan angka
		cout << "\n Masukkan Pilihan Anda (Angka) : "; cin >> menuMinuman;
		//user menginput jumlah minuman yang ingin dipesan dari menu yang sudah dipilih
		cout << " Masukkan Jumlah Pesanan       : "; cin >> jmlhmin;
		cout << endl;
		/* jmlhmin merupakan banyaknya pesanan yang dipesan oleh user (pelanggan),
		 dikalikan dengan harga minuman, lalu ditambah dengan variabel total
		 agar harga minuman yang dipesan, meskipun user memesan lebih dari 1 menu,
		 total harganya tetap tersimpan dalam variabel tersebut 
		 (total harga bertambah sesuai harga menu yang kita pesan) */
		switch (menuMinuman)
		{
			case 1:
			total = total + (jmlhmin*16000);
			cout<<" Anda Memesan :"<<endl;
			cout<<minum[0]<<"  ("<<jmlhmin<<")";
			break;
			case 2:
			total = total + (jmlhmin*15000);
			cout<<" Anda Memesan :"<<endl;
			cout<<minum[1]<<"  ("<<jmlhmin<<")";
			break;
			case 3:
			total = total + (jmlhmin*13000);
			cout<<" Anda Memesan :"<<endl;
			cout<<minum[2]<<"  ("<<jmlhmin<<")";
			break;
			case 4:
			total = total + (jmlhmin*12000);
			cout<<" Anda Memesan :"<<endl;
			cout<<minum[3]<<"  ("<<jmlhmin<<")";		
			break;
			case 5:
			total = total + (jmlhmin*10000);
			cout<<" Anda Memesan :"<<endl;
			cout<<minum[4]<<"  ("<<jmlhmin<<")";
			break;
			case 6:
			total = total + (jmlhmin*7000);
			cout<<" Anda Memesan :"<<endl;
			cout<<minum[5]<<"  ("<<jmlhmin<<")";
			break;
		}
		cout << "\n\n Ingin Memesan Minuman Lagi (y/n) ? "; cin >> pilih3;
				
		if (pilih3=='y' || pilih3=='Y') 
		{}
		else
		{
			y=false;
		}
	} while (y==true);
}


//Fungsi untuk menghitung total, jumlah bayar dan diskon
void kembalian(){
	int byr;
	
	//program menampilkan total harga makanan dan minuman yang kita pesan
	cout << "\n ....................................."<<endl;
	cout << " : Total Pembelian Anda : Rp. "<<total<<" :";
	cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout << "\n\n Silahkan Input Pembayaran Anda"<<endl;
	cout << " Ingat ! Masukkan Nominal Tanpa Menggunakan Titik !"<<endl;
	do {
		//user menginput jumlah uang yang ingin dibayarkan

		cout << " Total bayar     : Rp. "; cin >>bayar;
		kembali = bayar-total;
		
		if (kembali < 0) {
			byr=0;
			cout << "\n i : Maaf Uang Anda Kurang, Silahkan Masukkan Nominal yang Tepat" << endl;
		} else if (kembali >= 0) {
			/* jika jumlah uang yang dibayarkan cukup untuk membayar makanan, variabel byr menjadi 1 dan
			program berlanjut */
			byr=1;
			
		system("cls"); 
		cout << "\n\n ========================================="<<endl;
		cout << " ||^^^^^^^^^HEALTHY RESTAURANT^^^^^^^^^^||"<<endl;
		cout << " ========================================="<<endl;
		cout << " ||       ~~~BUKTI PEMBAYARAN~~~        ||"<<endl;
		cout << " ||\t\t\t\t\t||"<<endl;
		cout << " || No. Pesanan     : "<<no<<"\t\t\t||"<<endl; 
		cout << " || Nama Pelanggan  : "<<nama<<"\t\t||"<<endl;
		cout << " ||\t\t\t\t\t||"<<endl;
		cout << " || Total Pembelian : Rp. "<<total<<"\t\t||"<<endl;
		cout << " || Uang Anda       : Rp. "<<bayar<<"\t\t||"<<endl;
		cout << " || Total Kembalian : Rp. "<<kembali<<"\t\t||"<<endl;
		cout << " ||\t\t\t\t\t||"<<endl;
		cout << " || ##TERIMAKASIH ATAS KUNJUNGAN ANDA## ||"<<endl;
		cout << " -----------------------------------------"<<endl;	
		}
	}
	while (byr==0);
				
}
