//============================================================================
// Name        : jp50.cpp
// Author      : Leslie Zhu
// Version     : 1.0.0
// Copyright   : Leslie Zhu
//============================================================================



/*
 * 此程序用于检验日语五十音图的掌握情况，分为下列测验方法:
 * 1. 随机给出平假名，写出片假名；随机给出片假名，写出平假名；随机给出罗马字母，写出平假名与片假名。
 * 2. 随机给出行的名字，默写该行内容，如ka行.
 * 3. 随机给出段的名字，默认该段内容，如a段.
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Letter.hpp"
#include "JPTest.hpp"

using namespace std;
using namespace jp50;


int main() {

    cout << "==============================================================" << endl;
    cout << "      '日语五十音图' 测试开始，按Ctrl+C结束测验!     " << endl;
    cout << "==============================================================" << endl;

    srand(time(0));

    JPTest jp;

    jp.init_letters();

    cout << "\n\n" << "==> 第一类型: 随机默写\n\n" << endl;

    for (int i = 0; i< 25; i++){
        jp.test_letters();
    }

    cout << "\n\n" << "==> 第二类型: 按行默写\n\n" << endl;

    for(int i = 0; i< 5;i++){
        jp.test_rows();
    }

    cout << "\n\n" << "==> 第三类型: 按段默写\n\n" << endl;

    for(int i = 0; i< 3;i++){
        jp.test_columns();
    }

    jp.result();

    return 0;
}
