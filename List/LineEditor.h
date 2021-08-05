#include "LinkedList.h"

class LineEditor : public LinkedList
{
public:
    void Display(FILE *fp = stdout)
    {
        int i=0;
        for(Node *p = getHead(); p != NULL; p=p->getLink(), ++i){
            fprintf(stderr, "%3d:", i);
            p->print(fp);
        }
    }
    void insertLine()
    {
        int position;
        char line[MAX_CHAR_PER_LINE];
        printf(" 입력한 번호: ");
        scanf("%d", &position);
        printf(" 입력한 내용: ");
        fflush(stdin);
        fgets(line, MAX_CHAR_PER_LINE, stdin);
        insert(position, new Node(line));
    }
    void DeleteLine()
    {
        printf(" 삭제한 번호: ");
        int position;
        scanf("%d", &position);
        delete remove(position);
    }
    void ReplaceLine()
    {
        int position;
        char line[MAX_CHAR_PER_LINE];
        printf(" 변형행 번호: ");
        scanf("%d", &position);
        printf(" 변경행 내용: ");
        fflush(stdin);
        fgets(line, MAX_CHAR_PER_LINE, stdin);
        
        replace(line, MAX_CHAR_PER_LINE, stdin);
    }
    void LoadFile(char *fname)
    {
        FILE *fp = fopen(fname, "r");
        if(fp != NULL){
            char line[MAX_CHAR_PER_LINE];
            while(fgets(line, MAX_CHAR_PER_LINE, fp))
                insert(size(), new Node(line));
        fclost(fp);
        }
    }   
    void StoreFile(char *fname){
        FILE *fp = fopen(fname, "w");
        if(fp != NULL){
            Display(fp);
            fclose(fp);
        }
    }
};
