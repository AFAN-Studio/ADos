/**
 * @begindate:2021/3/10(ò����)
**/

/*****************************************************
 *          A           FFFFFFFF AAAAAAAA            *
 *         AAA          FF      AFF      ANNNNNNNN   *
 *        AAAAA         FF    A   FFF     N          *
 *       AAA AAA        FF   A     FFF     ANNNNNNN  *
 *      AAA   AAA       FF    A   FFF     A      N   *
 *     AAAAAAAAAAA      FF      AFF      ANNNNNNN    *
 *    AAA       AAA     FF   FFF AAAAAAAA            *
 *   AAA         AAA    FFFFF                        *
******************************************************/

/* ********************************
  ������־:
    2021/3/10 ��һ��Դ����
    2021/7/6  ADos 1.0.0(Beta)
    2021/7/25 ADos 1.1.0(Beta)
      ����:1.��Ŀ¼�л�����ʱ����
           2.�����Ż�
           3.�ļ�ϵͳ�Ż�
           4.�ڴ�����Ż�
    2021/12/31 ADos 1.1.1(Beta)
           �����޸�unistdͷ�ļ�������
* *********************************/

/*ע��:color������ʱͣ��!*/

//�����ע��������һЩ������ʱ���õ����뺯���ͱ������ͽ��Ľṹ��չ�ֳ���
/**(Beta)**/
/*********************************************************************
 *              ADos 1.1.1 ������������ AFAN Studio                        *
 *********************************************************************
 *                                                                   *
 *              Progect Name : ADos                                  *
 *                                                                   *
 *              File    Name : (�ܷ��ļ���ʱ����˵)                  *
 *                                                                   *
 *              Programmer   : gmx                                   *
 *                                                                   *
 *              Start   Date : 2021/3/10                             *
 *                                                                   *
 *              Last  Update : 2021/7/25                             *
 *                                                                   *
 *-------------------------------------------------------------------*
 * Function:                                                         *
 *   Sleep -- ���ߣ���MFC�е�Sleep������ʱ����ͬ                     *
 *   Printer -- ��ӡ��ʾ:                                            *
 *     Printer::Printer -- ��Ĺ��캯�������ڴ�ӡ��ʼ������          *
 *     Printer::~Printer -- ����������������ڴ�ӡ�˳�����           *
 *   CProgress -- ASG���е����ڴ�ӡ���������࣬δ���ᷢ��:           *
 *     CProgress::progress_bar -- ���ڴ�ӡ���������ߴ���״����       *
 *   date -- ��ȡ����                                                *
 *   Logger -- д��־�ļ�:                                           *
 *     operator>> -- �ض���">>"�����                                *
 *   GetUUID -- ����UUID��ȫ��Ψһ��                                 *
 *   PID -- ���ɽ���/�߳�PID                                         *
 *   MEMORY -- ADosϵͳ�ڴ����:                                     *
 *     MEMORY::init -- ��ʼ���ڴ�                                    *
 *     MEMORY::toexit -- �ͷ��ڴ�                                    *
 *     MEMORY::GetThreadState -- ��ȡ����/�߳�״̬                   *
 *     MEMORY::MEMORY -- ��Ĺ��캯��                                *
 *     MEMROY::~MEMORY -- �����������                               *
 *     MEMORY::CreateThread -- �������/�߳�                         *
 *     MEMORY::ReleaseThread -- �ͷŽ���/�߳��ڴ�                    *
 *     MEMORY::RunThread -- ��������/�߳�                            *
 *     MEMORY::BlockThread -- �������/�߳�                          *
 *     MEMORY::KillThread -- ɱ������/�߳�                           *
 *     MEMORY::showThread -- ��ʾ�������С��½������Ľ���/�߳�     *
 *     MEMORY::GetThreadMessage -- ��ȡ����/�߳���Ϣ                 *
 *   FAT -- FAT�ļ�ϵͳ:                                             *
 *     FAT::init -- ��ʼ������                                       *
 *     FAT::getBlock -- ��ȡ�մ���                                   *
 *     FAT::addBlock -- ���մ��̿�                                   *
 *   FCB:                                                            *
 *     FCB::FCB -- ���캯�������ڳ�ʼ��                              *
 *     FCB::~FCB -- ��������                                         *
 *     FCB::setFileAccess -- �����ļ�������ʽ/����                   *
 *     FCB::getTime -- ��ȡʱ��                                      *
 *       File:                                                       *
 *         File::File -- ���캯��                                    *
 *         File::~File -- ��������                                   *
 *         File::addContent -- ����ļ�                              *
 *         File::release -- �ͷ��ڴ�                                 *
 *         File::toString -- string����תstring                      *
 *       Folder:                                                     *
 *          Folder::addChild -- �����Ŀ¼                           *
 *          Folder::Folder -- ���캯��                               *
 *          Folder::count -- �ж��Ƿ�����һ���ļ���                *
 *          Folder::find -- �����ļ���                               *
 *          Folder::erase -- ��������                                *
 *          Folder::size -- ��ȡ�ļ��д�С                           *
 *   DiskManager -- ������:                                          *
 *     DiskManager::DiskWrite -- ���������ļ�                        *
 *     DiskManager::DiskMkdir -- ���������ļ���                      *
 *     DiskManager::DiskRmdir -- ɾ�������ļ���                      *
 *     DiskManager::DiskCkdir -- ����Ŀ¼                            *
 *     DiskManager::DiskManagers -- �����ʵ�֣����ڿ��ƴ���         *
 *     DiskManager::GetPath -- ��ȡ·����Ŀ¼��                      *
 *     DiskManager::AllMEm -- ��ȡ���̿ռ��С                       *
 *     DiskManager::usedMem -- ��ȡ���ô��̿ռ�                      *
 *     DiskManager::run -- run����ʵ�֣���ʱ������                   *
 *     DiskManager::SFM -- SFM����ʵ��                               *
 *     DiskManager::format -- ��ʽ��ʵ��                             *
 *     DiskManager::Mkdir -- Mkdir����ʵ��                           *
 *     DiskManager::Rmdir -- Rmdir����ʵ��                           *
 *     DiskManager::ls -- ls����ʵ��                                 *
 *     DiskManager::cd -- cd����ʵ��                                 *
 *     DiskManager::create -- create����ʵ�֣����ڴ����ļ�           *
 *     DiskManager::open -- ���ļ�                                 *
 *     DiskManager::close -- �ر��ļ�                                *
 *     DiskManager::write -- д�ļ�                                  *
 *     DiskManager::read -- ���ļ�                                   *
 *     DiskManager::rm -- ɾ���ļ�                                   *
 *     DiskManager::input -- ������������                            *
 *     DiskManager::DiskManager -- ���캯������ʼ������              *
 *   Register -- ע����ࣨ������                                    *
 *   AES -- AES���ܣ�CSDN�ϵĴ��룬��Ҳû�㶮������                    *
 *   ASSOCEXE -- ������չ��Ĭ���ļ�:                                 *
 *     ASSOCEXE::getexten -- ��ȡ�ļ���չ��                          *
 *     ASSOCEXE::ExtenNoneSpace -- ȥ���ļ���չ����Ŀո�            *
 *     ASSOCEXE::FilepathNoneSpace -- ȥ���ļ�����Ŀո�             *
 *     ASSOCEXE::help -- ��������                                    *
 *     ASSOCEXE::show -- ��ʾ��չ��������ļ�                      *
 *     ASSOCEXE::show_s -- ��ʾ������չ��                            *
 *     ASSOCEXE::binding -- ������չ�����ļ�                       *
 *     ASSOCEXE::split -- �жϸ�ʽ�Ƿ���ȷ(�Ƿ���"&")              *
 *     ASSOCEXE::__init__ -- ��ʼ������tmpExten��tmpFilenamePath     *
 *     ASSOCEXE::ASSOCEXE -- ���캯������ʼ������extension           *
 *     ASSOCEXE::~ASSOCEXE -- �����������ͷű����ռ�                 *
 *     ASSOCEXE::ASSOC -- �ӿڣ���������ָ��                         *
 *   CDEXE(CDK) -- �л�����:                                         *
 *     CDEXE::help -- ��������                                       *
 *     CDEXE::pos -- �����Ӵ�λ��                                    *
 *     CDEXE::changeMenu -- ���Ĵ���Ŀ¼                             *
 *     CDEXE::CD -- �ӿڣ���������ָ��                               *
 *   COLOREXE --  ������ɫ:                                          *
 *     COLOREXE::settxtcolor -- ����ǰ����ɫ                         *
 *     COLOREXE::setcolor -- ������ɫ                                *
 *     COLOREXE::COLOR -- �ӿڣ���������ָ��                         *
 *   COUNTEREXE -- ������:                                           *
 *     COUNTEREXE::level -- �ж������                               *
 *     COUNTEREXE::in_setCheck -- ����Ƿ������÷���                 *
 *     COUNTEREXE::del_space -- ɾ���ո�                             *
 *     COUNTEREXE::to_string -- תstring                             *
 *     COUNTEREXE::change -- ����Ϊ��׺���ʽ��ò���ǣ�              *
 *     COUNTEREXE::compute -- ����                                   *
 *     COUNTEREXE::Judge_rectangle -- �ж��Ƕ����������             *
 *     COUNTEREXE::cal_rect_number -- �����Ǻ���                     *
 *     COUNTEREXE::Judge_factorial -- �ж��Ƿ�Ϊ��׳�               *
 *     COUNTEREXE::cal_factorial_number -- ��׳�����                *
 *     COUNTEREXE::cal_factorial -- ����������׳�                   *
 *     COUNTEREXE::COUNTER -- �ӿڣ�����������ʽ                     *
 *   CONFIGEXE -- �鿴ϵͳ������Ϣ:                                  *
 *     CONFIGEXE::help -- ��������                                   *
 *     CONFIGEXE::ac -- ����û�����                                 *
 *     CONFIGEXE::aboutcpu -- ���cpu��Ϣ                            *
 *     CONFIGEXE::_adisk -- ���������Ϣ                             *
 *     CONFIGEXE::_kb -- ���������Ϣ                                *
 *     CONFIGEXE::_ms -- ��������Ϣ                                *
 *     CONFIGEXE::_usb -- ���USB�ӿ���Ϣ                            *
 *     CONFIGEXE::_a -- ����ת�������ú���                           *
 *     CONFIGEXE::CONFIG -- �ӿڣ���������ָ��                       *
 *   Date -- �����������                                            *
 *   parseHostAndPagePath -- ��ȡ��ҳ·��                            *
 *   GSCer -- ��ȡ��ҳԴ����                                         *
 *   GetIPer -- ��ȡ��ַIP                                           *
 *   HILLEXE -- Hill�������:                                        *
 *     HILLEXE::HILLEXE -- ���캯�������ܵ�ʵ��                      *
 *   INSTALLEXE -- �����������:                                   *
 *     INSTALLEXE::help -- ��������                                  *
 *     INSTALLEXE::Delete -- ɾ���������                          *
 *     INSTALLEXE::showOrinstall -- ��ʾ�������������             *
 *     INSTALLEXE::INSTALL -- �ӿڣ�������������                     *
 *   MEMORYEXE -- �ڴ�ʹ�ò鿴                                       *
 *     MEMORYEXE::init -- ��ʼ��                                     *
 *     MEMORYEXE::show -- ��ʾ���                                   *
 *     MEMORYEXE::MEMORYEXE -- ���캯��                              *
 *     MEMORYEXE::~MEMORYEXE -- �����������ͷ��ڴ�                   *
 *   VIRGINIAEXE -- Virginia�������                                 *
 *     VIRGINIAEXE::Init -- ��ʼ��ά�����Ƿ���                       *
 *     VIRGINIAEXE::Encode -- ����                                   *
 *     VIRGINIAEXE::Dncode -- ����                                   *
 *     VIRGINIAEXE::VIRGINIA -- �ӿڣ�������������                   *
 *   copyright -- ��Ȩ����                                           *
 *   help -- ����������                                              *
 *   findSubStringNUM -- ͳ���ַ����ִ���                            *
 *   SystemDkInit -- ϵͳ���̳�ʼ��                                  *
 *   exits -- �˳�������Ctrl+C��                                     *
 *   ADosMain -- ϵͳ������                                          *
 *   main -- ����������                                              *
 *********************************************************************/
#include <bits/stdc++.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
//#include <unistd.h>
#include <signal.h>
#include <netinet/ip.h>
#include <netinet/in.h>
#include <netinet/ip_icmp.h>
#include <netdb.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <sys/timeb.h>
#include <stdio.h>
#include <setjmp.h>
#include <termio.h>

#define PACK_SIZE 32
//#define DEBUG
//#define MST
using namespace std;

/*define.h*/
#define CHINESE 0x00000000
#define ENGLISH 0x00000001
#define chooseprinter(l,r) do{printf("%s (1), %s (2)\n",l,r);}while(0);
#define CHOOSE(t,l,r) do{printf("%s\n",t);chooseprinter(l,r)}while(0);
#define CHECK(t,y,n) printf("%s�밴(%s), �����밴(%s)\n",t,y,n);
#define WRITEFILEOK(t) printf("[\033[92mOK\033[0m]%s\n",t);
#define DIV_ROUND_UP(n) ceil(n)
#ifdef DEBUG
    #define Log_Pt() cout<<__LINE__<<" "<<"successd"<<endl;
#endif
#ifdef MST
    #define GetSize(type) cout<<sizeof(type)<<endl;
#endif

#define TRUNCOLOR(number)   "\033["#number"m"
#define TXTNORMAL           cout<<TRUNCOLOR(0)
#define TXTBLACK            cout<<TRUNCOLOR(30)
#define TXTRED              cout<<TRUNCOLOR(31)
#define TXTGREEN            cout<<TRUNCOLOR(32)
#define TXTYELLOW           cout<<TRUNCOLOR(33)
#define TXTBLUE             cout<<TRUNCOLOR(34)
#define TXTPURPLE           cout<<TRUNCOLOR(35)
#define TXTBGREEN           cout<<TRUNCOLOR(36)
#define TXTWHITE            cout<<TRUNCOLOR(37)
#define TXTBRIGHTBLACK      cout<<TRUNCOLOR(90)
#define TXTBRIGHTRED        cout<<TRUNCOLOR(91)
#define TXTBRIGHTGREEN      cout<<TRUNCOLOR(92)
#define TXTBRIGHTYELLOW     cout<<TRUNCOLOR(93)
#define TXTBRIGHTBLUE       cout<<TRUNCOLOR(94)
#define TXTBRIGHTPURPLE     cout<<TRUNCOLOR(95)
#define TXTBRIGHTBGREEN     cout<<TRUNCOLOR(96)
#define TXTBRIGHTWHITE      cout<<TRUNCOLOR(97)

#define BKGNORMAL           cout<<TRUNCOLOR(0)
#define BKGBLACK            cout<<TRUNCOLOR(40)
#define BKGRED              cout<<TRUNCOLOR(41)
#define BKGGREEN            cout<<TRUNCOLOR(42)
#define BKGYELLOW           cout<<TRUNCOLOR(43)
#define BKGBLUE             cout<<TRUNCOLOR(44)
#define BKGPURPLE           cout<<TRUNCOLOR(45)
#define BKGBGREEN           cout<<TRUNCOLOR(46)
#define BKGWHITE            cout<<TRUNCOLOR(47)
#define BKGBRIGHTBLACK      cout<<TRUNCOLOR(100)
#define BKGBRIGHTRED        cout<<TRUNCOLOR(101)
#define BKGBRIGHTGREEN      cout<<TRUNCOLOR(102)
#define BKGBRIGHTYELLOW     cout<<TRUNCOLOR(103)
#define BKGBRIGHTBLUE       cout<<TRUNCOLOR(104)
#define BKGBRIGHTPURPLE     cout<<TRUNCOLOR(105)
#define BKGBRIGHTBGREEN     cout<<TRUNCOLOR(106)
#define BKGBRIGHTWHITE      cout<<TRUNCOLOR(107)

#define HAS_MEMBER(member)\
        template<typename T, typename... Args>class has_member_##member\
        {\
            private:\
                template<typename U> static auto Check(int)->decltype(std::declval<U>().member(std::declval<Args>()...), std::true_type());\
                template<typename U> static auto Check(...)->decltype(std::false_type());\
            public:\
                static const bool value = std::is_same<decltype(Check<T>(0)), std::true_type>::value;\
        };
        
#define using(__declare, __on_enter_expr, __on_leave_expr)\
            for(__declare, *_ptr = NULL;\
                _ptr++ == NULL ? \
                    ((__on_enter_expr), 1) : 0;\
                __on_leave_expr\
                )
                
#define PRINT_HELP(__on_enter_expr__, __on_leave_expr__) using(int a = 0, __on_enter_expr__, __on_leave_expr__)
#define print(text) printf("%s\n", text)
#define pterr(var, err) cout<<"\""<<var<<"\""<<err<<endl

#define SETCOLOR(var, _0_, _1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _A_, _B_, _C_, _D_, _E_, _F_, num) switch(var)\
        {\
            case '0':\
                _0_;\
            break;\
            case '1':\
                _1_;\
            break;\
            case '2':\
                _2_;\
            break;\
            case '3':\
                _3_;\
            break;\
            case '4':\
                _4_;\
            break;\
            case '5':\
                _5_;\
            break;\
            case '6':\
                _6_;\
            break;\
            case '7':\
                _7_;\
            break;\
            case '8':\
                _8_;\
            break;\
            case '9':\
                _9_;\
            break;\
            case 'A':\
                _A_;\
            break;\
            case 'B':\
                _B_;\
            break;\
            case 'C':\
                _C_;\
            break;\
            case 'D':\
                _D_;\
            break;\
            case 'E':\
                _E_;\
            break;\
            case 'F':\
                _F_;\
            break;\
            default:\
                return num;\
            break;\
        }
#define BACKSPACE 127

#ifdef NULL
#undef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void*)0)
#endif
#endif

#define MEMNULL 0

static const unsigned char sbox[256]={
    0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,
    0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76,
    0xca,0x82,0xc9,0x7d,0xfa,0x59,0x47,0xf0,
    0xad,0xd4,0xa2,0xaf,0x9c,0xa4,0x72,0xc0,
    0xb7,0xfd,0x93,0x26,0x36,0x3f,0xf7,0xcc,
	0x34,0xa5,0xe5,0xf1,0x71,0xd8,0x31,0x15,
	0x04,0xc7,0x23,0xc3,0x18,0x96,0x05,0x9a,
	0x07,0x12,0x80,0xe2,0xeb,0x27,0xb2,0x75,
	0x09,0x83,0x2c,0x1a,0x1b,0x6e,0x5a,0xa0,
	0x52,0x3b,0xd6,0xb3,0x29,0xe3,0x2f,0x84,
	0x53,0xd1,0x00,0xed,0x20,0xfc,0xb1,0x5b,
	0x6a,0xcb,0xbe,0x39,0x4a,0x4c,0x58,0xcf,
	0xd0,0xef,0xaa,0xfb,0x43,0x4d,0x33,0x85,
	0x45,0xf9,0x02,0x7f,0x50,0x3c,0x9f,0xa8,
	0x51,0xa3,0x40,0x8f,0x92,0x9d,0x38,0xf5,
	0xbc,0xb6,0xda,0x21,0x10,0xff,0xf3,0xd2,
	0xcd,0x0c,0x13,0xec,0x5f,0x97,0x44,0x17,
	0xc4,0xa7,0x7e,0x3d,0x64,0x5d,0x19,0x73,
	0x60,0x81,0x4f,0xdc,0x22,0x2a,0x90,0x88,
	0x46,0xee,0xb8,0x14,0xde,0x5e,0x0b,0xdb,
	0xe0,0x32,0x3a,0x0a,0x49,0x06,0x24,0x5c,
	0xc2,0xd3,0xac,0x62,0x91,0x95,0xe4,0x79,
	0xe7,0xc8,0x37,0x6d,0x8d,0xd5,0x4e,0xa9,
	0x6c,0x56,0xf4,0xea,0x65,0x7a,0xae,0x08,
	0xba,0x78,0x25,0x2e,0x1c,0xa6,0xb4,0xc6,
	0xe8,0xdd,0x74,0x1f,0x4b,0xbd,0x8b,0x8a,
	0x70,0x3e,0xb5,0x66,0x48,0x03,0xf6,0x0e,
	0x61,0x35,0x57,0xb9,0x86,0xc1,0x1d,0x9e,
	0xe1,0xf8,0x98,0x11,0x69,0xd9,0x8e,0x94,
	0x9b,0x1e,0x87,0xe9,0xce,0x55,0x28,0xdf,
	0x8c,0xa1,0x89,0x0d,0xbf,0xe6,0x42,0x68,
	0x41,0x99,0x2d,0x0f,0xb0,0x54,0xbb,0x16
};
static const unsigned char contrary_sbox[256]={
	0x52,0x09,0x6a,0xd5,0x30,0x36,0xa5,0x38,
	0xbf,0x40,0xa3,0x9e,0x81,0xf3,0xd7,0xfb,
	0x7c,0xe3,0x39,0x82,0x9b,0x2f,0xff,0x87,
	0x34,0x8e,0x43,0x44,0xc4,0xde,0xe9,0xcb,
	0x54,0x7b,0x94,0x32,0xa6,0xc2,0x23,0x3d,
	0xee,0x4c,0x95,0x0b,0x42,0xfa,0xc3,0x4e,//0x4e
	0x08,0x2e,0xa1,0x66,0x28,0xd9,0x24,0xb2,
	0x76,0x5b,0xa2,0x49,0x6d,0x8b,0xd1,0x25,
	0x72,0xf8,0xf6,0x64,0x86,0x68,0x98,0x16,
	0xd4,0xa4,0x5c,0xcc,0x5d,0x65,0xb6,0x92,
	0x6c,0x70,0x48,0x50,0xfd,0xed,0xb9,0xda,
	0x5e,0x15,0x46,0x57,0xa7,0x8d,0x9d,0x84,
	0x90,0xd8,0xab,0x00,0x8c,0xbc,0xd3,0x0a,
	0xf7,0xe4,0x58,0x05,0xb8,0xb3,0x45,0x06,
	0xd0,0x2c,0x1e,0x8f,0xca,0x3f,0x0f,0x02,
	0xc1,0xaf,0xbd,0x03,0x01,0x13,0x8a,0x6b,
	0x3a,0x91,0x11,0x41,0x4f,0x67,0xdc,0xea,
	0x97,0xf2,0xcf,0xce,0xf0,0xb4,0xe6,0x73,
	0x96,0xac,0x74,0x22,0xe7,0xad,0x35,0x85,
	0xe2,0xf9,0x37,0xe8,0x1c,0x75,0xdf,0x6e,
	0x47,0xf1,0x1a,0x71,0x1d,0x29,0xc5,0x89,
	0x6f,0xb7,0x62,0x0e,0xaa,0x18,0xbe,0x1b,
	0xfc,0x56,0x3e,0x4b,0xc6,0xd2,0x79,0x20,
	0x9a,0xdb,0xc0,0xfe,0x78,0xcd,0x5a,0xf4,
	0x1f,0xdd,0xa8,0x33,0x88,0x07,0xc7,0x31,
	0xb1,0x12,0x10,0x59,0x27,0x80,0xec,0x5f,
	0x60,0x51,0x7f,0xa9,0x19,0xb5,0x4a,0x0d,
	0x2d,0xe5,0x7a,0x9f,0x93,0xc9,0x9c,0xef,
	0xa0,0xe0,0x3b,0x4d,0xae,0x2a,0xf5,0xb0,
	0xc8,0xeb,0xbb,0x3c,0x83,0x53,0x99,0x61,
	0x17,0x2b,0x04,0x7e,0xba,0x77,0xd6,0x26,
	0xe1,0x69,0x14,0x63,0x55,0x21,0x0c,0x7d
};

