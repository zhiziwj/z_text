#ifndef ZTEXT
#define ZTEXT
#include <bits/stdc++.h>
std::vector<std::string> text;
std::string file_name;
void error(){
	std::cout<<"you must not use this command"<<std::endl;
	system("pause");
}
void init(){
	std::string str;//input filename and text
	std::getline(std::cin >> std::ws, str);
	file_name=str;
	freopen(str.c_str(),"r",stdin);
	while(std::getline(std::cin,str)){
		text.push_back(str);
	}
	std::cin.clear();
    clearerr(stdin);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    #ifdef _WIN32
    const char* con = "CONIN$";
    #else
    const char* con = "/dev/tty";
    #endif
    freopen("CON","r",stdin);
	return;
}
void copy_(){
	int copy1,copy2;
	std::cin>>copy1>>copy2;
	copy1--;
	copy2--;
	if(copy1>=text.size()||copy2>=text.size()||copy1<0||copy2<0){
		error();
	}
	text[copy1]=text[copy2];
	return;
}
void change(){
	int line;
	std::cin>>line;
	if(line>=text.size()||line<=0){
		error();
	}
	std::string t;
	std::getline(std::cin,t);
	text[line]=t;
	return;
}
void del(){
	int line;
	std::cin>>line;
	auto it=text.begin()+line;
	text.erase(it);
}
void new_text(){
	std::string t;
	std::cin.clear();
	std::getline(std::cin,t);
	text.push_back(t);
	return;
}
void print_text(){
	for(int i=0;i<text.size();i++){
		if(text[i]==""){
			break;
		}
		std::cout<<i+1<<':'<<text[i]<<std::endl;
	}
	return;
}
#endif