#include <iostream>
using namespace std;

void operate(int num){

    for(int i= 1; i<=num; i++){
        if(num%i == 0){
            cout<< i<< " ";
        }
    }
    cout<<endl;
}

void operate(int number, int i1, int i2){
    if(i1<i2 && i1>=number){
        for(int i = i1; i<=i2; i++){
            if(i%number == 0){
                cout<<i<<" ";
            }
        }
    }else{
        cout<< "invalid";
    }
    cout<<endl;
}



void operate(int terms, int seq){
    if(terms>0){
        if(seq == 1){
            int a = 0;
            int b = 1;
            for(int i=0 ; i<terms; i++){
                cout<<a<<" ";
                int temp = a;
                a = b;
                b = temp + b;
            }
        }else if(seq == 2){
            for(int i = 1; i<=terms; i++){
                cout<<i*i<<" ";
            }

        }else if(seq==3){
            for(int i = 0; i<terms; i++){
                if(i%2 == 0) {
                    cout << "-1 ";
                }else{
                    cout<<"1 ";
                }
            }

        }else{
            cout<<"invalid";
        }
    }else{
        cout<<"invalid";
    }
}

int main()
{
    int num;
    cin>>num;
    operate(num);


    return 0;
}












