#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int Z[] = { *a , *b , *c , *d} ;
	*a = Z[rand()%4];

	while (*b == *a )
	{
		*b = Z[rand()%4];
	}
	while (*c == *b || *c == *a )
	{
		*c = Z[rand()%4];
	}
	while (*d == *a || *d == *b || *d == *c )
	{
		*d = Z[rand()%4];
	}
	

} 