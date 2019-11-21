#include <string.h>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int main(){
    int exp, dir;
    cin >> exp;
    cin >> dir;

    int *mans, *quests;
    mans = new int[exp];
    quests = new int[dir];
    for (int i = 0; i < exp; i++) mans[i] = i + 1;
    for (int i = 0; i < dir; i++) quests[i] = i + 1;

    int **arr = new int*[dir]();
    for (int i = 0; i < exp; i++) arr[i] = new int[dir]();
    for (int i = 0; i < exp; i++){
        for (int j = 0; j < dir; j ++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) break;
        }
    }
    cout << endl;
    
    
    
    
    
    
bool BreackCounter = true;
while(BreackCounter)
{
    int *T, denum = 0;
    T = new int[exp]();
    for (int i = 0; i < exp; i++){
        for (int j = 0; j < dir; j ++){
            if (arr[i][j] != 0) {
                T[i]++;
                denum++;
            }
        }
    }
    //cout << endl;
    
    
    
    int countNew = 0, countOld = 0;
    for (int i = 0; i < exp; i++){
        if (T[i] != 0) countOld++;
    }
    for (int i = 0; i < exp; i++){
        for (int ii = 0; ii < exp; ii++){
            if (T[i] != 0 && T[ii] != 0 && T[i] == T[ii]) countNew++;
        }
    }
    if (countOld * countOld == countNew) BreackCounter = false;
    
    //cout << endl;
    
    int countE = 0;
    if (BreackCounter == false){
        system("CLS");
        for (int i = 0; i < exp; i++) {
            if (mans[i] != 0) countE++;
        }
        cout << "For take conclusion about current " << dir << " questions from " << exp << " experts need only " << countE << " :" << endl;
        for (int i = 0; i < exp; i++) {
            if (T[i] != 0 && i != exp) {
                cout << i + 1;
                for (int j = i; j < exp; j++){
                    if (T[j] != 0 && j != exp - 1) cout << " and ";
                }
            }
        }
    }
    //cout << endl;    

    int minI, pcount = 0;
    double *p = new double[exp](), min = 1;
    for (int i = 0; i < exp; i++){
        p[i] = double(T[i]) / double(denum);
        if (p[i] < min && p[i] != 0) {
            min = p[i];
            minI = i;
        }
    }
    //cout << endl;
    


    for (int i = 0; i < dir; i++){
        for (int ii = 0; ii < dir; ii++){
            if (arr[minI][i] == quests[ii]) quests[ii] = 0;
        }
    }
    //cout << endl;
    for (int j = 0; j < dir; j++) arr[minI][j] = 0;
    
    int count = 0;
    for (int i = 0; i < exp; i++){
        for (int j = 0; j < dir; j++){
            for (int jj = 0; jj < dir; jj++){
                if (arr[i][j] == quests[jj]) count++;
            }
            if (count > 0){}
            else arr[i][j] = 0;
            count = 0;
        }
    }
    
    
    
    mans[minI] = 0;
    //cout << endl;
    
    delete []p;
    delete []T;
    
}
    

    
    
    
    
    
    
    
    
    for (int i = 0; i < exp; i++) delete []arr[i];
    delete []arr;
    delete []mans;
    delete []quests;
    return 0;
}