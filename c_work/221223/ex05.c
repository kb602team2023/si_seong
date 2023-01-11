#include <stdio.h>

int main()
{
    // 1. 이름 입력받기
    char name[20];
    printf("이름을 입력해주세요");
    scanf("%s",&name);

    // 2. 배열 입력
    int count[26]={ 0 };

    // 3 name 탐색
    for(int i=0; i<sizeof(name)/sizeof(char) ;i++)
    {
        count[name[i]-'a']++;
    }
    printf("나타나는 알파벳은 아래와 같음\n");
    for(int i=0;i<26;i++)
    {
        if (count[i]>0)
        {
            printf("%c",i+'a');
        }
        
    }

}