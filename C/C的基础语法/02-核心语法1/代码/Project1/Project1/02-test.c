#include <stdio.h>

int main()
{

	/*
		1.两数相加
	*/
	//定义两个变量相加并求和
	int a = 10;
	int b = 20;
	printf("a + b = %d\n", a + b);
	

	/*
		2.微信余额
		用一个变量表示微信的余额需求:一开始微信的余额为100元，
		收到了一个2元的红包	
		经常发生改变的数据，我们可以用变量来表示
	*/
	//定义变量表示余额
	int money = 100;
	money = money + 2;
	printf("money：%d\n", money);

	/*
		3.在游戏当中，人物的血量是一个随时会发生变化的数据，所以我们可以定义变量blood去记录假设:
			人物初始血量为:100
			对战时，受到80点伤害
			自己用技能恢复60点血量
		请问:目前人物最终血量为多少?(请用变量完成)
	*/

	int blood1 = 100;
	int blood2 = 80;
	int blood3 = 60;

	int blood = blood1 - blood2 + blood3;

	printf("最终血量为：%d\n", blood);



	return 0;
}