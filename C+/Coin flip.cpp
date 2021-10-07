#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	float coin;
	srand(time(0));
	coin=rand()%4;
	cout<<"Coin flip"<<endl<<endl;
	if(coin==0 || coin==2){
		cout<<"Heads"<<endl;
	}
	else{
		cout<<"Tails"<<endl;
	}
return 0;
}
