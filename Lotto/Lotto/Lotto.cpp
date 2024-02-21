// Lotto.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;


int main()
{
    int iLotto[45] = {};

    for (int i = 0; i < 45; ++i)
    {
        iLotto[i] = i + 1;
    }


    srand((unsigned int)time(NULL)); // seed값 현재시간

    cout << "이 주의 당첨 예상번호는" << endl;


    int iTemp, idx1, idx2;
    for(int j = 0 ; j < 5; j++)
    {
        for (int i = 0; i < 100; ++i)    // Shuffle
        {
            idx1 = rand() % 45;
            idx2 = rand() % 45;

            iTemp = iLotto[idx1];
            iLotto[idx1] = iLotto[idx2];
            iLotto[idx2] = iTemp;
        }

        for (int i = 0; i < 6; ++i)     // 출력
        {
            cout << iLotto[i] << "\t";
        }
        cout << "보너스 번호 : " << iLotto[6] << endl;
    }
    cout << "입니다." << endl;
    return 0;;
}