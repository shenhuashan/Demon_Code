#include "HummerH2Model.h"

CHummerH2Model::CHummerH2Model(void)
{
}
CHummerH2Model::~CHummerH2Model(void)
{
}
void CHummerH2Model::Start()
{
	cout << "����H2����..." << endl;
}
void CHummerH2Model::Stop()
{
	cout << "����H2ͣ��..." << endl;
}
void CHummerH2Model::Alarm()
{
	cout << "����H2����" << endl;
}
void CHummerH2Model::EngineBoom()
{
	cout << "����H2��������������...." << endl;
}
bool CHummerH2Model::IsAlarm()
{
	return false;
}