static const unsigned char Rcon[10]={
	0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x1b,0x36};

int loginif = 0;

pid_t pid;

jmp_buf env;

string out = "C:\\system\\>>># ";

bool Initflag = false;
bool InsOrDel = true;
bool virinstall = false;
bool hill = false;

/*#include <define.h>*/

struct Port{
    /*�˿�*/
    bool Port[1024] = {0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,1,
                               1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,
                               1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                               1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                               1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                               0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,
                               0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0};
};

/* textcolor*/
enum textcolor
{
    BLACK = 30,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    BLUEGREEN,
    WHITE,
    BRIGHTBLACK = 90,
    BRIGHTRED,
    BRIGHTGREEN,
    BRIGHTYELLOW,
    BRIGHTBLUE,
    BRIGHTPURPLE,
    BRIGHTBLUEGREEN,
    BRIGHTWHITE,
    NORMAL = 0
};
/* textbkcolor*/
enum textbkcolor
{
    BKBLACK = 40,
    BKRED,
    BKGREEN,
    BKYELLOW,
    BKBLUE,
    BKPURPLE,
    BKBLUEGREEN,
    BKWHITE,
    BKBRIGHTBLACK = 100,
    BKBRIGHTRED,
    BKBRIGHTGREEN,
    BKBRIGHTYELLOW,
    BKBRIGHTBLUE,
    BKNORMAL = 0
};
void Sleep(long int times)
{
    struct timeval delay;
    delay.tv_sec = 0;
    delay.tv_usec = times * 1000;
    select(0, NULL, NULL, NULL, &delay);
}
//�����ʾ��
class Printer{
    public:
    Printer(){
        cout<<"��ʼ��ϵͳ�У����Ե�... ������:ȫ����������ַhttps://code.xueersi.com/ide/code/15768230����������"<<endl;
    }
    ~Printer(){
        cout<<"�ͷ��ڴ���..."<<endl;
    }
};
Printer printer;
extern "C" int rmdir( const char *dirname );
extern "C" int close(int fd);
class ADosClass
{
    public:
    void CreateUserFile()
    {
        filename = "user" + username + ".h";
        cout<<filename<<endl;
        int fd = creat(filename.c_str(), O_CREAT | O_EXCL);
        if(fd == -1)
        {
            cout<<"error";
        }
        cout<<fd;
        close(fd);
    }
    int GetSystemLanguages() { return language; }
    protected:
    int memory = 4;//GB
    int kernel = 2;
    const char* cpuname = "ADosCpu";//�ͽ������
    unsigned int language = CHINESE;
    string username, filename;
    string userpassword;
    int DKmemory;
};

struct SystemSet
{
    unsigned int languages/*GetSystemLanguages()*/;
    textcolor txtcokor;
    textbkcolor txtbkcolor;
    int DKmem;
    int Mainmem, Othermem;
    int ExDkNumber;
    string ExDk1Name, ExDk2Name;
    int ExDk1mem, ExDk2mem;
    int used1, used2;
    int usemain;
    bool hasping;
};
const int memory = 8 * 1088;
const int kernel = 2;
const char* cpuname = "ADosCpu";
const char* ip = "172.169.1.108";
struct softandhard_log//�ο�������
{
    bool ping;
    bool install;
    bool gsc;//Get source code
    bool Getip;
    bool ipconfig;
    bool TextEncryption;
    bool FileEncryption;
    bool Virginia;
    bool Hill;
    bool Inet;//����
};
struct EXTENSION//���ӵ�ʱ��Ҫ�����޸�ASSOC��show������show_b������show_s����
{
    string _7z   = "__null";
    string _adexe = "ADos�ں�";
    string _adll  = "dos.adexe";
    string _C     = "BOOK.adexe";
    string _cpp   = "BOOK.adexe";
    string _h     = "BOOK.adexe";
    string _log   = "BOOK.adexe";
    string _me    = "BOOK.adexe";
    string _txt   = "BOOK.adexe";
    string _txtmd = "BOOK.adexe";
    string _tz    = "__null";
    string _rar   = "__null";
    string _zip   = "__null";
};
softandhard_log logn = {
    .ping = true,
    .install = true,
    .gsc = true,
    .Getip = true,
    .ipconfig = true,
    .TextEncryption = true,
    .FileEncryption = false,
    .Virginia = false,
    .Hill = false,
    .Inet = false
};
SystemSet sysset = {
    .languages = CHINESE,
    .txtcokor = NORMAL,
    .txtbkcolor = BKNORMAL,
    .DKmem = 512,
    .used1 = 0, 
    .used2 = 0,
    .usemain = 0
};
struct forDisk
{
    SystemSet *syset = &sysset;
    int Mainmem = syset->Mainmem, Othermem = syset->Othermem;
    int ExDkNumber = syset->ExDkNumber;
    string ExDk1Name = syset->ExDk1Name, ExDk2Name = syset->ExDk2Name;
    int ExDk1mem = syset->ExDk1mem, ExDk2mem = syset->ExDk2mem;
    int MainmemSurplus = syset->Mainmem - syset->usemain - 5;//���㷨����->��-
    int ExDk1memSurplus = syset->ExDk1mem - syset->used1;
    int ExDk2memSurplus = syset->ExDk2mem - syset->used2;
};
//������Ӳ��������

class CProgress:public ADosClass
{
    private:
    const char *ponit[6]={" ", "��", "��", "��", "��", "��"};
    public:
    void progress_bar(int per)
    {
    	int i=0;
    	int num0=0;
     
    	printf("\r  [");
     
    	num0  = (100-per)/5;
     
    	i = per;
    	while(i>5)
    	{
    		printf("%s", ponit[5]);
    		i -= 5;
    	}
     
    	if(i)
    	{
    		printf("%s", ponit[i]);
    	}
     
    	for(i=0;i<num0;i++)
    	{
    		printf("%s", ponit[0]);
    	}
     
    	printf(" ] %2d%%", per);
     
    	if(per == 100)
    	{
    	    Sleep(200);
    		printf("\n\033[92mdone\033[0m");
    	}
    }
    void progress(int all, int per)
    {
    	int i=0;
    	int num0=0;
     
    	printf("\r  [\033[92m");
     
    	num0  = (all-per)/5;
     
    	i = per;
    	while(i>5)
    	{
    		printf("%s", ponit[5]);
    		i -= 5;
    	}
     
    	if(i)
    	{
    		printf("%s", ponit[i]);
    	}
     
    	for(i=0;i<num0;i++)
    	{
    		printf("%s", ponit[0]);
    	}
     
    	printf("\033[0m ] %2d%%\n", per);
     
    	if(per == all)
    	{
    		printf("\n\033[31m��������\033[0m\n");
    	}
    }
};

string date(){
    time_t t;
    tm *local;
    char buf[128] = {0};
    t = time(NULL);
    local = localtime(&t);
    strftime(buf, 64, "%Y-%m-%d %H:%M:%S", local);
    return buf;
}

class Logger{
    public:
    const Logger &operator>>(const char* cstr) const;
};

Logger tmper;//д��־�ļ���

//�ڴ�
//Memory.h
//����UUID
static string GetUUID(){
    static random_device rd;
    static uniform_int_distribution<uint16_t> dist(0ULL, 0xFFFFULL);
    uint64_t ab = dist(rd);
    uint64_t cd = dist(rd);
    uint32_t a, b, c, d;
    stringstream ss;
    ab = (ab & 0xFFFFFFFFFFFF0FFFULL) | 0x0000000000004000ULL;
    cd = (cd & 0x3FFFFFFFFFFFFFFFULL) | 0x8000000000000000ULL;
    a = (ab >> 32U);
    b = (ab & 0xFFFFFFFFU);
    c = (cd >> 32U);
    d = (cd & 0xFFFFFFFFU);
    ss << hex << nouppercase << setfill('0');
    ss << setw(8) << (a) << '-';
    ss << setw(4) << (b >> 16U) << '-';
    ss << setw(4) << (b & 0xFFFFU) << '-';
    ss << setw(4) << (c >> 16U) << '-';
    ss << setw(4) << (c & 0xFFFFU);
    ss << setw(8) << d;
    return ss.str();
}
//����PID
static int PID(int mem){
    static random_device rd;
    static uniform_int_distribution<uint16_t> dist(0ULL, 0xFFFFULL);
    uint64_t ab = dist(rd);
    unsigned int seedVal;
    struct timeb timeBuf;
    ftime(&timeBuf);
    seedVal = ((((unsigned int)timeBuf.time& 0xFFFF) + 
            (unsigned int)timeBuf.millitm)^(unsigned int)timeBuf.millitm);
    srand((unsigned int)seedVal);
    int pidtmp = rand() % 2400 + mem;
    srand(pidtmp + ab);
    int pidrand = rand() % (8 * 1088);
    return pidrand;
}

#define NEW      0x00000001
#define RUNNABLE 0x00000002
#define RUNNING  0x00000004
#define BLOCKED  0x00000008
#define DEAD     0x00000010
#define CANNOT   0x00000020
#define CAN      0x00000040
#define SYSTEM   0x00000080
#define NONESYS  0x00000100
vector<bool> Memory(8 * 1088, false);
vector<string> UUIDMem(8 * 1088, "");
vector<string> Name(8 * 1088, "");
vector<bool> VirtMem;
vector<string> VirtName;
vector<string> VirtUUID;
#pragma pack(push)
#pragma pack(4)
struct MemMessage{
    string memName;
    string FileName;
    double cpu;
    int Usrmem;
    int VirtMem;
    int addr;
    int Virtaddr;
    int PID;
    unsigned int flag;//can close?is system? and state
    string Text;
    string copyright;
};
#pragma pack(pop)
MemMessage _NullMsg;
vector<MemMessage> SysMemMsg(75, _NullMsg);
class MEMORY{
    public:
    int forHardwear;
    private:
    void init(){
        string UUIDToThread;
        for(int i = 0; i <= 8 * 1088; i ++){
            UUIDToThread = GetUUID();
            UUIDMem.insert(UUIDMem.begin() + i, UUIDToThread);
        }
        WRITEFILEOK("�ڴ������");
        for(int i = 0; i <= 1440; i ++){
            Memory.insert(Memory.begin() + i, true);
        }
        for(int i = 0; i <= 1440; i ++){
            Name.insert(Name.begin() + i, "ADos");
        }
        WRITEFILEOK("ϵͳ�ڴ��ʼ�����");
        int virtmem = Memory.capacity() - Memory.size();// �����ڴ�=vector��ɴ����ڴ�-�趨�Ŀɴ��ڴ�
        //cout<<virtmem<<endl;
        forHardwear = virtmem;
        VirtMem.assign(virtmem, false);
        VirtUUID.assign(virtmem, "(__null)");
        for(int i = 0; i <= virtmem; i ++){
            UUIDToThread = GetUUID();
            VirtUUID.insert(VirtUUID.begin() + i, UUIDToThread);
/*#ifdef DEBUG
    Log_Pt();
#endif*/
        }
        for(int i = 0; i <= 960; i ++){
            VirtMem.insert(VirtMem.begin() + i, true);
        }
        for(int i = 0; i <= 960; i ++){
            VirtName.insert(VirtName.begin() + i, "ADos");
        }
    #if __cplusplus >= 201103L
        VirtMem.shrink_to_fit();//�ѿɴ����ڴ�������趨�Ŀɴ��ڴ�
        Memory.shrink_to_fit();
        UUIDMem.shrink_to_fit();
        Name.shrink_to_fit();
        VirtName.shrink_to_fit();
        VirtUUID.shrink_to_fit();
    #endif
        MemMessage MemMsg = {
            .memName = "ADos",
            .FileName = "ADos�ں�",
            .cpu = 2400.0 / (8 * 1088),
            .addr = 0,
            .Virtaddr = 0,
            .Usrmem = (int)ceil(2400 * 0.6),
            .VirtMem = (int)ceil(2400 * 0.4),
            .PID = PID(2400),
            .Text = "ADos�ں�",
            .copyright = "AFAN Studio",
            .flag = CANNOT | SYSTEM | RUNNING
        };
        SysMemMsg.push_back(MemMsg);
    }
    void toexit(){
        Memory.clear();
        UUIDMem.clear();
        Name.clear();
        VirtMem.clear();
        SysMemMsg.clear();
    #if __cplusplus >= 201103L
        Memory.shrink_to_fit();
        UUIDMem.shrink_to_fit();
        Name.shrink_to_fit();
        VirtMem.shrink_to_fit();
        SysMemMsg.shrink_to_fit();
    #endif
    }
    const char* GetThreadState(int addr, string ThreadName){
        if(addr > (Memory.capacity() - 2400)) return NULL;
        if(Name[addr] != ThreadName || Name[addr - 1] == ThreadName) return NULL;
        if(addr <= 2400) return NULL;
        MemMessage msgtmp;
        unsigned int flagint;
        string returnvar = "(_null)";
        for(int i = 0; i <= SysMemMsg.size(); i ++){
            msgtmp = SysMemMsg[i];
            if(msgtmp.memName == ThreadName){
                flagint = SysMemMsg[i].flag;
            }
        }
        for (int i = 0; i <= 9; i++)
    	{
    		bool hasFlag = (flagint >> i) & 1;
    		if (hasFlag)
    		{
    		    cout<<i<<endl;
    		    switch(i)
                {
                    case 0:
                        returnvar = "�½���";
                    break;
                    case 1:
                        returnvar = "������";
                    break;
                    case 2:
                        returnvar = "������";
                    break;
                    case 3:
                        returnvar = "������";
                    break;
                    case 4:
                        returnvar = "�ѽ���";
                    break;
                    case 5:
                        returnvar = returnvar + "|���ܽ���";
                    break;
                    case 6:
                        returnvar = returnvar + "|���Խ���";
                    break;
                    case 7:
                        returnvar = returnvar + "|ϵͳ����";
                    break;
                    case 8:
                        returnvar = returnvar + "|��ϵͳ����";
                    break;
                    default:
                        puts("error");
                        cout<<i;
                        break;
                }
    		}
    	}
        return returnvar.c_str();
    }
    //tuple<vector<bool>, vector<string>, vector<string>> MemMonitor{Memory, UUIDMem, Name};
    public:
    MEMORY(){
        init();
        WRITEFILEOK("�ڴ��ʼ�����");
    }
    ~MEMORY(){
       toexit(); 
    }
#ifdef DEBUG
    void test(int addr, string ThreadName){
        GetThreadState(addr, ThreadName);
    }
#endif
    int CreateThread(string name, string filename, int mem/*byte*/,
                    string text = "(_null)", 
                    string copyright = "(_null)", 
                    unsigned int flag = CAN | NONESYS | NEW){
        if(mem > (Memory.capacity() - 1440)){
            return -1;
        }
        int addr = find(Memory.begin(), Memory.end(), false) - Memory.begin();
        int Virtaddr = find(VirtMem.begin(), VirtMem.end(), false) - VirtMem.begin();
        if(mem > Memory.capacity() - addr){
            return -1;
        }
        for(int i = addr; i <= (int)ceil(addr + mem * 0.6); i ++){
            Memory.insert(Memory.begin() + i, true);
        }
        for(int i = addr; i <= (int)ceil(addr + mem * 0.6); i ++){
            Name.insert(Name.begin() + i, name);
        }
        for(int i = Virtaddr; i <= (int)ceil(Virtaddr + mem * 0.4); i ++){
            VirtMem.insert(VirtMem.begin() + i, true);
        }
        for(int i = Virtaddr; i <= (int)ceil(Virtaddr + mem * 0.4); i ++){
            VirtName.insert(VirtName.begin() + i, name);
        }
        MemMessage MemMsg = {
            .memName = name,
            .FileName = filename,
            .cpu = (double)(mem / (8.0 * 1088.0)),
            .addr = addr,
            .Virtaddr = Virtaddr,
            .Usrmem = (int)ceil(mem * 0.6),
            .VirtMem = (int)ceil(mem * 0.4),
            .PID = PID(mem),
            .Text = text,
            .copyright = copyright,
            .flag = flag
        };
        SysMemMsg.push_back(MemMsg);
        return addr;
    }
    int ReleaseThread(int addr, string ThreadName){
        if(addr > (Memory.capacity() - 1440)) return -1;
        if(Name[addr] != ThreadName || Name[addr - 1] == ThreadName) return -1;
        if(addr <= 1440) return -1;
        int Virtaddr;
        for(int i = 0; i <= VirtName.size(); i ++){
            if(ThreadName == VirtName[i]){
                Virtaddr = i;
                break;
            }
        }
        MemMessage msgtmp;
        for(int i = addr; i <= Name.capacity() && Name[i] == ThreadName; i ++){
            Memory[i] = false;
            Name[i] = "";
        }
        for(int i = Virtaddr; i <= VirtName.capacity() && VirtName[i] == ThreadName; i ++){
            VirtMem[i] = false;
            VirtName[i] = "";
        }
        for(vector<MemMessage>::reverse_iterator it = SysMemMsg.rbegin(); it != SysMemMsg.rend(); ++it){
            msgtmp = *it;
            if(msgtmp.memName == ThreadName){
                *it = _NullMsg;
            }
        }
#ifdef DEBUG
        Log_Pt();
#endif
        return 0;
    }
    int RunThread(int addr, string ThreadName){
        if(addr > (Memory.capacity() - 1440)) return -1;
        if(Name[addr] != ThreadName || Name[addr - 1] == ThreadName) return -1;
        if(addr <= 1440) return -1;
        MemMessage msgtmp;
        for(vector<MemMessage>::reverse_iterator it = SysMemMsg.rbegin(); it != SysMemMsg.rend(); ++it){
            msgtmp = *it;
            if(msgtmp.memName == ThreadName){
                it->flag = it->flag & ~(NEW);
                it->flag = it->flag | RUNNING;
                break;
            }
        }
        return 0;
    }
    int BlockThread(int addr, string ThreadName){
        if(addr > (Memory.capacity() - 1440)) return -1;
        if(Name[addr] != ThreadName || Name[addr - 1] == ThreadName) return -1;
        if(addr <= 1440) return -1;
        MemMessage msgtmp;
        for(vector<MemMessage>::reverse_iterator it = SysMemMsg.rbegin(); it != SysMemMsg.rend(); ++it){
            msgtmp = *it;
            if(msgtmp.memName == ThreadName){
                it->flag = it->flag & ~(RUNNING);
                it->flag = it->flag | BLOCKED;
                break;
            }
        }
        return 0;
    }
    int KillThread(int addr, string ThreadName){
        if(addr > (Memory.capacity() - 1440)) return -1;
        if(Name[addr] != ThreadName || Name[addr - 1] == ThreadName) return -1;
        if(addr <= 1440) return -1;
        MemMessage msgtmp;
        for(vector<MemMessage>::reverse_iterator it = SysMemMsg.rbegin(); it != SysMemMsg.rend(); ++it){
            msgtmp = *it;
            if(msgtmp.memName == ThreadName){
                it->flag = it->flag & ~(RUNNING);
                it->flag = it->flag | DEAD;
            }
        }
        return this->ReleaseThread(addr, ThreadName);
    }
    void showThread(){
        MemMessage msgtmp;
        cout<<setfill(' ')<<"��������"<<"     "<<"�ļ�����"<<"     "<<"cpuʹ����"<<"     "<<"ʹ���ڴ�"<<"   "<<"�����ڴ�"<<"   "<<"PID"<<"   "<<"����"<<"     "<<"��Ȩ"<<"     "<<"��ʼ��ַ"<<endl;
#define _ msgtmp
        for(vector<MemMessage>::reverse_iterator it = SysMemMsg.rbegin(); it != SysMemMsg.rend(); ++it){
            msgtmp = *it;
            if(msgtmp.memName != _NullMsg.memName){
                cout<<_.memName<<"     "<<_.FileName<<"     "<<_.cpu<<"     "<<_.Usrmem<<"   "<<_.VirtMem<<"   "<<_.PID<<"   "<<_.Text<<"     "<<_.copyright<<"     "<<_.addr<<endl;
                continue;
            }
        }
#undef _
    }
    MemMessage GetThreadMessage(int addr, string ThreadName){
        MemMessage msgtmp;
        if(addr > (Memory.capacity() - 1440)) return msgtmp;
        if(Name[addr] != ThreadName || Name[addr - 1] == ThreadName) return msgtmp;
        if(addr <= 1440) return msgtmp;
        for(vector<MemMessage>::iterator it = SysMemMsg.begin(); it != SysMemMsg.end(); it ++){
           msgtmp = *it;
            if(msgtmp.memName == ThreadName){
                break;
            }
        }
        return msgtmp;
    }
};

//��ʼ���ڴ�
MEMORY Mem;

