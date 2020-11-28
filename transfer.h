#include "menabung.h"

namespace Transfer {
	namespace User {
		class Sending:public Menabung::User::Tambah{
			public:
				void sendMoney(long long dana){
					Informasi::User::Saldo::status(dana,"kirim");
				}
		};
	}
}