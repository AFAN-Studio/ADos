/**
 * @begindate:2021/3/10(Ã²ËÆÊÇ)
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
  ¸üĞÂÈÕÖ¾:
    2021/3/10 µÚÒ»ĞĞÔ´´úÂë
    2021/7/6  ADos 1.0.0(Beta)
    2021/7/25 ADos 1.1.0(Beta)
      ÄÚÈİ:1.¸ùÄ¿Â¼ÇĞ»»´ÅÅÌÊ±¸üĞÂ
           2.½çÃæÓÅ»¯
           3.ÎÄ¼şÏµÍ³ÓÅ»¯
           4.ÄÚ´æ¶ÔÆëÓÅ»¯
    2021/12/31 ADos 1.1.1(Beta)
           ½ô¼±ĞŞ¸´unistdÍ·ÎÄ¼şµÄÎÊÌâ
* *********************************/

/*×¢Òâ:colorÃüÁîÔİÊ±Í£ÓÃ!*/

//ÏÂÃæµÄ×¢ÊÍÆÁ±ÎÁËÒ»Ğ©ÏÖÔÚÔİÊ±ÎŞÓÃµÄÀàÓëº¯ÊıºÍ±äÁ¿£¬¾Í½üµÄ½á¹¹»áÕ¹ÏÖ³öÀ´
/**(Beta)**/
/*********************************************************************
 *              ADos 1.1.1 ¡ª¡ª¡ª¡ª¡ª¡ª AFAN Studio                        *
 *********************************************************************
 *                                                                   *
 *              Progect Name : ADos                                  *
 *                                                                   *
 *              File    Name : (ÄÜ·ÖÎÄ¼şµÄÊ±ºòÔÙËµ)                  *
 *                                                                   *
 *              Programmer   : gmx                                   *
 *                                                                   *
 *              Start   Date : 2021/3/10                             *
 *                                                                   *
 *              Last  Update : 2021/7/25                             *
 *                                                                   *
 *-------------------------------------------------------------------*
 * Function:                                                         *
 *   Sleep -- ĞİÃß£¬ÓëMFCÖĞµÄSleepµÄĞİÃßÊ±¼äÏàÍ¬                     *
 *   Printer -- ´òÓ¡ÌáÊ¾:                                            *
 *     Printer::Printer -- ÀàµÄ¹¹Ôìº¯Êı£¬ÓÃÓÚ´òÓ¡³õÊ¼»¯ÌáĞÑ          *
 *     Printer::~Printer -- ÀàµÄÎö¹¹º¯Êı£¬ÓÃÓÚ´òÓ¡ÍË³öÌáĞÑ           *
 *   CProgress -- ASG¿âÖĞµÄÓÃÓÚ´òÓ¡½ø¶ÈÌõµÄÀà£¬Î´À´»á·¢²¼:           *
 *     CProgress::progress_bar -- ÓÃÓÚ´òÓ¡½ø¶ÈÌõ»òÕß´ÅÅÌ×´¿öÌõ       *
 *   date -- »ñÈ¡ÈÕÆÚ                                                *
 *   Logger -- Ğ´ÈÕÖ¾ÎÄ¼ş:                                           *
 *     operator>> -- ÖØ¶¨Òå">>"ÔËËã·û                                *
 *   GetUUID -- Éú³ÉUUID£¨È«ÇòÎ¨Ò»£©                                 *
 *   PID -- Éú³É½ø³Ì/Ïß³ÌPID                                         *
 *   MEMORY -- ADosÏµÍ³ÄÚ´æ¹ÜÀí:                                     *
 *     MEMORY::init -- ³õÊ¼»¯ÄÚ´æ                                    *
 *     MEMORY::toexit -- ÊÍ·ÅÄÚ´æ                                    *
 *     MEMORY::GetThreadState -- »ñÈ¡½ø³Ì/Ïß³Ì×´Ì¬                   *
 *     MEMORY::MEMORY -- ÀàµÄ¹¹Ôìº¯Êı                                *
 *     MEMROY::~MEMORY -- ÀàµÄÎö¹¹º¯Êı                               *
 *     MEMORY::CreateThread -- ´´Ôì½ø³Ì/Ïß³Ì                         *
 *     MEMORY::ReleaseThread -- ÊÍ·Å½ø³Ì/Ïß³ÌÄÚ´æ                    *
 *     MEMORY::RunThread -- Æô¶¯½ø³Ì/Ïß³Ì                            *
 *     MEMORY::BlockThread -- ¹ÒÆğ½ø³Ì/Ïß³Ì                          *
 *     MEMORY::KillThread -- É±ËÀ½ø³Ì/Ïß³Ì                           *
 *     MEMORY::showThread -- ÏÔÊ¾ÕıÔÚÔËĞĞ¡¢ĞÂ½¨»ò¹ÒÆğµÄ½ø³Ì/Ïß³Ì     *
 *     MEMORY::GetThreadMessage -- »ñÈ¡½ø³Ì/Ïß³ÌĞÅÏ¢                 *
 *   FAT -- FATÎÄ¼şÏµÍ³:                                             *
 *     FAT::init -- ³õÊ¼»¯´ÅÅÌ                                       *
 *     FAT::getBlock -- »ñÈ¡¿Õ´ÅÅÌ                                   *
 *     FAT::addBlock -- »ØÊÕ´ÅÅÌ¿é                                   *
 *   FCB:                                                            *
 *     FCB::FCB -- ¹¹Ôìº¯Êı£¬ÓÃÓÚ³õÊ¼»¯                              *
 *     FCB::~FCB -- Îö¹¹º¯Êı                                         *
 *     FCB::setFileAccess -- ÉèÖÃÎÄ¼ş±£»¤·½Ê½/ÀàĞÍ                   *
 *     FCB::getTime -- »ñÈ¡Ê±¼ä                                      *
 *       File:                                                       *
 *         File::File -- ¹¹Ôìº¯Êı                                    *
 *         File::~File -- Îö¹¹º¯Êı                                   *
 *         File::addContent -- Ìí¼ÓÎÄ¼ş                              *
 *         File::release -- ÊÍ·ÅÄÚ´æ                                 *
 *         File::toString -- stringÊı×é×ªstring                      *
 *       Folder:                                                     *
 *          Folder::addChild -- Ìí¼Ó×ÓÄ¿Â¼                           *
 *          Folder::Folder -- ¹¹Ôìº¯Êı                               *
 *          Folder::count -- ÅĞ¶ÏÊÇ·ñ»¹ÓĞÏÂÒ»¸öÎÄ¼ş¼Ğ                *
 *          Folder::find -- ²éÕÒÎÄ¼ş¼Ğ                               *
 *          Folder::erase -- ²Á³ıÊı¾İ                                *
 *          Folder::size -- »ñÈ¡ÎÄ¼ş¼Ğ´óĞ¡                           *
 *   DiskManager -- ´ÅÅÌÀà:                                          *
 *     DiskManager::DiskWrite -- ´´½¨´ÅÅÌÎÄ¼ş                        *
 *     DiskManager::DiskMkdir -- ´´½¨´ÅÅÌÎÄ¼ş¼Ğ                      *
 *     DiskManager::DiskRmdir -- É¾³ı´ÅÅÌÎÄ¼ş¼Ğ                      *
 *     DiskManager::DiskCkdir -- ²éÕÒÄ¿Â¼                            *
 *     DiskManager::DiskManagers -- ÃüÁîµÄÊµÏÖ£¬ÓÃÓÚ¿ØÖÆ´ÅÅÌ         *
 *     DiskManager::GetPath -- »ñÈ¡Â·¾¶£¨Ä¿Â¼£©                      *
 *     DiskManager::AllMEm -- »ñÈ¡´ÅÅÌ¿Õ¼ä´óĞ¡                       *
 *     DiskManager::usedMem -- »ñÈ¡ÒÑÓÃ´ÅÅÌ¿Õ¼ä                      *
 *     DiskManager::run -- runÃüÁîÊµÏÖ£¨ÔİÊ±±£Áô£©                   *
 *     DiskManager::SFM -- SFMÃüÁîÊµÏÖ                               *
 *     DiskManager::format -- ¸ñÊ½»¯ÊµÏÖ                             *
 *     DiskManager::Mkdir -- MkdirÃüÁîÊµÏÖ                           *
 *     DiskManager::Rmdir -- RmdirÃüÁîÊµÏÖ                           *
 *     DiskManager::ls -- lsÃüÁîÊµÏÖ                                 *
 *     DiskManager::cd -- cdÃüÁîÊµÏÖ                                 *
 *     DiskManager::create -- createÃüÁîÊµÏÖ£¬ÓÃÓÚ´´½¨ÎÄ¼ş           *
 *     DiskManager::open -- ´ò¿ªÎÄ¼ş                                 *
 *     DiskManager::close -- ¹Ø±ÕÎÄ¼ş                                *
 *     DiskManager::write -- Ğ´ÎÄ¼ş                                  *
 *     DiskManager::read -- ¶ÁÎÄ¼ş                                   *
 *     DiskManager::rm -- É¾³ıÎÄ¼ş                                   *
 *     DiskManager::input -- ÓÃÓÚÊäÈëÃüÁî                            *
 *     DiskManager::DiskManager -- ¹¹Ôìº¯Êı£¬³õÊ¼»¯´ÅÅÌ              *
 *   Register -- ×¢²á±íÀà£¨±£Áô£©                                    *
 *   AES -- AES¼ÓÃÜ£¨CSDNÉÏµÄ´úÂë£¬ÎÒÒ²Ã»¸ã¶®¡­¡­£©                    *
 *   ASSOCEXE -- ¸ü¸ÄÀ©Õ¹ÃûÄ¬ÈÏÎÄ¼ş:                                 *
 *     ASSOCEXE::getexten -- »ñÈ¡ÎÄ¼şÀ©Õ¹Ãû                          *
 *     ASSOCEXE::ExtenNoneSpace -- È¥³ıÎÄ¼şÀ©Õ¹ÃûºóµÄ¿Õ¸ñ            *
 *     ASSOCEXE::FilepathNoneSpace -- È¥³ıÎÄ¼şÃûºóµÄ¿Õ¸ñ             *
 *     ASSOCEXE::help -- °ïÖúº¯Êı                                    *
 *     ASSOCEXE::show -- ÏÔÊ¾À©Õ¹Ãû¼°Æä°ó¶¨ÎÄ¼ş                      *
 *     ASSOCEXE::show_s -- ÏÔÊ¾ÏÖÓĞÀ©Õ¹Ãû                            *
 *     ASSOCEXE::binding -- ¸ü¸ÄÀ©Õ¹Ãû°ó¶¨ÎÄ¼ş                       *
 *     ASSOCEXE::split -- ÅĞ¶Ï¸ñÊ½ÊÇ·ñÕıÈ·(ÊÇ·ñº¬ÓĞ"&")              *
 *     ASSOCEXE::__init__ -- ³õÊ¼»¯±äÁ¿tmpExtenÓëtmpFilenamePath     *
 *     ASSOCEXE::ASSOCEXE -- ¹¹Ôìº¯Êı£¬³õÊ¼»¯±äÁ¿extension           *
 *     ASSOCEXE::~ASSOCEXE -- Îö¹¹º¯Êı£¬ÊÍ·Å±äÁ¿¿Õ¼ä                 *
 *     ASSOCEXE::ASSOC -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëÖ¸Áî                         *
 *   CDEXE(CDK) -- ÇĞ»»´ÅÅÌ:                                         *
 *     CDEXE::help -- °ïÖúº¯Êı                                       *
 *     CDEXE::pos -- ²éÕÒ×Ó´®Î»ÖÃ                                    *
 *     CDEXE::changeMenu -- ¸ü¸Ä´ÅÅÌÄ¿Â¼                             *
 *     CDEXE::CD -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëÖ¸Áî                               *
 *   COLOREXE --  ¸ü¸ÄÑÕÉ«:                                          *
 *     COLOREXE::settxtcolor -- ÉèÖÃÇ°¾°ÑÕÉ«                         *
 *     COLOREXE::setcolor -- ÉèÖÃÑÕÉ«                                *
 *     COLOREXE::COLOR -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëÖ¸Áî                         *
 *   COUNTEREXE -- ¼ÆËãÆ÷:                                           *
 *     COUNTEREXE::level -- ÅĞ¶ÏÔËËã·û                               *
 *     COUNTEREXE::in_setCheck -- ¼ì²âÊÇ·ñÓĞÎŞÓÃ·ûºÅ                 *
 *     COUNTEREXE::del_space -- É¾³ı¿Õ¸ñ                             *
 *     COUNTEREXE::to_string -- ×ªstring                             *
 *     COUNTEREXE::change -- ¸ü¸ÄÎªºó×º±í´ïÊ½£¨Ã²ËÆÊÇ£©              *
 *     COUNTEREXE::compute -- ¼ÆËã                                   *
 *     COUNTEREXE::Judge_rectangle -- ÅĞ¶ÏÊÇ¶¼ÓĞÌØÊâ·ûºÅ             *
 *     COUNTEREXE::cal_rect_number -- ÇóÈı½Çº¯Êı                     *
 *     COUNTEREXE::Judge_factorial -- ÅĞ¶ÏÊÇ·ñÎªÇó½×³Ë               *
 *     COUNTEREXE::cal_factorial_number -- Çó½×³ËÊı×Ö                *
 *     COUNTEREXE::cal_factorial -- ÀûÓÃÊı×éÇó½×³Ë                   *
 *     COUNTEREXE::COUNTER -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëËãÊ½                     *
 *   CONFIGEXE -- ²é¿´ÏµÍ³ÉèÖÃĞÅÏ¢:                                  *
 *     CONFIGEXE::help -- °ïÖúº¯Êı                                   *
 *     CONFIGEXE::ac -- Êä³öÓÃ»§ÉèÖÃ                                 *
 *     CONFIGEXE::aboutcpu -- Êä³öcpuĞÅÏ¢                            *
 *     CONFIGEXE::_adisk -- Êä³ö´ÅÅÌĞÅÏ¢                             *
 *     CONFIGEXE::_kb -- Êä³ö¼üÅÌĞÅÏ¢                                *
 *     CONFIGEXE::_ms -- Êä³öÊó±êĞÅÏ¢                                *
 *     CONFIGEXE::_usb -- Êä³öUSB½Ó¿ÚĞÅÏ¢                            *
 *     CONFIGEXE::_a -- ÃüÁî×ª»»²¢µ÷ÓÃº¯Êı                           *
 *     CONFIGEXE::CONFIG -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëÖ¸Áî                       *
 *   Date -- ÓÃÓÚÊä³öÈÕÆÚ                                            *
 *   parseHostAndPagePath -- »ñÈ¡ÍøÒ³Â·¾¶                            *
 *   GSCer -- »ñÈ¡ÍøÒ³Ô´´úÂë                                         *
 *   GetIPer -- »ñÈ¡ÍøÖ·IP                                           *
 *   HILLEXE -- HillÃÜÂë¼ÓÃÜ:                                        *
 *     HILLEXE::HILLEXE -- ¹¹Ôìº¯Êı£¬¹¦ÄÜµÄÊµÏÖ                      *
 *   INSTALLEXE -- ÏÂÔØÈí¼ş»ò²å¼ş:                                   *
 *     INSTALLEXE::help -- °ïÖúº¯Êı                                  *
 *     INSTALLEXE::Delete -- É¾³ıÈí¼ş»ò²å¼ş                          *
 *     INSTALLEXE::showOrinstall -- ÏÔÊ¾»òÏÂÔØÈí¼ş»ò²å¼ş             *
 *     INSTALLEXE::INSTALL -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëÃüÁî                     *
 *   MEMORYEXE -- ÄÚ´æÊ¹ÓÃ²é¿´                                       *
 *     MEMORYEXE::init -- ³õÊ¼»¯                                     *
 *     MEMORYEXE::show -- ÏÔÊ¾Çé¿ö                                   *
 *     MEMORYEXE::MEMORYEXE -- ¹¹Ôìº¯Êı                              *
 *     MEMORYEXE::~MEMORYEXE -- Îö¹¹º¯Êı£¬ÊÍ·ÅÄÚ´æ                   *
 *   VIRGINIAEXE -- VirginiaÃÜÂë¼ÓÃÜ                                 *
 *     VIRGINIAEXE::Init -- ³õÊ¼»¯Î¬¼ªÄáÑÇ·½Õó                       *
 *     VIRGINIAEXE::Encode -- ¼ÓÃÜ                                   *
 *     VIRGINIAEXE::Dncode -- ½âÃÜ                                   *
 *     VIRGINIAEXE::VIRGINIA -- ½Ó¿Ú£¬ÓÃÓÚÊäÈëÎÄ×Ö                   *
 *   copyright -- °æÈ¨ÉùÃ÷                                           *
 *   help -- Ö÷°ïÖúº¯Êı                                              *
 *   findSubStringNUM -- Í³¼Æ×Ö·û³öÏÖ´ÎÊı                            *
 *   SystemDkInit -- ÏµÍ³´ÅÅÌ³õÊ¼»¯                                  *
 *   exits -- ÍË³öº¯Êı£¨Ctrl+C£©                                     *
 *   ADosMain -- ÏµÍ³Ö÷º¯Êı                                          *
 *   main -- ³ÌĞòÖ÷º¯Êı                                              *
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
#define CHECK(t,y,n) printf("%sÇë°´(%s), ·ñÔòÇë°´(%s)\n",t,y,n);
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
    /*¶Ë¿Ú*/
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
//Êä³öÌáÊ¾ÓÃ
class Printer{
    public:
    Printer(){
        cout<<"³õÊ¼»¯ÏµÍ³ÖĞ£¬ÇëÉÔµÈ... ½¨Òé¿í¶È:È«ÆÁ£¨½øÈëÍøÖ·https://code.xueersi.com/ide/code/15768230ºóÀ­ÂúÆÁ£©"<<endl;
    }
    ~Printer(){
        cout<<"ÊÍ·ÅÄÚ´æÖĞ..."<<endl;
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
    const char* cpuname = "ADosCpu";//¾Í½ĞÕâ¸ö°É
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
struct softandhard_log//ÓÎ¿ÍÉèÖÃÓÃ
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
    bool Inet;//·­Òë
};
struct EXTENSION//Ôö¼ÓµÄÊ±ºò²»ÒªÍü¼ÇĞŞ¸ÄASSOCµÄshowº¯Êı¡¢show_bº¯ÊıºÍshow_sº¯Êı
{
    string _7z   = "__null";
    string _adexe = "ADosÄÚºË";
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
    int MainmemSurplus = syset->Mainmem - syset->usemain - 5;//ÔËËã·¨ÔòÏÈ->ÔÙ-
    int ExDk1memSurplus = syset->ExDk1mem - syset->used1;
    int ExDk2memSurplus = syset->ExDk2mem - syset->used2;
};
//¶ÔËùÓĞÓ²¼şµÄÃèÊö

class CProgress:public ADosClass
{
    private:
    const char *ponit[6]={" ", "¨‡", "¨†", "¨…", "¨‚", "¨€"};
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
    		printf("\n\033[31m´ÅÅÌÒÑÂú\033[0m\n");
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

Logger tmper;//Ğ´ÈÕÖ¾ÎÄ¼şÓÃ

//ÄÚ´æ
//Memory.h
//Éú³ÉUUID
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
//Éú³ÉPID
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
        WRITEFILEOK("ÄÚ´æ±àºÅÍê³É");
        for(int i = 0; i <= 1440; i ++){
            Memory.insert(Memory.begin() + i, true);
        }
        for(int i = 0; i <= 1440; i ++){
            Name.insert(Name.begin() + i, "ADos");
        }
        WRITEFILEOK("ÏµÍ³ÄÚ´æ³õÊ¼»¯Íê³É");
        int virtmem = Memory.capacity() - Memory.size();// ĞéÄâÄÚ´æ=vectorÀï¿É´æ×ÜÄÚ´æ-Éè¶¨µÄ¿É´æÄÚ´æ
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
        VirtMem.shrink_to_fit();//°Ñ¿É´æ×ÜÄÚ´æµ÷Õûµ½Éè¶¨µÄ¿É´æÄÚ´æ
        Memory.shrink_to_fit();
        UUIDMem.shrink_to_fit();
        Name.shrink_to_fit();
        VirtName.shrink_to_fit();
        VirtUUID.shrink_to_fit();
    #endif
        MemMessage MemMsg = {
            .memName = "ADos",
            .FileName = "ADosÄÚºË",
            .cpu = 2400.0 / (8 * 1088),
            .addr = 0,
            .Virtaddr = 0,
            .Usrmem = (int)ceil(2400 * 0.6),
            .VirtMem = (int)ceil(2400 * 0.4),
            .PID = PID(2400),
            .Text = "ADosÄÚºË",
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
                        returnvar = "ĞÂ½ø³Ì";
                    break;
                    case 1:
                        returnvar = "¿ÉÔËĞĞ";
                    break;
                    case 2:
                        returnvar = "ÔËĞĞÖĞ";
                    break;
                    case 3:
                        returnvar = "¹ÒÆğÖĞ";
                    break;
                    case 4:
                        returnvar = "ÒÑ½áÊø";
                    break;
                    case 5:
                        returnvar = returnvar + "|²»ÄÜ½áÊø";
                    break;
                    case 6:
                        returnvar = returnvar + "|¿ÉÒÔ½áÊø";
                    break;
                    case 7:
                        returnvar = returnvar + "|ÏµÍ³½ø³Ì";
                    break;
                    case 8:
                        returnvar = returnvar + "|·ÇÏµÍ³½ø³Ì";
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
        WRITEFILEOK("ÄÚ´æ³õÊ¼»¯Íê³É");
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
        cout<<setfill(' ')<<"½ø³ÌÃû³Æ"<<"     "<<"ÎÄ¼şÃû³Æ"<<"     "<<"cpuÊ¹ÓÃÂÊ"<<"     "<<"Ê¹ÓÃÄÚ´æ"<<"   "<<"ĞéÄâÄÚ´æ"<<"   "<<"PID"<<"   "<<"ÃèÊö"<<"     "<<"°æÈ¨"<<"     "<<"ÆğÊ¼µØÖ·"<<endl;
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

//³õÊ¼»¯ÄÚ´æ
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
        string PartType; //·ÖÇøÀàĞÍ
        string state;
        string UUID;
        string divName;
        int DiskMem;
        int protectMem; //ÊÜ±£»¤¿Õ¼ä
        string mker; //¹©Ó¦ÉÌ
        string FilePath; //Çı¶¯³ÌĞòµØÖ·
        string date; //³õÊ¼»¯Ê±¼ä
        bool issys; //ÊÇ·ñÎªÏµÍ³±ØĞë
        bool isopen; //ÊÇ·ñÎªÆô¶¯ÅÌ
        bool canDel; //ÊÇ·ñ¿ÉÉ¾³ı
        string text; //±¸×¢
    };
    struct cpu{
        string cpuname;
        string showname;
        string longName;
        string shortName;
        string divname; //Çı¶¯Ãû³Æ
        string UUID;
        int cpumem;
        int Virtmem; //ĞéÄâÄÚ´æ
        int hardwareUse; //Ó²¼şËùĞè
        int protect; //ÊÜ±£»¤¿Õ¼ä
        int canuse; //ÓÃ»§Óë³ÌĞò¿ÉÊ¹ÓÃµÄ¿Õ¼ä
        int cpuKernelNum;
        int ThreadMax;
        string mker; //¹©Ó¦ÉÌ
        string FilePath; //Çı¶¯³ÌĞòµØÖ·
        string date; //³õÊ¼»¯Ê±¼ä
        bool issys; //ÊÇ·ñÎªÏµÍ³±ØĞë
        bool canDel; //ÊÇ·ñ¿ÉÉ¾³ı
        string text; //±¸×¢
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
        string divname; //Çı¶¯Ãû³Æ
        string USBmemLow; //ÄÚ´æ·¶Î§ÏÂÏŞ
        string USBmemHigh; //ÄÚ´æ·¶Î§ÉÏÏŞ
        string UUID;
        string mker; //¹©Ó¦ÉÌ
        string FilePath; //Çı¶¯³ÌĞòµØÖ·
        string date; //³õÊ¼»¯Ê±¼ä
        bool issys; //ÊÇ·ñÎªÏµÍ³±ØĞë
        bool canDel; //ÊÇ·ñ¿ÉÉ¾³ı
        string text; //±¸×¢
    };
    struct Keyboard{
        string kbname;
        string showname;
        string longName;
        string shortName;
        string divname; //Çı¶¯Ãû³Æ
        string UUID;
        string mker; //¹©Ó¦ÉÌ
        string FilePath; //Çı¶¯³ÌĞòµØÖ·
        string date; //³õÊ¼»¯Ê±¼ä
        bool issys; //ÊÇ·ñÎªÏµÍ³±ØĞë
        bool canDel; //ÊÇ·ñ¿ÉÉ¾³ı
        bool iss; //°üÀ¨ÌØÊâ·ûºÅ
        string text; //±¸×¢
    };
    struct Mouse{
        string msname;
        string showname;
        string longName;
        string shortName;
        string divname; //Çı¶¯Ãû³Æ
        string UUID;
        string mker; //¹©Ó¦ÉÌ
        string FilePath; //Çı¶¯³ÌĞòµØÖ·
        string date; //³õÊ¼»¯Ê±¼ä
        bool issys; //ÊÇ·ñÎªÏµÍ³±ØĞë
        bool canDel; //ÊÇ·ñ¿ÉÉ¾³ı
        string text; //±¸×¢
    };
    struct AboutComputer{
        string ip;
        string UUID;
        string showname;
        string username;
    #if login != 1
        string password; //¼ÓÃÜºó
    #endif
        string Aboutcopyright;
        string Version;
        string text; //ÃèÊö
    };
    public:
    cpu* cpus = new cpu;
    Disk* disk = new Disk;
    USB* usb = new USB;
    Keyboard* kb = new Keyboard;
    Mouse* ms = new Mouse;
    AboutComputer* ac = new AboutComputer;
    AllHard(){
        //cpuĞÅÏ¢³õÊ¼»¯
        cpus->cpuname = cpuname;
        cpus->showname = "cpu";
        cpus->longName = "´¦ÀíÆ÷";
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
        WRITEFILEOK("cpu³õÊ¼»¯Íê³É");
        //Ó²ÅÌ³õÊ¼»¯
        disk->DiskNum = 4;
        disk->AllMem = 8 * 1024 * 1024; //1MB
        //C:
        disk->disk1.name = "ADosDisk";
        disk->disk1.showName = "C:";
        disk->disk1.longName = "CÅÌ";
        disk->disk1.shortName = "DiskC";
        disk->disk1.PartType = "FAT";
        disk->disk1.state = "Á¼ºÃ";
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
        disk->disk1.text = "\"C:\"ÅÌÎªÖ÷ÅÌ£¬²»¿É¸ñÊ½»¯»òÕßÉ¾³ı";
        WRITEFILEOK("CÅÌ³õÊ¼»¯Íê³É");
        //E:
        disk->disk2.name = "ADosDisk";
        disk->disk2.showName = "E:";
        disk->disk2.longName = "EÅÌ";
        disk->disk2.shortName = "DiskE";
        disk->disk2.PartType = "FAT";
        disk->disk2.state = "Á¼ºÃ";
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
        disk->disk2.text = "\"E:\"ÅÌÎªÀ©Õ¹ÅÌ";
        WRITEFILEOK("EÅÌ³õÊ¼»¯Íê³É");
        //F:
        disk->disk3.name = "ADosDisk";
        disk->disk3.showName = "F:";
        disk->disk3.longName = "FÅÌ";
        disk->disk3.shortName = "DiskF";
        disk->disk3.PartType = "FAT";
        disk->disk3.state = "Á¼ºÃ";
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
        disk->disk3.text = "\"F:\"ÅÌÎªÀ©Õ¹ÅÌ";
        WRITEFILEOK("FÅÌ³õÊ¼»¯Íê³É");
        //T:
        disk->disk4.name = "ADosDisk";
        disk->disk4.showName = "T:";
        disk->disk4.longName = "TÅÌ";
        disk->disk4.shortName = "DiskT";
        disk->disk4.PartType = "FAT";
        disk->disk4.state = "Á¼ºÃ";
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
        disk->disk4.text = "\"T:\"ÅÌÎªÈÕÖ¾ÎÄ¼ş´¢´æÅÌ£¬²»¿ÉÉ¾³ı";
        WRITEFILEOK("TÅÌ³õÊ¼»¯Íê³É");
        //USB³õÊ¼»¯
        usb->USBname = "ADosUSB";
        usb->showname = "USB";
        usb->longName = "USB½Ó¿Ú";
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
        usb->text = "USB½Ó¿Ú";
        WRITEFILEOK("USB³õÊ¼»¯Íê³É");
        //¼üÅÌ³õÊ¼»¯
        kb->kbname = "ADosKeyboard";
        kb->showname = "KeyBoard";
        kb->longName = "¼üÅÌ";
        kb->shortName = "KB";
        kb->divname = "ADosKB.sys";
        kb->UUID = GetUUID();
        kb->mker = "AFAN Studio";
        kb->FilePath = "C:\\system\\Program\\sysProgram\\dirve\\KeyBoard\\ADosKB.sys";
        kb->date = date();
        kb->issys = true;
        kb->canDel = false;
        kb->text = "¼üÅÌ";
        WRITEFILEOK("¼üÅÌ³õÊ¼»¯Íê³É");
        //Êó±ê³õÊ¼»¯
        ms->msname = "ADosMouse";
        ms->showname = "Mouse";
        ms->longName = "Êó±ê";
        ms->shortName = "MS";
        ms->divname = "ADosMS.sys";
        ms->UUID = GetUUID();
        ms->mker = "AFAN Studio";
        ms->FilePath = "C:\\system\\Program\\sysProgram\\dirve\\Mouse\\ADosMs.sys";
        ms->date = date();
        ms->issys = true;
        ms->canDel = false;
        ms->text = "Êó±ê";
        WRITEFILEOK("Êó±ê³õÊ¼»¯Íê³É");
        //ÓÃ»§³õÊ¼»¯
        ac->ip = ip;
        ac->UUID = GetUUID();
        //ac->showname = username;
        //ac->username = username;
        ac->Aboutcopyright = "AFAN Studio";
        ac->Version = "1.0.0";
        ac->text = "(__null)";
        WRITEFILEOK("Ó²¼ş³õÊ¼»¯Íê³É");
        WRITEFILEOK("ÓÃ»§³õÊ¼»¯Íê³É");
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

//³õÊ¼»¯Ó²¼ş
AllHard hard;

//File-OS À´Ô´:lewisbyte(github)
//ps:ÎÄ¼şÏµÍ³ÕâÒ»·½ÃæÎÒÊÇÕæµÄ²Ë£¬ÕâÒ»¶ÎÎÄ¼şÏµÍ³ÊÇ´ÓGitHubÉÏ°ÇÏÂÀ´µÄ£¬ÓĞÒ»µã¶ù¸Ä¶¯
/*Access.h*/
enum Access{
    ReadOnly = 0,
    Write = 1,
    Executable = 2, //¿ÉÖ´ĞĞ
    System = 3 //ÏµÍ³
};
/*FileType.h*/
enum FileType{
    FOLDER, //ÎÄ¼ş¼Ğ
    DOCUMENT//ÎÄµµ
};
/*FAT.h, FAT.cpp*/

const static int BLOCK_SIZE = 4096 / sizeof(bool);

class FAT{
public:
    stack<int> freeDiskBlock;
    stack<int> fullDiskBlock;
    //³õÊ¼»¯
    void init(string blocks[]){
        for(int i = 0; i < BLOCK_SIZE; i ++){
            this->freeDiskBlock.push(i);
            blocks[i].clear();
        }
    }
    //»ñÈ¡¿Õ´ÅÅÌ
    int getBlock(){
        if(this->freeDiskBlock.size() > 0){
            int blockId = this->freeDiskBlock.top();
            this->freeDiskBlock.pop();
            this->fullDiskBlock.push(blockId);
            return blockId;
        }
        return -1;
    }
    //»ØÊÕ´ÅÅÌ¿é
    void addBlock(int block, string blocks[]){
        this->freeDiskBlock.push(block);
        blocks[block].clear();
    }
};

/*FCB.h, FCB.cpp*/

const int N = 4096;

class FCB{
public:
    string name;//ÎÄ¼şÃû£º      ÎÄ¼şÃû.À©Õ¹Ãû
    int nodeId;//ÎÄ¼ş±êÊ¶£º     ²Ù×÷ÏµÍ³¹ÜÀíÎÄ¼şµÄÎ¨Ò»±êÊ¶
    FileType type;//ÎÄ¼şÀàĞÍ£º  ÓÉÀ©Õ¹Ãû¸ø³ö
    string path;//ÎÄ¼şÎ»ÖÃ£º    ÎÄ¼şËù´æ·ÅÉè±¸µÄ¾ßÌåÎ»ÖÃ
    int size;//ÎÄ¼ş´óĞ¡£º       ÒÔ×Ö½Ú»ò¿éÎªµ¥Î»µÄÎÄ¼ş³¤¶È
    Access access;//ÎÄ¼ş±£»¤·½Ê½
    string modifyDate;//ÎÄ¼ş´´½¨»òĞŞ¸ÄµÄÈÕÆÚ
    FCB *index[N];//Ë÷Òı±í
    FCB *father;//¸¸½Úµã
    
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
    //ĞòÁĞ»¯
    void Serialization(){
        //__null£¬ÎÒÒ²²»ÖªµÀÎªÉ¶£¬¿ÉÄÜÔİÁô
    }
    //·´ĞòÁĞ»¯
    void Deserialization(){
        //__null£¬Í¬ÉÏ 
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
    
    //ÎÄ¼şË÷Òı
    int index[N];
    //ÉÏÒ»¼¶ÎÄ¼ş¼Ğ
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
    const string ACCESS[4] = {"\033[92m  Ö»¶Á\033[0m", "¿ÉĞŞ¸Ä", "\033[96m¿ÉÖ´ĞĞ\033[0m", "\033[94m  ÏµÍ³\033[0m"};
    queue<FCB *> persistQueue;//³Ö¾Ã»¯¶ÓÁĞ
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
    //´´½¨´ÅÅÌÎÄ¼ş¼Ğ
    bool DiskMkdir(string dirName){
        return mkdir(dirName.c_str(), S_IRWXU) == 0;
    }
    //É¾³ı´ÅÅÌÎÄ¼ş¼Ğ
    bool DiskRmdir(string dirName){
        return rmdir(dirName.c_str()) == 0;
    }
    //²éÕÒ
    bool DiskCkdir(string dirName){
        if(access(dirName.c_str(), 0) == -1){
            return mkdir(dirName.c_str(), S_IRWXU) == 0;
        }
        return false;
    }
    void DiskRmdir(Folder *f){
        //DFSÉ¾³ı
        for(int i = 0; i < f->child.size(); i ++){
            //ÅĞ¶ÏÎÄ¼şÀàĞÍ
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
        }else if(argv1 == "SFM"){ //ÉèÖÃÎÄ¼ş±£»¤·½Ê½
            this->SFM();
        }else if(argv1 == "RUN"){ //ÔËĞĞ¿ÉÖ´ĞĞ½Å±¾ÎÄ¼ş£¨ÔİÊ±±£Áô£©
            this->run();
        }
        out = this->root->path + ">>># ";
        return 0;
    }
    /*½Ó¿Úº¯Êı£¬»ñÈ¡Ä¿Â¼*/
    string GetPath() const{
        return (this->root->path + ">>># ");
    }
    /*½Ó¿Úº¯Êı£¬»ñÈ¡´ÅÅÌ×Ü¿Õ¼ä*/
    int AllMem() const{
        return totalMem;
    }
    /*½Ó¿Úº¯Êı£¬»ñÈ¡´ÅÅÌÒÑÓÃ¿Õ¼ä*/
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
                    cout<<"¸ÃÎÄ¼ş·Ç¿ÉÖ´ĞĞ½Å±¾ÎÄ¼ş"<<endl;
                }
            }
        }
        else{
            cout<<"ÎŞ·¨´ò¿ª´ËÎÄ¼ş£¬¸ÃÎÄ¼ş·Ç¿ÉÖ´ĞĞÎÄ¼ş"<<endl;
        }
    }
    //Ò»Ğ©ÃüÁîµÄÊµÏÖ
    //¸ñÊ½»¯
    void format(string *blocks){
        fat.init(blocks);
        while(root->father != root){
            this->root = (Folder *) (this->root->father);
        }
        this->DiskRmdir(this->root);
        root->child.clear();
        printf("%s\n", "´ÅÅÌ¸ñÊ½»¯³É¹¦£¡");
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
        //printf("%s\n", "´ÅÅÌ¸ñÊ½»¯³É¹¦£¡");
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
            cout<<"ÎŞ´ËÎÄ¼ş"<<endl;
            tmpmessages = name + " failed";
        }
    }
    void Mkdir(){
        string name;
        cin >> name;
        Folder *childFile = new Folder(name, FileType::FOLDER);
        //ÉèÖÃ¸¸½Úµã
        childFile->father = (this->root);
        childFile->path   = this->root->path + name + "\\";
        //ÅĞ¶ÏÎÄ¼şÊÇ·ñÖØ¸´
        if(this->root->count(childFile)){
            //ÎÄ¼şÖØ¸´±¨´í
            cout<<"´´½¨ÎÄ¼ş¼ĞÊ§°Ü£¬ÎÄ¼ş¼ĞÃû³öÏÖÖØ¸´"<<endl;
            tmpmessages = name + " failed";
        } else {
            cout<<"´´½¨ÎÄ¼ş¼Ğ³É¹¦"<<endl;
            this->DiskMkdir(childFile->path);
            this->root->addChild(childFile);
            tmpmessages =  name + " success";
        }
    }
    void Mkdir(string name){
        string pathname = name;
        Folder *childFile = new Folder(pathname, FileType::FOLDER);
        //ÉèÖÃ¸¸½Úµã
        childFile->father = (this->root);
        childFile->path   = this->root->path + pathname + "\\";
        //ÅĞ¶ÏÎÄ¼şÊÇ·ñÖØ¸´
        if(this->root->count(childFile)){
            //ÎÄ¼şÖØ¸´±¨´í
            //cout<<"´´½¨ÎÄ¼ş¼ĞÊ§°Ü£¬ÎÄ¼ş¼ĞÃû³öÏÖÖØ¸´"<<endl;
        } else {
            //cout<<"´´½¨ÎÄ¼ş¼Ğ³É¹¦"<<endl;
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
            cout<<"ÎÄ¼ş¼ĞÉ¾³ı³É¹¦"<<endl;
            tmpmessages = name + " success";
        } else {
            cout<<"ÎŞ´ËÎÄ¼ş¼Ğ£¬É¾³ıÎÄ¼ş¼ĞÊ§°Ü"<<endl;
            tmpmessages = name + " failed";
        }
    }
    void Rmdir(string filenamepath){
        string name = filenamepath;
        Folder *childFile = new Folder(name, FileType::FOLDER);
        if(this->root->erase(childFile)){
            this->DiskRmdir(childFile);
            //cout<<"ÎÄ¼ş¼ĞÉ¾³ı³É¹¦"<<endl;
        } else {
            //cout<<"ÎŞ´ÎÎÄ¼ş¼Ğ£¬É¾³ıÎÄ¼ş¼ĞÊ§°Ü"<<endl;
        }
    }
    void ls(){
        cout<<setw(10)<<"·ÃÎÊÈ¨ÏŞ"<<setw(20)<<"ÎÄ¼ş´óĞ¡"<<setw(25)<<"ĞŞ¸ÄÈÕÆÚ"<<setw(20)<<"ÎÄ¼şÃû"<<endl;
        int size = this->root->size();
        for(int i = 0; i < size; i++){
            cout<<setw(10) << (this->root->child[i]->type != FOLDER ? ACCESS[this->root->child[i]->access] : "\033[93mÎÄ¼ş¼Ğ\033[0m")
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
                    cout<<"ÎŞ´ËÎÄ¼ş¼Ğ"<<endl;
                    tmpmessages = name + " failed";
                }else{
                    root = (Folder *) this->root->find(new Folder(name, FOLDER));
                    tmpmessages = name + " success";
                }
            }else{
                cout<<"ÎŞ´ËÎÄ¼ş¼Ğ"<<endl;
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
                    //cout<<"ÎŞ´ËÎÄ¼ş¼Ğ"<<endl;
                }else{
                    root = (Folder *) this->root->find(new Folder(pathname, FOLDER));
                }
            }else{
                //cout<<"ÎŞ´ËÎÄ¼ş¼Ğ"<<endl;
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
            cout<<"´´½¨ÎÄ¼şÊ§°Ü£¬´ËÎÄ¼şÒÑ´æÔÚ£¡£¡"<<endl;
            tmpmessages =  childFile->path + " failed";
        } else {
            cout<<"´´½¨ÎÄ¼ş³É¹¦£¡"<<endl;
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
            //cout<<"´´½¨ÎÄ¼şÊ§°Ü£¬´ËÎÄ¼şÒÑ´æÔÚ£¡£¡"<<endl;
        } else {
            //cout<<"´´½¨ÎÄ¼ş³É¹¦£¡"<<endl;
            this->root->addChild(childFile);
            this->DiskWrite(childFile, 1);
        }
    }
    //ÓÃ»§µ÷ÓÃ
    void open(){
        string name, cmd;
        cin>>name;
        File *file = (File *)this->root->find(new File(name, DOCUMENT, fat));
        if(file != NULL){
            cout<<"ÎÄ¼ş¶ÁĞ´Á÷´ò¿ª³É¹¦£¡"<<endl;
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
                        pterr(name, "²»¿ÉĞ´");
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
            printf("ÎŞ·¨´ò¿ªÎÄ¼ş¶ÁĞ´Á÷£¬ÎŞ´ËÎÄ¼ş£¡\n");
            tmpmessages = file->path + " " + cmd + " failed";
        }
    }
    //ÄÚºËµ÷ÓÃ
    void open(string name, string cmd, string text = "(__null)"){
        string pathname = name, tempcmd = cmd, temptxt = text;
        File *file = (File *)this->root->find(new File(pathname, DOCUMENT, fat));
        if(file != NULL){
            //cout<<"ÎÄ¼ş¶ÁĞ´Á÷´ò¿ª³É¹¦£¡"<<endl;
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
            //printf("ÎŞ·¨´ò¿ªÎÄ¼ş¶ÁĞ´Á÷£¬ÎŞ´ËÎÄ¼ş£¡\n");
        }
    }
    void close(){
        if(outs == NULL || in == NULL){
            cout<<"ÎŞÎÄ¼ş¶ÁĞ´Á÷ĞèÒª¹Ø±Õ£¡"<<endl;
            tmpmessages = "none";
        }
        else{
            outs->close();
            in->close();
            cout<<"ÎÄ¼ş¶ÁĞ´Á÷¹Ø±Õ³É¹¦£¡"<<endl;
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
                cout<<"É¾³ıÎÄ¼ş³É¹¦£¡"<<endl;
                tmpmessages = childFile->path + " " + "success";
            }
            else{
                cout<<"´ËÎÄ¼şÎªÏµÍ³ÎÄ¼ş£¬É¾³ıÊ§°Ü"<<endl;
                tmpmessages = childFile->path + " " + "failed";
            }
        }else{
            cout<<"ÎŞ´ËÎÄ¼ş£¬É¾³ıÊ§°Ü£¡"<<endl;
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
            //cout<<"É¾³ıÎÄ¼ş³É¹¦£¡"<<endl;
        }else{
            //cout<<"ÎŞ´ËÎÄ¼ş£¬É¾³ıÊ§°Ü£¡"<<endl;
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
        string InitOK = "[\033[92mOK\033[0m]" + DiskName + "ÅÌÎÄ¼şÏµÍ³³õÊ¼»¯Íê³É";
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
    const string README = "ÊÇµÄ£¬Õâ¾ÍÊÇREADMEÎÄ¼ş\n    ÆäÊµÎÒÒ²ÏëÒª×öÕâ¸ö´óÏîÄ¿ºÃ¾ÃÁË¡£ÕâÒ²ÊÇÎÒµÚÒ»´Î×öÕâÃ´ÅÓ´óµÄÒ»¸öÏîÄ¿£¬ÓĞ²»ºÃµÄµØ·½Çë¶à°üÈİ£¬ÎÒ¼¼Êõ²»ºÃ£¬ÄÑÃâÓĞ²»ºÃµÄµØ·½£¬Çë¼ûÁÂ¡£\n    ÒªÊÇËµÎÒÎªÊ²Ã´Ïë×öÕâÃ´¸öÏîÄ¿£¬ÆäÊµÒ²ÊÇÊÖÑ÷Ñ÷¡£¶øÇÒÒòÎªÎÒÒÔÇ°Ò²×öÁËÒ»¸öÀàËÆÓÚÖÕ¶ËµÄ¶«Î÷£¬¿ÉÊÇÃ»×ö³öÀ´£¬ËùÒÔÕâ´ÎÏëÒªÌôÕ½Ò»ÏÂ¡£ÎÒ¿´ÁË±à³ÌÉçÇøµÄĞí¶àÀàËÆÓÚ´ËÀàµÄ×÷Æ·£¬u1s1£¬¶¼ºÜ²»´í£¬µ«ÊÇ¶¼ÓĞĞ©²»Ì«ºÃµÄµØ·½£¬±ÈÈçËµ¼ÓÔØ¶¯»­Ê±¼äÌ«³¤¡¢Êä³ö³¬³¤µÈÎÊÌâ£¬ËùÒÔÎÒÕâ´ÎÁ¬logo¶¼Ã»¼Ó£¬¾ÍÊÇÅÂ¼ÓÔØÌØĞ§Ì«Âı»òÕßÊä³ö³¬³¤£¬¶øÇÒ±à³ÌÉçÇøµÄC++Ò²Ö»ÄÜ×ödos¡£±¾À´ÎÒÒ²ÊÇÏëÒª×öÒ»¸öÄÜ¹»±£´æÓÃ»§Éè"
    "ÖÃµÄ¹¦ÄÜ£¬ÄÎºÎÑ§¶øË¼±à³ÌÉçÇøµÄÏŞÖÆ£¨²»ÔÊĞí´úÂë´´½¨ÎÄ¼ş»òÕß´´½¨ÍêÔËĞĞ½áÊø¾Í¸ü»»Ä¿Â¼£©£¬ËùÒÔ¾ÍÎŞ·¨ÊµÏÖÁË¡£¹ØÓÚ½çÃæÕâÒ»¿é£¬ÎÒ×î½üÕıÔÚ×öÒ»¸ö×¨ÊôÓÚC++µÄÍ¼ĞÎ¿â£¬µ«ÊÇÒòÎªÃ»×öÍê²¢Ã»ÓĞ·¢³öÀ´£¬ÎÒÔÚÕâ¸öÏîÄ¿ÀïÒ²¾ÍÖ»ÒıÓÃÁË²¿·Öº¯Êı¡£µÈ»ØÍ·ÄÇ¸ö¿â×öºÃÁË¡¢·¢³öÀ´ÁËÒÔºóÎÒ»á¸üĞÂ½çÃæµÄ¡£»¹ÓĞ¾ÍÊÇ¹ØÓÚ¿ªÔ´µÄÕâ¸öÎÊÌâ£¬ÎÒÏëºÃÁË£¬ÒÔºóÎÒÔÚ±à³ÌÉçÇø·¢µÄËùÓĞµÄÏîÄ¿Èç¹ûÃ»ÓĞÌØÊâËµÃ÷µÄÇé¿öÏÂ¶¼»á¿ªÔ´£¬¸÷Î»´óÀĞ¿ÉÒÔ°ïÎÒ²¹³ä»òÕßĞŞ¸ÄÄÚÈİ£¬ÍêÉÆÂß¼­ÉÏºÍ¼¼ÊõÉÏµÄ²»×ã£¬´úÂë×¢ÊÍÎÒ»áºÃºÃĞ´µÄ£¬ÓĞ²»ºÃµÄµØ·½¸úÎÒËµ£¬ÎÒ¸ÄÕı(doge)¡£È»ºóÎÒ»¹ÏëËµÃ÷ÒÔÏÂ¼¸µã:\n"    
    "    1.²»Ğí³­Ï®£¨ÕâØ¨¹Å²»±äµÄÁË¶¼£©¡£\n    2.¸Ä±àµÄ»°ÊÇ¿ÉÒÔµÄ£¬µ«ÊÇ¸Ä±àµÄÊ±ºòÒª½«×÷Æ·¸ÄÎª¸Ä±à£¬×ªÔØÊ±Òª¸ÄÎª×ªÔØ£¬Æä´Î¸½ÉÏ¸Ã×÷Æ·ÍøÖ·¡£\n    3.Èç¹ûÄã·¢ÏÖÈÎºÎbug»òÕßĞèÒª¸Ä½øµÄµØ·½ÓÖ»òÕßÊÇÏ£ÍûÔö¼ÓµÄ¹¦ÄÜÇë·¢ËÍÖÁÓÊÏäafanstudio@163.com£¬Èç¹ûÄãÏëÒª°ÑÄãĞ´µÄ³ÌĞò¼ÓÈëÆäÖĞ£¬Ò²¿ÉÒÔºÍÎÒËµ£¬²¢°ÑÔ´´úÂë·¢µ½ÉÏÊöÓÊÏä¡£×îºÃÊÇ¿ÉÒÔ´«²ÎµÄ³ÌĞò¡£\n                        by DxiesLawiye(¹ùÄ«Ğù)";
};
/*Ò»Ğ©¿ÉÁ¬½ÓÖ÷»ú£¬ÏëÌí¼Ó×Ô¼ºÖ÷»úµÄÔÚÕâÀïÌí¼Ó£¬ÏÖÔÚÃ»ÓÃÁË
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

//×¢²á±í£¨±£Áô£©
/*Type.h*/
enum Type{ //ÖµµÄÀàĞÍ
    RG_PC, //×Ö·û´®
    RG_BINARY //¶ş½øÖÆÊı
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
    string _key; //Öµ
    regPath _regpath;
    bool _isEx; //ÊÇ·ñÊÇÀ©Õ¹Ãû
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
        cout<<"ÓÃ»§Ãû:";
        cin>>username;
        hard.ac->showname = username;
        hard.ac->username = username;
        string tmp = "user" + username + ".h";
        filename = tmp;
        printf("¼ÓÔØÅäÖÃÎÄ¼ş:");
        int inttmp = finduserfile(filename);
        if(inttmp == true)
        {
            cout<<"\nÇëÊäÈëÃÜÂë"<<endl;
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
        cout<<"¿ªÊ¼´¢´æÅäÖÃ"<<endl;
        cout<<"¿ªÊ¼´´½¨ÓÃ»§ÎÄ¼ş,ÇëÊäÈëÓÃ»§Ãû"<<endl;
        cin>>username;
        CreateUserFile();
        cout<<"ÕıÔÚ´ò¿ªÎÄ¼ş"<<endl;
        ofstream writefile(filename);
        if(writefile.is_open() == 0)
        {
            cerr<<"open file failed";
            writefile.close();
            return;
        }
        cout<<"¿ªÊ¼Ğ´ÈëÓ²¼şĞÅÏ¢"<<endl;
        writefile<<"[SystemHardware]\n";
        cout<<"Ğ´Èë»ù±¾Ó²¼şĞÅÏ¢"<<endl;
        writefile<<"cpu:ADosCpu\n";
        WRITEFILEOK("Ğ´ÈëcpuÃû³Æ")
        writefile<<"kernel:2\n";//ÄÚºËÊı
        WRITEFILEOK("Ğ´ÈëÄÚºËÊıÁ¿")
        writefile<<"memory:4\n";//×ÜÄÚ´æ
        WRITEFILEOK("Ğ´Èë×ÜÄÚ´æ")
        cout<<"¿ªÊ¼Ğ´ÈëÅäÖÃ"<<endl;
        writefile<<"[SystemSet]\n";
        writefile<<"language:Chinese\n";
        WRITEFILEOK("Ğ´ÈëÓïÑÔÉèÖÃ")
        writefile<<"DKmemory:"<<sysset.DKmem<<"\n";
        WRITEFILEOK("Ğ´Èë´ÅÅÌ×Ü¿Õ¼ä")
        writefile<<"Mainmemory:"<<sysset.Mainmem<<"\n";
        WRITEFILEOK("Ğ´ÈëÖ÷·ÖÇø¿Õ¼ä")
        writefile<<"Othermem:"<<sysset.Othermem<<"\n";
        WRITEFILEOK("Ğ´ÈëÀ©Õ¹·ÖÇø¿Õ¼ä")
        writefile<<"ExDkNumber:"<<sysset.ExDkNumber<<"\n";
        WRITEFILEOK("Ğ´ÈëÀ©Õ¹·ÖÇøÊıÁ¿")
        writefile<<"ExDk1Name:"<<sysset.ExDk1Name<<"\n";
        writefile<<sysset.ExDk1Name<<":"<<sysset.ExDk1mem<<"\n";
        writefile<<"ExDk2Name:"<<sysset.ExDk2Name<<"\n";
        writefile<<sysset.ExDk2Name<<":"<<sysset.ExDk2mem<<"\n";
        WRITEFILEOK("Ğ´ÈëÀ©Õ¹·ÖÇøĞÅÏ¢")
        
        writefile.close();
    }
    void ChooseSet()
    {
        CHOOSE("\nÇëÑ¡ÔñÓïÑÔ(Ä¿Ç°Ö»Ö§³ÖÖĞÎÄ)","ÖĞÎÄ", "English(²»¿ÉÑ¡)")
        int tmp;
        cin >> tmp;
        if(tmp == 1)
        {
            sysset.languages = CHINESE;
        }
        system("clear");
        CHOOSE("ÇëÑ¡Ôñ´ÅÅÌ´óĞ¡","512MB","256MB")
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
        CHOOSE("ÊÇ·ñÈ«²¿·Ö¸øÖ÷·ÖÇø","ÊÇ","·ñ")
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
            printf("ÇëÌîÈë·ÖÅä¿Õ¼äÊı(10~125MB)\n");
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
            CHOOSE("ÇëÑ¡ÔñÀ©Õ¹·ÖÇøÊıÁ¿","1","2")
            cout<<endl;
            cin >> tmp;
            if(tmp != 2)
            {
                sysset.ExDkNumber = 1;
                cout << "ÇëÊäÈëÀ©Õ¹·ÖÇøÃû³Æ" << endl;
                cin >> sysset.ExDk1Name;
                sysset.ExDk2Name = "__null";
                sysset.ExDk1mem = sysset.Othermem;
                sysset.ExDk2mem = MEMNULL;
            }
            else
            {
                sysset.ExDkNumber = 2;
                cout << "ÇëÊäÈëÀ©Õ¹·ÖÇøÃû³Æ" << endl;
                printf("·ÖÇø1:");
                string tmpname1, tmpname2;
                cin >> tmpname1;
                sysset.ExDk1Name = tmpname1;
                cout<<endl;
                printf("·ÖÇø2:");
                cin >> tmpname2;
                sysset.ExDk2Name = tmpname2;
                cinmemagain:cout<<endl;
                cout<<"ÊäÈë·ÖÇø"<<"\""<<tmpname1<<"\"ËùĞè¿Õ¼ä(MB)"<<endl;
                int Dk1mem;
                cin>>Dk1mem;
                if(Dk1mem >= sysset.Othermem)
                    goto cinmemagain;
                sysset.ExDk1mem = Dk1mem;
                sysset.ExDk2mem = sysset.Othermem - sysset.ExDk1mem;
                printf("·ÖÇø%s¿Õ¼ä:%dMB\n", sysset.ExDk2Name.c_str(), sysset.ExDk2mem);
                CHECK("È·ÈÏÈç´Ë·ÖÅä","Y","N")
                char check;
                cin >> check;
                if(check != 'Y')
                    goto cinmemagain;
            }
            system("clear");
        }
        CHOOSE("ÊÇ·ñ°²×°ping","ÊÇ","·ñ")
        cout<<endl;
        cin >> tmp;
        if(tmp != 2)
            sysset.hasping = true;
        else
            sysset.hasping = false;
        CHOOSE("Ñ¡ÔñÎÄ¼şÏµÍ³£¨Õâ¸öÆäÊµ¾ÍÊÇ³äÊıµÄ¡­Ñ¡É¶¶¼ĞĞ£¬ÎÒ¼¼Êõ²»µ½ÄÄ¶ù£©","NTFS","FAT")
        cout<<endl;
        cin>>tmp;
        system("clear");
#define Dk1Name sysset.ExDk1Name.c_str()
#define Dk2Name sysset.ExDk2Name.c_str()
        printf("ÓïÑÔ:Chinese\n´ÅÅÌ¿Õ¼ä:%dMB\nÖ÷·ÖÇø¿Õ¼ä:%dMB\nÀ©Õ¹·ÖÇøÊıÁ¿:%d\nÀ©Õ¹·ÖÇøÃû³Æ:%s,%s\nÀ©Õ¹·ÖÇø¿Õ¼ä:%s:%d,%s:%d\n",sysset.DKmem,
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
        cout<<"ÓÎ¿ÍµÇÂ¼ÇëÊäÈë1(Ä¿Ç°Ö»ÄÜÓÎ¿ÍµÇÂ¼)"<<endl;
        cin>>login;
        if(login != 1){
            if(finduserfile(filename) == false)
            {
                sleep(2);
                ChooseSet();
            }
        }
        Animation();
        cout<<endl<<"ÕıÔÚ³õÊ¼»¯"<<endl;
        if(login == 1)
        {
            login_init_();
            loginif = login;
            cout<<"³õÊ¼»¯Íê³É"<<endl;
        }
        //SetupSystem();
        //delfile();
    }
    /*void tmpfunc()
    {
        ChooseSet();
    }*/
};

