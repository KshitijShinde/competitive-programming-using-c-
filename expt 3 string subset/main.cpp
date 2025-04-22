#include <iostream>
using namespace std;

void printsub(string str,string curr,int index){
    if(index==str.length()){
        cout<<curr<<" ";
        return;
    }
    
    printsub(str, curr + str[index], index + 1);
    printsub(str, curr, index + 1);
    
}



int main()
{
    printsub("abc","",0);

    return 0;
}