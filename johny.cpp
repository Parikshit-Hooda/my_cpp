#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int sizeOfPlaylist;
    cin>>sizeOfPlaylist;
    int *playlistArr = new int[sizeOfPlaylist]();
    for(int i = 0 ; i < sizeOfPlaylist ; i++)
        cin>>playlistArr[i];
    int posOfFav = 0;
    cin>>posOfFav;
    //posOfFav -=1;
    int storeFav = playlistArr[posOfFav-1];
    sort(playlistArr, playlistArr+sizeOfPlaylist);
    for(int i = 0 ;i < sizeOfPlaylist ; i++) {
        if(playlistArr[i] == storeFav)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}

return 0;
}
