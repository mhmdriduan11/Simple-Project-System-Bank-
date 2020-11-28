#include <iostream>

namespace Informasi {
	namespace User {                          
		class Saldo{
			public:
				long long money{}, max_penyimpanan{};
				Saldo(){this->max_penyimpanan = 1000000 ;};
				//for batas penyimpanan ;
				long long saldoPenyimpanan(long long max_penyimpanan){
					this->max_penyimpanan = max_penyimpanan ;
					return this->max_penyimpanan ;}

				//untuk process menabung dan transfer ;
				long long status(long long numeric, std::string to){
					long long then{};
					if(to == "simpan"){
						then = this->money + numeric ;
						if (then >= this->max_penyimpanan || numeric < 0)
						{
							std::cout << "Transaksi gagal!\nNominal yang anda masukan bermasalah !" << std::endl ;
						}else{
							this->money = then ;
							std::cout << "Transaksi Berhasil!" << std::endl ; 
						}
					}else if (to == "kirim")
					{
						then = this->money - numeric ;
						if (then >= 0)
						{
							this->money = then ;
							std::cout << "Transaksi Berhasil !!" << std::endl ;
						}else{
							std::cout << "Transaksi gagal!\nSaldo anda tidak mencukupi\n" ;
						}
					}
					return this->money ;
				}
				void cetakSaldo(){std::cout << "=====) SALDO BANK (=====\nSaldo : " << this->money << std::endl ;}
		};
	}
}