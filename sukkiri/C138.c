#include <stdio.h>
#include <stdbool.h>



int main(int argc, char *argv[])
{

int count = 10;

if(count == 0) //bool 型でなくても評価できる
{
printf("洗濯をします\n");
printf("お散歩に行きます\n");
}
else //elseの内容が1行なので、{} 不要、省略できる

printf("映画を見ます\n");


return 0;
}
 
