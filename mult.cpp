//Author: Riley Decker
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(void)
{
vector< vector<int> > table(12);

  for(int row=0;row<table.size();row++)
  {
  table[row].resize(12);
    
    for(int col=0;col<table[row].size();col++)
    {
    
    }
  }
  
  for( int row=0;row<table.size();++row)
  {
  table.push_back(row+1)<<endl;
    for(int col=0;col<table[row].size();++col)
    {
    table[row].push_back(col+1)<<endl;
    cout<<table[row][col]<<endl;
    }
  }
return 0;
}
