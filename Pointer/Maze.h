#include <cstdio>

class Maze
{
    int width;
    int height;
    int **map;

public:
    Maze() {init(0, 0);}
    //~Maze(){reset();}

    void init(int _w, int _h)
    {
        width  = _w;
        height = _h;

        int **map = new int *[height];
        for(int i=0; i<_h; ++i)
            map[i] = new int [width];
    }
    /*void reset()
    {
        if(map != NULL){
            for(int i=0; i<height; ++i){
                for(int j=0; j<width; ++j)
                    delete map[i];
                delete map;
            }
        }
    }*/
    void load(char *filename)
    {
        FILE *fp = fopen(filename, "r");
        if(fp == NULL){
            printf("Error: 파일이 존재하지 않습니다");
        }
    
        char ch;
        while((ch = getc(fp)) != EOF){
            printf("%c", ch);
            for(int i=0; i<height; ++i){
                for(int j=0; j<width; ++j){
                    if(ch == '\n')
                        break;
                    else
                        map[i][j] = ch;
                }
            }
        }
    }
    void print()
    {
        for(int i=0; i<height; ++i){
            for(int j=0; j<width; ++j){
                if(map[i][j] == '0')
                    printf("◼︎");
                else if(map[i][j] == '1')
                    printf(" ");
                else if(map[i][j] == '5')
                    printf("◎");
                else if(map[i][j] == '9')
                    printf("⦿");
            }
        }
    }
    void searchExit();
};