#pragma pack(push)
#pragma pack(4)
class AllHard : 
            protected ADosClass
{
    private:
    struct AboutDisk{
        string name;
        string showName;
        string shortName;
        string longName;
        string PartType; //��������
        string state;
        string UUID;
        string divName;
        int DiskMem;
        int protectMem; //�ܱ����ռ�
        string mker; //��Ӧ��
        string FilePath; //���������ַ
        string date; //��ʼ��ʱ��
        bool issys; //�Ƿ�Ϊϵͳ����
        bool isopen; //�Ƿ�Ϊ������
        bool canDel; //�Ƿ��ɾ��
        string text; //��ע
    };
    struct cpu{
        string cpuname;
        string showname;
        string longName;
        string shortName;
        string divname; //��������
        string UUID;
        int cpumem;
        int Virtmem; //�����ڴ�
        int hardwareUse; //Ӳ������
        int protect; //�ܱ����ռ�
        int canuse; //�û�������ʹ�õĿռ�
        int cpuKernelNum;
        int ThreadMax;
        string mker; //��Ӧ��
        string FilePath; //���������ַ
        string date; //��ʼ��ʱ��
        bool issys; //�Ƿ�Ϊϵͳ����
        bool canDel; //�Ƿ��ɾ��
        string text; //��ע
    };
    struct Disk{
        int DiskNum;
        int AllMem;
        AboutDisk disk1;
        AboutDisk disk2;
        AboutDisk disk3;
        AboutDisk disk4;
    #if DiskNum > 4
        vector<AboutDisk> otherdisk;
    #endif
    };
    struct USB{
        string USBname;
        string showname;
        string longName;
        string shortName;
        string divname; //��������
        string USBmemLow; //�ڴ淶Χ����
        string USBmemHigh; //�ڴ淶Χ����
        string UUID;
        string mker; //��Ӧ��
        string FilePath; //���������ַ
        string date; //��ʼ��ʱ��
        bool issys; //�Ƿ�Ϊϵͳ����
        bool canDel; //�Ƿ��ɾ��
        string text; //��ע
    };
    struct Keyboard{
        string kbname;
        string showname;
        string longName;
        string shortName;
        string divname; //��������
        string UUID;
        string mker; //��Ӧ��
        string FilePath; //���������ַ
        string date; //��ʼ��ʱ��
        bool issys; //�Ƿ�Ϊϵͳ����
        bool canDel; //�Ƿ��ɾ��
        bool iss; //�����������
        string text; //��ע
    };
    struct Mouse{
        string msname;
        string showname;
        string longName;
        string shortName;
        string divname; //��������
        string UUID;
        string mker; //��Ӧ��
        string FilePath; //���������ַ
        string date; //��ʼ��ʱ��
        bool issys; //�Ƿ�Ϊϵͳ����
        bool canDel; //�Ƿ��ɾ��
        string text; //��ע
    };
    struct AboutComputer{
        string ip;
        string UUID;
        string showname;
        string username;
    #if login != 1
        string password; //���ܺ�
    #endif
        string Aboutcopyright;
        string Version;
        string text; //����
    };
    public:
    cpu* cpus = new cpu;
    Disk* disk = new Disk;
    USB* usb = new USB;
    Keyboard* kb = new Keyboard;
    Mouse* ms = new Mouse;
    AboutComputer* ac = new AboutComputer;
    AllHard(){
        //cpu��Ϣ��ʼ��
        cpus->cpuname = cpuname;
        cpus->showname = "cpu";
        cpus->longName = "������";
        cpus->shortName = "cpu";
        cpus->divname = "ADosCpu.sys";
        cpus->UUID = GetUUID();
        cpus->cpumem = 8 * 1088;
        cpus->Virtmem = Mem.forHardwear;
        cpus->hardwareUse = 8 * 5;
        cpus->protect = 8 * 5;
        cpus->canuse = cpus->cpumem - cpus->hardwareUse - cpus->protect;
        cpus->cpuKernelNum = 2;
        cpus->ThreadMax = 128;
        cpus->mker = "AFAN Studio";
        cpus->FilePath = "C:\\system\\Program\\sysProgram\\dirve\\cpu\\ADosCpu.sys";
        cpus->date = date();
        cpus->issys = true;
        cpus->canDel = false;
        cpus->text = "central processing unit";
        WRITEFILEOK("cpu��ʼ�����");
        //Ӳ�̳�ʼ��
        disk->DiskNum = 4;
        disk->AllMem = 8 * 1024 * 1024; //1MB
        //C:
        disk->disk1.name = "ADosDisk";
        disk->disk1.showName = "C:";
        disk->disk1.longName = "C��";
        disk->disk1.shortName = "DiskC";
        disk->disk1.PartType = "FAT";
        disk->disk1.state = "����";
        disk->disk1.UUID = GetUUID();
        disk->disk1.divName = "ADosDiskC.sys";
        disk->disk1.DiskMem = 8 * 1024 * 256;//256KB
        disk->disk1.protectMem = 8 * 1024; //1KB
        disk->disk1.mker = "AFAN Studio";
        disk->disk1.FilePath = "C:\\system\\Program\\sysProgram\\dirve\\disk\\ADosDiskC.sys";
        disk->disk1.date = date();
        disk->disk1.issys = true;
        disk->disk1.isopen = true;
        disk->disk1.canDel = false;
        disk->disk1.text = "\"C:\"��Ϊ���̣����ɸ�ʽ������ɾ��";
        WRITEFILEOK("C�̳�ʼ�����");
        //E:
        disk->disk2.name = "ADosDisk";
        disk->disk2.showName = "E:";
        disk->disk2.longName = "E��";
        disk->disk2.shortName = "DiskE";
        disk->disk2.PartType = "FAT";
        disk->disk2.state = "����";
        disk->disk2.UUID = GetUUID();
        disk->disk2.divName = "ADosDiskE.sys";
        disk->disk2.DiskMem = 8 * 1024 * 256;//256KB
        disk->disk2.protectMem = 8 * 1024; //1KB
        disk->disk2.mker = "AFAN Studio";
        disk->disk2.FilePath = "C:\\system\\Program\\sysProgram\\dirve\\disk\\ADosDiskE.sys";
        disk->disk2.date = date();
        disk->disk2.issys = true;
        disk->disk2.isopen = false;
        disk->disk2.canDel = true;
        disk->disk2.text = "\"E:\"��Ϊ��չ��";
        WRITEFILEOK("E�̳�ʼ�����");
        //F:
        disk->disk3.name = "ADosDisk";
        disk->disk3.showName = "F:";
        disk->disk3.longName = "F��";
        disk->disk3.shortName = "DiskF";
        disk->disk3.PartType = "FAT";
        disk->disk3.state = "����";
        disk->disk3.UUID = GetUUID();
        disk->disk3.divName = "ADosDiskF.sys";
        disk->disk3.DiskMem = 8 * 1024 * 256;//256KB
        disk->disk3.protectMem = 8 * 1024; //1KB
        disk->disk3.mker = "AFAN Studio";
        disk->disk3.FilePath = "C:\\system\\Program\\sysProgram\\dirve\\disk\\ADosDiskF.sys";
        disk->disk3.date = date();
        disk->disk3.issys = true;
        disk->disk3.isopen = false;
        disk->disk3.canDel = true;
        disk->disk3.text = "\"F:\"��Ϊ��չ��";
        WRITEFILEOK("F�̳�ʼ�����");
        //T:
        disk->disk4.name = "ADosDisk";
        disk->disk4.showName = "T:";
        disk->disk4.longName = "T��";
        disk->disk4.shortName = "DiskT";
        disk->disk4.PartType = "FAT";
        disk->disk4.state = "����";
        disk->disk4.UUID = GetUUID();
        disk->disk4.divName = "ADosDiskT.sys";
        disk->disk4.DiskMem = 8 * 1024 * 256;//256KB
        disk->disk4.protectMem = 8 * 1024; //1KB
        disk->disk4.mker = "AFAN Studio";
        disk->disk4.FilePath = "C:\\system\\Program\\sysProgram\\dirve\\disk\\ADosDiskT.sys";
        disk->disk4.date = date();
        disk->disk4.issys = true;
        disk->disk4.isopen = false;
        disk->disk4.canDel = false;
        disk->disk4.text = "\"T:\"��Ϊ��־�ļ������̣�����ɾ��";
        WRITEFILEOK("T�̳�ʼ�����");
        //USB��ʼ��
        usb->USBname = "ADosUSB";
        usb->showname = "USB";
        usb->longName = "USB�ӿ�";
        usb->shortName = "USB";
        usb->divname = "ADosUSB.sys";
        usb->USBmemLow = UUIDMem[100];
        usb->USBmemHigh = UUIDMem[120];
        usb->UUID = GetUUID();
        usb->mker = "AFAN Studio";
        usb->FilePath = "C:\\system\\Program\\sysProgram\\dirve\\usb\\ADosUSB.sys";
        usb->date = date();
        usb->issys = true;
        usb->canDel = false;
        usb->text = "USB�ӿ�";
        WRITEFILEOK("USB��ʼ�����");
        //���̳�ʼ��
        kb->kbname = "ADosKeyboard";
        kb->showname = "KeyBoard";
        kb->longName = "����";
        kb->shortName = "KB";
        kb->divname = "ADosKB.sys";
        kb->UUID = GetUUID();
        kb->mker = "AFAN Studio";
        kb->FilePath = "C:\\system\\Program\\sysProgram\\dirve\\KeyBoard\\ADosKB.sys";
        kb->date = date();
        kb->issys = true;
        kb->canDel = false;
        kb->text = "����";
        WRITEFILEOK("���̳�ʼ�����");
        //����ʼ��
        ms->msname = "ADosMouse";
        ms->showname = "Mouse";
        ms->longName = "���";
        ms->shortName = "MS";
        ms->divname = "ADosMS.sys";
        ms->UUID = GetUUID();
        ms->mker = "AFAN Studio";
        ms->FilePath = "C:\\system\\Program\\sysProgram\\dirve\\Mouse\\ADosMs.sys";
        ms->date = date();
        ms->issys = true;
        ms->canDel = false;
        ms->text = "���";
        WRITEFILEOK("����ʼ�����");
        //�û���ʼ��
        ac->ip = ip;
        ac->UUID = GetUUID();
        //ac->showname = username;
        //ac->username = username;
        ac->Aboutcopyright = "AFAN Studio";
        ac->Version = "1.0.0";
        ac->text = "(__null)";
        WRITEFILEOK("Ӳ����ʼ�����");
        WRITEFILEOK("�û���ʼ�����");
    }
    ~AllHard(){
        delete cpus;
        delete disk;
        delete usb;
        delete kb;
        delete ms;
        delete ac;
    }
};
#pragma pack(pop)

//��ʼ��Ӳ��
AllHard hard;

//File-OS ��Դ:lewisbyte(github)
//ps:�ļ�ϵͳ��һ����������Ĳˣ���һ���ļ�ϵͳ�Ǵ�GitHub�ϰ������ģ���һ����Ķ�
/*Access.h*/
enum Access{
    ReadOnly = 0,
    Write = 1,
    Executable = 2, //��ִ��
    System = 3 //ϵͳ
};
/*FileType.h*/
enum FileType{
    FOLDER, //�ļ���
    DOCUMENT//�ĵ�
};
/*FAT.h, FAT.cpp*/

const static int BLOCK_SIZE = 4096 / sizeof(bool);

class FAT{
public:
    stack<int> freeDiskBlock;
    stack<int> fullDiskBlock;
    //��ʼ��
    void init(string blocks[]){
        for(int i = 0; i < BLOCK_SIZE; i ++){
            this->freeDiskBlock.push(i);
            blocks[i].clear();
        }
    }
    //��ȡ�մ���
    int getBlock(){
        if(this->freeDiskBlock.size() > 0){
            int blockId = this->freeDiskBlock.top();
            this->freeDiskBlock.pop();
            this->fullDiskBlock.push(blockId);
            return blockId;
        }
        return -1;
    }
    //���մ��̿�
    void addBlock(int block, string blocks[]){
        this->freeDiskBlock.push(block);
        blocks[block].clear();
    }
};

/*FCB.h, FCB.cpp*/

const int N = 4096;

class FCB{
public:
    string name;//�ļ�����      �ļ���.��չ��
    int nodeId;//�ļ���ʶ��     ����ϵͳ�����ļ���Ψһ��ʶ
    FileType type;//�ļ����ͣ�  ����չ������
    string path;//�ļ�λ�ã�    �ļ�������豸�ľ���λ��
    int size;//�ļ���С��       ���ֽڻ��Ϊ��λ���ļ�����
    Access access;//�ļ�������ʽ
    string modifyDate;//�ļ��������޸ĵ�����
    FCB *index[N];//������
    FCB *father;//���ڵ�
    
    FCB(){
        this->access = Write;
        this->modifyDate = getTime();
        this->size = N;
    }
    ~FCB(){
        NULL;
    }
    void setFileAccess(Access access){
        this->access = access;
    }
    string getTime(){
        time_t t = time(0);
        char tmp[64];
        strftime(tmp, sizeof(tmp), "%Y/%m/%d %X", localtime(&t));
        return tmp;
    }
};
/*File.h, File.cpp*/
class File: public FCB{
public:
    File(){
        
    }
    File(string _name, FileType _type, FAT &fat){
        this->name = _name;
        this->type = _type;
        this->size = 0;
        this->index[size] = fat.getBlock();
    }
    File(string _name, FileType _type, FAT &fat, Access access){
        this->name = _name;
        this->type = _type;
        this->size = 0;
        this->index[size] = fat.getBlock();
        this->access = access;
    }
    ~File(){
        
    }
    //���л�
    void Serialization(){
        //__null����Ҳ��֪��Ϊɶ����������
    }
    //�����л�
    void Deserialization(){
        //__null��ͬ�� 
    }
    
    bool addContent(const char* content, string blocks[], FAT &fat){
        int len = strlen(content);
        for(int i = 0; i < len; i ++){
            if(blocks[index[size]].length() <= N){
                blocks[index[size]] += content[i];
            }else{
                index[++size] = fat.getBlock();
                blocks[index[size]] += content[i];
            }
        }
        this->modifyDate = this->getTime();
        return false;
    }
    
    void release(FAT &fat, string *blocks){
        for(int i = 0; i < this->size; i++){
            fat.addBlock(index[i], blocks);
        }
    }
    
    string toString(string blocks[]){
        string s;
        for(int i = 0; i <= this->size; i++){
            s += blocks[index[i]];
        }
        return s;
    }
    
    //�ļ�����
    int index[N];
    //��һ���ļ���
    FCB *father;
};

/*Folder.h, Folder.cpp*/

class Folder : public FCB{
public:
    vector<FCB *> child;
    
    void addChild(FCB *file){
        this->child.push_back(file);
    }
    Folder(string _name, FileType _type){
        this->name = _name;
        this->type = _type;
    }
    bool count(FCB *file){
        int size = child.size();
        for(int i = 0; i < size; i++){
            if(child[i]->type == file->type && child[i]->name == file->name){
                return true;
            }
        }
        return false;
    }
    
    FCB *find(FCB *file){
        int size = child.size();
        for(int i = 0; i < size; i++){
            if(child[i]->type == file->type && child[i]->name == file->name){
                return child[i];
            }
        }
        return NULL;
    }
    
    int find(string file){
        int size = child.size();
        for(int i = 0; i < size; i++){
            if(child[i]->name == file){
                return i;
            }
        }
        return -1;
    }
    
    bool erase(FCB *file){
        int size = child.size();
        vector<FCB *>::iterator it;
        for(it = child.begin(); it != child.end(); it++){
            if((*it)->type == file->type && (*it)->name == file->name){
                child.erase(it);
                return true;
            }
        }
        return false;
    }
    int size(){
        return child.size();
    }
private:
    int childSize;
};
extern "C" int access(const char *filenpath, int mode); 
/*DiskManager.h, DiskManager.cpp*/
class DiskManager{
private:
    string rootPath, tmpmessages;
    const string ACCESS[4] = {"\033[92m  ֻ��\033[0m", "���޸�", "\033[96m��ִ��\033[0m", "\033[94m  ϵͳ\033[0m"};
    queue<FCB *> persistQueue;//�־û�����
    string blocks[N];
    ofstream *outs = NULL;
    ifstream *in   = NULL;
    FAT fat;
    int totalMem = 512;
    int used = 0;
public:
    void DiskWrite(File *file){
        printf("%s\n", file->path.c_str());
        outs = new ofstream(file->path.c_str());
        if(outs->is_open()){
            outs->close();
        }
    }
    void DiskWrite(File *file, int tempint){
        //printf("%s\n", file->path.c_str());
        outs = new ofstream(file->path.c_str());
        if(outs->is_open()){
            outs->close();
        }
    }
    //���������ļ���
    bool DiskMkdir(string dirName){
        return mkdir(dirName.c_str(), S_IRWXU) == 0;
    }
    //ɾ�������ļ���
    bool DiskRmdir(string dirName){
        return rmdir(dirName.c_str()) == 0;
    }
    //����
    bool DiskCkdir(string dirName){
        if(access(dirName.c_str(), 0) == -1){
            return mkdir(dirName.c_str(), S_IRWXU) == 0;
        }
        return false;
    }
    void DiskRmdir(Folder *f){
        //DFSɾ��
        for(int i = 0; i < f->child.size(); i ++){
            //�ж��ļ�����
            if(f->child[i]->type == DOCUMENT){
                printf("%s\n", f->child[i]->path.c_str());
                remove(f->child[i]->path.c_str());
                delete f->child[i];
            }else{
                this->DiskRmdir((Folder *)f->child[i]);
            }
        }
        printf("%s\n", f->path.c_str());
        this->DiskRmdir(f->path.c_str());
    }

    int DiskManagers(string argv1, string DiskName){
        if(argv1 == "FORMAT"){
            this->format(blocks);
        }else if(argv1 == "MKDIR"){
            this->Mkdir();
        }else if(argv1 == "RMDIR"){
            this->Rmdir();
        }else if(argv1 == "LS"){
            this->ls();
        }else if(argv1 == "CD"){
            this->cd();
        }else if(argv1 == "CREATE"){
            this->create();
        }else if(argv1 == "OPEN"){
            this->open();
        }else if(argv1 == "CLOSE"){
            this->close();
        }else if(argv1 == "RM"){
            this->rm();
        }else if(argv1 == "SFM"){ //�����ļ�������ʽ
            this->SFM();
        }else if(argv1 == "RUN"){ //���п�ִ�нű��ļ�����ʱ������
            this->run();
        }
        out = this->root->path + ">>># ";
        return 0;
    }
    /*�ӿں�������ȡĿ¼*/
    string GetPath() const{
        return (this->root->path + ">>># ");
    }
    /*�ӿں�������ȡ�����ܿռ�*/
    int AllMem() const{
        return totalMem;
    }
    /*�ӿں�������ȡ�������ÿռ�*/
    int usedMem(){
        return used;
    }
    void run(){
        string name;
        cin>>name;
        File *file = (File *)this->root->find(new File(name, DOCUMENT, fat));
        if(file != NULL){
            if(file->access == Executable){
                string firstline = readThefirstLine(file->path.c_str());
                if(firstline == "!#!/"){
                    
                }
                else{
                    cout<<"���ļ��ǿ�ִ�нű��ļ�"<<endl;
                }
            }
        }
        else{
            cout<<"�޷��򿪴��ļ������ļ��ǿ�ִ���ļ�"<<endl;
        }
    }
    //һЩ�����ʵ��
    //��ʽ��
    void format(string *blocks){
        fat.init(blocks);
        while(root->father != root){
            this->root = (Folder *) (this->root->father);
        }
        this->DiskRmdir(this->root);
        root->child.clear();
        printf("%s\n", "���̸�ʽ���ɹ���");
        tmpmessages = *blocks + " success";
    }
    void format(string *blocks, int n){
        string *block = blocks;
        fat.init(block);
        while(root->father != root){
            this->root = (Folder *) (this->root->father);
        }
        this->DiskRmdir(this->root);
        root->child.clear();
        //printf("%s\n", "���̸�ʽ���ɹ���");
        //tmpmessages = *blocks + " success";
    }
    void SFM(){
        string name;
        int acctmp;
        cin>>name>>acctmp;
        int i = this->root->find(name);
        if(i != -1){
            root->child[i]->access = (Access)(acctmp <= 2 ? acctmp : root->child[i]->access);
            tmpmessages =  name + " success";
        } else {
            cout<<"�޴��ļ�"<<endl;
            tmpmessages = name + " failed";
        }
    }
    void Mkdir(){
        string name;
        cin >> name;
        Folder *childFile = new Folder(name, FileType::FOLDER);
        //���ø��ڵ�
        childFile->father = (this->root);
        childFile->path   = this->root->path + name + "\\";
        //�ж��ļ��Ƿ��ظ�
        if(this->root->count(childFile)){
            //�ļ��ظ�����
            cout<<"�����ļ���ʧ�ܣ��ļ����������ظ�"<<endl;
            tmpmessages = name + " failed";
        } else {
            cout<<"�����ļ��гɹ�"<<endl;
            this->DiskMkdir(childFile->path);
            this->root->addChild(childFile);
            tmpmessages =  name + " success";
        }
    }
    void Mkdir(string name){
        string pathname = name;
        Folder *childFile = new Folder(pathname, FileType::FOLDER);
        //���ø��ڵ�
        childFile->father = (this->root);
        childFile->path   = this->root->path + pathname + "\\";
        //�ж��ļ��Ƿ��ظ�
        if(this->root->count(childFile)){
            //�ļ��ظ�����
            //cout<<"�����ļ���ʧ�ܣ��ļ����������ظ�"<<endl;
        } else {
            //cout<<"�����ļ��гɹ�"<<endl;
            this->DiskMkdir(childFile->path);
            this->root->addChild(childFile);
        }
    }
    void Rmdir(){
        string name;
        cin >> name;
        Folder *childFile = new Folder(name, FileType::FOLDER);
        if(this->root->erase(childFile)){
            this->DiskRmdir(childFile);
            cout<<"�ļ���ɾ���ɹ�"<<endl;
            tmpmessages = name + " success";
        } else {
            cout<<"�޴��ļ��У�ɾ���ļ���ʧ��"<<endl;
            tmpmessages = name + " failed";
        }
    }
    void Rmdir(string filenamepath){
        string name = filenamepath;
        Folder *childFile = new Folder(name, FileType::FOLDER);
        if(this->root->erase(childFile)){
            this->DiskRmdir(childFile);
            //cout<<"�ļ���ɾ���ɹ�"<<endl;
        } else {
            //cout<<"�޴��ļ��У�ɾ���ļ���ʧ��"<<endl;
        }
    }
    void ls(){
        cout<<setw(10)<<"����Ȩ��"<<setw(20)<<"�ļ���С"<<setw(25)<<"�޸�����"<<setw(20)<<"�ļ���"<<endl;
        int size = this->root->size();
        for(int i = 0; i < size; i++){
            cout<<setw(10) << (this->root->child[i]->type != FOLDER ? ACCESS[this->root->child[i]->access] : "\033[93m�ļ���\033[0m")
                <<setw(20)
                <<(this->root->child[i]->type != FOLDER ? ((File *) this->root->child[i])->toString(blocks).size() : 0) <<setw(25)
                <<this->root->child[i]->modifyDate
                <<setw(20)<<this->root->child[i]->name
                <<endl;
        }
        tmpmessages = "success";
    }
    void cd(){
        string name;
        cin >> name;
        if(name == ".."){
            this->root = (Folder *) (this->root->father);
            tmpmessages = name + " success";
        } else {
            if(this->root->count(new Folder(name, FOLDER))){
                if(this->root->find(new Folder(name, FOLDER))->type != FOLDER){
                    cout<<"�޴��ļ���"<<endl;
                    tmpmessages = name + " failed";
                }else{
                    root = (Folder *) this->root->find(new Folder(name, FOLDER));
                    tmpmessages = name + " success";
                }
            }else{
                cout<<"�޴��ļ���"<<endl;
                tmpmessages = name + " failed";
            }
        }
    }
    void cd(string name){
        string pathname = name;
        if(pathname == ".."){
            this->root = (Folder *) (this->root->father);
        } else {
            if(this->root->count(new Folder(pathname, FOLDER))){
                if(this->root->find(new Folder(pathname, FOLDER))->type != FOLDER){
                    //cout<<"�޴��ļ���"<<endl;
                }else{
                    root = (Folder *) this->root->find(new Folder(pathname, FOLDER));
                }
            }else{
                //cout<<"�޴��ļ���"<<endl;
            }
        }
    }
    void create(){
        string name;
        int acctmp;
        cin>>name>>acctmp;
        if(acctmp > 2){
            return;
        }
        File *childFile = new File(name, DOCUMENT, fat, (Access)acctmp);
        childFile->father = (this->root);
        childFile->path = this->root->path + name;
        if(this->root->count(childFile)){
            cout<<"�����ļ�ʧ�ܣ����ļ��Ѵ��ڣ���"<<endl;
            tmpmessages =  childFile->path + " failed";
        } else {
            cout<<"�����ļ��ɹ���"<<endl;
            this->root->addChild(childFile);
            this->DiskWrite(childFile);
            tmpmessages = childFile->path + " success";
        }
    }
    void create(string name, int acc){
        Access acctmp = (Access)acc;
        string pathname = name;
        File *childFile = new File(pathname, DOCUMENT, fat, acctmp);
        childFile->father = (this->root);
        childFile->path = this->root->path + pathname;
        if(this->root->count(childFile)){
            //cout<<"�����ļ�ʧ�ܣ����ļ��Ѵ��ڣ���"<<endl;
        } else {
            //cout<<"�����ļ��ɹ���"<<endl;
            this->root->addChild(childFile);
            this->DiskWrite(childFile, 1);
        }
    }
    //�û�����
    void open(){
        string name, cmd;
        cin>>name;
        File *file = (File *)this->root->find(new File(name, DOCUMENT, fat));
        if(file != NULL){
            cout<<"�ļ���д���򿪳ɹ���"<<endl;
            cout<<out;
            while(cin>>cmd){
                cin.clear();
                cin.sync();
                cout<<out;
                if(cmd == "write"){
                    if(file->access == Write){
                        this->write(file->path.c_str(), file);
                    }
                    else{
                        pterr(name, "����д");
                        tmpmessages = file->path + " " + cmd + " failed";
                    }
                } else if(cmd == "read"){
                    this->read(file->path.c_str());
                } else if (cmd == "close") {
                    this->close();
                    break;
                }
                cin.clear();
                cin.sync();
            }
            tmpmessages = file->path + " " + cmd + " success";
        } else {
            printf("�޷����ļ���д�����޴��ļ���\n");
            tmpmessages = file->path + " " + cmd + " failed";
        }
    }
    //�ں˵���
    void open(string name, string cmd, string text = "(__null)"){
        string pathname = name, tempcmd = cmd, temptxt = text;
        File *file = (File *)this->root->find(new File(pathname, DOCUMENT, fat));
        if(file != NULL){
            //cout<<"�ļ���д���򿪳ɹ���"<<endl;
            //cout<<out;
            //cout<<out;
            if(tempcmd == "write"){
                this->write(file->path.c_str(), file, temptxt);
            } else if(tempcmd == "read"){
                this->read(file->path.c_str());
            } else if (tempcmd == "close") {
                this->close();
            }
        } else {
            //printf("�޷����ļ���д�����޴��ļ���\n");
        }
    }
    void close(){
        if(outs == NULL || in == NULL){
            cout<<"���ļ���д����Ҫ�رգ�"<<endl;
            tmpmessages = "none";
        }
        else{
            outs->close();
            in->close();
            cout<<"�ļ���д���رճɹ���"<<endl;
            tmpmessages = "success";
        }
    }
    void write(const char *s, File *file){
        //if(in != NULL)in->close();
        string content;
        getline(cin, content);
        file->addContent(content.c_str(), blocks, fat);
        content = file->toString(blocks);
        outs = new ofstream(s);
        if(outs->is_open()){
            *outs << content;
        }
        //outs->close();
        string tmpstres = s;
        tmpmessages =  tmpstres + " " + content + " success";
    }
    void write(const char *s, File *file, string text){
        string content = text;
        if(in != NULL)in->close();
        file->addContent(content.c_str(), blocks, fat);
        content = file->toString(blocks);
        outs = new ofstream(s);
        if(outs->is_open()){
            *outs << content;
        }
        outs->close();
    }
    void read(const char* s){
        string content;
        //if(outs != NULL) outs->close();
        in = new ifstream(s);
        if(in->is_open()){
            while(getline(*in, content)){
                cout<<content<<endl;
            }
        }
        in->close();
        string tmpfiler = s;
        tmpmessages = tmpfiler + " success";
    }
    string readThefirstLine(const char* s){
        string content;
        //if(outs != NULL) outs->close();
        in = new ifstream(s);
        if(in->is_open()){
            getline(*in, content);
        }
        in->close();
        return content;
    }
    void rm(){
        string name;
        cin >> name;
        File *childFile = new File(name, DOCUMENT, fat);
        if(this->root->count(childFile)){
            if(childFile->access != System){
                childFile = (File *) this->root->find(childFile);
                remove(childFile->path.c_str());
                childFile->release(fat, blocks);
                this->root->erase(childFile);
                cout<<"ɾ���ļ��ɹ���"<<endl;
                tmpmessages = childFile->path + " " + "success";
            }
            else{
                cout<<"���ļ�Ϊϵͳ�ļ���ɾ��ʧ��"<<endl;
                tmpmessages = childFile->path + " " + "failed";
            }
        }else{
            cout<<"�޴��ļ���ɾ��ʧ�ܣ�"<<endl;
            tmpmessages = childFile->path + " " + "failed";
        }
    }
    void rm(string name){
        string Pathname = name;
        File *childFile = new File(Pathname, DOCUMENT, fat);
        if(this->root->count(childFile)){
            childFile = (File *) this->root->find(childFile);
            remove(childFile->path.c_str());
            childFile->release(fat, blocks);
            this->root->erase(childFile);
            //cout<<"ɾ���ļ��ɹ���"<<endl;
        }else{
            //cout<<"�޴��ļ���ɾ��ʧ�ܣ�"<<endl;
        }
    }
    /*DiskManager(string argv1, string DiskName){
        DiskManagers(argv1,DiskName);
    }*/
    void input(string argv1){
        DiskManagers(argv1, this->DiskNames);
        tmper >> out.c_str() >> " " >> date().c_str() >> " " >> argv1.c_str() >> " " >> tmpmessages.c_str() >> "\n";
    }
    DiskManager(){
        
    }
    DiskManager(string DiskName, string rootpath){
        rootPath = rootpath;
        fat.init(blocks);
        root = new Folder(rootPath, FileType::FOLDER);
        root->path = rootPath;
        this->DiskMkdir(rootPath);
        root->father = root;
        this->DiskNames = DiskName;
        string InitOK = "[\033[92mOK\033[0m]" + DiskName + "���ļ�ϵͳ��ʼ�����";
        cout<<InitOK<<endl;
    }
    DiskManager(int computername, string DiskName, string rootpath){
        rootPath = rootpath;
        fat.init(blocks);
        root = new Folder(rootPath, FileType::FOLDER);
        root->path = rootPath;
        this->DiskMkdir(rootPath);
        root->father = root;
        this->DiskNames = DiskName;
    }
private:
    Folder *root;
    string DiskNames;
};
class FileSystem:protected ADosClass
{
    public:
    const char* login_init_ = "C:\n..system\n...dos.adexe\n...open.adexe\n...Ping.adexe\n...Ping.adll\n...install.adexe\n...gsc.adexe\n...GetIp.adexe\n...GetIp.adll\n...ipconfig.adexe\n...TE.adexe\n...TE.txtmd\n...FE.txtmd\n...En.adll\n...BOOK.adexe\n...READ.ME\nE:\n..tmp\nF:\n..tmp\n";
    const string C_init_ = "..system\n...dos.adexe\n...open.adexe\n...Ping.adexe\n...Ping.adll\n...install.adexe\n...gsc.adexe\n...GetIp.adexe\n...GetIp.adll\n...ipconfig.adexe\n...TE.adexe\n...TE.txtmd\n...FE.txtmd\n...En.adll\n...BOOK.adexe\n...READ.ME";
    string E_init_ = "..tmp";
    string F_init_ = "..tmp";
    const string README = "�ǵģ������README�ļ�\n    ��ʵ��Ҳ��Ҫ���������Ŀ�þ��ˡ���Ҳ���ҵ�һ������ô�Ӵ��һ����Ŀ���в��õĵط������ݣ��Ҽ������ã������в��õĵط�������¡�\n    Ҫ��˵��Ϊʲô������ô����Ŀ����ʵҲ����������������Ϊ����ǰҲ����һ���������ն˵Ķ���������û�����������������Ҫ��սһ�¡��ҿ��˱����������������ڴ������Ʒ��u1s1�����ܲ������Ƕ���Щ��̫�õĵط�������˵���ض���ʱ��̫����������������⣬�����������logo��û�ӣ������¼�����Ч̫������������������ұ��������C++Ҳֻ����dos��������Ҳ����Ҫ��һ���ܹ������û���"
    "�õĹ��ܣ��κ�ѧ��˼������������ƣ���������봴���ļ����ߴ��������н����͸���Ŀ¼�������Ծ��޷�ʵ���ˡ����ڽ�����һ�飬�����������һ��ר����C++��ͼ�ο⣬������Ϊû���겢û�з����������������Ŀ��Ҳ��ֻ�����˲��ֺ������Ȼ�ͷ�Ǹ��������ˡ����������Ժ��һ���½���ġ����о��ǹ��ڿ�Դ��������⣬������ˣ��Ժ����ڱ�������������е���Ŀ���û������˵��������¶��ῪԴ����λ���п��԰��Ҳ�������޸����ݣ������߼��Ϻͼ����ϵĲ��㣬����ע���һ�ú�д�ģ��в��õĵط�����˵���Ҹ���(doge)��Ȼ���һ���˵�����¼���:\n"    
    "    1.����Ϯ����ب�Ų�����˶�����\n    2.�ı�Ļ��ǿ��Եģ����Ǹı��ʱ��Ҫ����Ʒ��Ϊ�ı࣬ת��ʱҪ��Ϊת�أ���θ��ϸ���Ʒ��ַ��\n    3.����㷢���κ�bug������Ҫ�Ľ��ĵط��ֻ�����ϣ�����ӵĹ����뷢��������afanstudio@163.com���������Ҫ����д�ĳ���������У�Ҳ���Ժ���˵������Դ���뷢���������䡣����ǿ��Դ��εĳ���\n                        by DxiesLawiye(��ī��)";
};
/*һЩ������������������Լ���������������ӣ�����û����
class Administrator256{
    private:
    Port tmp;
    Port *port = &tmp;
    public:
};
class AfanStudio{
    private:
    Port tmp;
    Port *port = &tmp;
    public:
};
class TmpComputer{
    private:
    Port tmp;
    Port *port = &tmp;
    public:
};
class Doser{
    private:
    Port tmp;
    Port *port = &tmp;
    public:
};
int getch()
{
    cout<<endl;
    system("stty -echo");
    int c;
    system("stty raw");
    c = getchar();
    system("stty -raw");
    system("stty echo");
    return (c - '0');
}*/

