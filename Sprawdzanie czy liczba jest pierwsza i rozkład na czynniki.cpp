#include<iostream>
#include<cstdlib>
using namespace std;

bool czy_pierwsza(int n)
{
	if(n<2)
	return false; //gdy liczba jest mniesza ni¿ 2 to nie jest pierwsza
	
	for(int i=2;i*i<=n;i++)
	if(n%i==0)
	return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

int main()
{
	int n;
	
	poczatek1:
	system("cls");
	
	cout<<"=============================="<<endl;
	cout<<"| Witam w moim programie     |"<<endl;
	cout<<"|            by Tomasz Gasior|"<<endl;
	cout<<"=============================="<<endl<<endl;
	cout<<"Co chcesz zrobic?"<<endl<<"s - Sprawdzic czy liczba jest pierwsza."<<endl<<"r - Rozlozyc liczbe na czynniki."<<endl<<"w - Wyjsc."<<endl;
	
	blad1:
	
	char a;
	cin>>a;
	
	if(a=='s')
	{
		system("cls");
		
		cout<<"Sprawdzanie czy liczba jest pierwsza:"<<endl;
		
		poczatek2:
	
		cout<<endl<<"Podaj liczbe: ";
		cin>>n;
	
		if(czy_pierwsza(n)) //lub czy_pierwsza(n)==1
			cout<<endl<<"Liczba "<<n<<" jest pierwsza"<<endl;
		else
			cout<<endl<<"Liczba "<<n<<" nie jest pierwsza"<<endl;
	
		char b;
		
		skrot:
		
		cout<<endl<<"Co chcesz zrobic?"<<endl;
		
		if(czy_pierwsza(n)!=1)
			cout<<"r - Rozlozyc ta liczbe na czynniki"<<endl;
		
		cout<<"s - Sprawdzic inna liczbe."<<endl<<"e - Wyczyscic ekran i sprawdzic liczbe."<<endl<<"m - Wrocic do menu"<<endl<<"w - Wyjsc z programu."<<endl;
	
		blad2:
	
		cin>>b;
		
		if(b=='r'&&czy_pierwsza(n)!=1)
		{
			cout<<endl<<"Czynniki pierwsze liczby "<<n<<": ";
	
			int k=2;
	
			hababa1:
	
			while(n>1)
			{
				while(n%k==0)
				{
					cout<<k<<" ";
					n=(n/k);
				}
				while(k<n)
				{
					++k;
					goto hababa1;
				}	
			}
			cout<<endl;
			n=2;
			goto skrot;
		}
		if(b=='s')
			goto poczatek2;
		if(b=='e')
		{
			system("cls");
			cout<<"Sprawdzanie czy liczba jest pierwsza:"<<endl;
			goto poczatek2;	
		}
		if(b=='m')
			goto poczatek1;
		if(b=='w')
			goto koniec;
		else
		{
			cout<<"Nie ma takiej komendy!"<<endl<<"Wpisz prawidlowa komende!"<<endl;
			goto blad2;
		}
    }
    
	if(a=='r')
	{
		system("cls");
		
		cout<<"Rozklad liczby na czynniki:"<<endl;
		
		poczatek3:

		int m;
	
		cout<<endl<<"Podaj liczbe:";
		cin>>m;
	
		cout<<"Czynniki pierwsze liczby "<<m<<": ";
	
		int k=2;
	
		hababa2:
	
		while(m>1)
		{
			while(m%k==0)
			{
				cout<<k<<" ";
				m=(m/k);
			}
			while(k<m)
			{
				++k;
				goto hababa2;
			}
	
			char c;
	
			cout<<endl<<endl<<"Co chcesz zrobic?"<<endl<<"r - Rozlozyc inna liczbe."<<endl<<"e - Wyczyscic ekran i rozlozyc liczbe."<<endl<<"m - Wrocic do menu."<<endl<<"w - Wyjsc z programu."<<endl;
	
			blad3:
	
			cin>>c;
	
			if(c=='r')
				goto poczatek3;
			if(c=='e')
			{
				system("cls");
				cout<<"Rozklad liczby na czynniki:"<<endl;
				goto poczatek3;
			}	
			if(c=='m')
				goto poczatek1;
			if(c=='w')
				goto koniec;
			else
			{
				cout<<"Nie ma takiej komendy!"<<endl<<"Wpisz prawidlowa komende!"<<endl;
				goto blad3;
			}
		}
	}
		
	if(a=='w')
	{
		goto koniec;
	}

	else
	{
		cout<<"Nie ma takiej komendy!"<<endl<<"Wpisz prawidlowa komende!"<<endl;
		goto blad1;
	}
	koniec:

	system("pause");
	return 0;
}

