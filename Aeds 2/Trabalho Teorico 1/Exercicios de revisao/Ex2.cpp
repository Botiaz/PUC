#include <iostream>
using namespace std;

bool func(int vet[5],int x){
  for(int i=0;i<5;i++){
    if(vet[i]==x){
      return true;
    }
  }
  return false;
}

int main() {
  int x, vet[5]={0,2,6,12,20};
  bool y;

  cin>>x;

  y=func(vet,x);
  if(y==true){
    cout<<"X esta presente em vet";
  }else{
    cout<<"X nao esta presente em vet";
  }
  
}