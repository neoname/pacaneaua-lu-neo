#include<iostream>

void game(){
	int valoare=100;
  int pariu;
  std::cout<<"ai 100 de euro"<<std::endl;
  while (valoare>0){
    std::cout<<"cat bagi ba? ";
    std::cin>>pariu;
    valoare -= pariu;
    std::cout<<"mai ai "<<valoare<<std::endl;
    
  }
  std::cout<<"ai falit ba bulangiule"<<std::endl;
}

int main(){

	char joci;
	std::cout<<"Bine ai venit la Pacaneaua lu' neo"<<std::endl;
	std::cout<<"Joci? (Y/N)";
	std::cin>>joci;
	if(joci == 'y'){
		std::cout<<"Mult noroc bai pula"<<std::endl;
		game();
	} else {
    std::cout<<"bulangiu☹️"<<std::endl;
  }

	return 0;
}


