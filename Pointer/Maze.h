#include "Location2D.h"
#include <cstdio>
#include <stack>

class Maze
{
    int width;
    int height;
    int **map;
    std::stack<Location2D> exitLoc;

public:
    Maze() {init(0, 0);}
    //~Maze(){reset();}

    void init(int _w, int _h)
    {
        width  = _w;
        height = _h;

        map = new int *[height];
        for(int i=0; i<_h; ++i)
            map[i] = new int [width];
    }
    void reset()
    {
        if(map != NULL){
            for(int i=0; i<height; ++i){
                for(int j=0; j<width; ++j)
                    delete map[i];
                delete map;
            }
        }
    }
    void load(char *filename)
    {
        int nLine=0;
        int nChar=0;

        FILE *fp = fopen(filename, "r");
        if(fp == NULL){
            printf("Error: 파일이 존재하지 않습니다");
        }
    
        char ch;
        while((ch = getc(fp)) != EOF){
            map[nLine][nChar] = ch-48;

            ++nChar;
            if(ch == '\n'){
                ++nLine;
                nChar=0;
            }
        }
    }
    void print()
    {
        for(int i=0; i<height; ++i){
            for(int j=0; j<width; ++j){
                if(map[i][j] == 0)
                    printf("◼︎ ");
                else if(map[i][j] == 1)
                    printf("  ");
                else if(map[i][j] == 5)
                    printf("◎ ");
                else if(map[i][j] == 9)
                    printf("⦿ ");
            }
            printf("\n");
        }
    }

    bool isValidLoc(int _w, int _h)
    {
        if(_h < 0 || _w < 0 || _h>=height || _w>=width) return false;
        else return map[_h][_w] == 1 || map[_h][_w] == 9;
    }
    void searchExit()
    {
        Location2D entry(2, 0);
        exitLoc.push(entry);

        while(exitLoc.empty() == false){
            Location2D here = exitLoc.top();
            exitLoc.pop();

            int _h = here.height;
            int _w = here.width;
            printf("height:%d widht:%d\n", _h, _w);
            if(map[_h][_w] == 5){
                printf("미로 탐색 성공\n");
                return;
            }
            else{
                map[_h][_w] = '.';
                if(isValidLoc(_h-1, _w)) exitLoc.push(Location2D(_h-1, _w));
                if(isValidLoc(_h+1, _w)) exitLoc.push(Location2D(_h+1, _w));
                if(isValidLoc(_h, _w-1)) exitLoc.push(Location2D(_h, _w-1));
                if(isValidLoc(_h, _w+1)) exitLoc.push(Location2D(_h, _w+1));
            }
        }
        printf("미로 탐색 실패\n");
    }
};
