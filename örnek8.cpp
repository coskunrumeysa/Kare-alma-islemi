//Rümeysa Coþkun
//Program Amacý:Girilen sayýnýn karesini alan program
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
/*Yanlýþlýkla include silimþim bu yüzden cin ve cout ta hata verdi.
int x,int result yazmýþým yalnýþtý doðrusu yukarda.
cout<<result=x*x yapmýþtým fakat cout ile ilgili bir durum olmadýðý için coutsuz eklmeme lazýmmýþ.
result=x*x ve result==x*x ayný þeyler deðil ilki resulta atama yaparken diðeri resuta eþit olduðunu gösteriyor.
system("Pause") return 0 dan önce geliyor./