/*´´½¨´ÅÅÌ·ÖÇø*/
DiskManager dk_C("C","C:\\system\\");
DiskManager dk_E("E","E:\\root\\");
DiskManager dk_F("F","F:\\root\\");
//dk_tmp:TÅÌÎªÒ»¸öÁÙÊ±ÎÄ¼şÅÌ
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
    static void AddRoundKey(unsigned char *col,unsigned char *expansionkey,int round)//ÃÜ³×¼Ó
    {
    	int x;				
    	for(x=0;x<16;x++)
    	{
    		col[x]^=expansionkey[(round<<4)+x];
    	}
    }
    public:
    void AesEncrypt(unsigned char *blk,unsigned char *expansionkey,int Nr)//¼ÓÃÜÒ»¸öÇø¿é
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
    void ScheduleKey(unsigned char *inkey,unsigned char *outkey,int Nk,int Nr)//°²ÅÅÒ»¸ö±£ÃÜÃÜÔ¿Ê¹ÓÃ
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
        printf("please input plaintext\n");//ÊäÈëÎŞ¸ñÊ½µÄ×Ö·û´®×Ö·û¸öÊı²»µÃÉÙÓÚÁù¸ö£¡£¡£¡£¡¾¡Á¿ÓÃ²»Í¬µÄÊı×Ö»ò×ÖÄ¸
        scanf("%s",pt);
        printf("please input key\n");//ÊäÈë¼ÓÃÜÔ¿³×ÃÜ³×¸öÊı²»µÃµÍÓÚÁù¸ö£¡£¡£¡£¡¾¡Á¿ÓÃ²»Í¬µÄÊı×Ö»ò×ÖÄ¸
        scanf("%s",key);
        
        /*¼ÓÃÜ*/
        ScheduleKey(key,expansionkey,4,10);	//1¡¢ÃÜÔ¿À©Õ¹Éú³É
        AesEncrypt(pt,expansionkey,10);		//2¡¢AES ¼ÓÃÜ
        printf("AesEncrypt text is: ");	//Êä³öÃÜÂëÎÄ¼ş
        for (i = 0; i < 16; i++)
        {
            printf("%02x ", pt[i]);
        }
        printf("\n");
        printf("\n");
        
        /*½âÃÜ*/
        Contrary_AesEncrypt(pt,expansionkey,10);//AES ½âÃÜ
        printf("after Contrary_AesEncrypt,plaintext is: ");//½«½âÃÜÎÄ¼şÊä³ö
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
    string tmpExten = EXTEN20, tmpFilenamePath = FILEPATH20, filesystemp;//²»¼ÓEXTEN20ºÍFILEPATH20µÄ»°»á¸³ÖµÊ§°Ü
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
            print("ASSOC                                ÏÔÊ¾»òĞŞ¸ÄÎÄ¼şÀ©Õ¹Ãû¹ØÁª¡£");
            print("ASSOC -a [ºó×ºÃû]&[¿ÉÖ´ĞĞÎÄ¼şµØÖ·]   °ó¶¨»òĞŞ¸Ä°ó¶¨");
            print("ASSOC -b show                        ÏÔÊ¾°ó¶¨ÎÄ¼şÀ©Õ¹ÃûµÄÈí¼ş¡£");
            print("ASSOC -h help                        °ïÖú¡£");
            print("ASSOC -r return                      »Ö¸´Ä¬ÈÏÉèÖÃ¡£");
            print("ASSOC -s show                        ÏÔÊ¾È«²¿ÎÄ¼şÀ©Õ¹Ãû¡£");
        }
    }
    int show(string argv)//±ÜÃâ¾¯¸æËùÒÔ²»Ê¹ÓÃconst char*
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
        /*´óÁ¿if*/
        if(filesystemp.find(filePathName) == -1)
        {
            return 0;
        }
        string tempstr = getexten(filePathName);
        ExtenNoneSpace(tempstr);
        if(tempstr != ".adexe")
        {
            pterr(filePathName, "²»ÊÇ¿ÉÖ´ĞĞÎÄ¼ş");
            return -1;
        }
        Extenf("7z"){
            extension->_7z = filePathName;
        }
        Extenif("adexe"){
            pterr(ExtensionCall, "²»ÄÜ¸ü¸Ä");
            return 3;
        }
        Extenif("adll"){
            pterr(ExtensionCall, "²»ÄÜ¸ü¸Ä");
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
    int ASSOC(const char* argv1, const char* argv2)//¼Ù×°ÊÇ¸ömainº¯ÊıµÄÈë¿Úº¯Êı
    {
        if(argv1[0] != '-')
        {
            pterr(argv1, "¸ñÊ½²»·ûºÏÒªÇó");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
                if(!split(argv2, tmpExten, tmpFilenamePath))
                {
                    pterr(argv2, "È±ÉÙ\"&\"");
                    break;
                }
                cout<<tmpExten<<endl<<tmpFilenamePath<<endl;
                if(tmpExten.length() > EXTENMAX || tmpFilenamePath.length() > FILEPATHMAX)
                {
                    cout<<"ÎÄ¼şÀ©Õ¹Ãû»òÕßÎÄ¼şÃû³¤¶È´óÓÚ20£¬ÇëÖØĞÂÊäÈë£¡"<<endl;
                    break;
                }
                ExtenNoneSpace(tmpExten);
                FilepathNoneSpace(tmpFilenamePath);
                temp = binding(tmpExten, tmpFilenamePath);
                if(temp == 0){
                    pterr(tmpFilenamePath, "ÎŞ´ËÎÄ¼ş");
                }
                else if(temp == 1){
                    cout<<"ĞŞ¸Ä³É¹¦£¡"<<endl;
                }
                else if(temp == 2){
                    pterr(tmpExten, "ÎŞ´Ëºó×ºÃû");
                }
                __init__();//²»¼ÓµÄ»°»á³öÎÊÌâ£¬±ÈÈç×Ö·ûµÄ¸²¸Ç²»»á¸²¸ÇÕû¸ö×Ö·û´®
            break;
            case 'b':
                temp = show(argv2);
                if(temp == 0)
                {
                    pterr(argv2, "Ã»ÓĞÕÒµ½´ËÃüÁî»òÎÄ¼ş");
                }
            break;
            case 'h':
                help();
            break;
            case 'r':
                extension = &returnenten;//ÀûÓÃC++×Ô¶¯²¹³äÈ±Ê¡º¯ÊıµÄÌØĞÔ
                cout<<"ÖØÖÃ³É¹¦£¡"<<endl;
            break;
            case 's':
                temp = show_s(argv2);
                if(temp == 0)
                {
                    pterr(argv2, "Ã»ÓĞÕÒµ½´ËÃüÁî»òÎÄ¼ş");
                }
            break;
            default:
                help();
                printf("ÄúËùÊäÈëµÄÖ¸ÁîÓĞÎÊÌâ£¬ÇëÖØĞÂÊäÈë.\n");
            break;
        }
        return 0;
    }
};
/*ÉèÖÃÄ¬ÈÏµÄ¿ØÖÆÌ¨Ç°¾°ºÍ±³¾°ÑÕÉ«¡£

COLOR -s [Ç°¾°É«&±³¾°É«]


ÑÕÉ«ÊôĞÔÓÉÁ½¸öÊ®Áù½øÖÆÊı×ÖÖ¸¶¨ -- µÚÒ»¸öÎªÇ°¾°£¬µÚ¶ş¸öÔòÎª
±³¾°¡£Ã¿¸öÊı×Ö¿ÉÒÔÎªÒÔÏÂÈÎºÎÖµÖ®Ò»:

    0 = ºÚÉ«       8 = »ÒÉ«
    1 = À¶É«       9 = µ­À¶É«
    2 = ÂÌÉ«       A = µ­ÂÌÉ«
    3 = Ç³ÂÌÉ«     B = µ­Ç³ÂÌÉ«
    4 = ºìÉ«       C = µ­ºìÉ«
    5 = ×ÏÉ«       D = µ­×ÏÉ«
    6 = »ÆÉ«       E = µ­»ÆÉ«
    7 = °×É«       F = ÁÁ°×É«

Èç¹ûÃ»ÓĞ¸ø¶¨ÈÎºÎ²ÎÊı£¬¸ÃÃüÁî»á½«ÑÕÉ«»¹Ô­µ½Æô¶¯Ê±µÄÑÕÉ«¡£
ÀıÈç: "COLOR -s cf" ÔÚÁÁ°×É«ÉÏ²úÉúÁÁºìÉ«*/
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
                print("CDK -a [Â·¾¶]                             ½øÈëËùÊäÈëµÄÂ·¾¶¡£");
                print("CDK -r return                             »Øµ½×î³õÂ·¾¶¡£");
                print("CDK -h help                               °ïÖú¡£");
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
            //¿ªÊ¼²ğ·Ö,ÕâÒ»²¿·ÖÒÑ¾­·ÏÆúÁË£¬ÏëÒªÊÔÊÔ¿ÉÒÔÊÔÊÔ
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
            tmpPath = regex_replace(out, pattern, "\\");//ÕıÔò±í´ïÊ½·Ö¸îÌæ»»×Ö·û´®
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
            pterr(argv1, "¸ñÊ½²»·ûºÏÒªÇó");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
                tmp = changeMenu(argv2);
                if(tmp == 3){
                    pterr(argv2, "Ò»´ÎÇëÖ»ÊäÈëÒ»¼¶Â·¾¶");
                }
                if(tmp == 2){
                    pterr(argv2, "ÎÄ¼ş¼Ğ²»ÔÚ´ËÄ¿Â¼ÏÂ");
                }
                if(tmp == 1){
                    pterr(argv2, "²»ÊÇÎÄ¼ş¼Ğ");
                }
                if(tmp == -1){
                    pterr(argv2, "Â·¾¶²»´æÔÚ");
                }
                if(tmp == -2){
                    pterr(argv2, "Â·¾¶¸ñÊ½´íÎó");
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
                printf("ÄúËùÊäÈëµÄÖ¸ÁîÓĞÎÊÌâ£¬ÇëÖØĞÂÊäÈë.\n");
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
            print("ÉèÖÃÄ¬ÈÏµÄ¿ØÖÆÌ¨Ç°¾°ºÍ±³¾°ÑÕÉ«¡£");
            print("COLOR -s [Ç°¾°É«]                                     ÉèÖÃÑÕÉ«¡£");
            print("");
            print("ÑÕÉ«¿ÉÒÔÊ¹ÒÔÏÂÈÎºÎÊıÖµ");
            print("0 = ºÚÉ«       8 = »ÒÉ«");
            print("1 = À¶É«       9 = µ­À¶É«");
            print("2 = ÂÌÉ«       A = µ­ÂÌÉ«");
            print("3 = Ç³ÂÌÉ«     B = µ­Ç³ÂÌÉ«");
            print("4 = ºìÉ«       C = µ­ºìÉ«");
            print("5 = ×ÏÉ«       D = µ­×ÏÉ«");
            print("6 = »ÆÉ«       E = µ­»ÆÉ«");
            print("7 = °×É«       F = ÁÁ°×É«");
            print("");
            print("Èç¹û²ÎÊıÎª\"n\"£¬¸ÃÃüÁî»á½«ÑÕÉ«»¹Ô­µ½Æô¶¯Ê±µÄÑÕÉ«¡£");
            print("COLOR -h help                                         »ñÈ¡°ïÖú¡£");
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
            pterr(argv1, "¸ñÊ½²»·ûºÏÒªÇó");
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
                    pterr(argv2[0], "ÑÕÉ«²»´æÔÚ");
                }
                /*if(tmp == -2)
                {
                    pterr(argv2[2], "ÑÕÉ«²»´æÔÚ");
                }
                if(tmp == 3)
                {
                    pterr(argv2[1], "Á¬½Ó·ûºÅ´íÎó");
                }*/
            break;
            default:
                help();
                printf("ÄúËùÊäÈëµÄÖ¸ÁîÓĞÎÊÌâ£¬ÇëÖØĞÂÊäÈë.\n");
            break;
        }
        return 0;
    }
};
class COUNTEREXE
{
    private:
    string formula;
    stack<char> opt;//²Ù×÷·ûÕ»
    stack<double> val;//²Ù×÷ÊıÕ»
    int LargeNumberFactorial[1000] = { 0 };//Çó½×³ËËùÓÃÊı×é
    
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
                cout<<"±í´ïÊ½´íÎó£¡"<<endl;
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
                state = IN; //×´Ì¬¸ÄÎªÔÚÊı×ÖÄÚ
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
    	int theInt = 0; //Ôİ´æÊı×Ö
    	int state = OUT;//³õÊ¼×´Ì¬ÎªÔÚÊı×ÖÍâ
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
    				state = IN; //×´Ì¬ÎªÔÚÊı×ÖÄÚ
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
    				default:cout << "Î´ÖªµÄ´íÎó!" << endl;
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
    
