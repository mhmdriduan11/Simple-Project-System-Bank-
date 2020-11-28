#include "info.h"
namespace Menabung {
	namespace User {
		class Tambah : public Informasi::User::Saldo {
			public: 
				Tambah() = default ;
				void addMoney(long long dana){
					Informasi::User::Saldo::status(dana,"simpan");
				}
		};
	};
};
