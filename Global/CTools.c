/**
*********************************************************************************
*   CopyRight  : 2013-2014, HerBinUnversity, GatieMe                            *
*   File Name  : main.c                                                         *
*   Description: CTools                                                         *
*   Author     : Gatie_Me                                                       *
*   Version    : Copyright 2013-2014                                            *
*   Data_Time  : 2013-3-10 21:29:24                                             *
*   Content    : CTools-Lexical                                                 *
*********************************************************************************
**/





#include "..\Global\CTools.h"



/*
*
*   BUG:    ��Լ֮��Ӧ�ý�����ʽ������Ϣ��ջ, �����ٴι�Լʱ��������
*   BUG:    ������Ϣ�������������, ��Ҫ�����ݽ����жϽ���ͬ���͵ĳ������зֱ���
*   D:\SoftwareEngineer\[A]AderStep\AderCTools[0.5.3]\Prop\Prop.c
*
*/



int main(int argc, char **argv)
{
    // printf("%s\n", LineDefineStr);
    // printf("%s\n", FileOpenDefineStr);
    // printf("%s\n", StartDefineStr);
    //freopen("out.txt", "w", stdout);

    #ifdef PROP_REDUCTION_DEFINE
    MainOfProp(argc, argv);
    #endif  // PROP_REDUCTION_DEFINE

    #ifndef PROP_REDUCTION_DEFINE
    ParseFilePropRed("out_prop.c", "Test\\Source\\bug11.c");
    #endif  // PROP_REDUCTION_DEFINE

    PAUSE( );
    return EXIT_SUCCESS;
}