//ע���������
/*Type.h*/
enum Type{ //ֵ������
    RG_PC, //�ַ���
    RG_BINARY //��������
};

enum regPath{
    CURRENT_USR,
    _SYSTEM
};

/*key.h*/
struct key{
    string showname;
    Type _type;
    string _name;
    string _key; //ֵ
    regPath _regpath;
    bool _isEx; //�Ƿ�����չ��
};

/*Registry.cpp*/
class Registry{
    public:
    void AddKey(key* _key){
        if(_key->_regpath == CURRENT_USR){
            HKEY_CURRENT_USR.push_back(_key);
        } else if (_key->_regpath == _SYSTEM){
            HKEY_SYSTEM.push_back(_key);
        }
    }
    void show(regPath _rpath){
        if(_rpath == CURRENT_USR){
            cout<<"HKEY_CURRENT_USR"<<endl;
            key* keytmp;
            for(vector<key *>::reverse_iterator it = HKEY_CURRENT_USR.rbegin(); it != HKEY_CURRENT_USR.rend(); ++it){
                keytmp = *it;
                if(keytmp->showname != ""){
                    cout<<"|-"<<keytmp->showname<<endl;
                    continue;
                }
            }
        } else if (_rpath == _SYSTEM){
            cout<<"HKEY_SYSTEM"<<endl;
            key* keytmp;
            for(vector<key *>::reverse_iterator it = HKEY_SYSTEM.rbegin(); it != HKEY_SYSTEM.rend(); ++it){
                keytmp = *it;
                if(keytmp->showname != ""){
                    cout<<"|-"<<keytmp->showname<<endl;
                    continue;
                }
            }
        }
    }
    private:
    vector<key *> HKEY_CURRENT_USR;
    vector<key *> HKEY_SYSTEM;
};
extern "C" void usleep(int micro_seconds);
extern "C" unsigned int sleep(unsigned int seconds);
Registry reg;
/*Open.cpp*/
class Open:protected ADosClass
{
    private:
    int login = 0;
    int addr;
    protected:
    inline bool finduserfile(string name){
        ifstream tofindfile(name);
        if(!tofindfile)
            return false;
        tofindfile.close();
        return true;
    }
    void CreatePwEdit(char* password, int len)
    {
        int i = 0;
        system("stty -icanon");
        system("stty -echo");
        
        while(i < len)
        {
            password[i] = getchar();
            if(i == 0 && password[i] == BACKSPACE)
            {
                i = 0;
                password[i] = '\0';
                continue;
            }
            else if(password[i] == BACKSPACE)
             {
                printf("\b \b");
                password[i]='\0';
                i = i - 1;
                continue;
            }
            else if(password[i] == '\n')
            {
                password[i] = '\0';
                break;
            }
            else
            {
               printf("*");
             }
           i++;
        }
        system("stty echo");
        system("stty icanon");
    }
    void loading()
    {
        printf("ADos\n");
        printf("loading...\n");
        usleep(200000);
        cout<<"�û���:";
        cin>>username;
        hard.ac->showname = username;
        hard.ac->username = username;
        string tmp = "user" + username + ".h";
        filename = tmp;
        printf("���������ļ�:");
        int inttmp = finduserfile(filename);
        if(inttmp == true)
        {
            cout<<"\n����������"<<endl;
            cin>>userpassword;
        }
        //usleep(200000);
        sleep(2);
        system("clear");
    }
    void loadusrfile(){
        
    }
    void writeusrfile()
    {
        cout<<"��ʼ��������"<<endl;
        cout<<"��ʼ�����û��ļ�,�������û���"<<endl;
        cin>>username;
        CreateUserFile();
        cout<<"���ڴ��ļ�"<<endl;
        ofstream writefile(filename);
        if(writefile.is_open() == 0)
        {
            cerr<<"open file failed";
            writefile.close();
            return;
        }
        cout<<"��ʼд��Ӳ����Ϣ"<<endl;
        writefile<<"[SystemHardware]\n";
        cout<<"д�����Ӳ����Ϣ"<<endl;
        writefile<<"cpu:ADosCpu\n";
        WRITEFILEOK("д��cpu����")
        writefile<<"kernel:2\n";//�ں���
        WRITEFILEOK("д���ں�����")
        writefile<<"memory:4\n";//���ڴ�
        WRITEFILEOK("д�����ڴ�")
        cout<<"��ʼд������"<<endl;
        writefile<<"[SystemSet]\n";
        writefile<<"language:Chinese\n";
        WRITEFILEOK("д����������")
        writefile<<"DKmemory:"<<sysset.DKmem<<"\n";
        WRITEFILEOK("д������ܿռ�")
        writefile<<"Mainmemory:"<<sysset.Mainmem<<"\n";
        WRITEFILEOK("д���������ռ�")
        writefile<<"Othermem:"<<sysset.Othermem<<"\n";
        WRITEFILEOK("д����չ�����ռ�")
        writefile<<"ExDkNumber:"<<sysset.ExDkNumber<<"\n";
        WRITEFILEOK("д����չ��������")
        writefile<<"ExDk1Name:"<<sysset.ExDk1Name<<"\n";
        writefile<<sysset.ExDk1Name<<":"<<sysset.ExDk1mem<<"\n";
        writefile<<"ExDk2Name:"<<sysset.ExDk2Name<<"\n";
        writefile<<sysset.ExDk2Name<<":"<<sysset.ExDk2mem<<"\n";
        WRITEFILEOK("д����չ������Ϣ")
        
        writefile.close();
    }
    void ChooseSet()
    {
        CHOOSE("\n��ѡ������(Ŀǰֻ֧������)","����", "English(����ѡ)")
        int tmp;
        cin >> tmp;
        if(tmp == 1)
        {
            sysset.languages = CHINESE;
        }
        system("clear");
        CHOOSE("��ѡ����̴�С","512MB","256MB")
        cin >> tmp;
        if(tmp != 2)
        {
            sysset.DKmem = 512;
        }
        else
        {
            sysset.DKmem = 256;
        }
        system("clear");
        CHOOSE("�Ƿ�ȫ���ָ�������","��","��")
        cin >> tmp;
        if(tmp != 2)
        {
            sysset.Mainmem = sysset.DKmem;
            sysset.ExDk1Name = "__null";
            sysset.ExDk2Name = "__null";
        }
        else
        {
            memagain:int memtmp;
            printf("���������ռ���(10~125MB)\n");
            cin>>memtmp;
            if(memtmp <= 125 && memtmp >= 10)
            {
                sysset.Mainmem = memtmp;
                sysset.Othermem = sysset.DKmem - memtmp;
            }
            else
            {
                goto memagain;
            }
        }
        if(sysset.Othermem != 0)
        {
            CHOOSE("��ѡ����չ��������","1","2")
            cout<<endl;
            cin >> tmp;
            if(tmp != 2)
            {
                sysset.ExDkNumber = 1;
                cout << "��������չ��������" << endl;
                cin >> sysset.ExDk1Name;
                sysset.ExDk2Name = "__null";
                sysset.ExDk1mem = sysset.Othermem;
                sysset.ExDk2mem = MEMNULL;
            }
            else
            {
                sysset.ExDkNumber = 2;
                cout << "��������չ��������" << endl;
                printf("����1:");
                string tmpname1, tmpname2;
                cin >> tmpname1;
                sysset.ExDk1Name = tmpname1;
                cout<<endl;
                printf("����2:");
                cin >> tmpname2;
                sysset.ExDk2Name = tmpname2;
                cinmemagain:cout<<endl;
                cout<<"�������"<<"\""<<tmpname1<<"\"����ռ�(MB)"<<endl;
                int Dk1mem;
                cin>>Dk1mem;
                if(Dk1mem >= sysset.Othermem)
                    goto cinmemagain;
                sysset.ExDk1mem = Dk1mem;
                sysset.ExDk2mem = sysset.Othermem - sysset.ExDk1mem;
                printf("����%s�ռ�:%dMB\n", sysset.ExDk2Name.c_str(), sysset.ExDk2mem);
                CHECK("ȷ����˷���","Y","N")
                char check;
                cin >> check;
                if(check != 'Y')
                    goto cinmemagain;
            }
            system("clear");
        }
        CHOOSE("�Ƿ�װping","��","��")
        cout<<endl;
        cin >> tmp;
        if(tmp != 2)
            sysset.hasping = true;
        else
            sysset.hasping = false;
        CHOOSE("ѡ���ļ�ϵͳ�������ʵ���ǳ����ġ�ѡɶ���У��Ҽ��������Ķ���","NTFS","FAT")
        cout<<endl;
        cin>>tmp;
        system("clear");
#define Dk1Name sysset.ExDk1Name.c_str()
#define Dk2Name sysset.ExDk2Name.c_str()
        printf("����:Chinese\n���̿ռ�:%dMB\n�������ռ�:%dMB\n��չ��������:%d\n��չ��������:%s,%s\n��չ�����ռ�:%s:%d,%s:%d\n",sysset.DKmem,
                sysset.Mainmem,sysset.ExDkNumber,Dk1Name,Dk2Name,Dk1Name,sysset.ExDk1mem,Dk2Name,sysset.ExDk2mem);
        writeusrfile();
    }
    void SetupSystem()
    {
        
    }
    /*void delfile()
    {
        remove(filename.c_str());
    }*/
    CProgress pro;
    void Animation()
    {
        for(int i = 0; i <= 100; i ++)
    	{
    		pro.progress_bar(i);
    		Sleep(20);
    	}
    }
    public:
    Open(){
        addr = Mem.CreateThread("Open", "Open.adexe", 8 * 200,
                                "the basic of the system", "AFAN Studio", 
                                CANNOT|SYSTEM|NEW);
        Mem.RunThread(addr, "Open");
    }
    ~Open(){
        Mem.KillThread(addr, "Open");
    }
    void login_init_()
    {
        sysset={
            .languages = CHINESE,
            .txtcokor = NORMAL,
            .txtbkcolor = BKNORMAL,
            .DKmem = 512,
            .Mainmem = 120,
            .Othermem = 392,
            .ExDkNumber = 2,
            .ExDk1Name = "E", 
            .ExDk2Name = "F",
            .ExDk1mem = 200, 
            .ExDk2mem = 192,
            .hasping = true
        };
    }
    void openmain()
    {
        loading();
#ifdef DEBUG
        cout<<filename;
#endif
        cout<<"�ο͵�¼������1(Ŀǰֻ���ο͵�¼)"<<endl;
        cin>>login;
        if(login != 1){
            if(finduserfile(filename) == false)
            {
                sleep(2);
                ChooseSet();
            }
        }
        Animation();
        cout<<endl<<"���ڳ�ʼ��"<<endl;
        if(login == 1)
        {
            login_init_();
            loginif = login;
            cout<<"��ʼ�����"<<endl;
        }
        //SetupSystem();
        //delfile();
    }
    /*void tmpfunc()
    {
        ChooseSet();
    }*/
};

/*�������̷���*/
DiskManager dk_C("C","C:\\system\\");
DiskManager dk_E("E","E:\\root\\");
DiskManager dk_F("F","F:\\root\\");
//dk_tmp:T��Ϊһ����ʱ�ļ���
DiskManager dk_tmp("T","T:\\temp\\");

const Logger &Logger::operator>>(const char* cstr) const{
    //dk_tmp.cd("Temp");
    dk_tmp.open("cmdtemp.tmp", "write", cstr);
    //dk_tmp.cd("..");
    return *this;
}

