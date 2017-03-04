#pragma once

//��� .cpp � �� ������
#include <cmath>
#include "view/view.h"
#include "timers.h"

//�������� �������
void defaultFunction();

//����� ���������
inline void programEnd()
{
	std::cout <<  "��������� ��������� ���� ������. ��� ������ ������� ����� ������" << std::endl;
	PauseConsole();
}

TIMER_T Soproc(const double& start, const double& end, const double& gap);
TIMER_T C_Only(const double& start, const double& end, const double& gap);