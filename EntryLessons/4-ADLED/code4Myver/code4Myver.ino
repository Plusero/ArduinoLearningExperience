// 小灯从2到7依次点亮，并从7到2依次熄灭。
// Version：0.1
// Author：Bruce Ho
// Date：2020.8.11

int BASE = 2 ; //第一颗LED接的 I/O 脚
int NUM = 6 ; //LED的总数
int i = 0 ;
int END = 7; //最后一颗LED接的 I/O 脚

void setup()
{
    for(int i = BASE; i < BASE+NUM; i++)
    {
        pinMode(i,OUTPUT); //设置数字 I/O 脚为输出
    }
}

void loop()
{
    for(i = BASE; i < BASE+NUM;i++)
    {
        digitalWrite(i,HIGH); //设置数字 I/O 脚输出为高，从右到左点亮
        delay(200); //两相邻LED熄灭间隔为0.2s
    }
    for(i = END; i > END-NUM;i--)
    {
        digitalWrite(i,LOW); //设置数字 I/O 脚输出为低，从左到右熄灭
        delay(200); //两相邻LED点亮间隔为0.2s
    }
}
