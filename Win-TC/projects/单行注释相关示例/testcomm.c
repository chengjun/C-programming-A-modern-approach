/******************* 测试双斜杠相关功能的例子 *****************/

/************************************************************************
下面的代码直接运行当然会发生错误，点菜单项的“编译设置”，然后选择“//样
式注释简易支持”，它会弹出一个对话框，好好看看里面的内容吧。然后“确定”
则钩选该功能项。则上面的程序可以正常通过编译啦。
然后使用菜单“//注释转/* */”，可以把程序中的双斜杠注释转成TC2兼容的/* */
的注释，你可以自己看看转换后的结果，不过要注意这个操作可是不可以撤消的哦。
************************************************************************/

#include "stdio.h"
#include "conio.h"

//开始测试双斜杠单行注释啦
#include "stdio.h" //预编译——头函数
int main(void)//这是我的测试//的程序
{
  printf("\"//\" is a new type of Comment\"/.\n"); //输出
  getch(); //暂停屏幕
  return 0; //返回
}
