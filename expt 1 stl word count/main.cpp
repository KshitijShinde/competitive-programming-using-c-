
#include <iostream>
#include <cctype>

using namespace std;

int countword(string str)
{
    int count=0;
    bool inword=false;
    
    for(char ch:str){
        if(isspace(ch)){
            
        
        inword=false;
    }
    else if(!inword)
    {
        count++;
        inword=true;
    }
    }
    return count;
    
}

int main(){
    string input;
    cout<<"enter a string";
    getline(cin,input);
    
    int wordcount=countword(input);
    
    cout<<"number of words"<<wordcount;
    return 0;
    
    
    
}