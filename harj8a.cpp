/**********************************************************
*Teht�v�: Harjoitus8
*Tekij�: Olli Kauppinen
*PVM: 24.9.2013
*Kuvaus:
*Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
*j�rjestyksess� (pienimm�st� suurimpaan) n�yt�lle
*(katso harj. 1 suunnitelma)
*a) k�yt� kokonaislukuja
*b) k�yt� liukulukuja (=reaalilukuja)
*
* Versio 1.0 H4718 24.9.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	int luku1;
	int luku2;
	int luku3;
	int temp;

	cout << "J�rjest�n lukuja pienimm�st� isoimpaan, se on kivaa\n";
	cout << "\nAnna 3 lukua, sy�t� luku ja paina enter:\n";
	cin >> luku1;
	cin >> luku2;
	cin >> luku3;
	
	if (luku1>luku2)
	{
		temp=luku1;
		luku1=luku2;
		luku2=temp;
	}
	if (luku1>luku3)
	{
		temp=luku1;
		luku1=luku3;
		luku3=temp;
	}
	if (luku2>luku3)
	{
		temp=luku2;
		luku2=luku3;
		luku3=temp;
	}

	cout <<"Pienimm�st� suurimpaan: \n" << luku1 <<"\n" <<luku2 << "\n" << luku3;
}