    /*ÇóÈı½Çº¯ÊıÀï°üº¬µÄÊı×Ö²¢Çó³ö¶ÔÓ¦µÄ½á¹û*/
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
    
    /*ÅĞ¶ÏÊÇ·ñÎªÇó½×³Ë*/
    bool Judge_factorial(string& theStr)
    {
    	int len = theStr.length();
    	for (int i = 0; i < len; i++)
    		if (theStr[i] == '!')
    			return true;
    	return false;
    }
    
    /*Çó½×³ËËùÇóµÄÊı×Ö*/
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
    
    /*ÀûÓÃÊı×éÇó½×³Ë*/
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
        //ÅĞ¶ÏÊÇ·ñÈı½Çº¯ÊıºÍ·´Èı½Çº¯Êı²¢ÇóÖµ
		if(Judge_rectangle(formula) != 0) {		
			double res = 0;
			res = cal_rect_number(formula, Judge_rectangle(formula));
			if (res)
				cout << "½á¹ûÎª: " << fixed << setprecision(9) << res << endl;
		}

		//Çó½×³ËµÄÇé¿ö
		else if (Judge_factorial(formula)) {
			int n = cal_factorial_number(formula);
			cout << "½á¹ûÎª: ";
			for (int i = cal_factorial(n); i > 0; i--)
				cout << LargeNumberFactorial[i];
			cout << endl;
		}

