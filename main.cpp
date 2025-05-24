#include "ztext.hpp"
int main(){
	init();
	char op;
	system("cls");
	while(true){
		print_text();
		std::cin.clear();
		clearerr(stdin);
		std::cin>>op;
		if(op=='e'){
			break;
		}
		switch(op){
			case 'c':
				copy_();
				break;
			case 't':
				change();
				break;
			case 'd':
				del();
				break;
			case 'n':
				new_text();
				break;
			default:
				std::cout<<"unknown command"<<std::endl;
		}
		system("cls");
	}
	freopen(file_name.c_str(),"w",stdout);
	for(int i=0;i<text.size();i++){
		std::cout<<text[i]<<std::endl;
	}
	return 0;
}