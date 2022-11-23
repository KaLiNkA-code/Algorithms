#include <iostream>
using namespace std;


// N - Кол-во мешков с конфетами
// M - Кол-во детей
//  С -сколько каждый мешок содержит конфет

// input:
//1) Кол-во тестовых случаев
//2) N,  M
//3) C1, C2, C3, ...
//
// output: 
// Case #x: y, где x– номер теста
// (начиная с1) и y— количество конфет, которое останется

int main(){
    int N, M, n, total_cendis=0, temp;
    cin >> n;
    for (int i=0; i < n; i++){
        cin >> N >> M;
        int Arr[N];
        total_cendis = 0;
        for (int j=0; j < N; j++){
            cin >> temp;
            total_cendis += temp;
        }
        cout << "Case #" << i << ": " << int(total_cendis/M) << endl;
    }

    return 0;
}