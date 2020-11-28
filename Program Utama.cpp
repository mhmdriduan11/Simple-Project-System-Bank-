#include "transfer.h"

int program(){
	system("clear");
	int short numeric {},count{1};
	std::cout << "=====) GREENWITCH BANK (=====\n" << std::endl ;
	std::string text[]{"Print","Insert","Transfer","Close"};
	for(std::string import : text){
		std::cout << " [" << (count++) << "] " << import << std::endl ;

	}
		std::cout << "\nP)ilihan ? "  ;std::cin >> numeric  ; 
	return numeric ;}
int main(){

	//Initialization
	Transfer::User::Sending* s1 = new Transfer::User::Sending();
	int short user = program();char again {};long long count {};
	enum us { PRINT=1,INSERT,TRANSFER,EXIT };
	//Process

	while(user != EXIT){
		switch(user){
			case PRINT:
				s1->Informasi::User::Saldo::cetakSaldo();
				break;
			case INSERT:
				std::cout << "=====) INSERT SALDO (=====\n" ;
				std::cout << " Entry Insert   : " ;std::cin >> count ;
				s1->Menabung::User::Tambah::addMoney(count);
				break;
			case TRANSFER:
				std::cout << "=====) TRANSFER SALDO (=====\n" ;
				std::cout << " Entry Transfer : " ;std::cin >> count ;
				s1->Transfer::User::Sending::sendMoney(count);
				break;
		}
		back:
		std::cout << "Back-to MainMenu ~ y/n :";std::cin >> again ; 
		if (tolower(again) == 'y')
		{
			user = program();
		}else if (tolower(again) == 'n')
		{
			break;
		}else{
			goto back;
		}
	}
	std::cin.get();
	return 0;
	
}