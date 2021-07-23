#include <iostream.h>
#include <conio.h>

main ()
{
   unsigned short int f1=0,f2=1,f3,sayac,eleman_sayisi,toplam=1;
   float ortalama;
   cout<<"Lutfen 1-34 arasinde tam sayilar giriniz!"<<endl;
   cout<<"Fionacci serisinin kacinci elemanina kadar listelemek istiyorsunuz?:";
   cin>>eleman_sayisi;
   if (eleman_sayisi>=1)
						cout<<f1;
   if (eleman_sayisi>=2)
						cout<<","<<f2;
   for (sayac = 3; sayac <= eleman_sayisi; sayac++)
   {
	if (sayac<=eleman_sayisi)
					cout<<",";
	f3=f2+f1;
	cout<<f3;
	toplam=toplam+f3;
	f1=f2;
	f2=f3;
   }
   cout<<endl<<"Serideki sayilarin toplami="<<toplam<<endl<<"eleman sayisi="<<eleman_sayisi;
   ortalama= float (toplam)/float(eleman_sayisi);
   cout<<endl<<"Serideki sayilarin aritmetik ortalamasi="<<ortalama;
getch();
}