		//ÊÇ¼Ó¼õ³Ë³ıµÄÇé¿ö
		else{
			while (!opt.empty()) {
				opt.pop();
			}
			while (!val.empty()) {
				val.pop();
			}
			del_space(formula);//È¥³ı¿Õ¸ñ
			string cng_exp;
			cng_exp.clear();
			change(formula, cng_exp);	//×ª»»Îªºó×º±í´ïÊ½
			compute(cng_exp);//¼ÆËãºó×º±í´ïÊ½
			double stdans = val.top();
			cout << "½á¹ûÎª:" << (double)stdans << endl;
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
                print("CONFIG -a ac                             ÓÃ»§ĞÅÏ¢");
                print("CONFIG -a cpu                            cpuĞÅÏ¢");
                print("CONFIG -a disk                           ´ÅÅÌĞÅÏ¢");
                print("CONFIG -a kb                             ¼üÅÌĞÅÏ¢");
                print("CONFIG -a ms                             Êó±êĞÅÏ¢");
                print("CONFIG -a usb                            usb½Ó¿ÚĞÅÏ¢");
                print("CONFIG -h help                           °ïÖú¡£");
            }
    }
    void ac(){
        PRINT_HELP(printf("==========================Computer=============================\n"),
                    printf("================================================================\n"))
            {
                cout<<"ip£º"<<hard.ac->ip<<endl;
                cout<<"UUID£º"<<hard.ac->UUID<<endl;
                cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.ac->showname<<endl;
                cout<<"ÓÃ»§Ãû³Æ£º"<<hard.ac->username<<endl;
                cout<<"°æÈ¨£º"<<hard.ac->Aboutcopyright<<endl;
                cout<<"°æ±¾£º"<<hard.ac->Version<<endl;
                cout<<"ÃèÊö£º"<<hard.ac->text<<endl;
            }
    }
    void aboutcpu(){
        PRINT_HELP(printf("==========================CPU=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"Ãû³Æ£º"<<hard.cpus->cpuname<<endl;
                cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.cpus->showname<<endl;
                cout<<"³¤Ãû³Æ£º"<<hard.cpus->longName<<endl;
                cout<<"¶ÌÃû³Æ£º"<<hard.cpus->shortName<<endl;
                cout<<"Çı¶¯Ãû³Æ£º"<<hard.cpus->divname<<endl;
                cout<<"UUID£º"<<hard.cpus->UUID<<endl;
                cout<<"×ÜÄÚ´æ£º"<<hard.cpus->cpumem<<endl;
                cout<<"ĞéÄâÄÚ´æ£º"<<hard.cpus->Virtmem<<endl;
                cout<<"Ó²¼şÕ¼ÓÃÄÚ´æ£º"<<hard.cpus->hardwareUse<<endl;
                cout<<"±£»¤ÄÚ´æ£º"<<hard.cpus->protect<<endl;
                cout<<"¿ÉÓÃÄÚ´æ£º"<<hard.cpus->canuse<<endl;
                cout<<"ºËĞÄÊı£º"<<hard.cpus->cpuKernelNum<<endl;
                cout<<"Ïß³ÌÉÏÏŞ£º"<<hard.cpus->ThreadMax<<endl;
                cout<<"ÖÆÔìÉÌ£º"<<hard.cpus->mker<<endl;
                cout<<"Çı¶¯³ÌĞòÂ·¾¶£º"<<hard.cpus->FilePath<<endl;
                cout<<"°²×°Ê±¼ä£º"<<hard.cpus->date<<endl;
                cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.cpus->issys<<endl;
                cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.cpus->canDel<<endl;
                cout<<"±¸×¢£º"<<hard.cpus->text<<endl;
            }
    }

    void _adisk(){
        system("clear");
         PRINT_HELP(printf("==========================DISK=============================\n"),
                    printf("==============================================================\n"))
            {
                cout<<"ÊıÁ¿£º"<<hard.disk->DiskNum<<endl;
                cout<<"×ÜÄÚ´æ£º"<<hard.disk->AllMem<<endl;
                PRINT_HELP(printf("==========================C:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"Ãû³Æ£º"<<hard.disk->disk1.name<<endl;
                    cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.disk->disk1.showName<<endl;
                    cout<<"³¤Ãû³Æ£º"<<hard.disk->disk1.longName<<endl;
                    cout<<"¶ÌÃû³Æ£º"<<hard.disk->disk1.shortName<<endl;
                    cout<<"·ÖÇøÀàĞÍ£º"<<hard.disk->disk1.PartType<<endl;
                    cout<<"×´Ì¬£º\033[92m"<<hard.disk->disk1.state<<"\033[0m"<<endl;
                    cout<<"UUID£º"<<hard.disk->disk1.UUID<<endl;
                    cout<<"Çı¶¯Ãû³Æ£º"<<hard.disk->disk1.divName<<endl;
                    cout<<"´ÅÅÌ¿Õ¼ä£¨byte£©£º"<<hard.disk->disk1.DiskMem<<endl;
                    cout<<"±£»¤¿Õ¼ä£¨byte£©£º"<<hard.disk->disk1.protectMem<<endl;
                    cout<<"ÖÆÔìÉÌ£º"<<hard.disk->disk1.mker<<endl;
                    cout<<"Çı¶¯Â·¾¶£º"<<hard.disk->disk1.FilePath<<endl;
                    cout<<"°²×°Ê±¼ä£º"<<hard.disk->disk1.date<<endl;
                    cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.disk->disk1.issys<<endl;
                    cout<<"ÊÇ·ñÎªÆô¶¯ÅÌ£º"<<hard.disk->disk1.isopen<<endl;
                    cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.disk->disk1.canDel<<endl;
                    cout<<"±¸×¢£º"<<hard.disk->disk1.text<<endl;
                }
                PRINT_HELP(printf("==========================E:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"Ãû³Æ£º"<<hard.disk->disk2.name<<endl;
                    cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.disk->disk2.showName<<endl;
                    cout<<"³¤Ãû³Æ£º"<<hard.disk->disk2.longName<<endl;
                    cout<<"¶ÌÃû³Æ£º"<<hard.disk->disk2.shortName<<endl;
                    cout<<"·ÖÇøÀàĞÍ£º"<<hard.disk->disk2.PartType<<endl;
                    cout<<"×´Ì¬£º\033[92m"<<hard.disk->disk2.state<<"\033[0m"<<endl;
                    cout<<"UUID£º"<<hard.disk->disk2.UUID<<endl;
                    cout<<"Çı¶¯Ãû³Æ£º"<<hard.disk->disk2.divName<<endl;
                    cout<<"´ÅÅÌ¿Õ¼ä£¨byte£©£º"<<hard.disk->disk2.DiskMem<<endl;
                    cout<<"±£»¤¿Õ¼ä£¨byte£©£º"<<hard.disk->disk2.protectMem<<endl;
                    cout<<"ÖÆÔìÉÌ£º"<<hard.disk->disk2.mker<<endl;
                    cout<<"Çı¶¯Â·¾¶£º"<<hard.disk->disk2.FilePath<<endl;
                    cout<<"°²×°Ê±¼ä£º"<<hard.disk->disk2.date<<endl;
                    cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.disk->disk2.issys<<endl;
                    cout<<"ÊÇ·ñÎªÆô¶¯ÅÌ£º"<<hard.disk->disk2.isopen<<endl;
                    cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.disk->disk2.canDel<<endl;
                    cout<<"±¸×¢£º"<<hard.disk->disk2.text<<endl;
                }
                PRINT_HELP(printf("==========================F:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"Ãû³Æ£º"<<hard.disk->disk3.name<<endl;
                    cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.disk->disk3.showName<<endl;
                    cout<<"³¤Ãû³Æ£º"<<hard.disk->disk3.longName<<endl;
                    cout<<"¶ÌÃû³Æ£º"<<hard.disk->disk3.shortName<<endl;
                    cout<<"·ÖÇøÀàĞÍ£º"<<hard.disk->disk3.PartType<<endl;
                    cout<<"×´Ì¬£º\033[92m"<<hard.disk->disk3.state<<"\033[0m"<<endl;
                    cout<<"UUID£º"<<hard.disk->disk3.UUID<<endl;
                    cout<<"Çı¶¯Ãû³Æ£º"<<hard.disk->disk3.divName<<endl;
                    cout<<"´ÅÅÌ¿Õ¼ä£¨byte£©£º"<<hard.disk->disk3.DiskMem<<endl;
                    cout<<"±£»¤¿Õ¼ä£¨byte£©£º"<<hard.disk->disk3.protectMem<<endl;
                    cout<<"ÖÆÔìÉÌ£º"<<hard.disk->disk3.mker<<endl;
                    cout<<"Çı¶¯Â·¾¶£º"<<hard.disk->disk3.FilePath<<endl;
                    cout<<"°²×°Ê±¼ä£º"<<hard.disk->disk3.date<<endl;
                    cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.disk->disk3.issys<<endl;
                    cout<<"ÊÇ·ñÎªÆô¶¯ÅÌ£º"<<hard.disk->disk3.isopen<<endl;
                    cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.disk->disk3.canDel<<endl;
                    cout<<"±¸×¢£º"<<hard.disk->disk3.text<<endl;
                }
                PRINT_HELP(printf("==========================T:=============================\n"),
                    printf("==============================================================\n"))
                {
                    cout<<"Ãû³Æ£º"<<hard.disk->disk4.name<<endl;
                    cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.disk->disk4.showName<<endl;
                    cout<<"³¤Ãû³Æ£º"<<hard.disk->disk4.longName<<endl;
                    cout<<"¶ÌÃû³Æ£º"<<hard.disk->disk4.shortName<<endl;
                    cout<<"·ÖÇøÀàĞÍ£º"<<hard.disk->disk4.PartType<<endl;
                    cout<<"×´Ì¬£º\033[92m"<<hard.disk->disk4.state<<"\033[0m"<<endl;
                    cout<<"UUID£º"<<hard.disk->disk4.UUID<<endl;
                    cout<<"Çı¶¯Ãû³Æ£º"<<hard.disk->disk4.divName<<endl;
                    cout<<"´ÅÅÌ¿Õ¼ä£¨byte£©£º"<<hard.disk->disk4.DiskMem<<endl;
                    cout<<"±£»¤¿Õ¼ä£¨byte£©£º"<<hard.disk->disk4.protectMem<<endl;
                    cout<<"ÖÆÔìÉÌ£º"<<hard.disk->disk4.mker<<endl;
                    cout<<"Çı¶¯Â·¾¶£º"<<hard.disk->disk4.FilePath<<endl;
                    cout<<"°²×°Ê±¼ä£º"<<hard.disk->disk4.date<<endl;
                    cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.disk->disk4.issys<<endl;
                    cout<<"ÊÇ·ñÎªÆô¶¯ÅÌ£º"<<hard.disk->disk4.isopen<<endl;
                    cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.disk->disk4.canDel<<endl;
                    cout<<"±¸×¢£º"<<hard.disk->disk4.text<<endl;
                }
            }
            cout<<"°´ÈÎÒâ¼üÍË³ö"<<endl;
            string tmp;
            cin>>tmp;
            system("clear");
    }
    void _kb(){
        PRINT_HELP(printf("==========================KeyBoard=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"Ãû³Æ£º"<<hard.kb->kbname<<endl;
                cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.kb->showname<<endl;
                cout<<"³¤Ãû³Æ£º"<<hard.kb->longName<<endl;
                cout<<"¶ÌÃû³Æ£º"<<hard.kb->shortName<<endl;
                cout<<"Çı¶¯Ãû³Æ£º"<<hard.kb->divname<<endl;
                cout<<"UUID£º"<<hard.kb->UUID<<endl;
                cout<<"ÖÆÔìÉÌ£º"<<hard.kb->mker<<endl;
                cout<<"Çı¶¯³ÌĞòÂ·¾¶£º"<<hard.kb->FilePath<<endl;
                cout<<"°²×°Ê±¼ä£º"<<hard.kb->date<<endl;
                cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.kb->issys<<endl;
                cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.kb->canDel<<endl;
                cout<<"±¸×¢£º"<<hard.kb->text<<endl;
            }
    }
    void _ms(){
        PRINT_HELP(printf("==========================Mouse=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"Ãû³Æ£º"<<hard.ms->msname<<endl;
                cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.ms->showname<<endl;
                cout<<"³¤Ãû³Æ£º"<<hard.ms->longName<<endl;
                cout<<"¶ÌÃû³Æ£º"<<hard.ms->shortName<<endl;
                cout<<"Çı¶¯Ãû³Æ£º"<<hard.ms->divname<<endl;
                cout<<"UUID£º"<<hard.ms->UUID<<endl;
                cout<<"ÖÆÔìÉÌ£º"<<hard.ms->mker<<endl;
                cout<<"Çı¶¯³ÌĞòÂ·¾¶£º"<<hard.ms->FilePath<<endl;
                cout<<"°²×°Ê±¼ä£º"<<hard.ms->date<<endl;
                cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.ms->issys<<endl;
                cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.ms->canDel<<endl;
                cout<<"±¸×¢£º"<<hard.ms->text<<endl;
            }
    }
    void _usb(){
        PRINT_HELP(printf("==========================USB=============================\n"),
                    printf("============================================================\n"))
            {
                cout<<"Ãû³Æ£º"<<hard.usb->USBname<<endl;
                cout<<"ÏÔÊ¾Ãû³Æ£º"<<hard.usb->showname<<endl;
                cout<<"³¤Ãû³Æ£º"<<hard.usb->longName<<endl;
                cout<<"¶ÌÃû³Æ£º"<<hard.usb->shortName<<endl;
                cout<<"Çı¶¯Ãû³Æ£º"<<hard.usb->divname<<endl;
                cout<<"ÄÚ´æ·¶Î§£º"<<hard.usb->USBmemLow<<"~"<<hard.usb->USBmemHigh<<endl;
                cout<<"UUID£º"<<hard.usb->UUID<<endl;
                cout<<"ÖÆÔìÉÌ£º"<<hard.usb->mker<<endl;
                cout<<"Çı¶¯³ÌĞòÂ·¾¶£º"<<hard.usb->FilePath<<endl;
                cout<<"°²×°Ê±¼ä£º"<<hard.usb->date<<endl;
                cout<<"ÊÇ·ñÎªÏµÍ³£º"<<hard.usb->issys<<endl;
                cout<<"ÊÇ·ñ¿ÉÉ¾³ı£º"<<hard.usb->canDel<<endl;
                cout<<"±¸×¢£º"<<hard.usb->text<<endl;
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
            pterr(argv1, "¸ñÊ½²»·ûºÏÒªÇó");
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
                printf("ÄúËùÊäÈëµÄÖ¸ÁîÓĞÎÊÌâ£¬ÇëÖØĞÂÊäÈë.\n");
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
/*DISKÃüÁîÃ»É¶ÓÃÁË*/
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
                print("DISK -a [´ÅÅÌÃû|´ÅÅÌÃû]&[ËùĞè¿Õ¼ä]       ÖØĞÂ·ÖÅä´ÅÅÌ¿Õ¼ä¡£");
                print("DISK -b [´ÅÅÌÃû]                         ¸ñÊ½»¯´ÅÅÌ¡£");
                print("DISK -d [´ÅÅÌÃû]                         Çå¿Õ´ÅÅÌ·ÖÇø¡£");
                print("DISK -s show                             ²é¿´´ÅÅÌ¿Õ¼äÊ¹ÓÃÇé¿ö¡£");
                print("DISK -h help                             °ïÖú¡£");
                print("DISK -r return                           »Ö¸´³ö³§ÉèÖÃ");
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
            CHECK("ÊÇ·ñÇå³ı£¿", "1", "2")
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
            CHECK("ÊÇ·ñÇå³ı£¿", "1", "2")
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
            pterr(argv1, "¸ñÊ½²»·ûºÏÒªÇó");
            help();
            return -1;
        }
        switch(argv1[1])
        {
            case 'a':
            break;
            case 'b':
                CHECK("È·¶¨¸ñÊ½»¯£¿", "1", "2")
                int temps;
                cin >> temps;
                if(temps == 1)
                {
                    tmp = DeleteMem(argv2);
                    if(tmp == -1)
                    {
                        cout<<"²»ÄÜÇå¿Õ¸ÃÓ²ÅÌÄÚÈİ£¬¸ñÊ½»¯Ê§°Ü"<<endl;
                    }
                    else{
                        cout << "ÒÑÍê³É" << endl;
                    }
                }
                else{
                    cout<<"ÒÑÈ¡Ïû¸ñÊ½»¯"<<endl;
                }
            break;
            case 'd':
                tmp = DeleteMem(argv2);
                if(tmp == -1)
                {
                    cout<<"²»ÄÜÇå¿Õ¸ÃÓ²ÅÌÄÚÈİ"<<endl;
                }
            break;
            case 's':
                tmp = show(argv2);
                if(tmp == -1)
                {
                    pterr(argv2, "Ó¦¸ÃÎªshow");
                }
                if(tmp == 1)
                {
                    cout<<"\033[92mÇå³ı³É¹¦!\033[0m"<<endl;
                }
            break;
            case 'h':
                help();
            break;
            case 'r':
            break;
            default:
                help();
                printf("ÄúËùÊäÈëµÄÖ¸ÁîÓĞÎÊÌâ£¬ÇëÖØĞÂÊäÈë.\n");
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
        pterr(hostname, "ÎŞ·¨µÃµ½IP£¡");
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
        printf("»¶Ó­Ê¹ÓÃHillÃÜÂë\n");
        cout<<"ÇëÌîĞ´ÎÄ×Ö£¨60¸ö×Ö·ûÒÔÄÚ£©"<<endl;
        cin>>text;
        cout<<"ÇëÑ¡Ôñ¼ÓÃÜ£¨1£©»¹ÊÇ½âÃÜ£¨2£©"<<endl;
        cin>>num;
        cout<<"ÇëÊäÈëÃØÔ¿£¨ÓÃ¿Õ¸ñ·Ö¿ªµÄÊı×é,ºá¶şÊú¶ş¹²ËÄ¸öÊı£©\n";
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
                //´¢´æÃÜÎÄintÖµ
                temp2[0] = (temp1[0] * K1[0][0] + temp1[i] * K1[1][0]) % 26;
                temp2[1] = (temp1[0] * K1[0][1] + temp1[i] * K1[1][1]) % 26;
                T2[i] = temp2[0];
                T2[i + 1] = temp2[1];
            }
            if(flag == 1)
                len = len - 1;
            for(i = 0; i < len; i++)
                result[i] = T2[i] + 'a';
            cout<<"Ã÷ÎÄ"<<text<<"µÄÃÜÎÄÎª£º"<<result<<endl;
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
            //KµÄÄæ
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
            //µÃµ½½âÃÜ½á¹ûºó´¢´æÔÚT2ÖĞ
            for(i = 0; i < len; i += 2){
                temp2[0] = T2[i];
                temp2[1] = T2[i + 1];
                //´¢´æÃÜÎÄintÖµ
                temp1[0] = (temp2[0] * K2[0][0] + temp2[i] * K2[1][0]) % 26;
                temp1[1] = (temp2[0] * K2[0][1] + temp2[i] * K2[1][1]) % 26;
                T1[i] = temp1[0];
                T1[i + 1] = temp1[1];
            }
            if(flag == 1)
                len = len - 1;
            for(i = 0; i < len; i++)
                result[i] = T1[i] + 'a';
            cout<<"ÃÜÎÄ"<<text<<"µÄÃ÷ÎÄÎª£º"<<result<<endl;
        }
    }
};
#define INSTALLMAX 3 //ÒªÌí¼Ó²å¼ş»òÕßÈí¼şµÄÔÚÕâÀïÌí¼Ó
class INSTALLEXE
{
    private:
    string canInstall[INSTALLMAX] = {"Hill.adexe", "Virginia.adexe", "INET.adexe"};//ÕâÀïÒ²ÒªÌí¼Ó
    void help(){
        PRINT_HELP(printf("==========================INSTALL==============================\n"),
                    printf("===============================================================\n"))
            {
                print("INSTALL -d [Ãû³Æ]                É¾³ıÄ³¸öÈí¼ş¡£");
                print("INSTALL -s [Ãû³Æ]                ÏÂÔØ¡£");
                print("INSTALL -s show                  ÏÔÊ¾ÄÜÏÂÔØµÄÄÚÈİ¡£");
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
            pterr(argv.c_str(), "²»´æÔÚ»òÕßÎ´ÏÂÔØ£¡");
            return false;
        }
        cout<<"É¾³ı³É¹¦£¡"<<endl;
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
            pterr(argv.c_str(), "²»´æÔÚ»òÕßÒÑÏÂÔØ¹ı£¡");
            return false;
        }
        cout<<"ÏÂÔØ³É¹¦£¡"<<endl;
        return true;
    }
    public:
    int INSTALL(const char* argv1, const char* argv2){
        if(argv1[0] != '-')
        {
            pterr(argv1, "¸ñÊ½²»·ûºÏÒªÇó");
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
                printf("ÄúËùÊäÈëµÄÖ¸ÁîÓĞÎÊÌâ£¬ÇëÖØĞÂÊäÈë.\n");
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
        cout<<"¹²ÓĞ"<<size<<"¸ö½ø³Ì/Ïß³ÌÕıÔÚÔËĞĞ"<<endl;
        cout<<"ĞòºÅ"<<" Ãû³Æ"<<"     "<<"PID"<<"     "<<"ÄÚ´æÕ¼ÓÃ"<<"                           "<<"ĞéÄâÄÚ´æÕ¼ÓÃ"<<endl;
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

/*Ping ¿½±´×Ôhttps://www.cnblogs.com/ggjucheng/archive/2012/02/17/2355564.html*/
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
            /*Éú³ÉÊ¹ÓÃICMPµÄÔ­Ê¼Ì×½Ó×Ö£¬ÕâÖÖÌ×½Ó×ÖÖ»ÓĞroot²ÅÄÜÉú³É*/
            if((m_sockfd = socket(AF_INET, SOCK_RAW, protocol->p_proto)) < 0){
                extern int errno;
                pingResult.error = strerror(errno);
                return false;
            }
            /*À©´óÌ×½Ó×Ö½ÓÊÕ»º³åÇøµ½50kbÕâÑù×öÖ÷ÒªÎªÁË¼õĞ¡½ÓÊÕ»º³åÇøÒç³öµÄ¿ÉÄÜĞÔ£¬
            ÈôÎŞÒâÖĞpingÒ»¸ö¹ã²¥µØÖ·»ò¶à²¥µØÖ·£¬½«»áÒıÀ´´óÁ¿Ó¦´ğ*/
            setsockopt(m_sockfd, SOL_SOCKET, SO_RCVBUF, &size, sizeof(size));
            /*»ñÈ¡mainµÄ½ø³Ìid£¬ÓÃÓÚÉèÖÃICMPµÄ±êÖ¾·û*/
            if(!getsockaddr(host.c_str(), &m_dest_addr)){
                pingResult.error = "unknow host" + host;
                return false;
            }
            pingResult.ip = inet_ntoa(m_dest_addr.sin_addr);
            sendPacket(); /*·¢ËÍËùÓĞICMP±¨ÎÄ*/
            recvPacket(pingResult); /*½ÓÊÕËùÓĞICMP±¨ÎÄ*/
            pingResult.nsend = m_nsend;
            pingResult.nreceived = m_nreceived;
            close(m_sockfd);
            return true;
        }
    private:
        /*Ğ£ÑéºÍËã·¨*/
        unsigned short getChksum(unsigned short *addr, int len){
            int nleft = len;
            int sum = 0;
            unsigned short *w = addr;
            unsigned short answer = 0;
            /*°ÑICMP±¨Í·¶ş½øÖÆÊı¾İÒÔ2×Ö½ÚÎªµ¥Î»ÀÛ¼ÓÆğÀ´*/
            while(nleft>1){
                sum+=*w++;
                nleft -= 2;
            }
            /*ÈôICMP±¨Í·ÎªÆæÊı¸ö×Ö½Ú£¬»áÊ£ÏÂ×îºóÒ»×Ö½Ú£¬°Ñ×îºóÒ»¸ö×Ö½ÚÊÓÎªÒ»¸ö2×Ö½ÚµÄÊı¾İµÄ¸ß×Ó½Ü£¬Õâ¸ö2×Ö½ÚÊı¾İµÄµÍ×Ö½ÚÎª0£¬¼ÌĞøÀÛ¼Ó*/
            if(nleft == 1){
                *(unsigned char*)(&answer) = *(unsigned char*)w;
                sum += answer;
            }
            sum = (sum>>16)+(sum&0xffff);
            sum += (sum>>16);
            answer = ~sum;
            return answer;
        }
        /*ÉèÖÃICMP±¨Í·*/
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
            gettimeofday(tval, NULL); /*¼ÇÂ¼·¢ËÍÊ±¼ä*/
            picmp->icmp_cksum = getChksum((unsigned short*)icmp, packsize); //Ğ£ÑéËã·¨
            return packsize;
        }
        /*°şÈ¥ICMP±¨Í·*/
        bool unpackIcmp(char* buf, int len, struct IcmpEchoReply *icmpEchoReply){
            int i, iphdrlen;
            struct ip *ip;
            struct icmp *icmp;
            struct timeval *tvsend, tvrecv, tvresult;
            double rtt;
            
            ip = (struct ip*)buf;
            iphdrlen = ip->ip_hl << 2; /*Çóip±¨Í·³¤¶È£¬¼´ip±¨Í·µÄ³¤¶È±êÖ¾¡Á4*/
            icmp = (struct icmp *)(buf + iphdrlen); /*Ô½¹ıip±¨Í·£¬Ö¸ÏòICMP±¨Í·*/
            len -= iphdrlen; /*ICMP±¨Í·¼°ICMPÊı¾İ±¨µÄ×Ü³¤¶È*/
            if(len < 8){
                printf("ICMP packets\'s length is less than 8\n");
                return false;
            }   
            /*È·±£Ëù½ÓÊÜµÄÊÇÎÒËù·¢µÄµÄICMPµÄ»ØÓ¦*/
            if((icmp->icmp_type == ICMP_ECHOREPLY) && (icmp->icmp_id == m_pid)){
                tvsend = (struct timeval *)icmp->icmp_data;
                gettimeofday(&tvrecv, NULL); /*¼ÇÂ¼½ÓÊÕÊ±¼ä*/
                tvresult = tvSub(tvrecv, *tvsend); /*½ÓÊÕºÍ·¢ËÍµÄÊ±¼ä²î*/
                rtt = tvresult.tv_sec * 1000 + tvresult.tv_usec / 1000; /*ÒÔºÁÃëÎªµ¥Î»¼ÆËãrtt*/
                icmpEchoReply->rtt = rtt;
                icmpEchoReply->icmpSeq = icmp->icmp_seq;
                icmpEchoReply->ipTtl = ip->ip_ttl;
                icmpEchoReply->icmpLen = len;
                return true;
            }
            return false;
        }
        /*Á½¸ötimeval½á¹¹Ïà¼õ*/
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
            /*ÅĞ¶ÏÊÇÖ÷»úÃû»¹ÊÇipÃû*/
            if((inaddr = inet_addr(hostOrIp)) == INADDR_NONE){
                if((host = gethostbyname(hostOrIp)) == NULL)/*ÊÇÖ÷»úÃû*/{
                    return false;
                }
                memcpy((char*)&dest_addr.sin_addr, host->h_addr, host->h_length);
            }
            /*ÊÇIPµØÖ·*/
            else if(!inet_aton(hostOrIp, &dest_addr.sin_addr)){
                return false;
            }
            *sockaddr = dest_addr;
            return true;
        }
        /*·¢ËÍÈı¸öICMP±¨ÎÄ*/
        bool sendPacket(void){
            size_t packetsize;
            while(m_nsend < m_maxPacketSize){
                m_nsend ++;
                m_icmp_seq ++;
                packetsize = packIcmp(m_icmp_seq, (struct icmp *)m_sendpacket); /*ÉèÖÃICMP±¨Í·*/
                
                if(sendto(m_sockfd, m_sendpacket, packetsize, 0, (struct sockaddr *) &m_dest_addr, sizeof(m_dest_addr)) < 0){
                    perror("sendto error");
                    continue;
                }
            }
            return true;
        }
        /*½ÓÊÜËùÓĞICMP±¨ÎÄ*/
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
    //³õÊ¼»¯Î¬¼ªÄáÑÇ·½Õó
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
    //¼ÓÃÜ
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
    //½âÃÜ
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
            cout<<"³õÊ¼»¯´íÎó!"<<endl;
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
                PRINT_HELP(printf("==========ÇëÑ¡ÔñÒ»¸ö²Ù×÷==========\n"),
                    printf("==================================\n"))
                {
                    print("1.¼ÓÃÜ");
                    print("2.½âÃÜ");
                    print("-1.ÍË³ö");
                }
                cin>>operation;
            }while(operation != -1 && operation != 1 && operation != 2);
            if(operation == -1)
                return 0;
            else if(operation == 1){
                cout<<"ÇëÊäÈëÃÜÔ¿:";
                cin>>key;
                cout<<"ÇëÊäÈë´ı¼ÓÃÜ×Ö·û´®:";
                cin>>str1;
                Encode(key, str1, str2);
                cout<<"¼ÓÃÜºó×Ö·û´®:"<<str2<<endl;
            }
            else if(operation == 2){
                cout<<"ÇëÊäÈëÃÜÔ¿:";
                cin>>key;
                cout<<"ÇëÊäÈë´ı½âÃÜ×Ö·û´®:";
                cin>>str1;
                Dncode(key, str1, str2);
                cout<<"½âÃÜºó×Ö·û´®:"<<str2<<endl;
            }
        }
    }
};
void copyright()
{
    cout<<"\033[3;0H";
    cout<<"°æÈ¨¹éÊôAFANStudio£¬µÚÒ»´ÎÊ¹ÓÃÇëÊäÈëREAD.MEÃüÁîÀ´²é¿´readmeÎÄ¼ş£¬Ëæºó¿ÉÒÔ²é¿´docÎÄ¼ş¼ĞÏÂÎÄµµ"<<endl;
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
    /*·½·¨ºÜ±¿£¬Ã»°ì·¨*/
    PRINT_HELP(printf("==================help==================\n"),
                printf("========================================\n"))
    {
        print("ASSOC          ÏÔÊ¾»òĞŞ¸ÄÎÄ¼şÀ©Õ¹Ãû¹ØÁª");
        //print("BOOK           ´ò¿ªÎÄ¼ş£¨ÓÃBOOK.adexe£©¡£");
        print("CD             ÇĞ»»Ä¿Â¼¡£");
        print("CDK            ÇĞ»»´ÅÅÌ¡££¨Èç¹û·ÃÎÊ·Çµ±ÏÂ\n´ÅÅÌµÄÎÄ¼şÊ±ÇëÏÈÊ¹ÓÃ´ËÃüÁî£¬ºóÊ¹ÓÃCDÃüÁî£©");
        print("CLOER          ¸Ä±äÑÕÉ«¡££¨Í£ÓÃ£©");
        print("CLOSE          ¹Ø±ÕÎÄ¼ş¡£");
        print("CLS            ÇåÆÁ¡£");
        print("CONFIG         ²é¿´ÅäÖÃĞÅÏ¢¡£");
        print("COUNTER        ¼ÆËãÆ÷¡£");
        print("CREATE         ´´½¨ÎÄ¼ş¡£");
        print("DATE           ÏÔÊ¾ÈÕÆÚ¡£");
        //print("DISK           ÏÔÊ¾´ÅÅÌÏêÇé¡£");
        print("EXIT           ÍË³ö¡£");
        print("FORMAT         ¸ñÊ½»¯ÎÄ¼ş´¢´æÆ÷¡£");
        print("GETIP          »ñÈ¡ÍøÒ³IP¡£");
        print("GSC            »ñÈ¡ÍøÒ³Ô´´úÂë£¨»á³¬³¤£©¡£");
        print("GT             »ñÈ¡ÍøÒ³ÎÄ×ÖÄÚÈİ¡£\n£¨¼¼Êõ²»´ï±ê£¬ÒÔºó¸üĞÂ£©");
        print("HELP           »ñÈ¡°ïÖú¡£");
        print("HILL           hillÃÜÂë¼ÓÃÜ£¨ÏÂÔØºóÊ¹\nÓÃ£¬ÓĞbug£©¡£");
        print("INSTALL        °²×°");
        print("LS             ÏÔÊ¾Ä¿Â¼");
        print("MEMORY         ÄÚ´æÊ¹ÓÃÇé¿ö");
        print("MKDIR          ÓÃÓÚ´´½¨×ÓÄ¿Â¼¡£");
        print("OPEN           ´ò¿ªÎÄ¼ş¡£");
        print("PING           ¼ì²éÍøÂç¡££¨Á¬²»ÉÏÍø£¬\nÎŞ·¨Ê¹ÓÃ£©");
        print("READ           ¶ÁÎÄ¼ş¡£");
        print("RM             É¾³ıÎÄ¼ş¡£");
        print("RMDIR          ÓÃÓÚÉ¾³ı×ÓÄ¿Â¼¡£");
        //print("SEARCH         ËÑË÷¿ÉÁ¬½ÓµÄÔ¶³ÌÖ÷»ú¡£");½¨Á¢Íê³ÉÊı¾İ¿âÒÔºó¸üĞÂ
        print("SFM            ÉèÖÃÎÄ¼şÈ¨ÏŞ");
        print("TASK           ÈÎÎñ¼àÊÓÆ÷");
        print("TCLEAR         ÇåÀí»º´æ");
        //print("TELNET         Á´½ÓÔ¶³ÌÖ÷»ú¡££¨ÏÈÊ¹ÓÃ\nSEARCH»ñÈ¡¿ÉÁ¬½ÓÖ÷»ú£©");½¨Á¢Íê³ÉÊı¾İ¿âÒÔºó¸üĞÂ
        //print("INET           ·­Òë£¨ÏÂÔØºóºóÊ¹ÓÃ\n£¬¼¼ÊõÔ­ÒòÔİ²»Ö§³Ö£©¡£");
        print("VIRGINIA       VirginiaÃÜÂë¼ÓÃÜ£¨ÏÂÔØºó\nÊ¹ÓÃ£©¡£");
        print("WRITE          Ğ´ÎÄ¼ş¡£");
        print("ÊäÈëÒ»¸öÃüÁîÈ»ºóÊäÈë²ÎÊı\"-h\"ºÍÄÚÈİ\"help\"\n¾Í¿ÉÒÔ´¥·¢°ïÖú¡£ÃÜÂë¼ÓÃÜ³ÌĞò¿ÉÒÔÖ±½ÓÊäÈë\nÖ¸Áî²»´ø²ÎÊı");
        print("ÏêÏ¸°ïÖúÎÄµµÇë¼ûhttps://code.xueersi.com/ide/code/19393077");
    }
    cout<<"°´ÈÎÒâ¼üÍË³ö"<<endl;
    string tmp;
    cin>>tmp;
    system("clear");
}

