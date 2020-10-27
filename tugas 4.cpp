 #include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
	int i,kuadrat,jumkuadrat=0;
	
	cout<<"diketahui barisan nya adalah 1,2,3,4...";
	cout<<"\nmaka jumlah deret ke 6 adalah\n\n";
	for (i=1;i<=6;i++){
		kuadrat=pow(i,3); 
		jumkuadrat=jumkuadrat+kuadrat;
		cout<<i<<"="<<kuadrat;
		
		cout<<"\n";
		
	}
	cout<<"========== +";
	        cout<<"\n  "<<jumkuadrat;
	
	
	getch();
}
