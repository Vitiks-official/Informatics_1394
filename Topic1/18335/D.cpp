#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <vector <int>> field(8, vector <int> (8, 0));
vector <string> lines(8);

void bb(int x, int y){
    field[x][y] = 1;
    int xx, yy;
    xx = x - 1, yy = y - 1;
    while (xx >= 0 && yy >= 0 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        xx--, yy--;
    }
    xx = x + 1, yy = y - 1;
    while (xx < 8 && yy >= 0 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        xx++, yy--;
    }
    xx = x - 1, yy = y + 1;
    while (xx >= 0 && yy < 8 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        xx--, yy++;
    }
    xx = x + 1, yy = y + 1;
    while (xx < 8 && yy < 8 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        xx++, yy++;
    }
}

void rr(int x, int y){
    field[x][y] = 1;
    int xx, yy;
    xx = x - 1, yy = y;
    while (xx >= 0 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        xx--;
    }
    xx = x + 1, yy = y;
    while (xx < 8 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        xx++;
    }
    xx = x, yy = y - 1;
    while (yy >= 0 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        yy--;
    }
    xx = x, yy = y + 1;
    while (yy < 8 && lines[xx][yy] != 'R' && lines[xx][yy] != 'B'){
        field[xx][yy] = 1;
        yy++;
    }
}

int main(){
    for (int i = 0; i < 8; ++i)
        cin >> lines[i];
    for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 8; ++j){
            if (lines[i][j] == 'R')
                rr(i, j);
            else if (lines[i][j] == 'B')
                bb(i, j);
        }
    }
    int c = 0;
    for (auto x: field){
        for (auto y: x)
            if (y == 0) c++;
    }
    cout << c;
}