//Í³¼Æ×Ö·û³öÏÖ´ÎÊı
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
        //ËùÓĞµÄÂÒÂë¶¼ÊÇÏ½ÇÃµÄ£¬Ïàµ±ÓÚÁ³¹ö¼üÅÌ+¸´ÖÆ£¬Ã»É¶ÓÃÖ»ÊÇÎªÁË·ÂÕæ¡£
    if(Initflag == false){
        _.Mkdir("usr");
        _.Mkdir("Doc");
        _.Mkdir("Program");
        //_.Mkdir("temp");
        _.cd("usr");
        _.Mkdir("DOS_READ.ME");
        _.cd("DOS_READ.ME");
        _.create("READ.ME", 0);
        _.open("READ.ME", "write", "ÊÇµÄ£¬Õâ¾ÍÊÇREADMEÎÄ¼ş\n    ÆäÊµÎÒÒ²ÏëÒª×öÕâ¸ö´óÏîÄ¿ºÃ¾ÃÁË¡£ÕâÒ²ÊÇÎÒµÚÒ»´Î×öÕâÃ´ÅÓ´óµÄÒ»¸öÏîÄ¿£¬ÓĞ²»ºÃµÄµØ·½Çë¶à°üÈİ£¬ÎÒ¼¼Êõ²»ºÃ£¬ÄÑÃâÓĞ²»ºÃµÄµØ·½£¬Çë¼ûÁÂ¡£\n    ÒªÊÇËµÎÒÎªÊ²Ã´Ïë×öÕâÃ´¸öÏîÄ¿£¬ÆäÊµÒ²ÊÇÊÖÑ÷Ñ÷¡£¶øÇÒÒòÎªÎÒÒÔÇ°Ò²×öÁËÒ»¸öÀàËÆÓÚÖÕ¶ËµÄ¶«Î÷£¬¿ÉÊÇÃ»×ö³öÀ´£¬ËùÒÔÕâ´ÎÏëÒªÌôÕ½Ò»ÏÂ¡£ÎÒ¿´ÁË±à³ÌÉçÇøµÄĞí¶àÀàËÆÓÚ´ËÀàµÄ×÷Æ·£¬u1s1£¬¶¼ºÜ²»´í£¬µ«ÊÇ¶¼ÓĞĞ©²»Ì«ºÃµÄµØ·½£¬±ÈÈçËµ¼ÓÔØ¶¯»­Ê±¼äÌ«³¤¡¢Êä³ö³¬³¤µÈÎÊÌâ£¬ËùÒÔÎÒÕâ´ÎÁ¬logo¶¼Ã»¼Ó£¬¾ÍÊÇÅÂ¼ÓÔØÌØĞ§Ì«Âı»òÕßÊä³ö³¬³¤£¬¶øÇÒ±à³ÌÉçÇøµÄC++Ò²Ö»ÄÜ×ödos¡£±¾À´ÎÒÒ²ÊÇÏëÒª×öÒ»¸öÄÜ¹»±£´æÓÃ»§Éè"
        "ÖÃµÄ¹¦ÄÜ£¬ÄÎºÎÑ§¶øË¼±à³ÌÉçÇøµÄÏŞÖÆ£¨²»ÔÊĞí´úÂë´´½¨ÎÄ¼ş»òÕß´´½¨ÍêÔËĞĞ½áÊø¾Í¸ü»»Ä¿Â¼£©£¬ËùÒÔ¾ÍÎŞ·¨ÊµÏÖÁË¡£¹ØÓÚ½çÃæÕâÒ»¿é£¬ÎÒ×î½üÕıÔÚ×öÒ»¸ö×¨ÊôÓÚC++µÄÍ¼ĞÎ¿â£¬µ«ÊÇÒòÎªÃ»×öÍê²¢Ã»ÓĞ·¢³öÀ´£¬ÎÒÔÚÕâ¸öÏîÄ¿ÀïÒ²¾ÍÖ»ÒıÓÃÁË²¿·Öº¯Êı¡£µÈ»ØÍ·ÄÇ¸ö¿â×öºÃÁË¡¢·¢³öÀ´ÁËÒÔºóÎÒ»á¸üĞÂ½çÃæµÄ¡£»¹ÓĞ¾ÍÊÇ¹ØÓÚ¿ªÔ´µÄÕâ¸öÎÊÌâ£¬ÎÒÏëºÃÁË£¬ÒÔºóÎÒÔÚ±à³ÌÉçÇø·¢µÄËùÓĞµÄÏîÄ¿Èç¹ûÃ»ÓĞÌØÊâËµÃ÷µÄÇé¿öÏÂ¶¼»á¿ªÔ´£¬¸÷Î»´óÀĞ¿ÉÒÔ°ïÎÒ²¹³ä»òÕßĞŞ¸ÄÄÚÈİ£¬ÍêÉÆÂß¼­ÉÏºÍ¼¼ÊõÉÏµÄ²»×ã£¬´úÂë×¢ÊÍÎÒ»áºÃºÃĞ´µÄ£¬ÓĞ²»ºÃµÄµØ·½¸úÎÒËµ£¬ÎÒ¸ÄÕı(doge)¡£È»ºóÎÒ»¹ÏëËµÃ÷ÒÔÏÂ¼¸µã:\n"    
        "    1.²»Ğí³­Ï®£¨ÕâØ¨¹Å²»±äµÄÁË¶¼£©¡£\n    2.¸Ä±àµÄ»°ÊÇ¿ÉÒÔµÄ£¬µ«ÊÇ¸Ä±àµÄÊ±ºòÒª½«×÷Æ·¸ÄÎª¸Ä±à£¬×ªÔØÊ±Òª¸ÄÎª×ªÔØ£¬Æä´Î¸½ÉÏ¸Ã×÷Æ·ÍøÖ·¡£\n    3.Èç¹ûÄã·¢ÏÖÈÎºÎbug»òÕßĞèÒª¸Ä½øµÄµØ·½ÓÖ»òÕßÊÇÏ£ÍûÔö¼ÓµÄ¹¦ÄÜÇë·¢ËÍÖÁÓÊÏäafanstudio@163.com£¬Èç¹ûÄãÏëÒª°ÑÄãĞ´µÄ³ÌĞò¼ÓÈëÆäÖĞ£¬Ò²¿ÉÒÔºÍÎÒËµ£¬²¢°ÑÔ´´úÂë·¢µ½ÉÏÊöÓÊÏä¡£×îºÃÊÇ¿ÉÒÔ´«²ÎµÄ³ÌĞò¡£ \n                       by DxiesLawiye(¹ùÄ«Ğù)");
        //dk_C.open("READ.ME", "close");
        _.cd("..");
        _.cd("..");
        _.cd("Doc");
        _.Mkdir("help");
        _.cd("help");
        _.Mkdir("zh_cn");
        _.cd("zh_cn");
        _.create("help.txt", 0);
        _.open("help.txt", "write", "ÏêÇéÇë¼û£ºhttps://code.xueersi.com/ide/code/19393077");
        _.create("development.txt", 0);
        _.open("development.txt", "write", "ÏêÇéÇë¼û£ºhttps://code.xueersi.com/ide/code/19514323");
        _.create("AboutAfan.txt", 0);
        _.open("AboutAfan.txt", "write", "AFAN¹¤×÷ÊÒÓÚ2020Äê4ÔÂ6ÈÕÉÏÎç10£º00³ÉÁ¢£¬ÊÒ³¤£º¹ùÄ«Ğù¡£¹ÙÍø£ºhttps://sh21594074.icoc.vc/");
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
        _.open("dos.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ ÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌ ñs£¿‹MäVèû\n Fë‚Œ$ ŒaD U‰åSWVƒì|?D ‹].‰Ö‹U?‰ÏM?è‰Eğ‹E^Pè—?ÿƒÄ!? \n y<€< =========== !?????????????????????ddddd dkjnvnbn DOS::@@100044sffddfxoodjgjojge yeogsaiuiuiuiuiursuirjkle;m baiutyjvmc");
        _.create("open.adexe", 2);
        _.open("open.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ XXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGXXPADDINGPADDINGX   ?   80<0??????\n"
                    "252?2K2_2????? 333$3.343R3[3n3t3???????\n"
                    "4%4Q4???{5???????????6?6E6K6Q6W6]6d6k6r6y6€6?????????????\n"
                    "77\"70777D7M7V7");
        _.create("Ping.adexe", 2);
        _.open("Ping.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n™×P İ¶>sİ¶>sİ¶>sÔÎºsÜ¶>sÔÎ«sÜ¶>sÔÎ­sÌ¶>sİ¶?s”¶>sÔÎ½sÌ¶>sÔÎ·sŞ¶>sÔÎªsÜ¶>sÔÎ¯sÜ¶>sRichİ¶>s\ngetaddrinfo Ping.adll  ?_Ping\nÌÌÌÌÌÌÌÌÌÌÌÌÌÌ lsjkfhduhisdhduhisd ù{");
        _.create("Ping.adll", 3);
        _.open("Ping.adll", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \478 ^%&$@#  $ \nÛt`ÿ5˜¡?ÿÖ‹ø‰]ä‰}à‰}Üƒ?‰}?ûrCj ÿ€À¼59t?ûr3ÿ7ÿÖ‹ğj ÿ€À¼5?ÿÖé¿ñÿÿ‹M?Mäu9EàtÂ‰Mä‹Ù‰]Ô‰Eà‹øë°h¤k?h”k?èQ?ÿé­?ÿƒ} u&?Ğ©?   jèà?ÿYÿu?s  jèĞ?ÿé°?ÿè¿?ÿé¨?ÿ    w?¶E?ºs?    ?ÿÿ   ");
        _.create("install.adexe", 2);
        _.open("install.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n êÉÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌ èà½ï¹÷Â³ %#%&%£¤%*£¤%£¤# Daijfdsjlogv");
        _.create("gsc.adexe", 2);
        _.open("gsc.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n {{{{{#eeddsfdjvbne juenr oeir jm a $%#^ nksltyq3%Y WE$^><><>   b/n$^W&BU#W#%nj6hb*/5640n467");
        _.create("GetIp.adexe", 2);
        _.open("GetIp.adexe", "write", "AFAN\n@Djfji 20 54654210  dsd sxuh ndfsnfnuen ifvje hg \468 ^%&$@#  $ \n M$e$^ghdfsg21 RH 2d1h hjrje ^$h DT ßàùEáZ\n getaddrinfo GetIp.adll  ?__GetIp::GetIp\n dfdgd ÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌ");
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
    //Ìí¼ÓÈí¼şºóÕâÀï²»ÒªÍü¼ÇÒª¸Ä
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
    /*³õÊ¼»¯´ÅÅÌÄÚÈİ*/
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
                return 0;//±£ÕÏÄÚ´æÊÍ·Å
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
                pterr(instruct, "Î´ÏÂÔØ£¬ÇëÊ¹ÓÃinstallÖ¸ÁîÏÂÔØ£¡");
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
                        cout<<"´ËÅÌ²»¿É¸ñÊ½»¯£¡"<<endl;
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
                pterr(instruct, "Î´ÏÂÔØ£¬ÇëÊ¹ÓÃinstallÖ¸ÁîÏÂÔØ£¡");
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
                cout<<GSCer(parameter)<<endl;//Ïë¿´µÄ×Ô¼º´ò¿ª
#endif
                cout<<"£¨»á³¬³¤£¬¾Í²»·Å¿ªÁË£©"<<endl;
                continue;
            }
            cin >> content;//ÀûÓÃcinÓöµ½¿Õ¸ñ¾ÍÍ£Ö¹¶ÁÈ¡µÄÌØĞÔ
    /*#define INSTRUCT has_member_##instruct
                if(INSTRUCT<ASSOCEXE>::value == false){
                    printf("\"%s\"²»ÊÇÃüÁî£¬Ò²²»ÊÇ¿ÉÖ´ĞĞÎÄ¼ş\n",instruct.c_str());
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
            printf("\"%s\"²»ÊÇÃüÁî£¬Ò²²»ÊÇ¿ÉÖ´ĞĞÎÄ¼ş\n",instruct.c_str());
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
    cout<<"ÕıÔÚÊÍ·ÅÄÚ´æ..."<<endl;
    Sleep(100);
    system("clear");
    cout<<"\033[8m\033[?25l";
    return savereturn;
}
