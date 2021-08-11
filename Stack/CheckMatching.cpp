#include "ArrayStack.h"

bool checkMatching(const char *filename)
{
    int  com_count = 0;
    bool single_Q  = false;
    bool double_Q  = false;
    bool comment   = false;
    bool com_slash = false;
    bool com_astra = false;

	FILE *fp = fopen(filename, "r");
	if( fp == NULL )
		error("Error: 파일이 존재하지 않습니다");

	int nLine = 1;
	int nChar = 0;

	ArrayStack stack;
	char ch;

	while((ch = getc(fp)) != EOF){
        if(ch == '/')
            com_count++;
        else if(com_count==1 && ch == '/'){
            comment = true;
            com_count = 0;
        }
        else if(com_count==1 && ch == '*'){
            com_astra = true;
            com_count++;
        }

        if(ch == '\n'){
            ++nLine;
            comment = false;
        }
		nChar++;

        if(com_count==2 && ch=='*')
            com_astra = false;
        if(com_astra == false && com_count==2 && ch == '/'){
            com_slash = false;
            com_count=0;
        }

        if(ch == '\'' && single_Q == false)
            single_Q=true;
        else if(ch == '\'')
            single_Q=false;
        if(ch == '\"' && double_Q == false)
            double_Q=true;
        else if(ch == '\"')
            double_Q=false;	   

        if(ch == '[' || ch  == '{' || ch == '('){ 	
            if(single_Q == false && double_Q == false && comment == false && com_astar == false)
                stack.push(ch);   
            else if(ch == ']' || ch  == '}' || ch == ')'){
                if(single_Q == false && double_Q == false && comment == false && com_astar == false){
		    	    int prev = stack.pop();
			        if(( ch == ']' && prev != '[' )
		    	    || ( ch == '}' && prev != '{' )
		            || ( ch == ')' && prev != '(' )) break;
                }
	        }
        }


	}
	fclose(fp);
	
	printf("[%s] 파일 검사결과: \n", filename);
	if(!stack.isEmpty())
		printf("Error: 문제발견(라인수 = %d, 문자수 = %d)\n\n", nLine, nChar);
	else
		printf("OK: 괄호닫기정상(라인수 = %d, 문자수= %d)\n\n", nLine, nChar);

	return stack.isEmpty();
}

int main()
{
	checkMatching("ArrayStack.h");
	checkMatching("lorem.txt");
}


