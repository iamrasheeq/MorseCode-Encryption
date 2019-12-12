#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string getString(char x) 
{ 

    string s(1, x); 
  
    return s;    
} 

bool com(string s1,string s2){

    if (s1.length() != s2.length())
    {
        return false;
    }
    

    for(int i = 0;i<s1.length(); i++){
        if (s1[i] != s2[i])
        {
            return false;
        }
        
    }

    return true;
}



int main(){

    char c;
    int n=0,n1 = 1;
    bool f1 = false;
    string s1,s2;
     string morseC[] = {".____","..___","...__","...._",".....","_....","__...","___..","____.","_____","._","_...","_._.","_..",".",".._.","__.","....","..",".___","_._","._..","__","_.","___",".__.","__._","._.","...","_",".._","..._",".__","_.._","_.__","__.."};
    cout<<"'.' = dot ; '_' = dash"<<endl;
    cout<<"Enter Morse Code: ";
    getline(cin,s1);
    

    cout<<"Encrypted Message: ";
    s1 = s1 + " ";

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ')
        {
            for (int j = 0; j < 36; j++)
            {
                //cout<<morseC[j]<<"|_|"<<s2<<endl;
                if ((com(morseC[j],s2)) && j>=10)
                {
                    
                    c = (char)(j+55);
                    cout<<c;
                    n1 = 0;
                }
                else if (com(morseC[j],s2))
                {
                    
                    cout<<j+1;
                    n1 = 0;
                }
                
            }

            if (n1 != 0)
            {
                cout<<" ";
            }
            
            n1 = 1;
            n=0;
            
        }

    
        
        if (n == 0)
        {
           
            s2 = getString(s1[i]); 
            n++;
        }else
        {
            s2 = s2 + s1[i];
        }

        if (s2[0] == ' ')
        {
            s2.erase(s2.begin() + 0);
        }
               

    }

    cout<<endl;
    

}