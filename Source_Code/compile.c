/*/////////////////
compile.c 입니다.
*//////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "show.h"

int main(void)
{
    system("clear"); // console clear

    char userInput[BUF_SIZE];

    desertMessengerIntro();
    
    printf("명령어\n");

        printf(">내 IP 주소\n");
        printf(">서버 실행파일 만들기\n");
        printf(">클라이언트 실행파일 만들기\n");
        printf(">종료하기\n\n");

    while(1)
    {
        fflush(stdin);
        printf("\n>"); 
        fgets(userInput, BUF_SIZE, stdin);
        userInput[strlen(userInput) - 1] = '\0';

        if(strcmp(userInput, "내 IP 주소") == same)
        {
            system("hostname -I");
        }

        if(strcmp(userInput, "서버 실행파일 만들기") == same)
        {
            system("gcc server.c -o server");
            printf("서버 실행파일을 만들었습니다\n");
        }

        if(strcmp(userInput, "클라이언트 실행파일 만들기") == same)
        {
            system("gcc client.c -o client");
            printf("클라이언트 실행파일을 만들었습니다\n");
        }

        if(strcmp(userInput, "종료하기") == same)
        {
            printf("종료합니다.");
            exit(1);
        }

    }
    
}