/*function*/
//software.cpp
class AES
{
    private:
    static unsigned char x2time(unsigned char x){
        if(x&0x80){
            return (((x<<1)^0x1B)&0xFF);
        }
        return x<<1;
    }
    static unsigned char x3time(unsigned char x){
        return (x2time(x)^x);
    }
    static unsigned char x4time(unsigned char x){
        return (x2time(x2time(x)));
    }
    static unsigned char x8time(unsigned char x){
        return (x2time(x2time(x2time(x))));
    }
    static unsigned char x9time(unsigned char x){//1001
        return (x8time(x)^x);
    }
    static unsigned char xBtime(unsigned char x){//1011
        return (x8time(x)^x2time(x)^x);
    }
    static unsigned char xDtime(unsigned char x){//1101
        return (x8time(x)^x4time(x)^x);
    }
    static unsigned char xEtime(unsigned char x){//1110
        return (x8time(x)^x4time(x)^x2time(x));
    }
    static void MixColumns(unsigned char *col)
    {
        unsigned char tmp[4],xt[4];
        for(int i = 0;i < 4; i ++, col += 4)
        {
            tmp[0]=x2time(col[0])^x3time(col[1])^col[2]^col[3];
            tmp[1]=col[0]^x2time(col[1])^x3time(col[2])^col[3];
            tmp[0]=col[0]^col[1]^x2time(col[2])^x3time(col[3]);
            tmp[0]=x3time(col[0])^col[1]^col[2]^x2time(col[3]);
            col[0]=tmp[0];
            col[1]=tmp[1];
            col[2]=tmp[2];
            col[3]=tmp[3];
        }
    }
    static void Contrary_MixColumns(unsigned char *col)
    {
    	unsigned char tmp[4];
    	unsigned char xt2[4];//colx2
    	unsigned char xt4[4];//colx4
    	unsigned char xt8[4];//colx8
    	int x;
    	for(x=0;x<4;x++,col+=4)
    	{
    		tmp[0]=xEtime(col[0])^xBtime(col[1])^xDtime(col[2])^x9time(col[3]);
    		tmp[1]=x9time(col[0])^xEtime(col[1])^xBtime(col[2])^xDtime(col[3]);
    		tmp[2]=xDtime(col[0])^x9time(col[1])^xEtime(col[2])^xBtime(col[3]);
    		tmp[3]=xBtime(col[0])^xDtime(col[1])^x9time(col[2])^xEtime(col[3]);
    		col[0]=tmp[0];
    		col[1]=tmp[1];
    		col[2]=tmp[2];
    		col[3]=tmp[3];
    	}
    }
    static void ShiftRows(unsigned char *col)
    {
    	unsigned char t;
    	/*1nd row*/
    	t=col[1];col[1]=col[5];col[5]=col[9];col[9]=col[13];col[13]=t;
    	/*2rd row*/
    	t=col[2];col[2]=col[10];col[10]=t;
    	t=col[6];col[6]=col[14];col[14]=t;
    	/*3th row*/
    	t=col[15];col[15]=col[11];col[11]=col[7];col[7]=col[3];col[3]=t;
    	/*4th row*/
    }
    static void Contrary_ShiftRows(unsigned char *col)
    {
    	unsigned char t;
    	/*1nd row*/
    	t=col[13];col[13]=col[9];col[9]=col[5];col[5]=col[1];col[1]=t;
    	/*2rd row*/
    	t=col[2];col[2]=col[10];col[10]=t;
    	t=col[6];col[6]=col[14];col[14]=t;
    	/*3th row*/
    	t=col[3];col[3]=col[7];col[7]=col[11];col[11]=col[15];col[15]=t;
    	/*4th row*/
    }
    static void SubBytes(unsigned char *col)
    {
    	int x;
    	for(x=0;x<16;x++)
    	{
    		col[x]=sbox[col[x]];
    	}
    }
    static void Contrary_SubBytes(unsigned char *col)
    {
    	int x;
    	for(x=0;x<16;x++)
    	{
    		col[x]=contrary_sbox[col[x]];
    	}
    }
    static void AddRoundKey(unsigned char *col,unsigned char *expansionkey,int round)//�ܳ׼�
    {
    	int x;				
    	for(x=0;x<16;x++)
    	{
    		col[x]^=expansionkey[(round<<4)+x];
    	}
    }
    public:
    void AesEncrypt(unsigned char *blk,unsigned char *expansionkey,int Nr)//����һ������
    {
    	int round;
    	AddRoundKey(blk,expansionkey,0);
    	for(round=1;round<=(Nr-1);round++)	
    	{
    		SubBytes(blk);		
    		ShiftRows(blk);		
    		MixColumns(blk);	
    		AddRoundKey(blk,expansionkey,round);
    	}
    	SubBytes(blk);
    	ShiftRows(blk);
    	AddRoundKey(blk,expansionkey,Nr);
    }
    void Contrary_AesEncrypt(unsigned char *blk,unsigned char *expansionkey,int Nr)
    {
    	int x;
    	AddRoundKey(blk,expansionkey,Nr);
    	Contrary_ShiftRows(blk);
    	Contrary_SubBytes(blk);
    	for(x=(Nr-1);x>=1;x--)
    	{
    		AddRoundKey(blk,expansionkey,x);
    		Contrary_MixColumns(blk);
    		Contrary_ShiftRows(blk);
    		Contrary_SubBytes(blk);
    	}
    	AddRoundKey(blk,expansionkey,0);
    }
    void ScheduleKey(unsigned char *inkey,unsigned char *outkey,int Nk,int Nr)//����һ��������Կʹ��
    {
    	unsigned char temp[4],t;
    	int x,i;
    	/*copy the key*/
    	for(i=0;i<(4*Nk);i++)
    	{
    		outkey[i]=inkey[i];
    	}
    	i=Nk;
    	while(i<(4*(Nr+1))) 
    	{
    		for(x=0;x<4;x++) 
    			temp[x]=outkey[(4*(i-1))+x];
    		if(i%Nk==0)
    		{
    			t=temp[0];temp[0]=temp[1];temp[1]=temp[2];temp[2]=temp[3];temp[3]=t;
    			for(x=0;x<4;x++)
    			{
    				temp[x]=sbox[temp[x]];
    			}
    			temp[0]^=Rcon[(i/Nk)-1];
    		}
    		for(x=0;x<4;x++)
    		{
    			outkey[(4*i)+x]=outkey[(4*(i-Nk))+x]^temp[x];
    		}
    		++i;
    	}
    }
    public:
    AES(void){
        unsigned char pt[17],key[17];
        unsigned char expansionkey[15*16];
        int i;
        int j;
        printf("please input plaintext\n");//�����޸�ʽ���ַ����ַ������������������������������ò�ͬ�����ֻ���ĸ
        scanf("%s",pt);
        printf("please input key\n");//�������Կ���ܳ׸������õ��������������������ò�ͬ�����ֻ���ĸ
        scanf("%s",key);
        
        /*����*/
        ScheduleKey(key,expansionkey,4,10);	//1����Կ��չ����
        AesEncrypt(pt,expansionkey,10);		//2��AES ����
        printf("AesEncrypt text is: ");	//��������ļ�
        for (i = 0; i < 16; i++)
        {
            printf("%02x ", pt[i]);
        }
        printf("\n");
        printf("\n");
        
        /*����*/
        Contrary_AesEncrypt(pt,expansionkey,10);//AES ����
        printf("after Contrary_AesEncrypt,plaintext is: ");//�������ļ����
        for (i = 0; i < 16; i++)
        {
            printf("%c ", pt[i]);
        }
        printf("\n");
        printf("\n");
    }
};
#define EXTEN20     "                    "
#define FILEPATH20  "                    "
#define EXTENMAX    20
#define FILEPATHMAX 20
class ASSOCEXE
{
    private:
    EXTENSION tmp, *extension, returnenten;
    FileSystem filesys;
    int temp;
    string tmpExten = EXTEN20, tmpFilenamePath = FILEPATH20, filesystemp;//����EXTEN20��FILEPATH20�Ļ��ḳֵʧ��
    string getexten(string filePathName)
    {
        string tmpstr = EXTEN20;
        bool flag = false;
        for(int i = 0; i <= filePathName.length(); i ++)
        {
            if(filePathName[i] == '.')
            {
                flag = true;
            }
            if(flag == true){
                for(int j = 0; filePathName[i] != '\0'; i++, j ++)
                {
                    tmpstr[j] = filePathName[i];
                }
            }
        }
        return tmpstr;
    }
    void ExtenNoneSpace(string &ExtensionCall)
    {
        int index = 0;
        if(!ExtensionCall.empty())
        {
            while((index = ExtensionCall.find(' ', index)) != string::npos)
            {
                ExtensionCall.erase(index, 1);
            }
        }
    }
    void FilepathNoneSpace(string &filePathName)
    {
        int index = 0;
        if(!filePathName.empty())
        {
            while((index = filePathName.find(' ', index)) != string::npos)
            {
                filePathName.erase(index, 1);
            }
        }
    }
    void help(){
        PRINT_HELP(printf("==========================ASSOC==============================\n"),
                printf("=============================================================\n"))
        {
            print("ASSOC                                ��ʾ���޸��ļ���չ��������");
            print("ASSOC -a [��׺��]&[��ִ���ļ���ַ]   �󶨻��޸İ�");
            print("ASSOC -b show                        ��ʾ���ļ���չ���������");
            print("ASSOC -h help                        ������");
            print("ASSOC -r return                      �ָ�Ĭ�����á�");
            print("ASSOC -s show                        ��ʾȫ���ļ���չ����");
        }
    }
    int show(string argv)//���⾯�����Բ�ʹ��const char*
    {
        if(argv != "show")
        {
            return 0;
        }
        printf("7z:%s\nadexe:%s\nadll:%s\nC:%s\ncpp:%s\nh:%s\nlog:%s\n"
            "me:%s\ntxt:%s\ntxtmd:%s\ntz:%s\nrar:%s\nzip:%s\n", extension->_7z.c_str(),
            extension->_adexe.c_str(), extension->_adll.c_str(), extension->_C.c_str(),
            extension->_cpp.c_str(), extension->_h.c_str(), extension->_log.c_str(),
            extension->_me.c_str(), extension->_txt.c_str(), extension->_txtmd.c_str(),
            extension->_tz.c_str(), extension->_rar.c_str(), extension->_zip.c_str());
        return 1;
    }
#define Extenf(t) if(ExtensionCall == t)
#define Extenif(t) else if(ExtensionCall == t)
#define Extenof(t, v) else if(ExtensionCall == t || ExtensionCall == v)
    int show_s(string argv)
    {
        if(argv != "show"){
            return 0;
        }
        printf("7z\nadexe\nadll\nC\ncpp\nh\nlog\n"
            "me\ntxt\ntxtmd\ntz\nrar\nzip\n");
        return 1;
    }
    int binding(string ExtensionCall, string filePathName)
    {
        filesystemp = filesys.login_init_;
        /*����if*/
        if(filesystemp.find(filePathName) == -1)
        {
            return 0;
        }
        string tempstr = getexten(filePathName);
        ExtenNoneSpace(tempstr);
        if(tempstr != ".adexe")
        {
            pterr(filePathName, "���ǿ�ִ���ļ�");
            return -1;
        }
        Extenf("7z"){
            extension->_7z = filePathName;
        }
        Extenif("adexe"){
            pterr(ExtensionCall, "���ܸ���");
            return 3;
        }
        Extenif("adll"){
            pterr(ExtensionCall, "���ܸ���");
            return 3;
        }
        Extenof("C", "c"){
            extension->_C = filePathName;
        }
        Extenif("cpp"){
            extension->_cpp = filePathName;
        }
        Extenif("cpp"){
            extension->_cpp = filePathName;
        }
        Extenif("h"){
            extension->_h = filePathName;
        }
        Extenif("log"){
            extension->_log = filePathName;
        }
        Extenif("me"){
            extension->_me = filePathName;
        }
        Extenif("txt"){
            extension->_txt = filePathName;
        }
        Extenif("txtmd"){
            extension->_txtmd = filePathName;
        }
        Extenif("tz"){
            extension->_tz = filePathName;
        }
        Extenif("rar"){
            extension->_rar = filePathName;
        }
        Extenif("zip"){
            extension->_zip = filePathName;
        }
        else
        {
            return 2;
        }
        return 1;
    }
    bool split(string argv, string &ExtensionCall, string &filePathName)
    {
        bool hasAnd = false;
        for(int i = 0; i <= argv.length(); i ++)
        {
            if(argv[i] == '&'){
                hasAnd = true;
                continue;
            }
            if(!hasAnd){
                ExtensionCall[i] = argv[i];
                continue;
            }
            for(int j = 0; argv[i] != '\0'; i ++, j ++)
            {
                filePathName[j] = argv[i];
            }
        }
        return hasAnd;
    }
    void __init__()
    {
        tmpExten        = EXTEN20;
        tmpFilenamePath = FILEPATH20;
    }
    public:
    ASSOCEXE(){
        extension = &tmp;
    }
    ~ASSOCEXE(){
        __init__();
    }
    int ASSOC(const char* argv1, const char* argv2)//��װ�Ǹ�main��������ں���
    {
        if(argv1[0] != '-')
        {
            pterr(argv1, "��ʽ������Ҫ��");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
                if(!split(argv2, tmpExten, tmpFilenamePath))
                {
                    pterr(argv2, "ȱ��\"&\"");
                    break;
                }
                cout<<tmpExten<<endl<<tmpFilenamePath<<endl;
                if(tmpExten.length() > EXTENMAX || tmpFilenamePath.length() > FILEPATHMAX)
                {
                    cout<<"�ļ���չ�������ļ������ȴ���20�����������룡"<<endl;
                    break;
                }
                ExtenNoneSpace(tmpExten);
                FilepathNoneSpace(tmpFilenamePath);
                temp = binding(tmpExten, tmpFilenamePath);
                if(temp == 0){
                    pterr(tmpFilenamePath, "�޴��ļ�");
                }
                else if(temp == 1){
                    cout<<"�޸ĳɹ���"<<endl;
                }
                else if(temp == 2){
                    pterr(tmpExten, "�޴˺�׺��");
                }
                __init__();//���ӵĻ�������⣬�����ַ��ĸ��ǲ��Ḳ�������ַ���
            break;
            case 'b':
                temp = show(argv2);
                if(temp == 0)
                {
                    pterr(argv2, "û���ҵ���������ļ�");
                }
            break;
            case 'h':
                help();
            break;
            case 'r':
                extension = &returnenten;//����C++�Զ�����ȱʡ����������
                cout<<"���óɹ���"<<endl;
            break;
            case 's':
                temp = show_s(argv2);
                if(temp == 0)
                {
                    pterr(argv2, "û���ҵ���������ļ�");
                }
            break;
            default:
                help();
                printf("���������ָ�������⣬����������.\n");
            break;
        }
        return 0;
    }
};
/*����Ĭ�ϵĿ���̨ǰ���ͱ�����ɫ��

COLOR -s [ǰ��ɫ&����ɫ]


��ɫ����������ʮ����������ָ�� -- ��һ��Ϊǰ�����ڶ�����Ϊ
������ÿ�����ֿ���Ϊ�����κ�ֵ֮һ:

    0 = ��ɫ       8 = ��ɫ
    1 = ��ɫ       9 = ����ɫ
    2 = ��ɫ       A = ����ɫ
    3 = ǳ��ɫ     B = ��ǳ��ɫ
    4 = ��ɫ       C = ����ɫ
    5 = ��ɫ       D = ����ɫ
    6 = ��ɫ       E = ����ɫ
    7 = ��ɫ       F = ����ɫ

���û�и����κβ�����������Ὣ��ɫ��ԭ������ʱ����ɫ��
����: "COLOR -s cf" ������ɫ�ϲ�������ɫ*/
FileSystem tmpfsys;
FileSystem *fsys = &tmpfsys;
class CDEXE
{
    private:
    int tmp;
    string tmpPath;
    void help(){
        PRINT_HELP(printf("==========================CDK=============================\n"),
                    printf("==========================================================\n"))
            {
                print("CDK -a [·��]                             �����������·����");
                print("CDK -r return                             �ص����·����");
                print("CDK -h help                               ������");
            }
    }
    int pos(string T, string P){
        int position;
        position = T.find(P);
        return position;
    }
    int changeMenu(string Path)
    {
        string tmpx;
        char ch = out[0];
        tmpx.push_back(out[0]);
        tmpPath = tmpx + ":\\" + Path + ">>># ";
        if(tmpPath == out)
        {
            return 0;
        }
        if(Path == "C:" || Path == "C"){
            out = dk_C.GetPath();
            return 0;
        }
        if(Path == "E:" || Path == "E"){
            out = dk_E.GetPath();
            return 0;
        }
        if(Path == "F:" || Path == "F"){
            out = dk_F.GetPath();
            return 0;
        }
        if(Path == "T:" || Path == "T"){
            out = dk_tmp.GetPath();
            return 0;
        }
        else{
            int i = 0, j = 0;
            bool flag = false;
            tmpPath = "";
            //��ʼ���,��һ�����Ѿ������ˣ���Ҫ���Կ�������
            do{
                if(Path.find('\\') == string::npos)
                {
                    tmpPath = Path;
                }
                else
                {
                    return 3;
                }
                tmp = pos(fsys->login_init_, tmpPath);
                if(tmp == string::npos){
                    return -1;
                }
                if(out.find("E:") != string::npos && fsys->E_init_.find(tmpPath) == string::npos)
                {
                    return 2;
                }
                if(out.find("F:") != string::npos && fsys->F_init_.find(tmpPath) == string::npos)
                {
                    return 2;
                }
                if(out.find("C:") != string::npos && fsys->C_init_.find(tmpPath) == string::npos)
                {
                    return 2;
                }
                if(fsys->login_init_[tmp - 2] != '.' || (fsys->login_init_[tmp - 2] == '.' && fsys->login_init_[tmp - 1] == '.' && fsys->login_init_[tmp - 3] == '.'))
                {
                    return 1;
                }
                j = 0;
                flag = true;
            }while(flag != true);
            tmpPath = out;
            regex pattern("\\\\>>># ");
            tmpPath = regex_replace(out, pattern, "\\");//������ʽ�ָ��滻�ַ���
            out = tmpPath + Path + ">>># ";
            tmpPath = "";
            return 0;
        }
        return -1;
    }
    public:
    int CD(const char* argv1, const char* argv2)
    {
        if(argv1[0] != '-')
        {
            pterr(argv1, "��ʽ������Ҫ��");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
                tmp = changeMenu(argv2);
                if(tmp == 3){
                    pterr(argv2, "һ����ֻ����һ��·��");
                }
                if(tmp == 2){
                    pterr(argv2, "�ļ��в��ڴ�Ŀ¼��");
                }
                if(tmp == 1){
                    pterr(argv2, "�����ļ���");
                }
                if(tmp == -1){
                    pterr(argv2, "·��������");
                }
                if(tmp == -2){
                    pterr(argv2, "·����ʽ����");
                }
            break;
            case 'h':
                help();
            break;
            case 'r':
                out = "C:\\system>>># ";
            break;
            default:
                help();
                printf("���������ָ�������⣬����������.\n");
            break;
        }
        return 0;
    }
};
class COLOREXE
{
    private:
    int tmp;
    void help(){
        PRINT_HELP(printf("===========================COLOR===============================\n"),
                printf("===============================================================\n"))
        {
            print("����Ĭ�ϵĿ���̨ǰ���ͱ�����ɫ��");
            print("COLOR -s [ǰ��ɫ]                                     ������ɫ��");
            print("");
            print("��ɫ����ʹ�����κ���ֵ");
            print("0 = ��ɫ       8 = ��ɫ");
            print("1 = ��ɫ       9 = ����ɫ");
            print("2 = ��ɫ       A = ����ɫ");
            print("3 = ǳ��ɫ     B = ��ǳ��ɫ");
            print("4 = ��ɫ       C = ����ɫ");
            print("5 = ��ɫ       D = ����ɫ");
            print("6 = ��ɫ       E = ����ɫ");
            print("7 = ��ɫ       F = ����ɫ");
            print("");
            print("�������Ϊ\"n\"��������Ὣ��ɫ��ԭ������ʱ����ɫ��");
            print("COLOR -h help                                         ��ȡ������");
        }
    }
    int settxtcolor(char txtcolor)
    {
        SETCOLOR(txtcolor, TXTBLACK, TXTBLUE, TXTBGREEN, TXTGREEN, TXTRED, TXTPURPLE, 
            TXTYELLOW, TXTNORMAL, TXTWHITE, TXTBRIGHTBLUE, TXTBRIGHTBGREEN, TXTBRIGHTGREEN,
            TXTBRIGHTRED, TXTBRIGHTPURPLE, TXTBRIGHTYELLOW, TXTBRIGHTWHITE, -1)
        return 0;
    }
    int setbkcolor(char bkcolor)
    {
        SETCOLOR(bkcolor, BKGBLACK, BKGBLUE, BKGBGREEN, BKGGREEN, BKGRED, BKGPURPLE, 
            BKGYELLOW, BKGNORMAL, BKGWHITE, BKGBRIGHTBLUE, BKGBRIGHTBGREEN, BKGBRIGHTGREEN,
            BKGBRIGHTRED, BKGBRIGHTPURPLE, BKGBRIGHTYELLOW, BKGBRIGHTWHITE, -2)
        return 0;
    }
    int setcolor(char txtcolor/*, char isand, char bkcolor*/)
    {
        /*if(isand != '&')
        {
            return 3;
        }
        if(setbkcolor(txtcolor) == -2)
        {
            return -2;
        }*/
        if(txtcolor == 'n')
        {
            BKGNORMAL;
            return 0;
        }
        if(settxtcolor(txtcolor) == -1)
        {
            return -1;
        }
        return 0;
    }
    public:
    int COLOR(const char* argv1, const char* argv2){
        if(argv1[0] != '-')
        {
            pterr(argv1, "��ʽ������Ҫ��");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'h':
                help();
            break;
            case 's':
                tmp = setcolor(argv2[0]/*, argv2[1], argv2[2]*/);
                if(tmp == -1)
                {
                    pterr(argv2[0], "��ɫ������");
                }
                /*if(tmp == -2)
                {
                    pterr(argv2[2], "��ɫ������");
                }
                if(tmp == 3)
                {
                    pterr(argv2[1], "���ӷ��Ŵ���");
                }*/
            break;
            default:
                help();
                printf("���������ָ�������⣬����������.\n");
            break;
        }
        return 0;
    }
};
class COUNTEREXE
{
    private:
    string formula;
    stack<char> opt;//������ջ
    stack<double> val;//������ջ
    int LargeNumberFactorial[1000] = { 0 };//��׳���������
    
    const int IN = 0;
    const int OUT = 1;
    
    char opt_set[10] = "+-*/()=.";
    
    int level(char theOpt){
        switch(theOpt){
            case '(':
                return 0;
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
            case ')':
                return 3;
        }
        return -1;
    }
    
    bool in_setCheck(char theChar){
        for(int i = 0; i < 8; i++){
            if(theChar == opt_set[i])
                return true;
        }
        return false;
    }
    
    bool del_space(string& theString){
        string res;
        for(int i = 0; i < theString.length(); i++){
            if(in_setCheck(theString[i]) || isdigit(theString[i]))
                res += theString[i];
            else if(theString[i] == ' ') {}
            else{
                cout<<"���ʽ����"<<endl;
                return false;
            }
        }
        theString = res;
        return true;
    }
    
    string to_string(int theInt){
        if(theInt == 0)
            return string("0");
        bool neg = false;
        if(theInt < 0){
            neg = true;
            theInt = -theInt;
        }
        string res;
        while(theInt != 0){
            char c = (theInt % 10) + '0';
            res = c + res;
            theInt /= 10;
        }
        if(neg){
            res = '-' + res;
        }
        return res;
    }
    
    bool change(string &form, string &to){
        int tint = 0;
        int state =  OUT;
        char c;
        
        for(int i = 0; i < form.length(); i ++){
            c = form[i];
            if(isdigit(c)){
                to = to + c;
                tint *= 10;
                tint += c - '0';
                state = IN; //״̬��Ϊ��������
            }
            else{
                if(state == IN && c == '.'){
                    to = to + '.';
                    tint = 0;
                    continue;
                }
                if(state == IN && c != '.'){
                    to += ' ';
                    tint = 0;
                }
                if(c == '='){
                    break;
                }
                else if(c == '(')
                    opt.push(c);
                else if(c == ')'){
                    while(!opt.empty() && opt.top() != '('){
                        to += opt.top();
                        to += ' ';
                        opt.pop();
                    }
                    opt.pop();
                }
                else{
                    while(true){
                        if(opt.empty() || opt.top() == '(')
                            opt.push(c);
                        else if(level(c) > level(opt.top())){
                            opt.push(c);
                        }
                        else{
                            to += opt.top();
                            to += ' ';
                            opt.top();
                            continue;
                        }
                        break;
                    }
                }
                state = OUT;
            }
        }
        while(!opt.empty()){
            to += opt.top();
            to += ' ';
            opt.pop();
        }
        return true;
    }
    bool compute(string &theExp)
    {
    	int theInt = 0; //�ݴ�����
    	int state = OUT;//��ʼ״̬Ϊ��������
    	char c;
    	bool dot = false;
    	double count = 1.0;
    	for (int i = 0; i < theExp.length(); i++)
    	{
    		c = theExp[i];
    		if (isdigit(c)|| c == '.') {
    			if (isdigit(c)) {
    				theInt *= 10;
    				theInt += c - '0';
    				state = IN; //״̬Ϊ��������
    				if (dot == true)
    					count *= 10.0;
    			}
    			if (c == '.') {
    				dot = true;
    				continue;
    			}
    		}
    		else{
    			dot = false;
    			double ans = theInt / count;			
    			count = 1.0;
    			if (state == IN) {
    				val.push(ans);
    				theInt = 0;
    			}
    			double x, y;
    			if (c != ' ') {
    				x = val.top();val.pop();
    				y = val.top();val.pop();
    
    				switch (c) {
    				case '+':val.push(x + y); break;
    				case '-':val.push(y - x); break;
    				case '*':val.push(x * y); break;
    				case '/':val.push(y / x); break;
    				default:cout << "δ֪�Ĵ���!" << endl;
    				}
    			}
    			state = OUT;
    		}
    	}
    	return true;
    }
    int Judge_rectangle(string& theStr)
    {
    	string str1 = "sin";
    	string str2 = "cos";
    	string str3 = "tan";
    	string str4 = "arcsin";
    	string str5 = "arccos";
    	string str6 = "arctan";
    	const char* show1, *show2, *show3, *show4, *show5, *show6;
    	show4 = strstr(theStr.c_str(), str4.c_str());
    	if (show4 != NULL)
    		return 4;
    	show5 = strstr(theStr.c_str(), str5.c_str());
    	if (show5 != NULL)
    		return 5;
    	show6 = strstr(theStr.c_str(), str6.c_str());
    	if (show6 != NULL)
    		return 6;	
    	show1 = strstr(theStr.c_str(), str1.c_str());
    	if (show1 != NULL)
    		return 1;
    	show2 = strstr(theStr.c_str(), str2.c_str());
    	if (show2 != NULL)
    		return 2;
    	show3 = strstr(theStr.c_str(), str3.c_str());
    	if (show3 != NULL)
    		return 3;
    	return 0;
    }
    
