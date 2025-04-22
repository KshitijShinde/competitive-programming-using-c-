# include<iostream>
# include<math.h>
using namespace std;



void check_bth_bit(int number, int b) {
    if (number & (1 << (b - 1))) {
        cout << "Yes, the given bit is set\n";
    } else {
        cout << "No, the given bit is not set\n";
    }
}

void check_bth_bit_right(int number,int b){
    if(((number >> (b - 1)) & 1) == 1){
        cout<<"yes given bit is set\n";
    }
    else{
                cout<<"no given bit is not set\n";

    }
}

int main(){
    int number, b;
    cout<<"enter number:";
    cin>>number;
    cout<<" enter bth position:";
    cin>>b;
    
    check_bth_bit(number,b);
    check_bth_bit_right(number,b);
    return 0;
}

