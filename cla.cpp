#include<iostream>
using namespace std;
#include<string>
#include<cmath>

int main(){

    int sum,mul,div;
    cout << "1 -add  2-mul  3-div"<<endl;
    cout <<"enter calculation choice"<<endl;
    string choice;
    cin>>choice;

    
    int nUm1,nUm2;
    cout <<"calculate two number expression"<<endl;
    cout << "enter no1:"<<endl;
    cin>>nUm1;
    cout <<"enter no.2"<<endl;
    cin>>nUm2;
    
    
   
    
    

    if(choice == "1"){
       sum = nUm1 + nUm2;
    }
    else if(choice=="2"){
        
        mul = nUm1 * nUm2;


    }
    else if(choice=="3"){
        
        div= nUm1 / nUm2;
        

    }
    else{
        cout <<"thanks"<<endl;
    }

    return 0;






    
}
 