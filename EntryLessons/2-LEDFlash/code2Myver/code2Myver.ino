/*
Author：Bruce Ho
Date：2020.8.6
Function：Arduino，串口控制的LED闪烁程序（输入一次T，闪烁一百次）
*/
int ledPin = 10; //定义数字10 接口
int val;//定义变量
int i=0;
void setup()
{
  Serial.begin(9600);//设置波特率为9600
  pinMode(ledPin, OUTPUT);//定义小灯接口为输出接口
}
void loop()
{
  val=Serial.read();//读取PC机发送给Arduino的指令或字符，并将该指令或字符赋给val
  if(val=='T')//判断收到的指令或字符是否为T
  {
    Serial.println("LED will start to blink in 1 second,for 100 times");//显示提示LED信息
    for(i=1;i<101;i++)
    {
    Serial.print("The No.");
    Serial.print(i);
    Serial.println(" blink");
    delay(1000); //延时1 秒
    digitalWrite(ledPin, HIGH); //点亮小灯
    delay(1000); //延时1 秒
    digitalWrite(ledPin, LOW); //熄灭小灯
    delay(1000); // 延时1 秒
    }
  }
  else
  {
   Serial.println("Enter'T',if you want the LED blink");//提示用户输入T才能让LED闪烁
  }
}