    /*�����Ǻ�������������ֲ������Ӧ�Ľ��*/
    double cal_rect_number(string& theStr, int theInt)
    {
    	int number = 0;
    	for (int i = 0; theStr[i] != ')'; i++)
    	{
    		if (isdigit(theStr[i])) {
    			number *= 10;
    			number += theStr[i] - '0';
    		}
    	}
    	double ans = 0.0;
    	switch (theInt)
    	{
    	case 1:ans = sin(number); break;
    	case 2:ans = cos(number); break;
    	case 3:ans = tan(number); break;
    	case 4:ans = asin(number); break;
    	case 5:ans = acos(number); break;
    	case 6:ans = atan(number); break;
    	default:return 0;
    		break;
    	}
    	return ans;
    }
    
    /*�ж��Ƿ�Ϊ��׳�*/
    bool Judge_factorial(string& theStr)
    {
    	int len = theStr.length();
    	for (int i = 0; i < len; i++)
    		if (theStr[i] == '!')
    			return true;
    	return false;
    }
    
    /*��׳����������*/
    int cal_factorial_number(string& theStr)
    {
    	int number = 0;
    	for (int i = 0; theStr[i] != '!'; i++)
    	{
    		if (isdigit(theStr[i])) {
    			number *= 10;
    			number += theStr[i] - '0';
    		}
    	}
    	return  number;
    }
    
