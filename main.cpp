
#include <iostream>

using namespace std;

class numpy{
    
    private:
    int n1=0;
    int n2=0;
    int n3=0;
    
    public:
    
    numpy(int a,int b,int c){
    
    n1=a;
    n2=b;
    n3=c;
}
    int suma();
    int resta();
    int multi();
    
    
};

int numpy::suma(){
    cout<<"Suma:  ";
    return n1+n2+n3;
}

int numpy::resta(){
    cout<<"Resta:  ";
    return n1-n2-n3;
}

int numpy::multi(){
    cout<<"Multiplicacion:  ";
    return n1*n2*n3;
}

int main()
{
   numpy ope=numpy(5,6,7);
   cout<<ope.suma()<<endl;
    cout<<ope.resta()<<endl;
     cout<<ope.multi()<<endl;
      

    return 0;
}
