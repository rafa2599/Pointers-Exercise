#include <cstdlib>
#include <iostream>

using namespace std;
// Implementar
int suma(int v[],int n);
int mayor(int v[],int n);
int multi(int a,int b);
void impre(int v[],int n);
void hanoi(char a,char c, char b, int n);
void impreD(char *p);

int main(int argc, char *argv[])
{   
    int v[6]={17,15,-8,30,5,-2};
    
    cout<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void impre(int v[],int n)
{   
    if(n==0)cout<<v[n]<<endl;
    else{ 
          impre(v,n-1);
                 
    } 
}




int suma (int v[],int n){ // int * v[]

    if (n==0){
        return 0;
    }else {
        return v[0] + suma (v+1,n-1);
          
    }
}
int multi(int a,int b){
    if (a==0){return 0;}
    if (a>0 && b>0){return b + multi (a-1,b);}
    if (a>0 && b<0){return b-multi (a-1,b);} 
    
}







