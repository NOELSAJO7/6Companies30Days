#include<bits/stdc++.h>
using namespace std;
// int j=0;

void generateSumComb(int i,int N,int K,vector<int>&cur_ans,vector<vector<int>>&ans)
{
   if(N<0 || i>9)
      return;

   if(K==0)
   {
      if(N==0)
      ans.push_back(cur_ans);

      return;
   }


   // j++;
   // if(j>1000)
   // {
   //    cout<<"some error present.. exit";
   //    return;
   // }
   
   
// considering i
                  cur_ans.push_back(i);
                  generateSumComb(i+1,N-i,K-1,cur_ans,ans);
                  cur_ans.pop_back();
// ignoring i         
                  generateSumComb(i+1,N,K,cur_ans,ans);
             

}

int main()
{
vector<vector<int>>ans;
vector<int>cur_ans;
generateSumComb(1,9,3,cur_ans,ans);
cout<<ans.size();
for(auto i:ans)
{
   cout<<endl<<"[";
   for(auto j:i)
      cout<<j<<" ";
   cout<<"]";
}


return 0;
}


    