    /*����������׳�*/
    int cal_factorial(int theInt)
    {
    	LargeNumberFactorial[0] = 1;
    	LargeNumberFactorial[1] = 1;
    	int digit = 1;
    	for (int i = 1; i <= theInt; i++)
    	{
    		for (int j = 1; j <= digit; j++)
    		{
    			LargeNumberFactorial[j] *= i;
    		}
    		for (int j = 1; j <= digit; j++)
    		{
    			if (LargeNumberFactorial[j] > 10)
    			{
    				for (int k = 1; k <= digit; k++)
    				{
    					if (LargeNumberFactorial[digit] > 9)
    						digit++;
    					LargeNumberFactorial[k + 1] += LargeNumberFactorial[k] / 10;
    					LargeNumberFactorial[k] %= 10;
    				}
    			}
    		}
    	}
    	return digit;
    }
    public:
    int COUNTER(){
        getline(cin,formula);
        //�ж��Ƿ����Ǻ����ͷ����Ǻ�������ֵ
		if(Judge_rectangle(formula) != 0) {		
			double res = 0;
			res = cal_rect_number(formula, Judge_rectangle(formula));
			if (res)
				cout << "���Ϊ: " << fixed << setprecision(9) << res << endl;
		}

		//��׳˵����
		else if (Judge_factorial(formula)) {
			int n = cal_factorial_number(formula);
			cout << "���Ϊ: ";
			for (int i = cal_factorial(n); i > 0; i--)
				cout << LargeNumberFactorial[i];
			cout << endl;
		}

		//�ǼӼ��˳������
		else{
			while (!opt.empty()) {
				opt.pop();
			}
			while (!val.empty()) {
				val.pop();
			}
			del_space(formula);//ȥ���ո�
			string cng_exp;
			cng_exp.clear();
			change(formula, cng_exp);	//ת��Ϊ��׺���ʽ
			compute(cng_exp);//�����׺���ʽ
			double stdans = val.top();
			cout << "���Ϊ:" << (double)stdans << endl;
		}
        return 0;
    }
};
class CONFIGEXE{
    private:
    void help(){
        PRINT_HELP(printf("==========================CONFIG=============================\n"),
                    printf("==============================================================\n"))
            {
                print("CONFIG -a ac                             �û���Ϣ");
                print("CONFIG -a cpu                            cpu��Ϣ");
                print("CONFIG -a disk                           ������Ϣ");
                print("CONFIG -a kb                             ������Ϣ");
                print("CONFIG -a ms                             �����Ϣ");
                print("CONFIG -a usb                            usb�ӿ���Ϣ");
                print("CONFIG -h help                           ������");
            }
    }
    void ac(){
        PRINT_HELP(printf("==========================Computer=============================\n"),
                    printf("================================================================\n"))
            {
                cout<<"ip��"<<hard.ac->ip<<endl;
                cout<<"UUID��"<<hard.ac->UUID<<endl;
                cout<<"��ʾ���ƣ�"<<hard.ac->showname<<endl;
                cout<<"�û����ƣ�"<<hard.ac->username<<endl;
                cout<<"��Ȩ��"<<hard.ac->Aboutcopyright<<endl;
                cout<<"�汾��"<<hard.ac->Version<<endl;
                cout<<"������"<<hard.ac->text<<endl;
            }
    }
    void aboutcpu(){
        PRINT_HELP(printf("==========================CPU=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"���ƣ�"<<hard.cpus->cpuname<<endl;
                cout<<"��ʾ���ƣ�"<<hard.cpus->showname<<endl;
                cout<<"�����ƣ�"<<hard.cpus->longName<<endl;
                cout<<"�����ƣ�"<<hard.cpus->shortName<<endl;
                cout<<"�������ƣ�"<<hard.cpus->divname<<endl;
                cout<<"UUID��"<<hard.cpus->UUID<<endl;
                cout<<"���ڴ棺"<<hard.cpus->cpumem<<endl;
                cout<<"�����ڴ棺"<<hard.cpus->Virtmem<<endl;
                cout<<"Ӳ��ռ���ڴ棺"<<hard.cpus->hardwareUse<<endl;
                cout<<"�����ڴ棺"<<hard.cpus->protect<<endl;
                cout<<"�����ڴ棺"<<hard.cpus->canuse<<endl;
                cout<<"��������"<<hard.cpus->cpuKernelNum<<endl;
                cout<<"�߳����ޣ�"<<hard.cpus->ThreadMax<<endl;
                cout<<"�����̣�"<<hard.cpus->mker<<endl;
                cout<<"��������·����"<<hard.cpus->FilePath<<endl;
                cout<<"��װʱ�䣺"<<hard.cpus->date<<endl;
                cout<<"�Ƿ�Ϊϵͳ��"<<hard.cpus->issys<<endl;
                cout<<"�Ƿ��ɾ����"<<hard.cpus->canDel<<endl;
                cout<<"��ע��"<<hard.cpus->text<<endl;
            }
    }

    void _adisk(){
        system("clear");
         PRINT_HELP(printf("==========================DISK=============================\n"),
                    printf("==============================================================\n"))
            {
                cout<<"������"<<hard.disk->DiskNum<<endl;
                cout<<"���ڴ棺"<<hard.disk->AllMem<<endl;
                PRINT_HELP(printf("==========================C:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"���ƣ�"<<hard.disk->disk1.name<<endl;
                    cout<<"��ʾ���ƣ�"<<hard.disk->disk1.showName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk1.longName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk1.shortName<<endl;
                    cout<<"�������ͣ�"<<hard.disk->disk1.PartType<<endl;
                    cout<<"״̬��\033[92m"<<hard.disk->disk1.state<<"\033[0m"<<endl;
                    cout<<"UUID��"<<hard.disk->disk1.UUID<<endl;
                    cout<<"�������ƣ�"<<hard.disk->disk1.divName<<endl;
                    cout<<"���̿ռ䣨byte����"<<hard.disk->disk1.DiskMem<<endl;
                    cout<<"�����ռ䣨byte����"<<hard.disk->disk1.protectMem<<endl;
                    cout<<"�����̣�"<<hard.disk->disk1.mker<<endl;
                    cout<<"����·����"<<hard.disk->disk1.FilePath<<endl;
                    cout<<"��װʱ�䣺"<<hard.disk->disk1.date<<endl;
                    cout<<"�Ƿ�Ϊϵͳ��"<<hard.disk->disk1.issys<<endl;
                    cout<<"�Ƿ�Ϊ�����̣�"<<hard.disk->disk1.isopen<<endl;
                    cout<<"�Ƿ��ɾ����"<<hard.disk->disk1.canDel<<endl;
                    cout<<"��ע��"<<hard.disk->disk1.text<<endl;
                }
                PRINT_HELP(printf("==========================E:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"���ƣ�"<<hard.disk->disk2.name<<endl;
                    cout<<"��ʾ���ƣ�"<<hard.disk->disk2.showName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk2.longName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk2.shortName<<endl;
                    cout<<"�������ͣ�"<<hard.disk->disk2.PartType<<endl;
                    cout<<"״̬��\033[92m"<<hard.disk->disk2.state<<"\033[0m"<<endl;
                    cout<<"UUID��"<<hard.disk->disk2.UUID<<endl;
                    cout<<"�������ƣ�"<<hard.disk->disk2.divName<<endl;
                    cout<<"���̿ռ䣨byte����"<<hard.disk->disk2.DiskMem<<endl;
                    cout<<"�����ռ䣨byte����"<<hard.disk->disk2.protectMem<<endl;
                    cout<<"�����̣�"<<hard.disk->disk2.mker<<endl;
                    cout<<"����·����"<<hard.disk->disk2.FilePath<<endl;
                    cout<<"��װʱ�䣺"<<hard.disk->disk2.date<<endl;
                    cout<<"�Ƿ�Ϊϵͳ��"<<hard.disk->disk2.issys<<endl;
                    cout<<"�Ƿ�Ϊ�����̣�"<<hard.disk->disk2.isopen<<endl;
                    cout<<"�Ƿ��ɾ����"<<hard.disk->disk2.canDel<<endl;
                    cout<<"��ע��"<<hard.disk->disk2.text<<endl;
                }
                PRINT_HELP(printf("==========================F:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"���ƣ�"<<hard.disk->disk3.name<<endl;
                    cout<<"��ʾ���ƣ�"<<hard.disk->disk3.showName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk3.longName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk3.shortName<<endl;
                    cout<<"�������ͣ�"<<hard.disk->disk3.PartType<<endl;
                    cout<<"״̬��\033[92m"<<hard.disk->disk3.state<<"\033[0m"<<endl;
                    cout<<"UUID��"<<hard.disk->disk3.UUID<<endl;
                    cout<<"�������ƣ�"<<hard.disk->disk3.divName<<endl;
                    cout<<"���̿ռ䣨byte����"<<hard.disk->disk3.DiskMem<<endl;
                    cout<<"�����ռ䣨byte����"<<hard.disk->disk3.protectMem<<endl;
                    cout<<"�����̣�"<<hard.disk->disk3.mker<<endl;
                    cout<<"����·����"<<hard.disk->disk3.FilePath<<endl;
                    cout<<"��װʱ�䣺"<<hard.disk->disk3.date<<endl;
                    cout<<"�Ƿ�Ϊϵͳ��"<<hard.disk->disk3.issys<<endl;
                    cout<<"�Ƿ�Ϊ�����̣�"<<hard.disk->disk3.isopen<<endl;
                    cout<<"�Ƿ��ɾ����"<<hard.disk->disk3.canDel<<endl;
                    cout<<"��ע��"<<hard.disk->disk3.text<<endl;
                }
                PRINT_HELP(printf("==========================T:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"���ƣ�"<<hard.disk->disk4.name<<endl;
                    cout<<"��ʾ���ƣ�"<<hard.disk->disk4.showName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk4.longName<<endl;
                    cout<<"�����ƣ�"<<hard.disk->disk4.shortName<<endl;
                    cout<<"�������ͣ�"<<hard.disk->disk4.PartType<<endl;
                    cout<<"״̬��\033[92m"<<hard.disk->disk4.state<<"\033[0m"<<endl;
                    cout<<"UUID��"<<hard.disk->disk4.UUID<<endl;
                    cout<<"�������ƣ�"<<hard.disk->disk4.divName<<endl;
                    cout<<"���̿ռ䣨byte����"<<hard.disk->disk4.DiskMem<<endl;
                    cout<<"�����ռ䣨byte����"<<hard.disk->disk4.protectMem<<endl;
                    cout<<"�����̣�"<<hard.disk->disk4.mker<<endl;
                    cout<<"����·����"<<hard.disk->disk4.FilePath<<endl;
                    cout<<"��װʱ�䣺"<<hard.disk->disk4.date<<endl;
                    cout<<"�Ƿ�Ϊϵͳ��"<<hard.disk->disk4.issys<<endl;
                    cout<<"�Ƿ�Ϊ�����̣�"<<hard.disk->disk4.isopen<<endl;
                    cout<<"�Ƿ��ɾ����"<<hard.disk->disk4.canDel<<endl;
                    cout<<"��ע��"<<hard.disk->disk4.text<<endl;
                }
            }
            cout<<"��������˳�"<<endl;
            string tmp;
            cin>>tmp;
            system("clear");
    }
    void _kb(){
        PRINT_HELP(printf("==========================KeyBoard=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"���ƣ�"<<hard.kb->kbname<<endl;
                cout<<"��ʾ���ƣ�"<<hard.kb->showname<<endl;
                cout<<"�����ƣ�"<<hard.kb->longName<<endl;
                cout<<"�����ƣ�"<<hard.kb->shortName<<endl;
                cout<<"�������ƣ�"<<hard.kb->divname<<endl;
                cout<<"UUID��"<<hard.kb->UUID<<endl;
                cout<<"�����̣�"<<hard.kb->mker<<endl;
                cout<<"��������·����"<<hard.kb->FilePath<<endl;
                cout<<"��װʱ�䣺"<<hard.kb->date<<endl;
                cout<<"�Ƿ�Ϊϵͳ��"<<hard.kb->issys<<endl;
                cout<<"�Ƿ��ɾ����"<<hard.kb->canDel<<endl;
                cout<<"��ע��"<<hard.kb->text<<endl;
            }
    }
    void _ms(){
        PRINT_HELP(printf("==========================Mouse=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"���ƣ�"<<hard.ms->msname<<endl;
                cout<<"��ʾ���ƣ�"<<hard.ms->showname<<endl;
                cout<<"�����ƣ�"<<hard.ms->longName<<endl;
                cout<<"�����ƣ�"<<hard.ms->shortName<<endl;
                cout<<"�������ƣ�"<<hard.ms->divname<<endl;
                cout<<"UUID��"<<hard.ms->UUID<<endl;
                cout<<"�����̣�"<<hard.ms->mker<<endl;
                cout<<"��������·����"<<hard.ms->FilePath<<endl;
                cout<<"��װʱ�䣺"<<hard.ms->date<<endl;
                cout<<"�Ƿ�Ϊϵͳ��"<<hard.ms->issys<<endl;
                cout<<"�Ƿ��ɾ����"<<hard.ms->canDel<<endl;
                cout<<"��ע��"<<hard.ms->text<<endl;
            }
    }
    void _usb(){
        PRINT_HELP(printf("==========================USB=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"���ƣ�"<<hard.usb->USBname<<endl;
                cout<<"��ʾ���ƣ�"<<hard.usb->showname<<endl;
                cout<<"�����ƣ�"<<hard.usb->longName<<endl;
                cout<<"�����ƣ�"<<hard.usb->shortName<<endl;
                cout<<"�������ƣ�"<<hard.usb->divname<<endl;
                cout<<"�ڴ淶Χ��"<<hard.usb->USBmemLow<<"~"<<hard.usb->USBmemHigh<<endl;
                cout<<"UUID��"<<hard.usb->UUID<<endl;
                cout<<"�����̣�"<<hard.usb->mker<<endl;
                cout<<"��������·����"<<hard.usb->FilePath<<endl;
                cout<<"��װʱ�䣺"<<hard.usb->date<<endl;
                cout<<"�Ƿ�Ϊϵͳ��"<<hard.usb->issys<<endl;
                cout<<"�Ƿ��ɾ����"<<hard.usb->canDel<<endl;
                cout<<"��ע��"<<hard.usb->text<<endl;
            }
    }
    void _a(string argv2){
        if(argv2 == "ac"){
            ac();
        }
        else if(argv2 == "cpu"){
            aboutcpu();
        }
        else if(argv2 == "disk"){
            _adisk();
        }
        else if(argv2 == "usb"){
            _usb();
        }
        else if(argv2 == "kb"){
            _kb();
        }
        else if(argv2 == "ms"){
            _ms();
        }
    }
    public:
    int CONFIG(const char* argv1, const char* argv2){
        if(argv1[0] != '-')
        {
            pterr(argv1, "��ʽ������Ҫ��");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
                _a(argv2);
            break;
            case 'h':
                help();
            break;
            case 'r':
            break;
            default:
                help();
                printf("���������ָ�������⣬����������.\n");
            break;
        }
        return 0;
    }
};
void Date(){
    time_t t;
    tm *local;
    char buf[128] = {0};
    t = time(NULL);
    local = localtime(&t);
    strftime(buf, 64, "%Y-%m-%d %H:%M:%S", local);
    cout<<buf<<endl;
}
#define MAXMEMNAME 1
#define MAXMEMCHAR " "
/*DISK����ûɶ����*/
#if (0)
class DISKEXE : 
            public forDisk
{
    private:
    CProgress pro;
    int tmp;
    void help(){
        PRINT_HELP(printf("==========================DISK==============================\n"),
                    printf("============================================================\n"))
            {
                print("DISK -a [������|������]&[����ռ�]       ���·�����̿ռ䡣");
                print("DISK -b [������]                         ��ʽ�����̡�");
                print("DISK -d [������]                         ��մ��̷�����");
                print("DISK -s show                             �鿴���̿ռ�ʹ�������");
                print("DISK -h help                             ������");
                print("DISK -r return                           �ָ���������");
            }
    }
    bool split_and(string argv, string &diskname, string &needmem)
    {
        bool hasAnd = false;
        for(int i = 0; i <= argv.length(); i ++)
        {
            if(argv[i] == '&'){
                hasAnd = true;
                continue;
            }
            if(!hasAnd){
                diskname[i] = argv[i];
                continue;
            }
            for(int j = 0; argv[i] != '\0'; i ++, j ++)
            {
                needmem[j] = argv[i];
            }
        }
        return hasAnd;
    }
    bool split_or(string diskname, string &Disk1, string &Disk2)
    {
        bool hasOr = false;
        for(int i = 0; i <= diskname.length(); i ++)
        {
            if(diskname[i] == '|'){
                hasOr = true;
                continue;
            }
            if(!hasOr){
                Disk1[i] = diskname[i];
                continue;
            }
            for(int j = 0; diskname[i] != '\0'; i ++, j ++)
            {
                Disk2[j] = diskname[i];
            }
        }
        return hasOr;
    }
    void _show_DK()
    {
        printf("C:\n");
        pro.progress(Mainmem, fsys->C_init_.length() / 8);
        printf("%s:\n", ExDk1Name.c_str());
        pro.progress(ExDk1mem, fsys->E_init_.length() / 8);
    }
    void _show_DKS()
    {
        printf("C:\n");
        pro.progress(Mainmem, (fsys->C_init_.length() / 8));
        printf("%s:\n", ExDk1Name.c_str());
        pro.progress(ExDk1mem, (fsys->E_init_.length() / 8));
        printf("%s:\n", ExDk2Name.c_str());
        pro.progress(ExDk2mem, (fsys->F_init_.length() / 8));
    }
    void _show()
    {
        if(ExDkNumber == 1)
        {
            _show_DK();
        }
        if(ExDkNumber == 2)
        {
            _show_DKS();
        }
    }
    int show(string argv)
    {
        if(argv != "show")
        {
            return -1;
        }
        _show();
        return 0;
    }
    int DeleteMem(string DiskName)
    {
        if(DiskName == "C" || DiskName == "c")
        {
            return -1;
        }
        if(DiskName == ExDk1Name)
        {
            int tmpi;
            CHECK("�Ƿ������", "1", "2")
            cin >>tmpi;
            if(tmpi == 1)
            {
                ExDk1memSurplus = 0;
                fsys->E_init_ = "";
                return 1;
            }
        }
        if(DiskName == ExDk2Name)
        {
             int tmpi;
            CHECK("�Ƿ������", "1", "2")
            cin >>tmpi;
            if(tmpi == 1)
            {
                ExDk2memSurplus = 0;
                fsys->F_init_ = "";
                return 1;
            }
        }
        return 0;
    }
    public:
    int DISK(const char* argv1, const char* argv2){
        if(argv1[0] != '-')
        {
            pterr(argv1, "��ʽ������Ҫ��");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
            break;
            case 'b':
                CHECK("ȷ����ʽ����", "1", "2")
                int temps;
                cin >> temps;
                if(temps == 1)
                {
                    tmp = DeleteMem(argv2);
                    if(tmp == -1)
                    {
                        cout<<"������ո�Ӳ�����ݣ���ʽ��ʧ��"<<endl;
                    }
                    else{
                        cout << "�����" << endl;
                    }
                }
                else{
                    cout<<"��ȡ����ʽ��"<<endl;
                }
            break;
            case 'd':
                tmp = DeleteMem(argv2);
                if(tmp == -1)
                {
                    cout<<"������ո�Ӳ������"<<endl;
                }
            break;
            case 's':
                tmp = show(argv2);
                if(tmp == -1)
                {
                    pterr(argv2, "Ӧ��Ϊshow");
                }
                if(tmp == 1)
                {
                    cout<<"\033[92m����ɹ�!\033[0m"<<endl;
                }
            break;
            case 'h':
                help();
            break;
            case 'r':
            break;
            default:
                help();
                printf("���������ָ�������⣬����������.\n");
            break;
        }
        return 0;
    }
};
#endif
int FindFile(const char* file)
{
    if((access(file,0)) != -1)
    {
        printf("File %s exists.", file);
        return 1;
    }
    return 0;
}
//GetIP
void parseHostAndPagePath(const string Url, string &hostUrl, string &pagePath){
    hostUrl=Url;
    pagePath="/";
    int pos=hostUrl.find("http://");
    if(-1!=pos)
        hostUrl=hostUrl.replace(pos,7,"");
    pos=hostUrl.find("https://");
    if(-1!=pos)
        hostUrl=hostUrl.replace(pos,8,"");
    pos=hostUrl.find("/");
    if(-1!=pos){
        pagePath=hostUrl.substr(pos);
        hostUrl=hostUrl.substr(0,pos);
    }
}
 
string GSCer(const string Url){
    struct hostent *host;
    string hostUrl, pagePath;
    parseHostAndPagePath(Url, hostUrl, pagePath);
    if(0==(host=gethostbyname(hostUrl.c_str()))){
        cout<<"gethostbyname error\n"<<endl;
        exit(1);
    }
 
    struct sockaddr_in pin;
    int port=80;
    bzero(&pin,sizeof(pin));
    pin.sin_family=AF_INET;
    pin.sin_port=htons(port);
    pin.sin_addr.s_addr=((struct in_addr*)(host->h_addr))->s_addr;
    int isock;
    if((isock = socket(AF_INET, SOCK_STREAM, 0))==-1){
        cout<<"open socket error\n"<<endl;
        exit(1);
    }
 
    string requestHeader;
    requestHeader="GET "+pagePath+" HTTP/1.1\r\n";
    requestHeader+="Host: "+hostUrl+"\r\n";
    requestHeader+="Accept: */*\r\n";
    requestHeader+="User-Agent: Mozilla/4.0(compatible)\r\n";
    requestHeader+="connection:Keep-Alive\r\n";
    requestHeader+="\r\n";
 
    if(connect(isock, (const sockaddr*)&pin, sizeof(pin))==-1){
        cout<<"connect error\n"<<endl;
        exit(1);
    }
    if(send(isock, requestHeader.c_str(), requestHeader.size(), 0)==-1){
        cout<<"send error\n"<<endl;
        exit(1);
    }
 
    struct timeval timeout={1,0};
    setsockopt(isock, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(struct timeval));
    char c;
    bool flag=true;
    while(recv(isock, &c, 1, 0)>0){
        if('\r'==c){
            continue;
        }else if('\n'==c){
            if(false==flag)
                break;
            flag=false;
        }else{
            flag=true;
        }
    }
 
    int len, BUFFER_SIZE=512;
    char buffer[BUFFER_SIZE];
    string pageContent="";
    while((len = recv(isock, buffer, BUFFER_SIZE-1, 0))>0){
        buffer[len]='\0';
        pageContent+=buffer;
    }
 
    return pageContent;
}
void GetIPer(const char* hostname){
    struct hostent *h;
    if((h = gethostbyname(hostname)) == NULL){
        pterr(hostname, "�޷��õ�IP��");
        return;
    }
    cout<<"HostName:"<<h->h_name<<endl;
    printf("IP Address:%s\n", inet_ntoa(*((struct in_addr*)h->h_addr)));
}
class GTEXE{
    protected:
    
    public:
};

class HILLEXE{
    private:
    static const int MAX = 60;
    int K1[2][2] = {0}, K2[2][2] = {0};
    int temp1[2] = {0}, temp2[2] = {0};
    char text[MAX] = {0}, result[MAX] = {0};
    int T1[MAX] = {0}, T2[MAX] = {0};
    int len, flag = 0, temp, temps, i, j, num = 0;
    public:
    HILLEXE(){
        printf("��ӭʹ��Hill����\n");
        cout<<"����д���֣�60���ַ����ڣ�"<<endl;
        cin>>text;
        cout<<"��ѡ����ܣ�1�����ǽ��ܣ�2��"<<endl;
        cin>>num;
        cout<<"��������Կ���ÿո�ֿ�������,����������ĸ�����\n";
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                cin>>K1[i][j];
            }
        }
        if(num == 1){
            len = strlen(text);
            if(len % 2 == 1){
                text[len] = 'a';
                len = strlen(text);
                flag = 1;
            }
            for(i = 0; i < len; i ++){
                if(text[i] >= 'A' && text[i] <= 'Z'){
                    text[i] = text[i] + 32;
                }
                
                T1[i] = text[i] - 'a';
            }
            for(i = 0; i < len; i += 2){
                temp1[0] = T1[i];
                temp1[1] = T1[i + 1];
                //��������intֵ
                temp2[0] = (temp1[0] * K1[0][0] + temp1[i] * K1[1][0]) % 26;
                temp2[1] = (temp1[0] * K1[0][1] + temp1[i] * K1[1][1]) % 26;
                T2[i] = temp2[0];
                T2[i + 1] = temp2[1];
            }
            if(flag == 1)
                len = len - 1;
            for(i = 0; i < len; i++)
                result[i] = T2[i] + 'a';
            cout<<"����"<<text<<"������Ϊ��"<<result<<endl;
        } else if(num == 2){
            len = strlen(text);
            if(len % 2 == 1){
                text[len] = 'a';
                len = strlen(text);
                flag = 1;
            }
            for(i = 0; i < len; i ++){
                if(text[i] >= 'A' && text[i] <= 'Z'){
                    text[i] = text[i] + 32;
                }
                
                T1[i] = text[i] - 'a';
            }
            //K����
            temp = -1;
            for(i = 1; temp < 0; i++){
                temp = (K1[0][0] * K1[1][1] - K1[0][1] * K1[1][0]) + 26 * i;
            }
            i = 1;
            while(1){
                if((temp * i) % 26 == 1){
                    temps = i;
                    break;
                }
                i ++;
            }
            K2[0][0] = K1[1][1] * temps;
            K2[0][1] = (((-1 * K1[0][1]) + 26) * temps) % 26;
            K2[1][0] = (((-1 * K1[1][0]) + 26) * temps) % 26;
            K2[1][1] = K1[0][0] * temps;
            //�õ����ܽ���󴢴���T2��
            for(i = 0; i < len; i += 2){
                temp2[0] = T2[i];
                temp2[1] = T2[i + 1];
                //��������intֵ
                temp1[0] = (temp2[0] * K2[0][0] + temp2[i] * K2[1][0]) % 26;
                temp1[1] = (temp2[0] * K2[0][1] + temp2[i] * K2[1][1]) % 26;
                T1[i] = temp1[0];
                T1[i + 1] = temp1[1];
            }
            if(flag == 1)
                len = len - 1;
            for(i = 0; i < len; i++)
                result[i] = T1[i] + 'a';
            cout<<"����"<<text<<"������Ϊ��"<<result<<endl;
        }
    }
};
#define INSTALLMAX 3 //Ҫ��Ӳ��������������������
class INSTALLEXE
{
    private:
    string canInstall[INSTALLMAX] = {"Hill.adexe", "Virginia.adexe", "INET.adexe"};//����ҲҪ���
    void help(){
        PRINT_HELP(printf("==========================INSTALL==============================\n"),
                    printf("===============================================================\n"))
            {
                print("INSTALL -d [����]                ɾ��ĳ�������");
                print("INSTALL -s [����]                ���ء�");
                print("INSTALL -s show                  ��ʾ�����ص����ݡ�");
            }
    }
    bool Delete(string argv){
        string tmpstrs = argv;
        transform(tmpstrs.begin(), tmpstrs.end(), tmpstrs.begin(), towlower);
        if((tmpstrs == "hill" || tmpstrs == "hill.adexe") && logn.Hill == true){
            logn.Hill = false;
            InsOrDel = false;
        }
        else if((tmpstrs == "virginia" || tmpstrs == "virginia.adexe") && logn.Virginia == true){
            logn.Virginia = false;
            InsOrDel = false;
        }
        else if((tmpstrs == "inet" || tmpstrs == "inet.adexe") && logn.Inet == true){
            logn.Inet = false;
            InsOrDel = false;
        }
        else{
            pterr(argv.c_str(), "�����ڻ���δ���أ�");
            return false;
        }
        cout<<"ɾ���ɹ���"<<endl;
        return true;
    }
    bool showOrinstall(string argv){
        string tmpstrs = argv;
        transform(tmpstrs.begin(), tmpstrs.end(), tmpstrs.begin(), towlower);
        if(argv == "show"){
            for(int i = 0; i <= INSTALLMAX - 1; i ++){
                cout << canInstall[i] << endl;
            }
            return true;
        }
        if((tmpstrs == "hill" || tmpstrs == "hill.adexe") && logn.Hill != true){
            logn.Hill = true;
        }
        else if((tmpstrs == "virginia" || tmpstrs == "virginia.adexe") && logn.Virginia != true){
            logn.Virginia = true;
        }
        else if((tmpstrs == "inet" || tmpstrs == "inet.adexe") && logn.Inet != true){
            logn.Inet = true;
        }
        else{
            pterr(argv.c_str(), "�����ڻ��������ع���");
            return false;
        }
        cout<<"���سɹ���"<<endl;
        return true;
    }
    public:
    int INSTALL(const char* argv1, const char* argv2){
        if(argv1[0] != '-')
        {
            pterr(argv1, "��ʽ������Ҫ��");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'd':
                Delete(argv2);
            break;
            case 's':
                showOrinstall(argv2);
            break;
            case 'h':
                help();
            break;
            default:
                help();
                printf("���������ָ�������⣬����������.\n");
            break;
        }
        return 0;
    }
};
struct AboutApp{
    string name;
    int PID;
    string beginmem;
    string endmem;
    string Virtmembegin;
    string Virtmemend;
    int appmem;
};
AboutApp _NullApp;
vector<AboutApp> appMem(50, _NullApp);
class MEMORYEXE{
    private:
    const string sysBegin = UUIDMem[0];
    const string sysEnd = UUIDMem[1439];
    const string sysVirtBegin = VirtUUID[0], sysVirtEnd = VirtUUID[959];
    const string UserMembegin = UUIDMem[1439], UserMemend = UUIDMem[8703];
    int appNum = 0;
    MemMessage msgtmp;
    AboutApp abtmp;
    void init(){
        for(vector<MemMessage>::reverse_iterator it = SysMemMsg.rbegin(); it != SysMemMsg.rend(); ++it){
            if(it->memName != _NullMsg.memName){
                msgtmp = *it;
                appMem[appNum].name = msgtmp.memName;
                appMem[appNum].PID = msgtmp.PID;
                appMem[appNum].beginmem = UUIDMem[msgtmp.addr];
                appMem[appNum].endmem = UUIDMem[msgtmp.addr + msgtmp.Usrmem];
                appMem[appNum].Virtmembegin = VirtUUID[msgtmp.Virtaddr];
                appMem[appNum].Virtmemend = VirtUUID[msgtmp.Virtaddr + msgtmp.VirtMem];
                ++appNum;
                continue;
            }
            break;
        }
        for(vector<AboutApp>::reverse_iterator it = appMem.rbegin(); it != appMem.rend(); ++it){
            abtmp = *it;
            if(abtmp.name == _NullApp.name){
                appMem.pop_back();
            }
        }
    }
    void show(){
        int size = appMem.size();
        cout<<"����"<<size<<"������/�߳���������"<<endl;
        cout<<"���"<<" ����"<<"     "<<"PID"<<"     "<<"�ڴ�ռ��"<<"                           "<<"�����ڴ�ռ��"<<endl;
        int i = 1;
        for(vector<AboutApp>::iterator it = appMem.begin(); it <= appMem.end() - 1; it++, i ++){
            cout<<i<<". "<<it->name<<"     "<<it->PID<<"     "<<it->beginmem<<"~"<<it->endmem<<"   "<<it->Virtmembegin<<"~"<<it->Virtmemend<<endl;
        }
    }
    public:
    MEMORYEXE(){
        init();
        show();
    }
};

/*Ping ������https://www.cnblogs.com/ggjucheng/archive/2012/02/17/2355564.html*/
#define PACKET_SIZE 4096
#define MAX_WAIT_SIZE 5
#define MAX_NO_PACKETS 3
struct IcmpEchoReply{
    int icmpSeq;
    int icmpLen;
    int ipTtl;
    double rtt;
    string fromAddr;
    bool isReply;
};
struct PingResult{
    int dataLen;
    int nsend;
    int nreceived;
    string ip;
    string error;
    vector<IcmpEchoReply> IcmpEchoReplys;
};
extern "C" pid_t getpid(void);
class Ping{
    public:
        Ping(void)
            : m_maxPacketSize(4),
              m_datalen(56),
              m_nsend(0),
              m_nreceived(0),
              m_icmp_seq(0)
        {}
        int useping(){
            string hostorip;
            cin>>hostorip;
            int nsend = 0, nreceived = 0;
            bool ret;
            PingResult pingResult;
            for(int count = 1; count < 4; count++){
                ret = ping(hostorip, 1, pingResult);
                if(count == 1){
                    printf("PING %s(%s): %d bytes data in ICMP packets.\n", hostorip.c_str(), pingResult.ip.c_str(),
                                                                            pingResult.dataLen);
                }
                if(!ret){
                    printf("%s\n",pingResult.error.c_str());
                    break;
                }
                show(pingResult);
                nsend += pingResult.nsend;
                nreceived += pingResult.nreceived;
            }
            if(ret){
                printf("%d packets transmitted, %d received, %%%d lost\n", nsend, nreceived,
                    (nsend - nreceived) / nsend * 100);
            }
            return 0;
        }
    private:
        void show(PingResult pingResult){
            for(unsigned int i = 0; i < pingResult.IcmpEchoReplys.size(); i ++){
                IcmpEchoReply icmpEchoReply = pingResult.IcmpEchoReplys.at(i);
                if(icmpEchoReply.isReply){
                    printf("%d byte from %s: icmp_swq=%u ttl=%d rtt=%.3f ms\n",
                            icmpEchoReply.icmpLen,
                            icmpEchoReply.fromAddr.c_str(),
                            icmpEchoReply.icmpSeq,
                            icmpEchoReply.ipTtl,
                            icmpEchoReply.rtt);
                } else {
                    printf("request timeout\n");
                }
            }
        }
        bool ping(string host, PingResult &pingResult){
            return ping(host, 1, pingResult);
        }
        bool ping(string host, int count, PingResult &pingResult){
            struct protoent *protocol;
            int size = 50 * 1024;
            IcmpEchoReply icmpEchoReply;
            bool ret;
            
            m_nsend = 0;
            m_nreceived = 0;
            pingResult.IcmpEchoReplys.clear();
            m_maxPacketSize = count;
            m_pid = getpid();
            
            pingResult.dataLen = m_datalen;
            
            if((protocol = getprotobyname("icmp")) == NULL){
                perror("getprotobyname");
                return false;
            }
            /*����ʹ��ICMP��ԭʼ�׽��֣������׽���ֻ��root��������*/
            if((m_sockfd = socket(AF_INET, SOCK_RAW, protocol->p_proto)) < 0){
                extern int errno;
                pingResult.error = strerror(errno);
                return false;
            }
            /*�����׽��ֽ��ջ�������50kb��������ҪΪ�˼�С���ջ���������Ŀ����ԣ�
            ��������pingһ���㲥��ַ��ಥ��ַ��������������Ӧ��*/
            setsockopt(m_sockfd, SOL_SOCKET, SO_RCVBUF, &size, sizeof(size));
            /*��ȡmain�Ľ���id����������ICMP�ı�־��*/
            if(!getsockaddr(host.c_str(), &m_dest_addr)){
                pingResult.error = "unknow host" + host;
                return false;
            }
            pingResult.ip = inet_ntoa(m_dest_addr.sin_addr);
            sendPacket(); /*��������ICMP����*/
            recvPacket(pingResult); /*��������ICMP����*/
            pingResult.nsend = m_nsend;
            pingResult.nreceived = m_nreceived;
            close(m_sockfd);
            return true;
        }
    private:
        /*У����㷨*/
        unsigned short getChksum(unsigned short *addr, int len){
            int nleft = len;
            int sum = 0;
            unsigned short *w = addr;
            unsigned short answer = 0;
            /*��ICMP��ͷ������������2�ֽ�Ϊ��λ�ۼ�����*/
            while(nleft>1){
                sum+=*w++;
                nleft -= 2;
            }
            /*��ICMP��ͷΪ�������ֽڣ���ʣ�����һ�ֽڣ������һ���ֽ���Ϊһ��2�ֽڵ����ݵĸ��ӽܣ����2�ֽ����ݵĵ��ֽ�Ϊ0�������ۼ�*/
            if(nleft == 1){
                *(unsigned char*)(&answer) = *(unsigned char*)w;
                sum += answer;
            }
            sum = (sum>>16)+(sum&0xffff);
            sum += (sum>>16);
            answer = ~sum;
            return answer;
        }
        /*����ICMP��ͷ*/
        int packIcmp(int pack_no, struct icmp *icmp){
            int i, packsize;
            struct icmp *picmp;
            struct timeval *tval;
            
            picmp = icmp;
            picmp->icmp_type = ICMP_ECHO;
            picmp->icmp_code = 0;
            picmp->icmp_cksum = 0;
            picmp->icmp_seq = pack_no;
            picmp->icmp_id = m_pid;
            packsize = 8 + m_datalen;
            tval = (struct timeval *)icmp->icmp_data;
            gettimeofday(tval, NULL); /*��¼����ʱ��*/
            picmp->icmp_cksum = getChksum((unsigned short*)icmp, packsize); //У���㷨
            return packsize;
        }
        /*��ȥICMP��ͷ*/
        bool unpackIcmp(char* buf, int len, struct IcmpEchoReply *icmpEchoReply){
            int i, iphdrlen;
            struct ip *ip;
            struct icmp *icmp;
            struct timeval *tvsend, tvrecv, tvresult;
            double rtt;
            
            ip = (struct ip*)buf;
            iphdrlen = ip->ip_hl << 2; /*��ip��ͷ���ȣ���ip��ͷ�ĳ��ȱ�־��4*/
            icmp = (struct icmp *)(buf + iphdrlen); /*Խ��ip��ͷ��ָ��ICMP��ͷ*/
            len -= iphdrlen; /*ICMP��ͷ��ICMP���ݱ����ܳ���*/
            if(len < 8){
                printf("ICMP packets\'s length is less than 8\n");
                return false;
            }   
            /*ȷ�������ܵ����������ĵ�ICMP�Ļ�Ӧ*/
            if((icmp->icmp_type == ICMP_ECHOREPLY) && (icmp->icmp_id == m_pid)){
                tvsend = (struct timeval *)icmp->icmp_data;
                gettimeofday(&tvrecv, NULL); /*��¼����ʱ��*/
                tvresult = tvSub(tvrecv, *tvsend); /*���պͷ��͵�ʱ���*/
                rtt = tvresult.tv_sec * 1000 + tvresult.tv_usec / 1000; /*�Ժ���Ϊ��λ����rtt*/
                icmpEchoReply->rtt = rtt;
                icmpEchoReply->icmpSeq = icmp->icmp_seq;
                icmpEchoReply->ipTtl = ip->ip_ttl;
                icmpEchoReply->icmpLen = len;
                return true;
            }
            return false;
        }
        /*����timeval�ṹ���*/
        struct timeval tvSub(struct timeval timeval1, struct timeval timeval2){
            struct timeval result;
            result = timeval1;
            if(result.tv_usec < timeval2.tv_usec && result.tv_usec < 0 && timeval2.tv_usec < 0){
                --result.tv_sec;
                result.tv_usec += 1000000;
            }
            result.tv_sec -= timeval2.tv_sec;
            return result;
        }
        bool getsockaddr(const char* hostOrIp, sockaddr_in* sockaddr){
            struct hostent *host;
            struct sockaddr_in dest_addr;
            unsigned long inaddr = 0l;
            bzero(&dest_addr, sizeof(dest_addr));
            dest_addr.sin_family = AF_INET;
            /*�ж�������������ip��*/
            if((inaddr = inet_addr(hostOrIp)) == INADDR_NONE){
                if((host = gethostbyname(hostOrIp)) == NULL)/*��������*/{
                    return false;
                }
                memcpy((char*)&dest_addr.sin_addr, host->h_addr, host->h_length);
            }
            /*��IP��ַ*/
            else if(!inet_aton(hostOrIp, &dest_addr.sin_addr)){
                return false;
            }
            *sockaddr = dest_addr;
            return true;
        }
        /*��������ICMP����*/
        bool sendPacket(void){
            size_t packetsize;
            while(m_nsend < m_maxPacketSize){
                m_nsend ++;
                m_icmp_seq ++;
                packetsize = packIcmp(m_icmp_seq, (struct icmp *)m_sendpacket); /*����ICMP��ͷ*/
                
                if(sendto(m_sockfd, m_sendpacket, packetsize, 0, (struct sockaddr *) &m_dest_addr, sizeof(m_dest_addr)) < 0){
                    perror("sendto error");
                    continue;
                }
            }
            return true;
        }
        /*��������ICMP����*/
        bool recvPacket(PingResult &pingResult){
            int len;
            extern int errno;
            struct IcmpEchoReply icmpEchoReply;
            int maxfds = m_sockfd + 1;
            int nfd = 0;
            fd_set rset;
            FD_ZERO(&rset);
            socklen_t fromlen = sizeof(m_from_addr);
            struct timeval timeout;
            timeout.tv_sec = 4;
            timeout.tv_usec = 0;
            
            for(int recvCount = 0; recvCount < m_maxPacketSize; recvCount++){
                FD_SET(m_sockfd, &rset);
                if((nfd = select(maxfds, &rset, NULL, NULL, &timeout)) == -1){
                    perror("select error");
                    continue;
                }
                if(nfd == 0){
                    icmpEchoReply.isReply = false;
                    pingResult.IcmpEchoReplys.push_back(icmpEchoReply);
                    continue;
                }
                if(FD_ISSET(m_sockfd, &rset)){
                    if((len = recvfrom(m_sockfd, m_recvpacket, sizeof(m_recvpacket), 0, (struct sockaddr *)&m_from_addr, &fromlen)) < 0){
                        if(errno == EINTR)
                            continue;
                        perror("recvfrom error");
                        continue;
                    }
                    icmpEchoReply.fromAddr = inet_ntoa(m_from_addr.sin_addr);
                    if(icmpEchoReply.fromAddr != pingResult.ip){
                        recvCount--;
                        continue;
                    }
                }
                if(unpackIcmp(m_recvpacket, len, &icmpEchoReply) == false){
                    recvCount--;
                    continue;
                }
                icmpEchoReply.isReply = true;
                pingResult.IcmpEchoReplys.push_back(icmpEchoReply);
                m_nreceived++;
            }
            return true;
        }
    private:
        char m_sendpacket[PACKET_SIZE];
        char m_recvpacket[PACKET_SIZE];
        int m_maxPacketSize;
        int m_sockfd;
        int m_datalen;
        int m_nsend;
        int m_nreceived;
        int m_icmp_seq;
        struct sockaddr_in m_dest_addr;
        struct sockaddr_in m_from_addr;
        pid_t m_pid;
};
class VIRGINIAEXE
{
    private:
#define MINCHAR 32
#define CHARSUM 94
    char table[CHARSUM][CHARSUM];
    //��ʼ��ά�����Ƿ���
    bool Init()
    {
        for(int i = 0; i < CHARSUM; i ++)
        {
            for(int j = 0; j < CHARSUM; j ++)
            {
                table[i][j] = MINCHAR + (i + j) % CHARSUM;
            }
        }
        return true;
    }
    //����
    bool Encode(char* key, char* source, char* dest)
    {
        char* tempSource = source;
        char* tempKey = key;
        char* tempDest = dest;
        do{
            *tempDest = table[(*tempKey) - MINCHAR][(*tempSource) - MINCHAR];
            tempDest++;
            if(!(*(++tempKey)))
                tempKey = key;
        }while(*tempSource++);
        dest[strlen(source)] = 0;
        return true;
    }
    //����
    bool Dncode(char* key, char* source, char* dest)
    {
        char* tempSource = source;
        char* tempKey = key;
        char* tempDest = dest;
        char offset;
        do{
            offset = (*tempSource) - (*tempKey);
            offset = offset >- 0 ? offset : offset + CHARSUM;
            *tempDest = MINCHAR + offset;
            tempDest++;
            if(!(*(++tempKey)))
                tempKey = key;
        }while(*++tempSource);
        dest[strlen(source)] = 0;
        return true;
    }
    public:
    int VIRGINIA()
    {
        if(!Init())
        {
            cout<<"��ʼ������!"<<endl;
            return 1;
        }
        char key[256];
        char str1[256];
        char str2[256];
        int operation;
        while(1)
        {
            do
            {
                PRINT_HELP(printf("==========��ѡ��һ������==========\n"),
                    printf("==================================\n"))
                {
                    print("1.����");
                    print("2.����");
                    print("-1.�˳�");
                }
                cin>>operation;
            }while(operation != -1 && operation != 1 && operation != 2);
            if(operation == -1)
                return 0;
            else if(operation == 1){
                cout<<"��������Կ:";
                cin>>key;
                cout<<"������������ַ���:";
                cin>>str1;
                Encode(key, str1, str2);
                cout<<"���ܺ��ַ���:"<<str2<<endl;
            }
            else if(operation == 2){
                cout<<"��������Կ:";
                cin>>key;
                cout<<"������������ַ���:";
                cin>>str1;
                Dncode(key, str1, str2);
                cout<<"���ܺ��ַ���:"<<str2<<endl;
            }
        }
    }
};
void copyright()
{
    cout<<"\033[3;0H";
    cout<<"��Ȩ����AFANStudio����һ��ʹ��������READ.ME�������鿴readme�ļ��������Բ鿴doc�ļ������ĵ�"<<endl;
}
int getch(void){
    struct termios tm, tm_old;
    int fd = 0, ch;
    if(tcgetattr(fd, &tm) < 0){
        return -1;
    }
    tm_old = tm;
    cfmakeraw(&tm);
    if(tcsetattr(fd, TCSANOW, &tm) < 0){
        return -1;
    }
    
    ch = getchar();
    if(tcsetattr(fd, TCSANOW, &tm_old) < 0){
        return -1;
    }
    
    return ch;
}
void help()
{
    system("clear");
    /*�����ܱ���û�취*/
    PRINT_HELP(printf("==================help==================\n"),
                printf("========================================\n"))
    {
        print("ASSOC          ��ʾ���޸��ļ���չ������");
        //print("BOOK           ���ļ�����BOOK.adexe����");
        print("CD             �л�Ŀ¼��");
        print("CDK            �л����̡���������ʷǵ���\n���̵��ļ�ʱ����ʹ�ô������ʹ��CD���");
        print("CLOER          �ı���ɫ����ͣ�ã�");
        print("CLOSE          �ر��ļ���");
        print("CLS            ������");
        print("CONFIG         �鿴������Ϣ��");
        print("COUNTER        ��������");
        print("CREATE         �����ļ���");
        print("DATE           ��ʾ���ڡ�");
        //print("DISK           ��ʾ�������顣");
        print("EXIT           �˳���");
        print("FORMAT         ��ʽ���ļ���������");
        print("GETIP          ��ȡ��ҳIP��");
        print("GSC            ��ȡ��ҳԴ���루�ᳬ������");
        print("GT             ��ȡ��ҳ�������ݡ�\n����������꣬�Ժ���£�");
        print("HELP           ��ȡ������");
        print("HILL           hill������ܣ����غ�ʹ\n�ã���bug����");
        print("INSTALL        ��װ");
        print("LS             ��ʾĿ¼");
        print("MEMORY         �ڴ�ʹ�����");
        print("MKDIR          ���ڴ�����Ŀ¼��");
        print("OPEN           ���ļ���");
        print("PING           ������硣������������\n�޷�ʹ�ã�");
        print("READ           ���ļ���");
        print("RM             ɾ���ļ���");
        print("RMDIR          ����ɾ����Ŀ¼��");
        //print("SEARCH         ���������ӵ�Զ��������");����������ݿ��Ժ����
        print("SFM            �����ļ�Ȩ��");
        print("TASK           ���������");
        print("TCLEAR         ������");
        //print("TELNET         ����Զ������������ʹ��\nSEARCH��ȡ������������");����������ݿ��Ժ����
        //print("INET           ���루���غ��ʹ��\n������ԭ���ݲ�֧�֣���");
        print("VIRGINIA       Virginia������ܣ����غ�\nʹ�ã���");
        print("WRITE          д�ļ���");
        print("����һ������Ȼ���������\"-h\"������\"help\"\n�Ϳ��Դ���������������ܳ������ֱ������\nָ�������");
        print("��ϸ�����ĵ����https://code.xueersi.com/ide/code/19393077");
    }
    cout<<"��������˳�"<<endl;
    string tmp;
    cin>>tmp;
    system("clear");
}

//ͳ���ַ����ִ���
int findSubStringNUM(string targetString, string subString){
    int n = 0, sum = 0;
    string temp = targetString;
    while(1){
        n = temp.find(subString);
        if(n != -1){
            temp = temp.substr(n+subString.length(), temp.length()-subString.length());
            sum ++;
        }
        else break;
    }
    return sum;
}


void SystemDkInit(){
#ifndef _
    #define _ dk_C
        //���е����붼��Ͻ�õģ��൱����������+���ƣ�ûɶ��ֻ��Ϊ�˷��档
    if(Initflag == false){
        _.Mkdir("usr");
        _.Mkdir("Doc");
        _.Mkdir("Program");
        //_.Mkdir("temp");
        _.cd("usr");
        _.Mkdir("DOS_READ.ME");
        _.cd("DOS_READ.ME");
        _.create("READ.ME", 0);
        _.open("READ.ME", "write", "�ǵģ������README�ļ�\n    ��ʵ��Ҳ��Ҫ���������Ŀ�þ��ˡ���Ҳ���ҵ�һ������ô�Ӵ��һ����Ŀ���в��õĵط������ݣ��Ҽ������ã������в��õĵط�������¡�\n    Ҫ��˵��Ϊʲô������ô����Ŀ����ʵҲ����������������Ϊ����ǰҲ����һ���������ն˵Ķ���������û�����������������Ҫ��սһ�¡��ҿ��˱����������������ڴ������Ʒ��u1s1�����ܲ������Ƕ���Щ��̫�õĵط�������˵���ض���ʱ��̫����������������⣬�����������logo��û�ӣ������¼�����Ч̫������������������ұ��������C++Ҳֻ����dos��������Ҳ����Ҫ��һ���ܹ������û���"
        "�õĹ��ܣ��κ�ѧ��˼������������ƣ���������봴���ļ����ߴ��������н����͸���Ŀ¼�������Ծ��޷�ʵ���ˡ����ڽ�����һ�飬�����������һ��ר����C++��ͼ�ο⣬������Ϊû���겢û�з����������������Ŀ��Ҳ��ֻ�����˲��ֺ������Ȼ�ͷ�Ǹ��������ˡ����������Ժ��һ���½���ġ����о��ǹ��ڿ�Դ��������⣬������ˣ��Ժ����ڱ�������������е���Ŀ���û������˵��������¶��ῪԴ����λ���п��԰��Ҳ�������޸����ݣ������߼��Ϻͼ����ϵĲ��㣬����ע���һ�ú�д�ģ��в��õĵط�����˵���Ҹ���(doge)��Ȼ���һ���˵�����¼���:\n"    
        "    1.����Ϯ����ب�Ų�����˶�����\n    2.�ı�Ļ��ǿ��Եģ����Ǹı��ʱ��Ҫ����Ʒ��Ϊ�ı࣬ת��ʱҪ��Ϊת�أ���θ��ϸ���Ʒ��ַ��\n    3.����㷢���κ�bug������Ҫ�Ľ��ĵط��ֻ�����ϣ�����ӵĹ����뷢��������afanstudio@163.com���������Ҫ����д�ĳ���������У�Ҳ���Ժ���˵������Դ���뷢���������䡣����ǿ��Դ��εĳ��� \n                       by DxiesLawiye(��ī��)");
        //dk_C.open("READ.ME", "close");
        _.cd("..");
        _.cd("..");
        _.cd("Doc");
        _.Mkdir("help");
        _.cd("help");
        _.Mkdir("zh_cn");
        _.cd("zh_cn");
        _.create("help.txt", 0);
        _.open("help.txt", "write", "���������https://code.xueersi.com/ide/code/19393077");
        _.create("development.txt", 0);
        _.open("development.txt", "write", "���������https://code.xueersi.com/ide/code/19514323");
        _.create("AboutAfan.txt", 0);
        _.open("AboutAfan.txt", "write", "AFAN��������2020��4��6������10��00�������ҳ�����ī����������https://sh21594074.icoc.vc/");
        _.cd("..");
        _.cd("..");
        _.cd("..");
        _.cd("Program");
        _.Mkdir("sysProgram");
        _.Mkdir("InstallProgram");
        _.cd("sysProgram");
        _.Mkdir("dirve");
        _.cd("dirve");
        _.Mkdir("cpu");
        _.cd("cpu");
        _.create("ADosCpu.sys", 3);
        _.open("ADosCpu.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s f s s a s d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.cd("..");
        _.Mkdir("disk");
        _.cd("disk");
        _.create("ADosDiskC.sys",3);
        _.open("ADosDiskC.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s f s s a s a s w q q 1 2 3 4  d d a 3  d 5 r d sd a d f r f s x x f f f fg fd fd s  d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.create("ADosDiskE.sys", 3);
        _.create("ADosDiskF.sys", 3);
        _.create("ADosDiskT.sys", 3);
        _.open("ADosDiskE.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s f s s a s a s w q q 1 2 3 4  d d a 3  d 5 r d sd a d f r f s x x f f f fg fd fd s  d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.open("ADosDiskF.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s f s s a s a s w q q 1 2 3 4  d d a 3  d 5 r d sd a d f r f s x x f f f fg fd fd s  d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.open("ADosDiskT.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s f s s a s a s w q q 1 2 3 4  d d a 3  d 5 r d sd a d f r f s x x f f f fg fd fd s  d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.cd("..");
        _.Mkdir("usb");
        _.cd("usb");
        _.create("ADosUSB.sys", 3);
        _.open("ADosUSB.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s d d a f s s a s d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.cd("..");
        _.Mkdir("Mouse");
        _.cd("usb");
        _.create("ADosMs.sys", 3);
        _.open("ADosMs.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s d d a s a s d f o o i j h b g c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.cd("..");
        _.Mkdir("KeyBoard");
        _.cd("KeyBoard");
        _.create("ADosKB.sys", 3);
        _.open("ADosKB.sys", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \448 ^%&$@#  $ d f f s d  o o o  i  g f rf  j i i is  i o j j sjs e fhh h d a f s s a s d f c x s s s s d f fr r e a a s x d ed e ew s s s s$ @ s s we r g h j k l o u h g f d s s x x x z s s q s  c1 1 0 25 220w  s w q a x x d r e s a sx x z 1 e3");
        _.cd("..");
        _.cd("..");
        _.create("dos.adexe", 2);
        _.open("dos.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ ���������������������� �s���M�V��\n F낍�$ �aD U��SWV��|?�D �].�֋U?�ύM?�E��E^P�?���!? \n y<�< =========== !?????????????????????ddddd dkjnvnbn DOS::@@100044sffddfxoodjgjojge yeogsaiuiuiuiuiursuirjkle;m baiutyjvmc");
        _.create("open.adexe", 2);
        _.open("open.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ XXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGX   ?   80<0??????\n"
                    "252?2K2_2????? 333$3.343R3[3n3t3???????\n"
                    "4%4Q4???{5???????????6?6E6K6Q6W6]6d6k6r6y6�6?????????????\n"
                    "77\"70777D7M7V7");
        _.create("Ping.adexe", 2);
        _.open("Ping.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n��P ݶ>sݶ>sݶ>s�κsܶ>s�Ϋsܶ>s�έs̶>sݶ?s��>s�νs̶>s�ηs޶>s�Ϊsܶ>s�ίsܶ>sRichݶ>s\ngetaddrinfo Ping.adll  ?_Ping\n�������������� lsjkfhduhisdhduhisd �{");
        _.create("Ping.adll", 3);
        _.open("Ping.adll", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \478 ^%&$@#  $ \n�t`�5��?�֋��]�}��}܃?�}?�rCj ����59t?�r3�7�֋�j ����5?�������M?M�u9E�tM�ى]ԉE����h�k?h�k?�Q?��?��} u&?Щ?   j��?�Y�u?s  j��?��?��?��?���    w?�E?�s?    ?��   ");
        _.create("install.adexe", 2);
        _.open("install.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n ���������������������������������������� ����³ %#%&%��%*��%��# Daijfdsjlogv");
        _.create("gsc.adexe", 2);
        _.open("gsc.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n {{{{{#eeddsfdjvbne juenr oeir jm a $%#^ nksltyq3%Y WE$^><><>   b/n$^W&BU#W#%nj6hb*/5640n467");
        _.create("GetIp.adexe", 2);
        _.open("GetIp.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n M$e$^ghdfsg21 RH 2d1h hjrje ^$h DT ���E�Z\n getaddrinfo GetIp.adll  ?__GetIp::GetIp\n dfdgd ������������������");
        _.create("GetIp.adll", 3);
        _.open("GetIp.adll", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \478 ^%&$@#  $ \n @@adll @@__GetIp::GetIp @@__GetIp::~GetIp &pravite dasdgjn mjknsjng  gwn##jkid  ijeq$## kjea !V@#$");
        _.cd("..");
        _.cd("InstallProgram");
        _.Mkdir("AES");
        _.cd("AES");
        _.create("AES.adexe", 2);
        _.open("AES.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n jjerjojgrjsognjklzngworkgnoeknwrgklsdnvglksdn,xcznvgoiwrksdgnms;dakg;jifksl4087/%&$&%$#&$% 0841hrt120trh454n2$^&FD54t0rh rthy");
        _.cd("..");
        _.Mkdir("Hill");
        _.Mkdir("Virginia");
        _.cd("..");
        _.cd("..");
        //dk_tmp.Mkdir("Temp");
        dk_tmp.cd("Temp");
        dk_tmp.create("cmdtemp.tmp", 1);
        //dk_tmp.cd("..");
        Initflag = true;
    }
    string UUID = GetUUID();
    string tmpfilename = UUID + ".tmp";
    //�����������ﲻҪ����Ҫ��
    if(logn.Hill == true && hill == false && InsOrDel == true){
        int number = findSubStringNUM(out.c_str(), "\\");
        for(int i = 1; i <= number - 2; i ++){
            _.cd("..");
        }
        _.cd("Program");
        _.cd("InstallProgram");
        _.cd("Hill");
        _.create("Hill.adexe", 2);
        _.open("Hill.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n hfjwehgjhjxlhgshj uehjr gjkh jhg    erjgh jrh gflsjhsfd&rf%dgfgji gf d4005 4 5dfg40gsjk  3# kj sfvkjbkmdf540 r5s4gf048540hgfb&%$&^&dfg540 054 405et054 th");
        _.cd("..");
        _.cd("..");
        _.cd("..");
        //dk_tmp.cd("Temp");
        dk_tmp.create(tmpfilename, 1);
        dk_tmp.open(tmpfilename, "write", "install Hill.adexe");
        //dk_tmp.cd("..");
        hill = true;
    }
    if(logn.Virginia == true && virinstall == false && InsOrDel == true){
        int number = findSubStringNUM(out.c_str(), "\\");
        for(int i = 1; i <= number - 2; i ++){
            _.cd("..");
        }
        _.cd("Program");
        _.cd("InstallProgram");
        _.cd("Virginia");
        _.create("Virginia.adexe", 2);
        _.open("Virginia.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n hdhghbvhsd gfhghwert ggggggggggggrhf  iagr tahkbr hvkbnaspq  ?>>>>>>>>>>>>>>>>gqerguh ><wegfu  {{{{  r === wrj  484018*/40 j &^$%#*#$%% 114514");
        _.cd("..");
        _.cd("..");
        _.cd("..");
        //dk_tmp.cd("Temp");
        dk_tmp.create(tmpfilename, 1);
        dk_tmp.open(tmpfilename, "write", "install Virginia.adexe");
        //dk_tmp.cd("..");
        virinstall = true;
    }
    if(logn.Hill == false && hill == true && InsOrDel == false){
        int number = findSubStringNUM(out.c_str(), "\\");
        for(int i = 1; i <= number - 2; i ++){
            _.cd("..");
        }
        _.cd("Program");
        _.cd("InstallProgram");
        _.cd("Hill");
        _.rm("Hill.adexe");
        _.cd("..");
        _.cd("..");
        _.cd("..");
        //dk_tmp.cd("Temp");
        dk_tmp.create(tmpfilename, 1);
        dk_tmp.open(tmpfilename, "write", "Delete Hill.adexe");
        //dk_tmp.cd("..");
        hill = false;
        InsOrDel = true;
    }
    if(logn.Virginia == false && virinstall == true && InsOrDel == false){
        int number = findSubStringNUM(out.c_str(), "\\");
        for(int i = 1; i <= number - 2; i ++){
            _.cd("..");
        }
        _.cd("Program");
        _.cd("InstallProgram");
        _.cd("Virginia");
        _.rm("Virginia.adexe");
        _.cd("..");
        _.cd("..");
        _.cd("..");
        //dk_tmp.cd("Temp");
        dk_tmp.create(tmpfilename, 1);
        dk_tmp.open(tmpfilename, "write", "Delete Virginia.adexe");
        //dk_tmp.cd("..");
        virinstall = false;
        InsOrDel = true;
    }
    #undef _
#endif
}

void exitclass(int temps){
    if(pid == 0)
        kill(pid, SIGTSTP);
}
/*main.cpp*/
HAS_MEMBER(instruct)
extern "C" pid_t vfork(void);
extern "C" void _exit(int status);
int ADosMain()
{
#ifdef DEBUG
    Log_Pt();
#endif
    Open DosOpen;
#ifdef DEBUG
    Log_Pt();
#endif
    DosOpen.openmain();
    system("clear");
    copyright();
    sleep(3);
    cout<<"\033[3;0H"<<"\033[K";
    cout<<"\033[0;0H";
    cout<<"\033[s";
    string instruct, parameter, content, tmpstr;
    ASSOCEXE    assoc;
    CDEXE       cd;
    COLOREXE    color;
    CONFIGEXE   config;
    COUNTEREXE  counter;
    //DISKEXE     disk;
    //HILLEXE     hill;
    INSTALLEXE  install;
    Ping        pinger;
    VIRGINIAEXE virginia;
    int         addr;
    string      lastins;
    bool        EndFlag = 0;
    /*��ʼ����������*/
    SystemDkInit();
#ifdef DEBUG
    int ta = Mem.CreateThread("Test", "Test.adexe", 8 * 5);
    int tb = Mem.CreateThread("Test2", "Test.adexe", 8 * 5);
    int tc = Mem.CreateThread("Test3", "Test.adexe", 8 * 5);
    int td = Mem.CreateThread("Test4", "Test.adexe", 8 * 5);
    int te = Mem.CreateThread("Test5", "Test.adexe", 8 * 5);
    cout<<ta<<endl<<tb<<endl<<tc<<endl<<td<<endl<<te<<endl;
    //Mem.test(ta, "Test");
#ifdef DEBUG
    Log_Pt();
#endif
#endif
    //cout<<Mem.CreateTread("Test", 5)<<endl;
    if(loginif == 1)
    {
        while(true){
            cout<<"\033[u"<<"\033[K";
            cout<<endl;
            cout<<setfill('_')<<setw(100)<<"\n";
            cout<<setfill(' ');
            cout<<"\033[0;0H";
            cout<<"\033[s";
            SystemDkInit();
            tmpstr = instruct + " " + parameter + " " + content;
            lastins = instruct;
            instruct = "\0";
            parameter = "\0";
            content = "\0";
            if(out[0] != 'T')
                tmper >> out.c_str() >> " " >> date().c_str() >> " " >> tmpstr.c_str() >> " " >> "\n";
            //DIV_ROUND_UP(fsys->C_init_.length());
            cout << out;
            signal(SIGINT, exitclass);
            cin >> instruct; 
            system("clear");
            cout<<out<<instruct<<" "<<parameter<<" "<<content;
            cout<<setfill('_')<<setw(100)<<"\n";
            cout<<setfill(' ');
            cout<<"\033[3;0H";
            transform(instruct.begin(), instruct.end(), instruct.begin(), towupper);
            Mem.KillThread(addr, lastins);
            addr = Mem.CreateThread(instruct, instruct + ".adexe", 8 * 10, instruct, "AFAN Studio");
            Mem.RunThread(addr, instruct);
            if(instruct == "EXIT")
                return 0;//�����ڴ��ͷ�
            else if(instruct == "AES"){
                pid = vfork();
                if(pid == 0){
                    AES aes;
                    _exit(0);
                }
                continue;
            }
            else if(instruct == "HELP"){
                help();
                continue;
            }
            else if(instruct == "READ.ME"){
                cout<<fsys->README<<endl;
                continue;
            }
            else if(instruct == "CLS"){
                system("clear");
                continue;
            }
            else if((instruct == "VIRGINIA") && logn.Virginia == true){
                pid = vfork();
                if(pid == 0){
                    virginia.VIRGINIA();
                    _exit(0);
                }
                continue;
            }
            else if((instruct == "VIRGINIA") && logn.Virginia == false){
                pterr(instruct, "δ���أ���ʹ��installָ�����أ�");
                continue;
            }
            else if(instruct == "TCLEAR"){
                //dk_tmp.Rmdir("Temp");
                //dk_tmp.Mkdir("Temp");
                //dk_tmp.cd("Temp");
                dk_tmp.rm("cmdtemp.tmp");
                dk_tmp.create("cmdtemp.tmp", 1);
                //dk_tmp.cd("..");
                continue;
            }
            else if(instruct == "CD"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                    case 'T':
                        dk_tmp.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "CREATE"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "OPEN"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                    case 'T':
                        dk_tmp.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "LS"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                    case 'T':
                        dk_tmp.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "FORMAT"){
                switch(out[0]){
                    case 'T':
                    case 'C':
                        cout<<"���̲��ɸ�ʽ����"<<endl;
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "MKDIR"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "RMDTR"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "CLOSE"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "RM"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "SFM"){
                switch(out[0]){
                    case 'C':
                        dk_C.input(instruct);
                    break;
                    case 'E':
                        dk_E.input(instruct);
                    break;
                    case 'F':
                        dk_F.input(instruct);
                    break;
                }
                continue;
            }
            else if(instruct == "USED"){
                cout<<dk_C.usedMem()<<"b"<<endl;
                cout<<dk_E.usedMem()<<"b"<<endl;
                cout<<dk_F.usedMem()<<"b"<<endl;
                cout<<dk_tmp.usedMem()<<"b"<<endl;
                continue;
            }
            else if(instruct == "COUNTER"){
                pid = vfork();
                if(pid == 0){
                    counter.COUNTER();
                    _exit(0);
                }
                continue;
            }
            else if(instruct == "DATE"){
                Date();
                continue;
            }
            else if(instruct == "MEMORY"){
                MEMORYEXE memory;
                continue;
            }
            else if(instruct == "HILL" && logn.Hill == true){
                pid = vfork();
                if(pid == 0){
                    HILLEXE hill;
                    _exit(0);
                }
                continue;
            }
            else if(instruct == "HILL" && logn.Hill == false){
                pterr(instruct, "δ���أ���ʹ��installָ�����أ�");
                continue;
            }
            else if(instruct == "PING"){
                pinger.useping();
                continue;
            }
            else if(instruct == "TASK"){
                Mem.showThread();
                #ifdef DEBUG
                Log_Pt();
                Mem.KillThread(ta, "Test");
                Log_Pt();
                Mem.KillThread(tb, "Test2");
                Mem.KillThread(tc, "Test3");
                Mem.KillThread(td, "Test4");
                Mem.KillThread(te, "Test5");
                #endif
                continue;
            }
            cin >> parameter; 
            if(instruct == "GETIP"){
                GetIPer(parameter.c_str());
                continue;
            }
            else if(instruct == "GSC"){
                GSCer(parameter);
#if 0
                cout<<GSCer(parameter)<<endl;//�뿴���Լ���
#endif
                cout<<"���ᳬ�����Ͳ��ſ��ˣ�"<<endl;
                continue;
            }
            cin >> content;//����cin�����ո��ֹͣ��ȡ������
    /*#define INSTRUCT has_member_##instruct
                if(INSTRUCT<ASSOCEXE>::value == false){
                    printf("\"%s\"�������Ҳ���ǿ�ִ���ļ�\n",instruct.c_str());
                    cout<<INSTRUCT<Ping,ASSOCEXE>::value<<endl;
                    continue;
                }*/
            if(instruct == "ASSOC")
            {
                assoc.ASSOC(parameter.c_str(), content.c_str());
                continue;
            }
            else if(instruct == "CDK")
            {
                cd.CD(parameter.c_str(), content.c_str());
                continue;
            }
            else if(instruct == "COLOR")
            {
                color.COLOR(parameter.c_str(), content.c_str());
                continue;
            }
            else if(instruct == "CONFIG")
            {
                config.CONFIG(parameter.c_str(), content.c_str());
                continue;
            }
            else if(instruct == "INSTALL")
            {
                install.INSTALL(parameter.c_str(), content.c_str());
                continue;
            }
            printf("\"%s\"�������Ҳ���ǿ�ִ���ļ�\n",instruct.c_str());
            cin.clear();
        }
    }
    //DosOpen.tmpfunc();
    return 0;
}
int main()
{
#ifdef MST
    GetSize(AllHard);
    GetSize(string);
#endif
    int savereturn = ADosMain();
    cout<<endl;
    cout<<"�����ͷ��ڴ�..."<<endl;
    Sleep(100);
    system("clear");
    cout<<"\033[8m\033[?25l";
    return savereturn;
}
