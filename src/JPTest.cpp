
#include "JPTest.hpp"
#include "Letter.hpp"

using std::cout;
using std::cin;
using std::endl;

namespace jp50{
    JPTest::JPTest(){

    }

    JPTest::~JPTest(){
    }

    void JPTest::init_letters(){

        // a
        this->letters[0] = new Letter("あ","ｱ","a");
        this->letters[1] = new Letter("い","イ","i");
        this->letters[2] = new Letter("う","ウ","u");
        this->letters[3] = new Letter("え","エ","e");
        this->letters[4] = new Letter("お","オ","o");

        //ka
        this->letters[5] = new Letter("か","カ","ka");
        this->letters[6] = new Letter("き","キ","ki");
        this->letters[7] = new Letter("く","ク","ku");
        this->letters[8] = new Letter("け","ケ","ke");
        this->letters[9] = new Letter("こ","コ","ko");

        //sa
        this->letters[10] = new Letter("さ","サ","sa");
        this->letters[11] = new Letter("し","シ","shi");
        this->letters[12] = new Letter("す","ス","su");
        this->letters[13] = new Letter("せ","セ","se");
        this->letters[14] = new Letter("そ","ソ","so");

        //ta
        this->letters[15] = new Letter("た","タ","ta");
        this->letters[16] = new Letter("ち","チ","chi");
        this->letters[17] = new Letter("つ","ツ","tu");
        this->letters[18] = new Letter("て","テ","te");
        this->letters[19] = new Letter("と","ト","to");

        //na
        this->letters[20] = new Letter("な","ナ","na");
        this->letters[21] = new Letter("に","ニ","ni");
        this->letters[22] = new Letter("ぬ","ヌ","nu");
        this->letters[23] = new Letter("ね","ネ","ne");
        this->letters[24] = new Letter("の","ノ","no");

        //ha
        this->letters[25] = new Letter("は","ハ","ha");
        this->letters[26] = new Letter("ひ","ヒ","hi");
        this->letters[27] = new Letter("ふ","フ","hu");
        this->letters[28] = new Letter("へ","ヘ","he");
        this->letters[29] = new Letter("ほ","ホ","ho");

        //ma
        this->letters[30] = new Letter("ま","マ","ma");
        this->letters[31] = new Letter("み","ミ","mi");
        this->letters[32] = new Letter("む","ム","mu");
        this->letters[33] = new Letter("め","メ","me");
        this->letters[34] = new Letter("も","モ","mo");

        //ya
        this->letters[35] = new Letter("や","ヤ","ya");
        this->letters[36] = new Letter("い","イ","i");
        this->letters[37] = new Letter("ゆ","ユ","yu");
        this->letters[38] = new Letter("え","エ","e");
        this->letters[39] = new Letter("よ","ヨ","yo");

        //ra
        this->letters[40] = new Letter("ら","ラ","ra");
        this->letters[41] = new Letter("り","リ","ri");
        this->letters[42] = new Letter("る","ル","ru");
        this->letters[43] = new Letter("れ","レ","re");
        this->letters[44] = new Letter("ろ","ロ","ro");

        //wa
        this->letters[45] = new Letter("わ","ワ","wa");
        this->letters[46] = new Letter("い","イ","i");
        this->letters[47] = new Letter("う","ウ","u");
        this->letters[48] = new Letter("え","エ","e");
        this->letters[49] = new Letter("を","ヲ","wo");


    }




    void JPTest::test_letters(){


        int random;

        random = rand() % 50;

        Letter *p = this->letters[random];

        random = rand() % 3;

        switch(random){
        case 0:
            p->test_first();
            break;
        case 1:
            p->test_second();
            break;
        case 2:
            p->test_roman();
            break;
        default:
            break;
        }
    }



    void JPTest::test_rows(){

        Letter *p;
        int random;
        int index;

        random = rand() % 50;


        if (random >=0 && random < 5) {
            index = 0;
        } else if(random >=5 && random < 10){
            index = 5;
        } else if(random >=10 && random < 15){
            index = 10;
        } else if(random >= 15 && random < 20){
            index = 15;
        } else if(random >= 20 && random < 25){
            index = 20;
        } else if(random >= 25 && random < 30){
            index = 25;
        } else if(random >= 30 && random < 35){
            index = 30;
        } else if(random >= 35 && random < 40){
            index = 35;
        } else if(random >= 40 && random < 45){
            index = 40;
        } else if(random >= 45 && random < 50){
            index = 45;
        }


        cout << "\n\n===>默写出 " << this->letters[index]->get_roman() << " 行: " << endl;

        for(int i = 0; i <= 4; i++){
            p = this->letters[index+i];
            p->test_roman();
        }

    }



    void JPTest::test_columns(){

        Letter *p;
        int random;

        random = rand() % 5;

        cout << "\n\n===>默写出 " << this->letters[random]->get_roman() << " 段: " << endl;

        for(int i=0;i<=9;i++){
            p = this->letters[random+i*5];
            p->test_roman();
        }


    }

    void JPTest::result(){
        Letter *p;

        cout << "\n\n检验结果: " << endl;

        for (int i=0; i<50;i++){
            if(i%5 ==0){
                cout << endl;
            }

            p = this->letters[i];
            p->display();

        }
    }
}
