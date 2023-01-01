#include<bits/stdc++.h>
using namespace std;

// iterate once and keep count of same characters and keep count of those
// which are not equal in separate maps with their count
// iterate the map of secret message and check how many of it are present 
// in guess map

    string getHint(string secret, string guess) {
        int x=0,y=0;

    map<char,int>secretmp,guessmp;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            x++;
            else{
                secretmp[secret[i]]++;
                guessmp[guess[i]]++;
            }
        }

    for(auto i:secretmp)
    {
        if(guessmp.find(i.first)!=guessmp.end())
            {
                y+=min(i.second,guessmp[i.first]);
            }
    }
        string ans=to_string(x)+"A"+to_string(y)+"B";

        return ans;
    }


int main()
{

 string secret=""1807985678"",guess="7810987678";   
 cout<<getHint(secret,guess);

 return 0;
}