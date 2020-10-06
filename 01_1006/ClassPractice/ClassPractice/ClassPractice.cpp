#include<stdlib.h>
#include<stdio.h>

//Fighterクラスを作成
class Fighter
{
public:
	//コンストラクタ
	Fighter();
	//デストラクタ
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;



};

Fighter::Fighter()
{
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;

}

Fighter::~Fighter()
{

}



int main()
{
	Fighter Fighter;

	printf("m_hp = %d\n", Fighter.m_hp);
	printf("m_str = %d\n", Fighter.m_str);
	printf("m_mag = %d\n", Fighter.m_mag);
	printf("m_tec = %d\n", Fighter.m_tec);
	printf("m_spd = %d\n", Fighter.m_spd);
	printf("m_def = %d\n", Fighter.m_def);
	printf("m_luc = %d\n", Fighter.m_luc);
	printf("m_mde = %d\n", Fighter.m_mde);



	system("pause");
	return 0;
}