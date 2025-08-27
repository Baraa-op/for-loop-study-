#include <iostream>
#include <string>
using namespace std;



/**

خوارزميات وحل المشاكل
 1 - 
**/

/**
void input(int &N) {
	
	cout << "enter N : " ; 
	cin >> N ;
	
	}


int main()
{
	int N ;
	input(N) ;
	
	for(int i=1 ; i<= N ; i++ )
	{
		cout << i << endl ;
	}
}



**/


/**2 - 


void input(int &N) {
	
	cout << "enter N : " ; 
	cin >> N ;
	
	}


int main()
{
	int N ;
	input(N) ;
	
	for(int i=N ; i>=1 ; i-- )
	{
		cout << i << endl ;
	}
}

**/

/**
3 -

void odd(int &N )
{
	int sum = 0 ;
	cout << "enter N : " ;
	cin >> N ;
	for (int i=N ; i>0 ; i--)
	{
		
		if(i%2 !=0)
		{
			cout << i << endl ;
			sum+=i ;
		}
		
	}
	
	cout << endl ;
	cout << sum ;
}


int main()
{
	int N ;
	odd(N) ;
}


**/

/**
4 - 
void fact()
{
	int N = 0 ;
	int count = 1 ;
	cout << "enter N : " ;
	cin >> N ;
	
	for(int i = N ; i>=1 ; i--)
	{
		
		count*=i ;
	}
	
	 cout<<  count;
	 
	

}


int main(){
	fact() ;
	
	}
	
**/


/**

void power()
{
	int number ;
	int power ;
	int sum = 1 ;
	cout << "enter number : " ; 
	cin >> number;
	cout << "enter power : " ; 
	cin >> power;
	
	
	for(int i=power ; i>0 ; i--)
	{
		sum*=number;
	}
	
	cout << sum;
	
}

int main ()
{
	power() ;
	
	return 0 ; 
}

**/


void character()
{
	int cha ;
	
	for(int i=65 ; i<=90 ; i++)
	{
		cout << (char)i << "\n" ;
	}
}


int main ()
{
	character() ;
}
