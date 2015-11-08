include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int row, col;
    cout<<"table rows = ";
    cin>>row;
    cout<<"table colums = ";
    cin>>col;
    char table[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"table["<<i+1<<"]["<<j+1<<"]=";
            cin>>table[row][col];
        }
        cout<<endl;
    }
    cout<<"the word to search is ";
    cin>>word;
    int dir1, dir2, pos=0, br=0;
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            {
                if(table[i][j]==word[pos++])
                {
                    for(dir1=-1; dir1<=1; dir1++)
                        for(dir2=-1; dir2<=1; dir2++)
                            for(;pos<word.length();pos++)
                            {
                                if(i+dir1*pos<0 || i+dir1*pos>=row || j+dir2*pos<0 || j+dir2*pos>=col)
                                {
                                    pos=0;
                                    break;
                                }
                                if(dir1==0 && dir2==0)
                                    continue;
                                if(table[i+dir1*pos][j+dir2*pos]==word[pos] && pos==word.length()-1)
                                {
                                    br++;
                                    pos=0;
                                }
                                else
                                {
                                    pos=0;
                                    break;
                                }

                            }
                }
                else
                    pos=0;
            }
    cout<<br<<endl;
}
