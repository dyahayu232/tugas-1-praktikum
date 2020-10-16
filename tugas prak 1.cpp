#include<iostream>
using namespace std;
int main ()
{
	int b, c, d ;
	char a[30] ;

	cout<<" Nama : " ;
	cin>>a ;
	cout<<" NIM : " ;
	cin>>b ;
	cout<<" Nilai UTS : " ;
	cin>>c ;
	cout<<" Nilai UAS : " ;
	cin>>d ;
	cout<<" hai,Nama saya " <<a<< " Nim " <<b<< " nilai akhir "<<((c+d)/2)<<endl ;
	
	return 0 ;
}

