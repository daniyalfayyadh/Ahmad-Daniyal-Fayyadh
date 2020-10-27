#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,a=3,b=4,total,i;
	
	cout<<"diketahui deret nya adalah 3,7,11,15,...\n ";
	cout<<"masukkan nilai n :";
	cin>>n;
	total=a;
	for(i=1;i<n;i++){
		a=a+b;
		total=total+a;
	}
	cout<<"\nnilai un ="<<a;
	cout<<"\njumlah deret n ="<<total;
	
	getch();
}

	 
