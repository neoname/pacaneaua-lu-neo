#include<iostream>

void game(){
	std::cout<<"merge";
}

int main(){

	bool joci;
	std::cout<<"Bine ai venit la Pacaneaua lu' neo"<<std::endl;
	std::cout<<"Joci? (Y/N)";
	std::cin>>joci;
	if(joci){
		std::cout<<"Mult noroc bai pula"<<std::endl;
		game();
	}

	return 0;
}


