#include<bits/stdc++.h>
using namespace std;

// take 2 topmost elements and perform the operation whenever a character 
// other than integer is found else keep pushing the intigers to the stack 

int revPolNotation(vector<string>&token)
{
   stack<int>stk;

   for(int i=0;i<token.size();i++)
   {
      if(token[i]=="+"|| token[i]=="-"||token[i]=="*"||token[i]=="/")
      {
         int a=stk.top(); stk.pop();
         int b=stk.top(); stk.pop();

         int c; char chr;

         if(token[i]=="+")
            chr='+';
            else if(token[i]=="-")
               chr='-';
               else if(token[i]=="*")
                  chr='*';
                  else if(token[i]=="/")
                     chr='/';
         switch(chr)
         {
            case '+':   c=a+b;
            break;
            case '-':   c=b-a;
            break;
            case '*':   c=b*a;
            break;
            case '/':   c=b/a;
            break;
         }

         stk.push(c);
      }
      else{

   // stoi()-> string to integer if valid else throws exception
      stk.push(stoi(token[i]));
      }
   }

   return stk.top();
}

int main()
{

vector<string>token1,token2,token3;
token3={"10","665 ","9","3","+","-11","*","/","*","17","+","5","+"};
token2={"2","1","+","3","*"};
token1={"4","13","5","/","+"};
cout<<revPolNotation(token1)<<endl;
cout<<revPolNotation(token2)<<endl;
cout<<revPolNotation(token3)<<endl;


return 0;
}

