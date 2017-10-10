//Author: Riley Decker
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(void)
{
vector< vector<int> > table(13);

  for(int row=1;row<table.size();row++)
  {
  table[row].resize(13);
    for(int col=1;col<table[row].size();col++)
    {
    table[row][col]=row*col;
    cout<<table[row][col]<<" ";
    }
  cout<<endl;
  }
  
/*  for( int row=0;row<table.size();++row)
  {
    for(int col=0;col<table[row].size();++col)
    {
    table[row][col]=col+1;
    cout<<table[row][col]<<endl;
    }
  }*/
return 0;
}
