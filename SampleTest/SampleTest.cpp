// SampleTest.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "LibraryApplication.h"

int main()
{
	std::cout << "1+1=" << MyCalc::add(1, 1) << std::endl;

	std::cout << "2��3���" << MyCalc2::ThreeMultiplication(2) << "�ł��B"<<std::endl;


	system("pause");// �L�[�������Ă���I��
    return 0;
}

