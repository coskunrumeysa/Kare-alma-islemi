//R�meysa Co�kun
//Program Amac�:Girilen say�n�n karesini alan program
#include<iostream>
using namespace std;
int main()
{
int x,result;
cout<<"Please enter the a number:";
cout<<endl;
cin>>x;
cout<<endl;
cout<<"Square of the number:";
cout<<endl;
result=x*x;
cout<<endl;
cout<<result;
cout<<endl;
system("PAUSE");
return 0;
}
/*Yanl��l�kla include silim�im bu y�zden cin ve cout ta hata verdi.
int x,int result yazm���m yaln��t� do�rusu yukarda.
cout<<result=x*x yapm��t�m fakat cout ile ilgili bir durum olmad��� i�in coutsuz eklmeme laz�mm��.
result=x*x ve result==x*x ayn� �eyler de�il ilki resulta atama yaparken di�eri resuta e�it oldu�unu g�steriyor.
system("Pause") return 0 dan �nce geliyor./
