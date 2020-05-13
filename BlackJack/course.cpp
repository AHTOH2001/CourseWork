#include "course.h"

Course::Course(QString rawData,QObject *parent) : QObject(parent)
{
    if (rawData == "")
    {

    }
    QRegExp rx("id=\"([A-Z]{3})\" title=\"([^\"]*)\"");

    int pos = 0,i = 0;

    while ((pos = rx.indexIn(rawData, pos)) != -1)
    {
        title[rx.cap(1)] = rx.cap(2);
        symbol[rx.cap(1)] = rx.cap(1);
        ind[i] = rx.cap(1);
        pos += rx.matchedLength();
        i++;
    }
    title["UAH"] = "украинская гривна";
    ind[i] = "UAH";
    qSwap (ind[0],ind[15]);

    rx.setPattern("id=\"([A-Z]{3})\" br=\"([^\"]*)\" ar=\"([^\"]*)\"");
    pos = 0;
    while ((pos = rx.indexIn(rawData, pos)) != -1)
    {
        koef[rx.cap(1)] = 1/((rx.cap(2).toDouble() + rx.cap(3).toDouble()) / 2.);
        pos += rx.matchedLength();
    }
    koef["UAH"] = 1;

    symbol["UAH"] = "₴";
    symbol["USD"] = "$";
    symbol["EUR"] = "€";
    symbol["GBP"] = "£";
    symbol["JPY"] = "¥";
    symbol["CNY"] = "¥";
    symbol["RUB"] = "₽";
    symbol["ILS"] = "₪";
    symbol["INR"] = "₨";
    symbol["KRW"] = "₩";
    symbol["NGN"] = "₦";
    symbol["THB"] = "฿";
    symbol["VND"] = "₫";
    symbol["LAK"] = "₭";
    symbol["KHR"] = "៛";
    symbol["MNT"] = "₮";
    symbol["PHP"] = "₱";
    symbol["IRR"] = "﷼";
    symbol["CRC"] = "₡";
    symbol["PYG"] = "₲";
    symbol["AFN"] = "؋";
    symbol["GHS"] = "₵";
    symbol["KZT"] = "₸";
    symbol["TRY"] = "₺";
    symbol["AZN"] = "₼";
    symbol["GEL"] = "₾";

}
