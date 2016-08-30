#ifndef STATION_HPP
#define STATION_HPP
#include <QList>
#include <QString>
enum Station{
    PEK=0,//beijing
    CGO,//zhengzhou
    CGQ,//changchun
    CKG,//chongqing
    CSX,//changsha
    CTU,//chengdu
    FOC,//fuzhou
    CAN,//guangzhou
    HFE,//hefei
    HGH,//hangzhou
    HRB,//ha'erbin
    KMG,//kunming
    KHN,//nanchang
    NKG,//nanjing
    SHA,//shanghai
    SHE,//shenyang
    SJW,//shijiazhuang
    WUH,//wuhan
    ALL,
};
const QString NAME[]={"BeiJing","ZhengZhou","ChangChun","ChongQing","ChangSha",
                      "ChengDu","FuZhou","GuangZhou","HeFei","HangZhou","HaErBin",
                      "kunMing","NanChang","NanJing","ShangHai","ShenYang",
                      "ShiJiaZhuang","WuHan"};
#endif // STATION_HPP
