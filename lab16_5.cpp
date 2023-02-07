#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c, int *d){
  int e=rand()%6;
  int *k = a;
  int *j=b; 
  int *l=c;
  switch(e){
    case 0: a=b;b=k; break;
     case 1: a=c;c=k; break;
     case 2: a=d;d=k; break;
     case 3: b=c;c=j; break;
     case 4: b=d;d=j; break;
     default : c=d;d=l; break;
  }
}
