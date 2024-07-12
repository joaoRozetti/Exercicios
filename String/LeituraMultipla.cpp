#include <iostream>

using namespace std;

int main(){
    int R, W;

    cin >> R;

    for(int i = 0; i < N; ++i){
        cin >> R >> W;

        for(int j = 0; j < R.length(); ++j){
            R[j] = ((R[j] - 'A' - w + 26) % 26) + 'A';
        }

        cout << alfabeto << endl;
    }

    return 0;
}