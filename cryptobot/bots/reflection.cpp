#include <ta-lib/ta_func.h>

#include "reflection.hh"

TA_ACOS_Wrapper::TA_ACOS_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ACOS_Wrapper *TA_ACOS_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ACOS_Wrapper *ta = new TA_ACOS_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ACOS_Wrapper::run() {
    TA_ACOS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ACOS_Wrapper::TA_S_ACOS_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ACOS_Wrapper *TA_S_ACOS_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ACOS_Wrapper *ta = new TA_S_ACOS_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ACOS_Wrapper::run() {
    TA_S_ACOS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_AD_Wrapper::TA_AD_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_AD_Wrapper *TA_AD_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_AD_Wrapper *ta = new TA_AD_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_AD_Wrapper::run() {
    TA_AD(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_AD_Wrapper::TA_S_AD_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_AD_Wrapper *TA_S_AD_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_AD_Wrapper *ta = new TA_S_AD_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_AD_Wrapper::run() {
    TA_S_AD(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ADD_Wrapper::TA_ADD_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ADD_Wrapper *TA_ADD_Wrapper::create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ADD_Wrapper *ta = new TA_ADD_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ADD_Wrapper::run() {
    TA_ADD(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ADD_Wrapper::TA_S_ADD_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ADD_Wrapper *TA_S_ADD_Wrapper::create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ADD_Wrapper *ta = new TA_S_ADD_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ADD_Wrapper::run() {
    TA_S_ADD(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ADOSC_Wrapper::TA_ADOSC_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ADOSC_Wrapper *TA_ADOSC_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ADOSC_Wrapper *ta = new TA_ADOSC_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInFastPeriod, optInSlowPeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ADOSC_Wrapper::run() {
    TA_ADOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInFastPeriod, this->optInSlowPeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ADOSC_Wrapper::TA_S_ADOSC_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ADOSC_Wrapper *TA_S_ADOSC_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ADOSC_Wrapper *ta = new TA_S_ADOSC_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInFastPeriod, optInSlowPeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ADOSC_Wrapper::run() {
    TA_S_ADOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInFastPeriod, this->optInSlowPeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ADX_Wrapper::TA_ADX_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ADX_Wrapper *TA_ADX_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ADX_Wrapper *ta = new TA_ADX_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ADX_Wrapper::run() {
    TA_ADX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ADX_Wrapper::TA_S_ADX_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ADX_Wrapper *TA_S_ADX_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ADX_Wrapper *ta = new TA_S_ADX_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ADX_Wrapper::run() {
    TA_S_ADX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ADXR_Wrapper::TA_ADXR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ADXR_Wrapper *TA_ADXR_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ADXR_Wrapper *ta = new TA_ADXR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ADXR_Wrapper::run() {
    TA_ADXR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ADXR_Wrapper::TA_S_ADXR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ADXR_Wrapper *TA_S_ADXR_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ADXR_Wrapper *ta = new TA_S_ADXR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ADXR_Wrapper::run() {
    TA_S_ADXR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_APO_Wrapper::TA_APO_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_APO_Wrapper *TA_APO_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_APO_Wrapper *ta = new TA_APO_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_APO_Wrapper::run() {
    TA_APO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_APO_Wrapper::TA_S_APO_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_APO_Wrapper *TA_S_APO_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_APO_Wrapper *ta = new TA_S_APO_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_APO_Wrapper::run() {
    TA_S_APO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_AROON_Wrapper::TA_AROON_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outAroonDown = outAroonDown;
    this->outAroonUp = outAroonUp;
}

TA_AROON_Wrapper *TA_AROON_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]) {
    TA_AROON_Wrapper *ta = new TA_AROON_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outAroonDown, outAroonUp);
    return ta;
}

TA_RetCode TA_AROON_Wrapper::run() {
    TA_AROON(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outAroonDown, this->outAroonUp);
}

TA_S_AROON_Wrapper::TA_S_AROON_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outAroonDown = outAroonDown;
    this->outAroonUp = outAroonUp;
}

TA_S_AROON_Wrapper *TA_S_AROON_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]) {
    TA_S_AROON_Wrapper *ta = new TA_S_AROON_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outAroonDown, outAroonUp);
    return ta;
}

TA_RetCode TA_S_AROON_Wrapper::run() {
    TA_S_AROON(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outAroonDown, this->outAroonUp);
}

TA_AROONOSC_Wrapper::TA_AROONOSC_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_AROONOSC_Wrapper *TA_AROONOSC_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_AROONOSC_Wrapper *ta = new TA_AROONOSC_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_AROONOSC_Wrapper::run() {
    TA_AROONOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_AROONOSC_Wrapper::TA_S_AROONOSC_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_AROONOSC_Wrapper *TA_S_AROONOSC_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_AROONOSC_Wrapper *ta = new TA_S_AROONOSC_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_AROONOSC_Wrapper::run() {
    TA_S_AROONOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ASIN_Wrapper::TA_ASIN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ASIN_Wrapper *TA_ASIN_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ASIN_Wrapper *ta = new TA_ASIN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ASIN_Wrapper::run() {
    TA_ASIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ASIN_Wrapper::TA_S_ASIN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ASIN_Wrapper *TA_S_ASIN_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ASIN_Wrapper *ta = new TA_S_ASIN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ASIN_Wrapper::run() {
    TA_S_ASIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ATAN_Wrapper::TA_ATAN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ATAN_Wrapper *TA_ATAN_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ATAN_Wrapper *ta = new TA_ATAN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ATAN_Wrapper::run() {
    TA_ATAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ATAN_Wrapper::TA_S_ATAN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ATAN_Wrapper *TA_S_ATAN_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ATAN_Wrapper *ta = new TA_S_ATAN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ATAN_Wrapper::run() {
    TA_S_ATAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ATR_Wrapper::TA_ATR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ATR_Wrapper *TA_ATR_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ATR_Wrapper *ta = new TA_ATR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ATR_Wrapper::run() {
    TA_ATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ATR_Wrapper::TA_S_ATR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ATR_Wrapper *TA_S_ATR_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ATR_Wrapper *ta = new TA_S_ATR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ATR_Wrapper::run() {
    TA_S_ATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_AVGPRICE_Wrapper::TA_AVGPRICE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_AVGPRICE_Wrapper *TA_AVGPRICE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_AVGPRICE_Wrapper *ta = new TA_AVGPRICE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_AVGPRICE_Wrapper::run() {
    TA_AVGPRICE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_AVGPRICE_Wrapper::TA_S_AVGPRICE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_AVGPRICE_Wrapper *TA_S_AVGPRICE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_AVGPRICE_Wrapper *ta = new TA_S_AVGPRICE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_AVGPRICE_Wrapper::run() {
    TA_S_AVGPRICE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_BBANDS_Wrapper::TA_BBANDS_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDevUp = optInNbDevUp;
    this->optInNbDevDn = optInNbDevDn;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outRealUpperBand = outRealUpperBand;
    this->outRealMiddleBand = outRealMiddleBand;
    this->outRealLowerBand = outRealLowerBand;
}

TA_BBANDS_Wrapper *TA_BBANDS_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]) {
    TA_BBANDS_Wrapper *ta = new TA_BBANDS_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInNbDevUp, optInNbDevDn, optInMAType, outBegIdx, outNBElement, outRealUpperBand, outRealMiddleBand, outRealLowerBand);
    return ta;
}

TA_RetCode TA_BBANDS_Wrapper::run() {
    TA_BBANDS(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDevUp, this->optInNbDevDn, this->optInMAType, this->outBegIdx, this->outNBElement, this->outRealUpperBand, this->outRealMiddleBand, this->outRealLowerBand);
}

TA_S_BBANDS_Wrapper::TA_S_BBANDS_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDevUp = optInNbDevUp;
    this->optInNbDevDn = optInNbDevDn;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outRealUpperBand = outRealUpperBand;
    this->outRealMiddleBand = outRealMiddleBand;
    this->outRealLowerBand = outRealLowerBand;
}

TA_S_BBANDS_Wrapper *TA_S_BBANDS_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]) {
    TA_S_BBANDS_Wrapper *ta = new TA_S_BBANDS_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInNbDevUp, optInNbDevDn, optInMAType, outBegIdx, outNBElement, outRealUpperBand, outRealMiddleBand, outRealLowerBand);
    return ta;
}

TA_RetCode TA_S_BBANDS_Wrapper::run() {
    TA_S_BBANDS(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDevUp, this->optInNbDevDn, this->optInMAType, this->outBegIdx, this->outNBElement, this->outRealUpperBand, this->outRealMiddleBand, this->outRealLowerBand);
}

TA_BETA_Wrapper::TA_BETA_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_BETA_Wrapper *TA_BETA_Wrapper::create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_BETA_Wrapper *ta = new TA_BETA_Wrapper(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_BETA_Wrapper::run() {
    TA_BETA(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_BETA_Wrapper::TA_S_BETA_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_BETA_Wrapper *TA_S_BETA_Wrapper::create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_BETA_Wrapper *ta = new TA_S_BETA_Wrapper(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_BETA_Wrapper::run() {
    TA_S_BETA(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_BOP_Wrapper::TA_BOP_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_BOP_Wrapper *TA_BOP_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_BOP_Wrapper *ta = new TA_BOP_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_BOP_Wrapper::run() {
    TA_BOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_BOP_Wrapper::TA_S_BOP_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_BOP_Wrapper *TA_S_BOP_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_BOP_Wrapper *ta = new TA_S_BOP_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_BOP_Wrapper::run() {
    TA_S_BOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_CCI_Wrapper::TA_CCI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_CCI_Wrapper *TA_CCI_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_CCI_Wrapper *ta = new TA_CCI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_CCI_Wrapper::run() {
    TA_CCI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_CCI_Wrapper::TA_S_CCI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_CCI_Wrapper *TA_S_CCI_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_CCI_Wrapper *ta = new TA_S_CCI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_CCI_Wrapper::run() {
    TA_S_CCI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_CDL2CROWS_Wrapper::TA_CDL2CROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL2CROWS_Wrapper *TA_CDL2CROWS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL2CROWS_Wrapper *ta = new TA_CDL2CROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL2CROWS_Wrapper::run() {
    TA_CDL2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL2CROWS_Wrapper::TA_S_CDL2CROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL2CROWS_Wrapper *TA_S_CDL2CROWS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL2CROWS_Wrapper *ta = new TA_S_CDL2CROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL2CROWS_Wrapper::run() {
    TA_S_CDL2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDL3BLACKCROWS_Wrapper::TA_CDL3BLACKCROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL3BLACKCROWS_Wrapper *TA_CDL3BLACKCROWS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL3BLACKCROWS_Wrapper *ta = new TA_CDL3BLACKCROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL3BLACKCROWS_Wrapper::run() {
    TA_CDL3BLACKCROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL3BLACKCROWS_Wrapper::TA_S_CDL3BLACKCROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL3BLACKCROWS_Wrapper *TA_S_CDL3BLACKCROWS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL3BLACKCROWS_Wrapper *ta = new TA_S_CDL3BLACKCROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL3BLACKCROWS_Wrapper::run() {
    TA_S_CDL3BLACKCROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDL3INSIDE_Wrapper::TA_CDL3INSIDE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL3INSIDE_Wrapper *TA_CDL3INSIDE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL3INSIDE_Wrapper *ta = new TA_CDL3INSIDE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL3INSIDE_Wrapper::run() {
    TA_CDL3INSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL3INSIDE_Wrapper::TA_S_CDL3INSIDE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL3INSIDE_Wrapper *TA_S_CDL3INSIDE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL3INSIDE_Wrapper *ta = new TA_S_CDL3INSIDE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL3INSIDE_Wrapper::run() {
    TA_S_CDL3INSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDL3LINESTRIKE_Wrapper::TA_CDL3LINESTRIKE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL3LINESTRIKE_Wrapper *TA_CDL3LINESTRIKE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL3LINESTRIKE_Wrapper *ta = new TA_CDL3LINESTRIKE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL3LINESTRIKE_Wrapper::run() {
    TA_CDL3LINESTRIKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL3LINESTRIKE_Wrapper::TA_S_CDL3LINESTRIKE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL3LINESTRIKE_Wrapper *TA_S_CDL3LINESTRIKE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL3LINESTRIKE_Wrapper *ta = new TA_S_CDL3LINESTRIKE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL3LINESTRIKE_Wrapper::run() {
    TA_S_CDL3LINESTRIKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDL3OUTSIDE_Wrapper::TA_CDL3OUTSIDE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL3OUTSIDE_Wrapper *TA_CDL3OUTSIDE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL3OUTSIDE_Wrapper *ta = new TA_CDL3OUTSIDE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL3OUTSIDE_Wrapper::run() {
    TA_CDL3OUTSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL3OUTSIDE_Wrapper::TA_S_CDL3OUTSIDE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL3OUTSIDE_Wrapper *TA_S_CDL3OUTSIDE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL3OUTSIDE_Wrapper *ta = new TA_S_CDL3OUTSIDE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL3OUTSIDE_Wrapper::run() {
    TA_S_CDL3OUTSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDL3STARSINSOUTH_Wrapper::TA_CDL3STARSINSOUTH_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL3STARSINSOUTH_Wrapper *TA_CDL3STARSINSOUTH_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL3STARSINSOUTH_Wrapper *ta = new TA_CDL3STARSINSOUTH_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL3STARSINSOUTH_Wrapper::run() {
    TA_CDL3STARSINSOUTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL3STARSINSOUTH_Wrapper::TA_S_CDL3STARSINSOUTH_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL3STARSINSOUTH_Wrapper *TA_S_CDL3STARSINSOUTH_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL3STARSINSOUTH_Wrapper *ta = new TA_S_CDL3STARSINSOUTH_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL3STARSINSOUTH_Wrapper::run() {
    TA_S_CDL3STARSINSOUTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDL3WHITESOLDIERS_Wrapper::TA_CDL3WHITESOLDIERS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDL3WHITESOLDIERS_Wrapper *TA_CDL3WHITESOLDIERS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDL3WHITESOLDIERS_Wrapper *ta = new TA_CDL3WHITESOLDIERS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDL3WHITESOLDIERS_Wrapper::run() {
    TA_CDL3WHITESOLDIERS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDL3WHITESOLDIERS_Wrapper::TA_S_CDL3WHITESOLDIERS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDL3WHITESOLDIERS_Wrapper *TA_S_CDL3WHITESOLDIERS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDL3WHITESOLDIERS_Wrapper *ta = new TA_S_CDL3WHITESOLDIERS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDL3WHITESOLDIERS_Wrapper::run() {
    TA_S_CDL3WHITESOLDIERS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLABANDONEDBABY_Wrapper::TA_CDLABANDONEDBABY_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLABANDONEDBABY_Wrapper *TA_CDLABANDONEDBABY_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLABANDONEDBABY_Wrapper *ta = new TA_CDLABANDONEDBABY_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLABANDONEDBABY_Wrapper::run() {
    TA_CDLABANDONEDBABY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLABANDONEDBABY_Wrapper::TA_S_CDLABANDONEDBABY_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLABANDONEDBABY_Wrapper *TA_S_CDLABANDONEDBABY_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLABANDONEDBABY_Wrapper *ta = new TA_S_CDLABANDONEDBABY_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLABANDONEDBABY_Wrapper::run() {
    TA_S_CDLABANDONEDBABY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLADVANCEBLOCK_Wrapper::TA_CDLADVANCEBLOCK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLADVANCEBLOCK_Wrapper *TA_CDLADVANCEBLOCK_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLADVANCEBLOCK_Wrapper *ta = new TA_CDLADVANCEBLOCK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLADVANCEBLOCK_Wrapper::run() {
    TA_CDLADVANCEBLOCK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLADVANCEBLOCK_Wrapper::TA_S_CDLADVANCEBLOCK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLADVANCEBLOCK_Wrapper *TA_S_CDLADVANCEBLOCK_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLADVANCEBLOCK_Wrapper *ta = new TA_S_CDLADVANCEBLOCK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLADVANCEBLOCK_Wrapper::run() {
    TA_S_CDLADVANCEBLOCK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLBELTHOLD_Wrapper::TA_CDLBELTHOLD_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLBELTHOLD_Wrapper *TA_CDLBELTHOLD_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLBELTHOLD_Wrapper *ta = new TA_CDLBELTHOLD_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLBELTHOLD_Wrapper::run() {
    TA_CDLBELTHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLBELTHOLD_Wrapper::TA_S_CDLBELTHOLD_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLBELTHOLD_Wrapper *TA_S_CDLBELTHOLD_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLBELTHOLD_Wrapper *ta = new TA_S_CDLBELTHOLD_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLBELTHOLD_Wrapper::run() {
    TA_S_CDLBELTHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLBREAKAWAY_Wrapper::TA_CDLBREAKAWAY_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLBREAKAWAY_Wrapper *TA_CDLBREAKAWAY_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLBREAKAWAY_Wrapper *ta = new TA_CDLBREAKAWAY_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLBREAKAWAY_Wrapper::run() {
    TA_CDLBREAKAWAY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLBREAKAWAY_Wrapper::TA_S_CDLBREAKAWAY_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLBREAKAWAY_Wrapper *TA_S_CDLBREAKAWAY_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLBREAKAWAY_Wrapper *ta = new TA_S_CDLBREAKAWAY_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLBREAKAWAY_Wrapper::run() {
    TA_S_CDLBREAKAWAY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLCLOSINGMARUBOZU_Wrapper::TA_CDLCLOSINGMARUBOZU_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLCLOSINGMARUBOZU_Wrapper *TA_CDLCLOSINGMARUBOZU_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLCLOSINGMARUBOZU_Wrapper *ta = new TA_CDLCLOSINGMARUBOZU_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLCLOSINGMARUBOZU_Wrapper::run() {
    TA_CDLCLOSINGMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLCLOSINGMARUBOZU_Wrapper::TA_S_CDLCLOSINGMARUBOZU_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLCLOSINGMARUBOZU_Wrapper *TA_S_CDLCLOSINGMARUBOZU_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLCLOSINGMARUBOZU_Wrapper *ta = new TA_S_CDLCLOSINGMARUBOZU_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLCLOSINGMARUBOZU_Wrapper::run() {
    TA_S_CDLCLOSINGMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLCONCEALBABYSWALL_Wrapper::TA_CDLCONCEALBABYSWALL_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLCONCEALBABYSWALL_Wrapper *TA_CDLCONCEALBABYSWALL_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLCONCEALBABYSWALL_Wrapper *ta = new TA_CDLCONCEALBABYSWALL_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLCONCEALBABYSWALL_Wrapper::run() {
    TA_CDLCONCEALBABYSWALL(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLCONCEALBABYSWALL_Wrapper::TA_S_CDLCONCEALBABYSWALL_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLCONCEALBABYSWALL_Wrapper *TA_S_CDLCONCEALBABYSWALL_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLCONCEALBABYSWALL_Wrapper *ta = new TA_S_CDLCONCEALBABYSWALL_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLCONCEALBABYSWALL_Wrapper::run() {
    TA_S_CDLCONCEALBABYSWALL(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLCOUNTERATTACK_Wrapper::TA_CDLCOUNTERATTACK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLCOUNTERATTACK_Wrapper *TA_CDLCOUNTERATTACK_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLCOUNTERATTACK_Wrapper *ta = new TA_CDLCOUNTERATTACK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLCOUNTERATTACK_Wrapper::run() {
    TA_CDLCOUNTERATTACK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLCOUNTERATTACK_Wrapper::TA_S_CDLCOUNTERATTACK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLCOUNTERATTACK_Wrapper *TA_S_CDLCOUNTERATTACK_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLCOUNTERATTACK_Wrapper *ta = new TA_S_CDLCOUNTERATTACK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLCOUNTERATTACK_Wrapper::run() {
    TA_S_CDLCOUNTERATTACK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLDARKCLOUDCOVER_Wrapper::TA_CDLDARKCLOUDCOVER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLDARKCLOUDCOVER_Wrapper *TA_CDLDARKCLOUDCOVER_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLDARKCLOUDCOVER_Wrapper *ta = new TA_CDLDARKCLOUDCOVER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLDARKCLOUDCOVER_Wrapper::run() {
    TA_CDLDARKCLOUDCOVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLDARKCLOUDCOVER_Wrapper::TA_S_CDLDARKCLOUDCOVER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLDARKCLOUDCOVER_Wrapper *TA_S_CDLDARKCLOUDCOVER_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLDARKCLOUDCOVER_Wrapper *ta = new TA_S_CDLDARKCLOUDCOVER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLDARKCLOUDCOVER_Wrapper::run() {
    TA_S_CDLDARKCLOUDCOVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLDOJI_Wrapper::TA_CDLDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLDOJI_Wrapper *TA_CDLDOJI_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLDOJI_Wrapper *ta = new TA_CDLDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLDOJI_Wrapper::run() {
    TA_CDLDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLDOJI_Wrapper::TA_S_CDLDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLDOJI_Wrapper *TA_S_CDLDOJI_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLDOJI_Wrapper *ta = new TA_S_CDLDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLDOJI_Wrapper::run() {
    TA_S_CDLDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLDOJISTAR_Wrapper::TA_CDLDOJISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLDOJISTAR_Wrapper *TA_CDLDOJISTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLDOJISTAR_Wrapper *ta = new TA_CDLDOJISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLDOJISTAR_Wrapper::run() {
    TA_CDLDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLDOJISTAR_Wrapper::TA_S_CDLDOJISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLDOJISTAR_Wrapper *TA_S_CDLDOJISTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLDOJISTAR_Wrapper *ta = new TA_S_CDLDOJISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLDOJISTAR_Wrapper::run() {
    TA_S_CDLDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLDRAGONFLYDOJI_Wrapper::TA_CDLDRAGONFLYDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLDRAGONFLYDOJI_Wrapper *TA_CDLDRAGONFLYDOJI_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLDRAGONFLYDOJI_Wrapper *ta = new TA_CDLDRAGONFLYDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLDRAGONFLYDOJI_Wrapper::run() {
    TA_CDLDRAGONFLYDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLDRAGONFLYDOJI_Wrapper::TA_S_CDLDRAGONFLYDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLDRAGONFLYDOJI_Wrapper *TA_S_CDLDRAGONFLYDOJI_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLDRAGONFLYDOJI_Wrapper *ta = new TA_S_CDLDRAGONFLYDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLDRAGONFLYDOJI_Wrapper::run() {
    TA_S_CDLDRAGONFLYDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLENGULFING_Wrapper::TA_CDLENGULFING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLENGULFING_Wrapper *TA_CDLENGULFING_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLENGULFING_Wrapper *ta = new TA_CDLENGULFING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLENGULFING_Wrapper::run() {
    TA_CDLENGULFING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLENGULFING_Wrapper::TA_S_CDLENGULFING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLENGULFING_Wrapper *TA_S_CDLENGULFING_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLENGULFING_Wrapper *ta = new TA_S_CDLENGULFING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLENGULFING_Wrapper::run() {
    TA_S_CDLENGULFING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLEVENINGDOJISTAR_Wrapper::TA_CDLEVENINGDOJISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLEVENINGDOJISTAR_Wrapper *TA_CDLEVENINGDOJISTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLEVENINGDOJISTAR_Wrapper *ta = new TA_CDLEVENINGDOJISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLEVENINGDOJISTAR_Wrapper::run() {
    TA_CDLEVENINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLEVENINGDOJISTAR_Wrapper::TA_S_CDLEVENINGDOJISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLEVENINGDOJISTAR_Wrapper *TA_S_CDLEVENINGDOJISTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLEVENINGDOJISTAR_Wrapper *ta = new TA_S_CDLEVENINGDOJISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLEVENINGDOJISTAR_Wrapper::run() {
    TA_S_CDLEVENINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLEVENINGSTAR_Wrapper::TA_CDLEVENINGSTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLEVENINGSTAR_Wrapper *TA_CDLEVENINGSTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLEVENINGSTAR_Wrapper *ta = new TA_CDLEVENINGSTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLEVENINGSTAR_Wrapper::run() {
    TA_CDLEVENINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLEVENINGSTAR_Wrapper::TA_S_CDLEVENINGSTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLEVENINGSTAR_Wrapper *TA_S_CDLEVENINGSTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLEVENINGSTAR_Wrapper *ta = new TA_S_CDLEVENINGSTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLEVENINGSTAR_Wrapper::run() {
    TA_S_CDLEVENINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLGAPSIDESIDEWHITE_Wrapper::TA_CDLGAPSIDESIDEWHITE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLGAPSIDESIDEWHITE_Wrapper *TA_CDLGAPSIDESIDEWHITE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLGAPSIDESIDEWHITE_Wrapper *ta = new TA_CDLGAPSIDESIDEWHITE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLGAPSIDESIDEWHITE_Wrapper::run() {
    TA_CDLGAPSIDESIDEWHITE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLGAPSIDESIDEWHITE_Wrapper::TA_S_CDLGAPSIDESIDEWHITE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLGAPSIDESIDEWHITE_Wrapper *TA_S_CDLGAPSIDESIDEWHITE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLGAPSIDESIDEWHITE_Wrapper *ta = new TA_S_CDLGAPSIDESIDEWHITE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLGAPSIDESIDEWHITE_Wrapper::run() {
    TA_S_CDLGAPSIDESIDEWHITE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLGRAVESTONEDOJI_Wrapper::TA_CDLGRAVESTONEDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLGRAVESTONEDOJI_Wrapper *TA_CDLGRAVESTONEDOJI_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLGRAVESTONEDOJI_Wrapper *ta = new TA_CDLGRAVESTONEDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLGRAVESTONEDOJI_Wrapper::run() {
    TA_CDLGRAVESTONEDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLGRAVESTONEDOJI_Wrapper::TA_S_CDLGRAVESTONEDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLGRAVESTONEDOJI_Wrapper *TA_S_CDLGRAVESTONEDOJI_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLGRAVESTONEDOJI_Wrapper *ta = new TA_S_CDLGRAVESTONEDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLGRAVESTONEDOJI_Wrapper::run() {
    TA_S_CDLGRAVESTONEDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHAMMER_Wrapper::TA_CDLHAMMER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHAMMER_Wrapper *TA_CDLHAMMER_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHAMMER_Wrapper *ta = new TA_CDLHAMMER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHAMMER_Wrapper::run() {
    TA_CDLHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHAMMER_Wrapper::TA_S_CDLHAMMER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHAMMER_Wrapper *TA_S_CDLHAMMER_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHAMMER_Wrapper *ta = new TA_S_CDLHAMMER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHAMMER_Wrapper::run() {
    TA_S_CDLHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHANGINGMAN_Wrapper::TA_CDLHANGINGMAN_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHANGINGMAN_Wrapper *TA_CDLHANGINGMAN_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHANGINGMAN_Wrapper *ta = new TA_CDLHANGINGMAN_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHANGINGMAN_Wrapper::run() {
    TA_CDLHANGINGMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHANGINGMAN_Wrapper::TA_S_CDLHANGINGMAN_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHANGINGMAN_Wrapper *TA_S_CDLHANGINGMAN_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHANGINGMAN_Wrapper *ta = new TA_S_CDLHANGINGMAN_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHANGINGMAN_Wrapper::run() {
    TA_S_CDLHANGINGMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHARAMI_Wrapper::TA_CDLHARAMI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHARAMI_Wrapper *TA_CDLHARAMI_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHARAMI_Wrapper *ta = new TA_CDLHARAMI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHARAMI_Wrapper::run() {
    TA_CDLHARAMI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHARAMI_Wrapper::TA_S_CDLHARAMI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHARAMI_Wrapper *TA_S_CDLHARAMI_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHARAMI_Wrapper *ta = new TA_S_CDLHARAMI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHARAMI_Wrapper::run() {
    TA_S_CDLHARAMI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHARAMICROSS_Wrapper::TA_CDLHARAMICROSS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHARAMICROSS_Wrapper *TA_CDLHARAMICROSS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHARAMICROSS_Wrapper *ta = new TA_CDLHARAMICROSS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHARAMICROSS_Wrapper::run() {
    TA_CDLHARAMICROSS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHARAMICROSS_Wrapper::TA_S_CDLHARAMICROSS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHARAMICROSS_Wrapper *TA_S_CDLHARAMICROSS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHARAMICROSS_Wrapper *ta = new TA_S_CDLHARAMICROSS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHARAMICROSS_Wrapper::run() {
    TA_S_CDLHARAMICROSS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHIGHWAVE_Wrapper::TA_CDLHIGHWAVE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHIGHWAVE_Wrapper *TA_CDLHIGHWAVE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHIGHWAVE_Wrapper *ta = new TA_CDLHIGHWAVE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHIGHWAVE_Wrapper::run() {
    TA_CDLHIGHWAVE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHIGHWAVE_Wrapper::TA_S_CDLHIGHWAVE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHIGHWAVE_Wrapper *TA_S_CDLHIGHWAVE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHIGHWAVE_Wrapper *ta = new TA_S_CDLHIGHWAVE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHIGHWAVE_Wrapper::run() {
    TA_S_CDLHIGHWAVE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHIKKAKE_Wrapper::TA_CDLHIKKAKE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHIKKAKE_Wrapper *TA_CDLHIKKAKE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHIKKAKE_Wrapper *ta = new TA_CDLHIKKAKE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHIKKAKE_Wrapper::run() {
    TA_CDLHIKKAKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHIKKAKE_Wrapper::TA_S_CDLHIKKAKE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHIKKAKE_Wrapper *TA_S_CDLHIKKAKE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHIKKAKE_Wrapper *ta = new TA_S_CDLHIKKAKE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHIKKAKE_Wrapper::run() {
    TA_S_CDLHIKKAKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHIKKAKEMOD_Wrapper::TA_CDLHIKKAKEMOD_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHIKKAKEMOD_Wrapper *TA_CDLHIKKAKEMOD_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHIKKAKEMOD_Wrapper *ta = new TA_CDLHIKKAKEMOD_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHIKKAKEMOD_Wrapper::run() {
    TA_CDLHIKKAKEMOD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHIKKAKEMOD_Wrapper::TA_S_CDLHIKKAKEMOD_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHIKKAKEMOD_Wrapper *TA_S_CDLHIKKAKEMOD_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHIKKAKEMOD_Wrapper *ta = new TA_S_CDLHIKKAKEMOD_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHIKKAKEMOD_Wrapper::run() {
    TA_S_CDLHIKKAKEMOD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLHOMINGPIGEON_Wrapper::TA_CDLHOMINGPIGEON_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLHOMINGPIGEON_Wrapper *TA_CDLHOMINGPIGEON_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLHOMINGPIGEON_Wrapper *ta = new TA_CDLHOMINGPIGEON_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLHOMINGPIGEON_Wrapper::run() {
    TA_CDLHOMINGPIGEON(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLHOMINGPIGEON_Wrapper::TA_S_CDLHOMINGPIGEON_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLHOMINGPIGEON_Wrapper *TA_S_CDLHOMINGPIGEON_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLHOMINGPIGEON_Wrapper *ta = new TA_S_CDLHOMINGPIGEON_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLHOMINGPIGEON_Wrapper::run() {
    TA_S_CDLHOMINGPIGEON(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLIDENTICAL3CROWS_Wrapper::TA_CDLIDENTICAL3CROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLIDENTICAL3CROWS_Wrapper *TA_CDLIDENTICAL3CROWS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLIDENTICAL3CROWS_Wrapper *ta = new TA_CDLIDENTICAL3CROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLIDENTICAL3CROWS_Wrapper::run() {
    TA_CDLIDENTICAL3CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLIDENTICAL3CROWS_Wrapper::TA_S_CDLIDENTICAL3CROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLIDENTICAL3CROWS_Wrapper *TA_S_CDLIDENTICAL3CROWS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLIDENTICAL3CROWS_Wrapper *ta = new TA_S_CDLIDENTICAL3CROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLIDENTICAL3CROWS_Wrapper::run() {
    TA_S_CDLIDENTICAL3CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLINNECK_Wrapper::TA_CDLINNECK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLINNECK_Wrapper *TA_CDLINNECK_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLINNECK_Wrapper *ta = new TA_CDLINNECK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLINNECK_Wrapper::run() {
    TA_CDLINNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLINNECK_Wrapper::TA_S_CDLINNECK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLINNECK_Wrapper *TA_S_CDLINNECK_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLINNECK_Wrapper *ta = new TA_S_CDLINNECK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLINNECK_Wrapper::run() {
    TA_S_CDLINNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLINVERTEDHAMMER_Wrapper::TA_CDLINVERTEDHAMMER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLINVERTEDHAMMER_Wrapper *TA_CDLINVERTEDHAMMER_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLINVERTEDHAMMER_Wrapper *ta = new TA_CDLINVERTEDHAMMER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLINVERTEDHAMMER_Wrapper::run() {
    TA_CDLINVERTEDHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLINVERTEDHAMMER_Wrapper::TA_S_CDLINVERTEDHAMMER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLINVERTEDHAMMER_Wrapper *TA_S_CDLINVERTEDHAMMER_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLINVERTEDHAMMER_Wrapper *ta = new TA_S_CDLINVERTEDHAMMER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLINVERTEDHAMMER_Wrapper::run() {
    TA_S_CDLINVERTEDHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLKICKING_Wrapper::TA_CDLKICKING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLKICKING_Wrapper *TA_CDLKICKING_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLKICKING_Wrapper *ta = new TA_CDLKICKING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLKICKING_Wrapper::run() {
    TA_CDLKICKING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLKICKING_Wrapper::TA_S_CDLKICKING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLKICKING_Wrapper *TA_S_CDLKICKING_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLKICKING_Wrapper *ta = new TA_S_CDLKICKING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLKICKING_Wrapper::run() {
    TA_S_CDLKICKING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLKICKINGBYLENGTH_Wrapper::TA_CDLKICKINGBYLENGTH_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLKICKINGBYLENGTH_Wrapper *TA_CDLKICKINGBYLENGTH_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLKICKINGBYLENGTH_Wrapper *ta = new TA_CDLKICKINGBYLENGTH_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLKICKINGBYLENGTH_Wrapper::run() {
    TA_CDLKICKINGBYLENGTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLKICKINGBYLENGTH_Wrapper::TA_S_CDLKICKINGBYLENGTH_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLKICKINGBYLENGTH_Wrapper *TA_S_CDLKICKINGBYLENGTH_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLKICKINGBYLENGTH_Wrapper *ta = new TA_S_CDLKICKINGBYLENGTH_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLKICKINGBYLENGTH_Wrapper::run() {
    TA_S_CDLKICKINGBYLENGTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLLADDERBOTTOM_Wrapper::TA_CDLLADDERBOTTOM_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLLADDERBOTTOM_Wrapper *TA_CDLLADDERBOTTOM_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLLADDERBOTTOM_Wrapper *ta = new TA_CDLLADDERBOTTOM_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLLADDERBOTTOM_Wrapper::run() {
    TA_CDLLADDERBOTTOM(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLLADDERBOTTOM_Wrapper::TA_S_CDLLADDERBOTTOM_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLLADDERBOTTOM_Wrapper *TA_S_CDLLADDERBOTTOM_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLLADDERBOTTOM_Wrapper *ta = new TA_S_CDLLADDERBOTTOM_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLLADDERBOTTOM_Wrapper::run() {
    TA_S_CDLLADDERBOTTOM(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLLONGLEGGEDDOJI_Wrapper::TA_CDLLONGLEGGEDDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLLONGLEGGEDDOJI_Wrapper *TA_CDLLONGLEGGEDDOJI_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLLONGLEGGEDDOJI_Wrapper *ta = new TA_CDLLONGLEGGEDDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLLONGLEGGEDDOJI_Wrapper::run() {
    TA_CDLLONGLEGGEDDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLLONGLEGGEDDOJI_Wrapper::TA_S_CDLLONGLEGGEDDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLLONGLEGGEDDOJI_Wrapper *TA_S_CDLLONGLEGGEDDOJI_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLLONGLEGGEDDOJI_Wrapper *ta = new TA_S_CDLLONGLEGGEDDOJI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLLONGLEGGEDDOJI_Wrapper::run() {
    TA_S_CDLLONGLEGGEDDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLLONGLINE_Wrapper::TA_CDLLONGLINE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLLONGLINE_Wrapper *TA_CDLLONGLINE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLLONGLINE_Wrapper *ta = new TA_CDLLONGLINE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLLONGLINE_Wrapper::run() {
    TA_CDLLONGLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLLONGLINE_Wrapper::TA_S_CDLLONGLINE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLLONGLINE_Wrapper *TA_S_CDLLONGLINE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLLONGLINE_Wrapper *ta = new TA_S_CDLLONGLINE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLLONGLINE_Wrapper::run() {
    TA_S_CDLLONGLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLMARUBOZU_Wrapper::TA_CDLMARUBOZU_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLMARUBOZU_Wrapper *TA_CDLMARUBOZU_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLMARUBOZU_Wrapper *ta = new TA_CDLMARUBOZU_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLMARUBOZU_Wrapper::run() {
    TA_CDLMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLMARUBOZU_Wrapper::TA_S_CDLMARUBOZU_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLMARUBOZU_Wrapper *TA_S_CDLMARUBOZU_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLMARUBOZU_Wrapper *ta = new TA_S_CDLMARUBOZU_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLMARUBOZU_Wrapper::run() {
    TA_S_CDLMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLMATCHINGLOW_Wrapper::TA_CDLMATCHINGLOW_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLMATCHINGLOW_Wrapper *TA_CDLMATCHINGLOW_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLMATCHINGLOW_Wrapper *ta = new TA_CDLMATCHINGLOW_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLMATCHINGLOW_Wrapper::run() {
    TA_CDLMATCHINGLOW(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLMATCHINGLOW_Wrapper::TA_S_CDLMATCHINGLOW_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLMATCHINGLOW_Wrapper *TA_S_CDLMATCHINGLOW_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLMATCHINGLOW_Wrapper *ta = new TA_S_CDLMATCHINGLOW_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLMATCHINGLOW_Wrapper::run() {
    TA_S_CDLMATCHINGLOW(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLMATHOLD_Wrapper::TA_CDLMATHOLD_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLMATHOLD_Wrapper *TA_CDLMATHOLD_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLMATHOLD_Wrapper *ta = new TA_CDLMATHOLD_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLMATHOLD_Wrapper::run() {
    TA_CDLMATHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLMATHOLD_Wrapper::TA_S_CDLMATHOLD_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLMATHOLD_Wrapper *TA_S_CDLMATHOLD_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLMATHOLD_Wrapper *ta = new TA_S_CDLMATHOLD_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLMATHOLD_Wrapper::run() {
    TA_S_CDLMATHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLMORNINGDOJISTAR_Wrapper::TA_CDLMORNINGDOJISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLMORNINGDOJISTAR_Wrapper *TA_CDLMORNINGDOJISTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLMORNINGDOJISTAR_Wrapper *ta = new TA_CDLMORNINGDOJISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLMORNINGDOJISTAR_Wrapper::run() {
    TA_CDLMORNINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLMORNINGDOJISTAR_Wrapper::TA_S_CDLMORNINGDOJISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLMORNINGDOJISTAR_Wrapper *TA_S_CDLMORNINGDOJISTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLMORNINGDOJISTAR_Wrapper *ta = new TA_S_CDLMORNINGDOJISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLMORNINGDOJISTAR_Wrapper::run() {
    TA_S_CDLMORNINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLMORNINGSTAR_Wrapper::TA_CDLMORNINGSTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLMORNINGSTAR_Wrapper *TA_CDLMORNINGSTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLMORNINGSTAR_Wrapper *ta = new TA_CDLMORNINGSTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLMORNINGSTAR_Wrapper::run() {
    TA_CDLMORNINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLMORNINGSTAR_Wrapper::TA_S_CDLMORNINGSTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLMORNINGSTAR_Wrapper *TA_S_CDLMORNINGSTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLMORNINGSTAR_Wrapper *ta = new TA_S_CDLMORNINGSTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLMORNINGSTAR_Wrapper::run() {
    TA_S_CDLMORNINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLONNECK_Wrapper::TA_CDLONNECK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLONNECK_Wrapper *TA_CDLONNECK_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLONNECK_Wrapper *ta = new TA_CDLONNECK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLONNECK_Wrapper::run() {
    TA_CDLONNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLONNECK_Wrapper::TA_S_CDLONNECK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLONNECK_Wrapper *TA_S_CDLONNECK_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLONNECK_Wrapper *ta = new TA_S_CDLONNECK_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLONNECK_Wrapper::run() {
    TA_S_CDLONNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLPIERCING_Wrapper::TA_CDLPIERCING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLPIERCING_Wrapper *TA_CDLPIERCING_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLPIERCING_Wrapper *ta = new TA_CDLPIERCING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLPIERCING_Wrapper::run() {
    TA_CDLPIERCING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLPIERCING_Wrapper::TA_S_CDLPIERCING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLPIERCING_Wrapper *TA_S_CDLPIERCING_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLPIERCING_Wrapper *ta = new TA_S_CDLPIERCING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLPIERCING_Wrapper::run() {
    TA_S_CDLPIERCING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLRICKSHAWMAN_Wrapper::TA_CDLRICKSHAWMAN_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLRICKSHAWMAN_Wrapper *TA_CDLRICKSHAWMAN_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLRICKSHAWMAN_Wrapper *ta = new TA_CDLRICKSHAWMAN_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLRICKSHAWMAN_Wrapper::run() {
    TA_CDLRICKSHAWMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLRICKSHAWMAN_Wrapper::TA_S_CDLRICKSHAWMAN_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLRICKSHAWMAN_Wrapper *TA_S_CDLRICKSHAWMAN_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLRICKSHAWMAN_Wrapper *ta = new TA_S_CDLRICKSHAWMAN_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLRICKSHAWMAN_Wrapper::run() {
    TA_S_CDLRICKSHAWMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLRISEFALL3METHODS_Wrapper::TA_CDLRISEFALL3METHODS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLRISEFALL3METHODS_Wrapper *TA_CDLRISEFALL3METHODS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLRISEFALL3METHODS_Wrapper *ta = new TA_CDLRISEFALL3METHODS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLRISEFALL3METHODS_Wrapper::run() {
    TA_CDLRISEFALL3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLRISEFALL3METHODS_Wrapper::TA_S_CDLRISEFALL3METHODS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLRISEFALL3METHODS_Wrapper *TA_S_CDLRISEFALL3METHODS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLRISEFALL3METHODS_Wrapper *ta = new TA_S_CDLRISEFALL3METHODS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLRISEFALL3METHODS_Wrapper::run() {
    TA_S_CDLRISEFALL3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLSEPARATINGLINES_Wrapper::TA_CDLSEPARATINGLINES_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLSEPARATINGLINES_Wrapper *TA_CDLSEPARATINGLINES_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLSEPARATINGLINES_Wrapper *ta = new TA_CDLSEPARATINGLINES_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLSEPARATINGLINES_Wrapper::run() {
    TA_CDLSEPARATINGLINES(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLSEPARATINGLINES_Wrapper::TA_S_CDLSEPARATINGLINES_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLSEPARATINGLINES_Wrapper *TA_S_CDLSEPARATINGLINES_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLSEPARATINGLINES_Wrapper *ta = new TA_S_CDLSEPARATINGLINES_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLSEPARATINGLINES_Wrapper::run() {
    TA_S_CDLSEPARATINGLINES(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLSHOOTINGSTAR_Wrapper::TA_CDLSHOOTINGSTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLSHOOTINGSTAR_Wrapper *TA_CDLSHOOTINGSTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLSHOOTINGSTAR_Wrapper *ta = new TA_CDLSHOOTINGSTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLSHOOTINGSTAR_Wrapper::run() {
    TA_CDLSHOOTINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLSHOOTINGSTAR_Wrapper::TA_S_CDLSHOOTINGSTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLSHOOTINGSTAR_Wrapper *TA_S_CDLSHOOTINGSTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLSHOOTINGSTAR_Wrapper *ta = new TA_S_CDLSHOOTINGSTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLSHOOTINGSTAR_Wrapper::run() {
    TA_S_CDLSHOOTINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLSHORTLINE_Wrapper::TA_CDLSHORTLINE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLSHORTLINE_Wrapper *TA_CDLSHORTLINE_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLSHORTLINE_Wrapper *ta = new TA_CDLSHORTLINE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLSHORTLINE_Wrapper::run() {
    TA_CDLSHORTLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLSHORTLINE_Wrapper::TA_S_CDLSHORTLINE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLSHORTLINE_Wrapper *TA_S_CDLSHORTLINE_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLSHORTLINE_Wrapper *ta = new TA_S_CDLSHORTLINE_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLSHORTLINE_Wrapper::run() {
    TA_S_CDLSHORTLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLSPINNINGTOP_Wrapper::TA_CDLSPINNINGTOP_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLSPINNINGTOP_Wrapper *TA_CDLSPINNINGTOP_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLSPINNINGTOP_Wrapper *ta = new TA_CDLSPINNINGTOP_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLSPINNINGTOP_Wrapper::run() {
    TA_CDLSPINNINGTOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLSPINNINGTOP_Wrapper::TA_S_CDLSPINNINGTOP_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLSPINNINGTOP_Wrapper *TA_S_CDLSPINNINGTOP_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLSPINNINGTOP_Wrapper *ta = new TA_S_CDLSPINNINGTOP_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLSPINNINGTOP_Wrapper::run() {
    TA_S_CDLSPINNINGTOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLSTALLEDPATTERN_Wrapper::TA_CDLSTALLEDPATTERN_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLSTALLEDPATTERN_Wrapper *TA_CDLSTALLEDPATTERN_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLSTALLEDPATTERN_Wrapper *ta = new TA_CDLSTALLEDPATTERN_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLSTALLEDPATTERN_Wrapper::run() {
    TA_CDLSTALLEDPATTERN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLSTALLEDPATTERN_Wrapper::TA_S_CDLSTALLEDPATTERN_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLSTALLEDPATTERN_Wrapper *TA_S_CDLSTALLEDPATTERN_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLSTALLEDPATTERN_Wrapper *ta = new TA_S_CDLSTALLEDPATTERN_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLSTALLEDPATTERN_Wrapper::run() {
    TA_S_CDLSTALLEDPATTERN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLSTICKSANDWICH_Wrapper::TA_CDLSTICKSANDWICH_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLSTICKSANDWICH_Wrapper *TA_CDLSTICKSANDWICH_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLSTICKSANDWICH_Wrapper *ta = new TA_CDLSTICKSANDWICH_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLSTICKSANDWICH_Wrapper::run() {
    TA_CDLSTICKSANDWICH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLSTICKSANDWICH_Wrapper::TA_S_CDLSTICKSANDWICH_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLSTICKSANDWICH_Wrapper *TA_S_CDLSTICKSANDWICH_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLSTICKSANDWICH_Wrapper *ta = new TA_S_CDLSTICKSANDWICH_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLSTICKSANDWICH_Wrapper::run() {
    TA_S_CDLSTICKSANDWICH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLTAKURI_Wrapper::TA_CDLTAKURI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLTAKURI_Wrapper *TA_CDLTAKURI_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLTAKURI_Wrapper *ta = new TA_CDLTAKURI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLTAKURI_Wrapper::run() {
    TA_CDLTAKURI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLTAKURI_Wrapper::TA_S_CDLTAKURI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLTAKURI_Wrapper *TA_S_CDLTAKURI_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLTAKURI_Wrapper *ta = new TA_S_CDLTAKURI_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLTAKURI_Wrapper::run() {
    TA_S_CDLTAKURI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLTASUKIGAP_Wrapper::TA_CDLTASUKIGAP_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLTASUKIGAP_Wrapper *TA_CDLTASUKIGAP_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLTASUKIGAP_Wrapper *ta = new TA_CDLTASUKIGAP_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLTASUKIGAP_Wrapper::run() {
    TA_CDLTASUKIGAP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLTASUKIGAP_Wrapper::TA_S_CDLTASUKIGAP_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLTASUKIGAP_Wrapper *TA_S_CDLTASUKIGAP_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLTASUKIGAP_Wrapper *ta = new TA_S_CDLTASUKIGAP_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLTASUKIGAP_Wrapper::run() {
    TA_S_CDLTASUKIGAP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLTHRUSTING_Wrapper::TA_CDLTHRUSTING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLTHRUSTING_Wrapper *TA_CDLTHRUSTING_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLTHRUSTING_Wrapper *ta = new TA_CDLTHRUSTING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLTHRUSTING_Wrapper::run() {
    TA_CDLTHRUSTING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLTHRUSTING_Wrapper::TA_S_CDLTHRUSTING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLTHRUSTING_Wrapper *TA_S_CDLTHRUSTING_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLTHRUSTING_Wrapper *ta = new TA_S_CDLTHRUSTING_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLTHRUSTING_Wrapper::run() {
    TA_S_CDLTHRUSTING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLTRISTAR_Wrapper::TA_CDLTRISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLTRISTAR_Wrapper *TA_CDLTRISTAR_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLTRISTAR_Wrapper *ta = new TA_CDLTRISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLTRISTAR_Wrapper::run() {
    TA_CDLTRISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLTRISTAR_Wrapper::TA_S_CDLTRISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLTRISTAR_Wrapper *TA_S_CDLTRISTAR_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLTRISTAR_Wrapper *ta = new TA_S_CDLTRISTAR_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLTRISTAR_Wrapper::run() {
    TA_S_CDLTRISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLUNIQUE3RIVER_Wrapper::TA_CDLUNIQUE3RIVER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLUNIQUE3RIVER_Wrapper *TA_CDLUNIQUE3RIVER_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLUNIQUE3RIVER_Wrapper *ta = new TA_CDLUNIQUE3RIVER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLUNIQUE3RIVER_Wrapper::run() {
    TA_CDLUNIQUE3RIVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLUNIQUE3RIVER_Wrapper::TA_S_CDLUNIQUE3RIVER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLUNIQUE3RIVER_Wrapper *TA_S_CDLUNIQUE3RIVER_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLUNIQUE3RIVER_Wrapper *ta = new TA_S_CDLUNIQUE3RIVER_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLUNIQUE3RIVER_Wrapper::run() {
    TA_S_CDLUNIQUE3RIVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLUPSIDEGAP2CROWS_Wrapper::TA_CDLUPSIDEGAP2CROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLUPSIDEGAP2CROWS_Wrapper *TA_CDLUPSIDEGAP2CROWS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLUPSIDEGAP2CROWS_Wrapper *ta = new TA_CDLUPSIDEGAP2CROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLUPSIDEGAP2CROWS_Wrapper::run() {
    TA_CDLUPSIDEGAP2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLUPSIDEGAP2CROWS_Wrapper::TA_S_CDLUPSIDEGAP2CROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLUPSIDEGAP2CROWS_Wrapper *TA_S_CDLUPSIDEGAP2CROWS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLUPSIDEGAP2CROWS_Wrapper *ta = new TA_S_CDLUPSIDEGAP2CROWS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLUPSIDEGAP2CROWS_Wrapper::run() {
    TA_S_CDLUPSIDEGAP2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CDLXSIDEGAP3METHODS_Wrapper::TA_CDLXSIDEGAP3METHODS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_CDLXSIDEGAP3METHODS_Wrapper *TA_CDLXSIDEGAP3METHODS_Wrapper::create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_CDLXSIDEGAP3METHODS_Wrapper *ta = new TA_CDLXSIDEGAP3METHODS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_CDLXSIDEGAP3METHODS_Wrapper::run() {
    TA_CDLXSIDEGAP3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_CDLXSIDEGAP3METHODS_Wrapper::TA_S_CDLXSIDEGAP3METHODS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_CDLXSIDEGAP3METHODS_Wrapper *TA_S_CDLXSIDEGAP3METHODS_Wrapper::create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_CDLXSIDEGAP3METHODS_Wrapper *ta = new TA_S_CDLXSIDEGAP3METHODS_Wrapper(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_CDLXSIDEGAP3METHODS_Wrapper::run() {
    TA_S_CDLXSIDEGAP3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_CEIL_Wrapper::TA_CEIL_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_CEIL_Wrapper *TA_CEIL_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_CEIL_Wrapper *ta = new TA_CEIL_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_CEIL_Wrapper::run() {
    TA_CEIL(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_CEIL_Wrapper::TA_S_CEIL_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_CEIL_Wrapper *TA_S_CEIL_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_CEIL_Wrapper *ta = new TA_S_CEIL_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_CEIL_Wrapper::run() {
    TA_S_CEIL(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_CMO_Wrapper::TA_CMO_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_CMO_Wrapper *TA_CMO_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_CMO_Wrapper *ta = new TA_CMO_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_CMO_Wrapper::run() {
    TA_CMO(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_CMO_Wrapper::TA_S_CMO_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_CMO_Wrapper *TA_S_CMO_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_CMO_Wrapper *ta = new TA_S_CMO_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_CMO_Wrapper::run() {
    TA_S_CMO(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_CORREL_Wrapper::TA_CORREL_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_CORREL_Wrapper *TA_CORREL_Wrapper::create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_CORREL_Wrapper *ta = new TA_CORREL_Wrapper(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_CORREL_Wrapper::run() {
    TA_CORREL(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_CORREL_Wrapper::TA_S_CORREL_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_CORREL_Wrapper *TA_S_CORREL_Wrapper::create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_CORREL_Wrapper *ta = new TA_S_CORREL_Wrapper(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_CORREL_Wrapper::run() {
    TA_S_CORREL(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_COS_Wrapper::TA_COS_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_COS_Wrapper *TA_COS_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_COS_Wrapper *ta = new TA_COS_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_COS_Wrapper::run() {
    TA_COS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_COS_Wrapper::TA_S_COS_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_COS_Wrapper *TA_S_COS_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_COS_Wrapper *ta = new TA_S_COS_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_COS_Wrapper::run() {
    TA_S_COS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_COSH_Wrapper::TA_COSH_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_COSH_Wrapper *TA_COSH_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_COSH_Wrapper *ta = new TA_COSH_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_COSH_Wrapper::run() {
    TA_COSH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_COSH_Wrapper::TA_S_COSH_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_COSH_Wrapper *TA_S_COSH_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_COSH_Wrapper *ta = new TA_S_COSH_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_COSH_Wrapper::run() {
    TA_S_COSH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_DEMA_Wrapper::TA_DEMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_DEMA_Wrapper *TA_DEMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_DEMA_Wrapper *ta = new TA_DEMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_DEMA_Wrapper::run() {
    TA_DEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_DEMA_Wrapper::TA_S_DEMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_DEMA_Wrapper *TA_S_DEMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_DEMA_Wrapper *ta = new TA_S_DEMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_DEMA_Wrapper::run() {
    TA_S_DEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_DIV_Wrapper::TA_DIV_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_DIV_Wrapper *TA_DIV_Wrapper::create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_DIV_Wrapper *ta = new TA_DIV_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_DIV_Wrapper::run() {
    TA_DIV(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_DIV_Wrapper::TA_S_DIV_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_DIV_Wrapper *TA_S_DIV_Wrapper::create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_DIV_Wrapper *ta = new TA_S_DIV_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_DIV_Wrapper::run() {
    TA_S_DIV(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_DX_Wrapper::TA_DX_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_DX_Wrapper *TA_DX_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_DX_Wrapper *ta = new TA_DX_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_DX_Wrapper::run() {
    TA_DX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_DX_Wrapper::TA_S_DX_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_DX_Wrapper *TA_S_DX_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_DX_Wrapper *ta = new TA_S_DX_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_DX_Wrapper::run() {
    TA_S_DX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_EMA_Wrapper::TA_EMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_EMA_Wrapper *TA_EMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_EMA_Wrapper *ta = new TA_EMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_EMA_Wrapper::run() {
    TA_EMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_EMA_Wrapper::TA_S_EMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_EMA_Wrapper *TA_S_EMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_EMA_Wrapper *ta = new TA_S_EMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_EMA_Wrapper::run() {
    TA_S_EMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_EXP_Wrapper::TA_EXP_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_EXP_Wrapper *TA_EXP_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_EXP_Wrapper *ta = new TA_EXP_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_EXP_Wrapper::run() {
    TA_EXP(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_EXP_Wrapper::TA_S_EXP_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_EXP_Wrapper *TA_S_EXP_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_EXP_Wrapper *ta = new TA_S_EXP_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_EXP_Wrapper::run() {
    TA_S_EXP(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_FLOOR_Wrapper::TA_FLOOR_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_FLOOR_Wrapper *TA_FLOOR_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_FLOOR_Wrapper *ta = new TA_FLOOR_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_FLOOR_Wrapper::run() {
    TA_FLOOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_FLOOR_Wrapper::TA_S_FLOOR_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_FLOOR_Wrapper *TA_S_FLOOR_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_FLOOR_Wrapper *ta = new TA_S_FLOOR_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_FLOOR_Wrapper::run() {
    TA_S_FLOOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_HT_DCPERIOD_Wrapper::TA_HT_DCPERIOD_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_HT_DCPERIOD_Wrapper *TA_HT_DCPERIOD_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_HT_DCPERIOD_Wrapper *ta = new TA_HT_DCPERIOD_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_HT_DCPERIOD_Wrapper::run() {
    TA_HT_DCPERIOD(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_HT_DCPERIOD_Wrapper::TA_S_HT_DCPERIOD_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_HT_DCPERIOD_Wrapper *TA_S_HT_DCPERIOD_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_HT_DCPERIOD_Wrapper *ta = new TA_S_HT_DCPERIOD_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_HT_DCPERIOD_Wrapper::run() {
    TA_S_HT_DCPERIOD(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_HT_DCPHASE_Wrapper::TA_HT_DCPHASE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_HT_DCPHASE_Wrapper *TA_HT_DCPHASE_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_HT_DCPHASE_Wrapper *ta = new TA_HT_DCPHASE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_HT_DCPHASE_Wrapper::run() {
    TA_HT_DCPHASE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_HT_DCPHASE_Wrapper::TA_S_HT_DCPHASE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_HT_DCPHASE_Wrapper *TA_S_HT_DCPHASE_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_HT_DCPHASE_Wrapper *ta = new TA_S_HT_DCPHASE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_HT_DCPHASE_Wrapper::run() {
    TA_S_HT_DCPHASE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_HT_PHASOR_Wrapper::TA_HT_PHASOR_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInPhase = outInPhase;
    this->outQuadrature = outQuadrature;
}

TA_HT_PHASOR_Wrapper *TA_HT_PHASOR_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]) {
    TA_HT_PHASOR_Wrapper *ta = new TA_HT_PHASOR_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInPhase, outQuadrature);
    return ta;
}

TA_RetCode TA_HT_PHASOR_Wrapper::run() {
    TA_HT_PHASOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInPhase, this->outQuadrature);
}

TA_S_HT_PHASOR_Wrapper::TA_S_HT_PHASOR_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInPhase = outInPhase;
    this->outQuadrature = outQuadrature;
}

TA_S_HT_PHASOR_Wrapper *TA_S_HT_PHASOR_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]) {
    TA_S_HT_PHASOR_Wrapper *ta = new TA_S_HT_PHASOR_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInPhase, outQuadrature);
    return ta;
}

TA_RetCode TA_S_HT_PHASOR_Wrapper::run() {
    TA_S_HT_PHASOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInPhase, this->outQuadrature);
}

TA_HT_SINE_Wrapper::TA_HT_SINE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outSine = outSine;
    this->outLeadSine = outLeadSine;
}

TA_HT_SINE_Wrapper *TA_HT_SINE_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]) {
    TA_HT_SINE_Wrapper *ta = new TA_HT_SINE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outSine, outLeadSine);
    return ta;
}

TA_RetCode TA_HT_SINE_Wrapper::run() {
    TA_HT_SINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outSine, this->outLeadSine);
}

TA_S_HT_SINE_Wrapper::TA_S_HT_SINE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outSine = outSine;
    this->outLeadSine = outLeadSine;
}

TA_S_HT_SINE_Wrapper *TA_S_HT_SINE_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]) {
    TA_S_HT_SINE_Wrapper *ta = new TA_S_HT_SINE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outSine, outLeadSine);
    return ta;
}

TA_RetCode TA_S_HT_SINE_Wrapper::run() {
    TA_S_HT_SINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outSine, this->outLeadSine);
}

TA_HT_TRENDLINE_Wrapper::TA_HT_TRENDLINE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_HT_TRENDLINE_Wrapper *TA_HT_TRENDLINE_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_HT_TRENDLINE_Wrapper *ta = new TA_HT_TRENDLINE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_HT_TRENDLINE_Wrapper::run() {
    TA_HT_TRENDLINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_HT_TRENDLINE_Wrapper::TA_S_HT_TRENDLINE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_HT_TRENDLINE_Wrapper *TA_S_HT_TRENDLINE_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_HT_TRENDLINE_Wrapper *ta = new TA_S_HT_TRENDLINE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_HT_TRENDLINE_Wrapper::run() {
    TA_S_HT_TRENDLINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_HT_TRENDMODE_Wrapper::TA_HT_TRENDMODE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_HT_TRENDMODE_Wrapper *TA_HT_TRENDMODE_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_HT_TRENDMODE_Wrapper *ta = new TA_HT_TRENDMODE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_HT_TRENDMODE_Wrapper::run() {
    TA_HT_TRENDMODE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_HT_TRENDMODE_Wrapper::TA_S_HT_TRENDMODE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_HT_TRENDMODE_Wrapper *TA_S_HT_TRENDMODE_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_HT_TRENDMODE_Wrapper *ta = new TA_S_HT_TRENDMODE_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_HT_TRENDMODE_Wrapper::run() {
    TA_S_HT_TRENDMODE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_KAMA_Wrapper::TA_KAMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_KAMA_Wrapper *TA_KAMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_KAMA_Wrapper *ta = new TA_KAMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_KAMA_Wrapper::run() {
    TA_KAMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_KAMA_Wrapper::TA_S_KAMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_KAMA_Wrapper *TA_S_KAMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_KAMA_Wrapper *ta = new TA_S_KAMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_KAMA_Wrapper::run() {
    TA_S_KAMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_LINEARREG_Wrapper::TA_LINEARREG_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_LINEARREG_Wrapper *TA_LINEARREG_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_LINEARREG_Wrapper *ta = new TA_LINEARREG_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_LINEARREG_Wrapper::run() {
    TA_LINEARREG(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_LINEARREG_Wrapper::TA_S_LINEARREG_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_LINEARREG_Wrapper *TA_S_LINEARREG_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_LINEARREG_Wrapper *ta = new TA_S_LINEARREG_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_LINEARREG_Wrapper::run() {
    TA_S_LINEARREG(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_LINEARREG_ANGLE_Wrapper::TA_LINEARREG_ANGLE_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_LINEARREG_ANGLE_Wrapper *TA_LINEARREG_ANGLE_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_LINEARREG_ANGLE_Wrapper *ta = new TA_LINEARREG_ANGLE_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_LINEARREG_ANGLE_Wrapper::run() {
    TA_LINEARREG_ANGLE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_LINEARREG_ANGLE_Wrapper::TA_S_LINEARREG_ANGLE_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_LINEARREG_ANGLE_Wrapper *TA_S_LINEARREG_ANGLE_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_LINEARREG_ANGLE_Wrapper *ta = new TA_S_LINEARREG_ANGLE_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_LINEARREG_ANGLE_Wrapper::run() {
    TA_S_LINEARREG_ANGLE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_LINEARREG_INTERCEPT_Wrapper::TA_LINEARREG_INTERCEPT_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_LINEARREG_INTERCEPT_Wrapper *TA_LINEARREG_INTERCEPT_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_LINEARREG_INTERCEPT_Wrapper *ta = new TA_LINEARREG_INTERCEPT_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_LINEARREG_INTERCEPT_Wrapper::run() {
    TA_LINEARREG_INTERCEPT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_LINEARREG_INTERCEPT_Wrapper::TA_S_LINEARREG_INTERCEPT_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_LINEARREG_INTERCEPT_Wrapper *TA_S_LINEARREG_INTERCEPT_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_LINEARREG_INTERCEPT_Wrapper *ta = new TA_S_LINEARREG_INTERCEPT_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_LINEARREG_INTERCEPT_Wrapper::run() {
    TA_S_LINEARREG_INTERCEPT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_LINEARREG_SLOPE_Wrapper::TA_LINEARREG_SLOPE_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_LINEARREG_SLOPE_Wrapper *TA_LINEARREG_SLOPE_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_LINEARREG_SLOPE_Wrapper *ta = new TA_LINEARREG_SLOPE_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_LINEARREG_SLOPE_Wrapper::run() {
    TA_LINEARREG_SLOPE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_LINEARREG_SLOPE_Wrapper::TA_S_LINEARREG_SLOPE_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_LINEARREG_SLOPE_Wrapper *TA_S_LINEARREG_SLOPE_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_LINEARREG_SLOPE_Wrapper *ta = new TA_S_LINEARREG_SLOPE_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_LINEARREG_SLOPE_Wrapper::run() {
    TA_S_LINEARREG_SLOPE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_LN_Wrapper::TA_LN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_LN_Wrapper *TA_LN_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_LN_Wrapper *ta = new TA_LN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_LN_Wrapper::run() {
    TA_LN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_LN_Wrapper::TA_S_LN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_LN_Wrapper *TA_S_LN_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_LN_Wrapper *ta = new TA_S_LN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_LN_Wrapper::run() {
    TA_S_LN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_LOG10_Wrapper::TA_LOG10_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_LOG10_Wrapper *TA_LOG10_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_LOG10_Wrapper *ta = new TA_LOG10_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_LOG10_Wrapper::run() {
    TA_LOG10(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_LOG10_Wrapper::TA_S_LOG10_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_LOG10_Wrapper *TA_S_LOG10_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_LOG10_Wrapper *ta = new TA_S_LOG10_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_LOG10_Wrapper::run() {
    TA_S_LOG10(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MA_Wrapper::TA_MA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MA_Wrapper *TA_MA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MA_Wrapper *ta = new TA_MA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MA_Wrapper::run() {
    TA_MA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MA_Wrapper::TA_S_MA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MA_Wrapper *TA_S_MA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MA_Wrapper *ta = new TA_S_MA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MA_Wrapper::run() {
    TA_S_MA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MACD_Wrapper::TA_MACD_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInSignalPeriod = optInSignalPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_MACD_Wrapper *TA_MACD_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    TA_MACD_Wrapper *ta = new TA_MACD_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

TA_RetCode TA_MACD_Wrapper::run() {
    TA_MACD(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

TA_S_MACD_Wrapper::TA_S_MACD_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInSignalPeriod = optInSignalPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_S_MACD_Wrapper *TA_S_MACD_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    TA_S_MACD_Wrapper *ta = new TA_S_MACD_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

TA_RetCode TA_S_MACD_Wrapper::run() {
    TA_S_MACD(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

TA_MACDEXT_Wrapper::TA_MACDEXT_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInFastMAType = optInFastMAType;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInSlowMAType = optInSlowMAType;
    this->optInSignalPeriod = optInSignalPeriod;
    this->optInSignalMAType = optInSignalMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_MACDEXT_Wrapper *TA_MACDEXT_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    TA_MACDEXT_Wrapper *ta = new TA_MACDEXT_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInFastMAType, optInSlowPeriod, optInSlowMAType, optInSignalPeriod, optInSignalMAType, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

TA_RetCode TA_MACDEXT_Wrapper::run() {
    TA_MACDEXT(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInFastMAType, this->optInSlowPeriod, this->optInSlowMAType, this->optInSignalPeriod, this->optInSignalMAType, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

TA_S_MACDEXT_Wrapper::TA_S_MACDEXT_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInFastMAType = optInFastMAType;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInSlowMAType = optInSlowMAType;
    this->optInSignalPeriod = optInSignalPeriod;
    this->optInSignalMAType = optInSignalMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_S_MACDEXT_Wrapper *TA_S_MACDEXT_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    TA_S_MACDEXT_Wrapper *ta = new TA_S_MACDEXT_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInFastMAType, optInSlowPeriod, optInSlowMAType, optInSignalPeriod, optInSignalMAType, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

TA_RetCode TA_S_MACDEXT_Wrapper::run() {
    TA_S_MACDEXT(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInFastMAType, this->optInSlowPeriod, this->optInSlowMAType, this->optInSignalPeriod, this->optInSignalMAType, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

TA_MACDFIX_Wrapper::TA_MACDFIX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInSignalPeriod = optInSignalPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_MACDFIX_Wrapper *TA_MACDFIX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    TA_MACDFIX_Wrapper *ta = new TA_MACDFIX_Wrapper(startIdx, endIdx, inReal, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

TA_RetCode TA_MACDFIX_Wrapper::run() {
    TA_MACDFIX(this->startIdx, this->endIdx, this->inReal, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

TA_S_MACDFIX_Wrapper::TA_S_MACDFIX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInSignalPeriod = optInSignalPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_S_MACDFIX_Wrapper *TA_S_MACDFIX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]) {
    TA_S_MACDFIX_Wrapper *ta = new TA_S_MACDFIX_Wrapper(startIdx, endIdx, inReal, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

TA_RetCode TA_S_MACDFIX_Wrapper::run() {
    TA_S_MACDFIX(this->startIdx, this->endIdx, this->inReal, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

TA_MAMA_Wrapper::TA_MAMA_Wrapper(int startIdx, int endIdx, const double inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastLimit = optInFastLimit;
    this->optInSlowLimit = optInSlowLimit;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMAMA = outMAMA;
    this->outFAMA = outFAMA;
}

TA_MAMA_Wrapper *TA_MAMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]) {
    TA_MAMA_Wrapper *ta = new TA_MAMA_Wrapper(startIdx, endIdx, inReal, optInFastLimit, optInSlowLimit, outBegIdx, outNBElement, outMAMA, outFAMA);
    return ta;
}

TA_RetCode TA_MAMA_Wrapper::run() {
    TA_MAMA(this->startIdx, this->endIdx, this->inReal, this->optInFastLimit, this->optInSlowLimit, this->outBegIdx, this->outNBElement, this->outMAMA, this->outFAMA);
}

TA_S_MAMA_Wrapper::TA_S_MAMA_Wrapper(int startIdx, int endIdx, const float inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastLimit = optInFastLimit;
    this->optInSlowLimit = optInSlowLimit;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMAMA = outMAMA;
    this->outFAMA = outFAMA;
}

TA_S_MAMA_Wrapper *TA_S_MAMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]) {
    TA_S_MAMA_Wrapper *ta = new TA_S_MAMA_Wrapper(startIdx, endIdx, inReal, optInFastLimit, optInSlowLimit, outBegIdx, outNBElement, outMAMA, outFAMA);
    return ta;
}

TA_RetCode TA_S_MAMA_Wrapper::run() {
    TA_S_MAMA(this->startIdx, this->endIdx, this->inReal, this->optInFastLimit, this->optInSlowLimit, this->outBegIdx, this->outNBElement, this->outMAMA, this->outFAMA);
}

TA_MAVP_Wrapper::TA_MAVP_Wrapper(int startIdx, int endIdx, const double inReal[], const double inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->inPeriods = inPeriods;
    this->optInMinPeriod = optInMinPeriod;
    this->optInMaxPeriod = optInMaxPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MAVP_Wrapper *TA_MAVP_Wrapper::create(int startIdx, int endIdx, const double inReal[], const double inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MAVP_Wrapper *ta = new TA_MAVP_Wrapper(startIdx, endIdx, inReal, inPeriods, optInMinPeriod, optInMaxPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MAVP_Wrapper::run() {
    TA_MAVP(this->startIdx, this->endIdx, this->inReal, this->inPeriods, this->optInMinPeriod, this->optInMaxPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MAVP_Wrapper::TA_S_MAVP_Wrapper(int startIdx, int endIdx, const float inReal[], const float inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->inPeriods = inPeriods;
    this->optInMinPeriod = optInMinPeriod;
    this->optInMaxPeriod = optInMaxPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MAVP_Wrapper *TA_S_MAVP_Wrapper::create(int startIdx, int endIdx, const float inReal[], const float inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MAVP_Wrapper *ta = new TA_S_MAVP_Wrapper(startIdx, endIdx, inReal, inPeriods, optInMinPeriod, optInMaxPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MAVP_Wrapper::run() {
    TA_S_MAVP(this->startIdx, this->endIdx, this->inReal, this->inPeriods, this->optInMinPeriod, this->optInMaxPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MAX_Wrapper::TA_MAX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MAX_Wrapper *TA_MAX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MAX_Wrapper *ta = new TA_MAX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MAX_Wrapper::run() {
    TA_MAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MAX_Wrapper::TA_S_MAX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MAX_Wrapper *TA_S_MAX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MAX_Wrapper *ta = new TA_S_MAX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MAX_Wrapper::run() {
    TA_S_MAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MAXINDEX_Wrapper::TA_MAXINDEX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_MAXINDEX_Wrapper *TA_MAXINDEX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_MAXINDEX_Wrapper *ta = new TA_MAXINDEX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_MAXINDEX_Wrapper::run() {
    TA_MAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_MAXINDEX_Wrapper::TA_S_MAXINDEX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_MAXINDEX_Wrapper *TA_S_MAXINDEX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_MAXINDEX_Wrapper *ta = new TA_S_MAXINDEX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_MAXINDEX_Wrapper::run() {
    TA_S_MAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_MEDPRICE_Wrapper::TA_MEDPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MEDPRICE_Wrapper *TA_MEDPRICE_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MEDPRICE_Wrapper *ta = new TA_MEDPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MEDPRICE_Wrapper::run() {
    TA_MEDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MEDPRICE_Wrapper::TA_S_MEDPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MEDPRICE_Wrapper *TA_S_MEDPRICE_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MEDPRICE_Wrapper *ta = new TA_S_MEDPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MEDPRICE_Wrapper::run() {
    TA_S_MEDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MFI_Wrapper::TA_MFI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MFI_Wrapper *TA_MFI_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MFI_Wrapper *ta = new TA_MFI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MFI_Wrapper::run() {
    TA_MFI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MFI_Wrapper::TA_S_MFI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MFI_Wrapper *TA_S_MFI_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MFI_Wrapper *ta = new TA_S_MFI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MFI_Wrapper::run() {
    TA_S_MFI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MIDPOINT_Wrapper::TA_MIDPOINT_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MIDPOINT_Wrapper *TA_MIDPOINT_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MIDPOINT_Wrapper *ta = new TA_MIDPOINT_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MIDPOINT_Wrapper::run() {
    TA_MIDPOINT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MIDPOINT_Wrapper::TA_S_MIDPOINT_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MIDPOINT_Wrapper *TA_S_MIDPOINT_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MIDPOINT_Wrapper *ta = new TA_S_MIDPOINT_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MIDPOINT_Wrapper::run() {
    TA_S_MIDPOINT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MIDPRICE_Wrapper::TA_MIDPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MIDPRICE_Wrapper *TA_MIDPRICE_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MIDPRICE_Wrapper *ta = new TA_MIDPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MIDPRICE_Wrapper::run() {
    TA_MIDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MIDPRICE_Wrapper::TA_S_MIDPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MIDPRICE_Wrapper *TA_S_MIDPRICE_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MIDPRICE_Wrapper *ta = new TA_S_MIDPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MIDPRICE_Wrapper::run() {
    TA_S_MIDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MIN_Wrapper::TA_MIN_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MIN_Wrapper *TA_MIN_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MIN_Wrapper *ta = new TA_MIN_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MIN_Wrapper::run() {
    TA_MIN(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MIN_Wrapper::TA_S_MIN_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MIN_Wrapper *TA_S_MIN_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MIN_Wrapper *ta = new TA_S_MIN_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MIN_Wrapper::run() {
    TA_S_MIN(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MININDEX_Wrapper::TA_MININDEX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_MININDEX_Wrapper *TA_MININDEX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_MININDEX_Wrapper *ta = new TA_MININDEX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_MININDEX_Wrapper::run() {
    TA_MININDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_S_MININDEX_Wrapper::TA_S_MININDEX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_S_MININDEX_Wrapper *TA_S_MININDEX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]) {
    TA_S_MININDEX_Wrapper *ta = new TA_S_MININDEX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

TA_RetCode TA_S_MININDEX_Wrapper::run() {
    TA_S_MININDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

TA_MINMAX_Wrapper::TA_MINMAX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMin = outMin;
    this->outMax = outMax;
}

TA_MINMAX_Wrapper *TA_MINMAX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]) {
    TA_MINMAX_Wrapper *ta = new TA_MINMAX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMin, outMax);
    return ta;
}

TA_RetCode TA_MINMAX_Wrapper::run() {
    TA_MINMAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMin, this->outMax);
}

TA_S_MINMAX_Wrapper::TA_S_MINMAX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMin = outMin;
    this->outMax = outMax;
}

TA_S_MINMAX_Wrapper *TA_S_MINMAX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]) {
    TA_S_MINMAX_Wrapper *ta = new TA_S_MINMAX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMin, outMax);
    return ta;
}

TA_RetCode TA_S_MINMAX_Wrapper::run() {
    TA_S_MINMAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMin, this->outMax);
}

TA_MINMAXINDEX_Wrapper::TA_MINMAXINDEX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMinIdx = outMinIdx;
    this->outMaxIdx = outMaxIdx;
}

TA_MINMAXINDEX_Wrapper *TA_MINMAXINDEX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]) {
    TA_MINMAXINDEX_Wrapper *ta = new TA_MINMAXINDEX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMinIdx, outMaxIdx);
    return ta;
}

TA_RetCode TA_MINMAXINDEX_Wrapper::run() {
    TA_MINMAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMinIdx, this->outMaxIdx);
}

TA_S_MINMAXINDEX_Wrapper::TA_S_MINMAXINDEX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMinIdx = outMinIdx;
    this->outMaxIdx = outMaxIdx;
}

TA_S_MINMAXINDEX_Wrapper *TA_S_MINMAXINDEX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]) {
    TA_S_MINMAXINDEX_Wrapper *ta = new TA_S_MINMAXINDEX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMinIdx, outMaxIdx);
    return ta;
}

TA_RetCode TA_S_MINMAXINDEX_Wrapper::run() {
    TA_S_MINMAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMinIdx, this->outMaxIdx);
}

TA_MINUS_DI_Wrapper::TA_MINUS_DI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MINUS_DI_Wrapper *TA_MINUS_DI_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MINUS_DI_Wrapper *ta = new TA_MINUS_DI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MINUS_DI_Wrapper::run() {
    TA_MINUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MINUS_DI_Wrapper::TA_S_MINUS_DI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MINUS_DI_Wrapper *TA_S_MINUS_DI_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MINUS_DI_Wrapper *ta = new TA_S_MINUS_DI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MINUS_DI_Wrapper::run() {
    TA_S_MINUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MINUS_DM_Wrapper::TA_MINUS_DM_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MINUS_DM_Wrapper *TA_MINUS_DM_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MINUS_DM_Wrapper *ta = new TA_MINUS_DM_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MINUS_DM_Wrapper::run() {
    TA_MINUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MINUS_DM_Wrapper::TA_S_MINUS_DM_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MINUS_DM_Wrapper *TA_S_MINUS_DM_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MINUS_DM_Wrapper *ta = new TA_S_MINUS_DM_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MINUS_DM_Wrapper::run() {
    TA_S_MINUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MOM_Wrapper::TA_MOM_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MOM_Wrapper *TA_MOM_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MOM_Wrapper *ta = new TA_MOM_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MOM_Wrapper::run() {
    TA_MOM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MOM_Wrapper::TA_S_MOM_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MOM_Wrapper *TA_S_MOM_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MOM_Wrapper *ta = new TA_S_MOM_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MOM_Wrapper::run() {
    TA_S_MOM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_MULT_Wrapper::TA_MULT_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_MULT_Wrapper *TA_MULT_Wrapper::create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_MULT_Wrapper *ta = new TA_MULT_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_MULT_Wrapper::run() {
    TA_MULT(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_MULT_Wrapper::TA_S_MULT_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_MULT_Wrapper *TA_S_MULT_Wrapper::create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_MULT_Wrapper *ta = new TA_S_MULT_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_MULT_Wrapper::run() {
    TA_S_MULT(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_NATR_Wrapper::TA_NATR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_NATR_Wrapper *TA_NATR_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_NATR_Wrapper *ta = new TA_NATR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_NATR_Wrapper::run() {
    TA_NATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_NATR_Wrapper::TA_S_NATR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_NATR_Wrapper *TA_S_NATR_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_NATR_Wrapper *ta = new TA_S_NATR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_NATR_Wrapper::run() {
    TA_S_NATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_OBV_Wrapper::TA_OBV_Wrapper(int startIdx, int endIdx, const double inReal[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_OBV_Wrapper *TA_OBV_Wrapper::create(int startIdx, int endIdx, const double inReal[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_OBV_Wrapper *ta = new TA_OBV_Wrapper(startIdx, endIdx, inReal, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_OBV_Wrapper::run() {
    TA_OBV(this->startIdx, this->endIdx, this->inReal, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_OBV_Wrapper::TA_S_OBV_Wrapper(int startIdx, int endIdx, const float inReal[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_OBV_Wrapper *TA_S_OBV_Wrapper::create(int startIdx, int endIdx, const float inReal[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_OBV_Wrapper *ta = new TA_S_OBV_Wrapper(startIdx, endIdx, inReal, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_OBV_Wrapper::run() {
    TA_S_OBV(this->startIdx, this->endIdx, this->inReal, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_PLUS_DI_Wrapper::TA_PLUS_DI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_PLUS_DI_Wrapper *TA_PLUS_DI_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_PLUS_DI_Wrapper *ta = new TA_PLUS_DI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_PLUS_DI_Wrapper::run() {
    TA_PLUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_PLUS_DI_Wrapper::TA_S_PLUS_DI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_PLUS_DI_Wrapper *TA_S_PLUS_DI_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_PLUS_DI_Wrapper *ta = new TA_S_PLUS_DI_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_PLUS_DI_Wrapper::run() {
    TA_S_PLUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_PLUS_DM_Wrapper::TA_PLUS_DM_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_PLUS_DM_Wrapper *TA_PLUS_DM_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_PLUS_DM_Wrapper *ta = new TA_PLUS_DM_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_PLUS_DM_Wrapper::run() {
    TA_PLUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_PLUS_DM_Wrapper::TA_S_PLUS_DM_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_PLUS_DM_Wrapper *TA_S_PLUS_DM_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_PLUS_DM_Wrapper *ta = new TA_S_PLUS_DM_Wrapper(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_PLUS_DM_Wrapper::run() {
    TA_S_PLUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_PPO_Wrapper::TA_PPO_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_PPO_Wrapper *TA_PPO_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_PPO_Wrapper *ta = new TA_PPO_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_PPO_Wrapper::run() {
    TA_PPO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_PPO_Wrapper::TA_S_PPO_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_PPO_Wrapper *TA_S_PPO_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_PPO_Wrapper *ta = new TA_S_PPO_Wrapper(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_PPO_Wrapper::run() {
    TA_S_PPO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ROC_Wrapper::TA_ROC_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ROC_Wrapper *TA_ROC_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ROC_Wrapper *ta = new TA_ROC_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ROC_Wrapper::run() {
    TA_ROC(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ROC_Wrapper::TA_S_ROC_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ROC_Wrapper *TA_S_ROC_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ROC_Wrapper *ta = new TA_S_ROC_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ROC_Wrapper::run() {
    TA_S_ROC(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ROCP_Wrapper::TA_ROCP_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ROCP_Wrapper *TA_ROCP_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ROCP_Wrapper *ta = new TA_ROCP_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ROCP_Wrapper::run() {
    TA_ROCP(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ROCP_Wrapper::TA_S_ROCP_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ROCP_Wrapper *TA_S_ROCP_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ROCP_Wrapper *ta = new TA_S_ROCP_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ROCP_Wrapper::run() {
    TA_S_ROCP(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ROCR_Wrapper::TA_ROCR_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ROCR_Wrapper *TA_ROCR_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ROCR_Wrapper *ta = new TA_ROCR_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ROCR_Wrapper::run() {
    TA_ROCR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ROCR_Wrapper::TA_S_ROCR_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ROCR_Wrapper *TA_S_ROCR_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ROCR_Wrapper *ta = new TA_S_ROCR_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ROCR_Wrapper::run() {
    TA_S_ROCR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ROCR100_Wrapper::TA_ROCR100_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ROCR100_Wrapper *TA_ROCR100_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ROCR100_Wrapper *ta = new TA_ROCR100_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ROCR100_Wrapper::run() {
    TA_ROCR100(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ROCR100_Wrapper::TA_S_ROCR100_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ROCR100_Wrapper *TA_S_ROCR100_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ROCR100_Wrapper *ta = new TA_S_ROCR100_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ROCR100_Wrapper::run() {
    TA_S_ROCR100(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_RSI_Wrapper::TA_RSI_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RSI_Wrapper *TA_RSI_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_RSI_Wrapper *ta = new TA_RSI_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_RSI_Wrapper::run() {
    TA_RSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_RSI_Wrapper::TA_S_RSI_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_RSI_Wrapper *TA_S_RSI_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_RSI_Wrapper *ta = new TA_S_RSI_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_RSI_Wrapper::run() {
    TA_S_RSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SAR_Wrapper::TA_SAR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInAcceleration = optInAcceleration;
    this->optInMaximum = optInMaximum;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SAR_Wrapper *TA_SAR_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SAR_Wrapper *ta = new TA_SAR_Wrapper(startIdx, endIdx, inHigh, inLow, optInAcceleration, optInMaximum, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SAR_Wrapper::run() {
    TA_SAR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInAcceleration, this->optInMaximum, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SAR_Wrapper::TA_S_SAR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInAcceleration = optInAcceleration;
    this->optInMaximum = optInMaximum;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SAR_Wrapper *TA_S_SAR_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SAR_Wrapper *ta = new TA_S_SAR_Wrapper(startIdx, endIdx, inHigh, inLow, optInAcceleration, optInMaximum, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SAR_Wrapper::run() {
    TA_S_SAR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInAcceleration, this->optInMaximum, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SAREXT_Wrapper::TA_SAREXT_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInStartValue = optInStartValue;
    this->optInOffsetOnReverse = optInOffsetOnReverse;
    this->optInAccelerationInitLong = optInAccelerationInitLong;
    this->optInAccelerationLong = optInAccelerationLong;
    this->optInAccelerationMaxLong = optInAccelerationMaxLong;
    this->optInAccelerationInitShort = optInAccelerationInitShort;
    this->optInAccelerationShort = optInAccelerationShort;
    this->optInAccelerationMaxShort = optInAccelerationMaxShort;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SAREXT_Wrapper *TA_SAREXT_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SAREXT_Wrapper *ta = new TA_SAREXT_Wrapper(startIdx, endIdx, inHigh, inLow, optInStartValue, optInOffsetOnReverse, optInAccelerationInitLong, optInAccelerationLong, optInAccelerationMaxLong, optInAccelerationInitShort, optInAccelerationShort, optInAccelerationMaxShort, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SAREXT_Wrapper::run() {
    TA_SAREXT(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInStartValue, this->optInOffsetOnReverse, this->optInAccelerationInitLong, this->optInAccelerationLong, this->optInAccelerationMaxLong, this->optInAccelerationInitShort, this->optInAccelerationShort, this->optInAccelerationMaxShort, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SAREXT_Wrapper::TA_S_SAREXT_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInStartValue = optInStartValue;
    this->optInOffsetOnReverse = optInOffsetOnReverse;
    this->optInAccelerationInitLong = optInAccelerationInitLong;
    this->optInAccelerationLong = optInAccelerationLong;
    this->optInAccelerationMaxLong = optInAccelerationMaxLong;
    this->optInAccelerationInitShort = optInAccelerationInitShort;
    this->optInAccelerationShort = optInAccelerationShort;
    this->optInAccelerationMaxShort = optInAccelerationMaxShort;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SAREXT_Wrapper *TA_S_SAREXT_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SAREXT_Wrapper *ta = new TA_S_SAREXT_Wrapper(startIdx, endIdx, inHigh, inLow, optInStartValue, optInOffsetOnReverse, optInAccelerationInitLong, optInAccelerationLong, optInAccelerationMaxLong, optInAccelerationInitShort, optInAccelerationShort, optInAccelerationMaxShort, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SAREXT_Wrapper::run() {
    TA_S_SAREXT(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInStartValue, this->optInOffsetOnReverse, this->optInAccelerationInitLong, this->optInAccelerationLong, this->optInAccelerationMaxLong, this->optInAccelerationInitShort, this->optInAccelerationShort, this->optInAccelerationMaxShort, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SIN_Wrapper::TA_SIN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SIN_Wrapper *TA_SIN_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SIN_Wrapper *ta = new TA_SIN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SIN_Wrapper::run() {
    TA_SIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SIN_Wrapper::TA_S_SIN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SIN_Wrapper *TA_S_SIN_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SIN_Wrapper *ta = new TA_S_SIN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SIN_Wrapper::run() {
    TA_S_SIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SINH_Wrapper::TA_SINH_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SINH_Wrapper *TA_SINH_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SINH_Wrapper *ta = new TA_SINH_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SINH_Wrapper::run() {
    TA_SINH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SINH_Wrapper::TA_S_SINH_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SINH_Wrapper *TA_S_SINH_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SINH_Wrapper *ta = new TA_S_SINH_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SINH_Wrapper::run() {
    TA_S_SINH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SMA_Wrapper::TA_SMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SMA_Wrapper *TA_SMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SMA_Wrapper *ta = new TA_SMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SMA_Wrapper::run() {
    TA_SMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SMA_Wrapper::TA_S_SMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SMA_Wrapper *TA_S_SMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SMA_Wrapper *ta = new TA_S_SMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SMA_Wrapper::run() {
    TA_S_SMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SQRT_Wrapper::TA_SQRT_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SQRT_Wrapper *TA_SQRT_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SQRT_Wrapper *ta = new TA_SQRT_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SQRT_Wrapper::run() {
    TA_SQRT(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SQRT_Wrapper::TA_S_SQRT_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SQRT_Wrapper *TA_S_SQRT_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SQRT_Wrapper *ta = new TA_S_SQRT_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SQRT_Wrapper::run() {
    TA_S_SQRT(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_STDDEV_Wrapper::TA_STDDEV_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_STDDEV_Wrapper *TA_STDDEV_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_STDDEV_Wrapper *ta = new TA_STDDEV_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_STDDEV_Wrapper::run() {
    TA_STDDEV(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_STDDEV_Wrapper::TA_S_STDDEV_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_STDDEV_Wrapper *TA_S_STDDEV_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_STDDEV_Wrapper *ta = new TA_S_STDDEV_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_STDDEV_Wrapper::run() {
    TA_S_STDDEV(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_STOCH_Wrapper::TA_STOCH_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInFastK_Period = optInFastK_Period;
    this->optInSlowK_Period = optInSlowK_Period;
    this->optInSlowK_MAType = optInSlowK_MAType;
    this->optInSlowD_Period = optInSlowD_Period;
    this->optInSlowD_MAType = optInSlowD_MAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outSlowK = outSlowK;
    this->outSlowD = outSlowD;
}

TA_STOCH_Wrapper *TA_STOCH_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]) {
    TA_STOCH_Wrapper *ta = new TA_STOCH_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInSlowK_Period, optInSlowK_MAType, optInSlowD_Period, optInSlowD_MAType, outBegIdx, outNBElement, outSlowK, outSlowD);
    return ta;
}

TA_RetCode TA_STOCH_Wrapper::run() {
    TA_STOCH(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInSlowK_Period, this->optInSlowK_MAType, this->optInSlowD_Period, this->optInSlowD_MAType, this->outBegIdx, this->outNBElement, this->outSlowK, this->outSlowD);
}

TA_S_STOCH_Wrapper::TA_S_STOCH_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInFastK_Period = optInFastK_Period;
    this->optInSlowK_Period = optInSlowK_Period;
    this->optInSlowK_MAType = optInSlowK_MAType;
    this->optInSlowD_Period = optInSlowD_Period;
    this->optInSlowD_MAType = optInSlowD_MAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outSlowK = outSlowK;
    this->outSlowD = outSlowD;
}

TA_S_STOCH_Wrapper *TA_S_STOCH_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]) {
    TA_S_STOCH_Wrapper *ta = new TA_S_STOCH_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInSlowK_Period, optInSlowK_MAType, optInSlowD_Period, optInSlowD_MAType, outBegIdx, outNBElement, outSlowK, outSlowD);
    return ta;
}

TA_RetCode TA_S_STOCH_Wrapper::run() {
    TA_S_STOCH(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInSlowK_Period, this->optInSlowK_MAType, this->optInSlowD_Period, this->optInSlowD_MAType, this->outBegIdx, this->outNBElement, this->outSlowK, this->outSlowD);
}

TA_STOCHF_Wrapper::TA_STOCHF_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInFastK_Period = optInFastK_Period;
    this->optInFastD_Period = optInFastD_Period;
    this->optInFastD_MAType = optInFastD_MAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outFastK = outFastK;
    this->outFastD = outFastD;
}

TA_STOCHF_Wrapper *TA_STOCHF_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    TA_STOCHF_Wrapper *ta = new TA_STOCHF_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

TA_RetCode TA_STOCHF_Wrapper::run() {
    TA_STOCHF(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

TA_S_STOCHF_Wrapper::TA_S_STOCHF_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInFastK_Period = optInFastK_Period;
    this->optInFastD_Period = optInFastD_Period;
    this->optInFastD_MAType = optInFastD_MAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outFastK = outFastK;
    this->outFastD = outFastD;
}

TA_S_STOCHF_Wrapper *TA_S_STOCHF_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    TA_S_STOCHF_Wrapper *ta = new TA_S_STOCHF_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

TA_RetCode TA_S_STOCHF_Wrapper::run() {
    TA_S_STOCHF(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

TA_STOCHRSI_Wrapper::TA_STOCHRSI_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInFastK_Period = optInFastK_Period;
    this->optInFastD_Period = optInFastD_Period;
    this->optInFastD_MAType = optInFastD_MAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outFastK = outFastK;
    this->outFastD = outFastD;
}

TA_STOCHRSI_Wrapper *TA_STOCHRSI_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    TA_STOCHRSI_Wrapper *ta = new TA_STOCHRSI_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

TA_RetCode TA_STOCHRSI_Wrapper::run() {
    TA_STOCHRSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

TA_S_STOCHRSI_Wrapper::TA_S_STOCHRSI_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInFastK_Period = optInFastK_Period;
    this->optInFastD_Period = optInFastD_Period;
    this->optInFastD_MAType = optInFastD_MAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outFastK = outFastK;
    this->outFastD = outFastD;
}

TA_S_STOCHRSI_Wrapper *TA_S_STOCHRSI_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]) {
    TA_S_STOCHRSI_Wrapper *ta = new TA_S_STOCHRSI_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

TA_RetCode TA_S_STOCHRSI_Wrapper::run() {
    TA_S_STOCHRSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

TA_SUB_Wrapper::TA_SUB_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SUB_Wrapper *TA_SUB_Wrapper::create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SUB_Wrapper *ta = new TA_SUB_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SUB_Wrapper::run() {
    TA_SUB(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SUB_Wrapper::TA_S_SUB_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SUB_Wrapper *TA_S_SUB_Wrapper::create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SUB_Wrapper *ta = new TA_S_SUB_Wrapper(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SUB_Wrapper::run() {
    TA_S_SUB(this->startIdx, this->endIdx, this->inReal0[], this->inReal1[], this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SUM_Wrapper::TA_SUM_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_SUM_Wrapper *TA_SUM_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_SUM_Wrapper *ta = new TA_SUM_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_SUM_Wrapper::run() {
    TA_SUM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_SUM_Wrapper::TA_S_SUM_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_SUM_Wrapper *TA_S_SUM_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_SUM_Wrapper *ta = new TA_S_SUM_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_SUM_Wrapper::run() {
    TA_S_SUM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_T3_Wrapper::TA_T3_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInVFactor = optInVFactor;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_T3_Wrapper *TA_T3_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_T3_Wrapper *ta = new TA_T3_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInVFactor, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_T3_Wrapper::run() {
    TA_T3(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInVFactor, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_T3_Wrapper::TA_S_T3_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInVFactor = optInVFactor;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_T3_Wrapper *TA_S_T3_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_T3_Wrapper *ta = new TA_S_T3_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInVFactor, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_T3_Wrapper::run() {
    TA_S_T3(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInVFactor, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TAN_Wrapper::TA_TAN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TAN_Wrapper *TA_TAN_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TAN_Wrapper *ta = new TA_TAN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TAN_Wrapper::run() {
    TA_TAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TAN_Wrapper::TA_S_TAN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TAN_Wrapper *TA_S_TAN_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TAN_Wrapper *ta = new TA_S_TAN_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TAN_Wrapper::run() {
    TA_S_TAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TANH_Wrapper::TA_TANH_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TANH_Wrapper *TA_TANH_Wrapper::create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TANH_Wrapper *ta = new TA_TANH_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TANH_Wrapper::run() {
    TA_TANH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TANH_Wrapper::TA_S_TANH_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TANH_Wrapper *TA_S_TANH_Wrapper::create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TANH_Wrapper *ta = new TA_S_TANH_Wrapper(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TANH_Wrapper::run() {
    TA_S_TANH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TEMA_Wrapper::TA_TEMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TEMA_Wrapper *TA_TEMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TEMA_Wrapper *ta = new TA_TEMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TEMA_Wrapper::run() {
    TA_TEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TEMA_Wrapper::TA_S_TEMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TEMA_Wrapper *TA_S_TEMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TEMA_Wrapper *ta = new TA_S_TEMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TEMA_Wrapper::run() {
    TA_S_TEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TRANGE_Wrapper::TA_TRANGE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TRANGE_Wrapper *TA_TRANGE_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TRANGE_Wrapper *ta = new TA_TRANGE_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TRANGE_Wrapper::run() {
    TA_TRANGE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TRANGE_Wrapper::TA_S_TRANGE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TRANGE_Wrapper *TA_S_TRANGE_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TRANGE_Wrapper *ta = new TA_S_TRANGE_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TRANGE_Wrapper::run() {
    TA_S_TRANGE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TRIMA_Wrapper::TA_TRIMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TRIMA_Wrapper *TA_TRIMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TRIMA_Wrapper *ta = new TA_TRIMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TRIMA_Wrapper::run() {
    TA_TRIMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TRIMA_Wrapper::TA_S_TRIMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TRIMA_Wrapper *TA_S_TRIMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TRIMA_Wrapper *ta = new TA_S_TRIMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TRIMA_Wrapper::run() {
    TA_S_TRIMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TRIX_Wrapper::TA_TRIX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TRIX_Wrapper *TA_TRIX_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TRIX_Wrapper *ta = new TA_TRIX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TRIX_Wrapper::run() {
    TA_TRIX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TRIX_Wrapper::TA_S_TRIX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TRIX_Wrapper *TA_S_TRIX_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TRIX_Wrapper *ta = new TA_S_TRIX_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TRIX_Wrapper::run() {
    TA_S_TRIX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TSF_Wrapper::TA_TSF_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TSF_Wrapper *TA_TSF_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TSF_Wrapper *ta = new TA_TSF_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TSF_Wrapper::run() {
    TA_TSF(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TSF_Wrapper::TA_S_TSF_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TSF_Wrapper *TA_S_TSF_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TSF_Wrapper *ta = new TA_S_TSF_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TSF_Wrapper::run() {
    TA_S_TSF(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_TYPPRICE_Wrapper::TA_TYPPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_TYPPRICE_Wrapper *TA_TYPPRICE_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_TYPPRICE_Wrapper *ta = new TA_TYPPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_TYPPRICE_Wrapper::run() {
    TA_TYPPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_TYPPRICE_Wrapper::TA_S_TYPPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_TYPPRICE_Wrapper *TA_S_TYPPRICE_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_TYPPRICE_Wrapper *ta = new TA_S_TYPPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_TYPPRICE_Wrapper::run() {
    TA_S_TYPPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_ULTOSC_Wrapper::TA_ULTOSC_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod1 = optInTimePeriod1;
    this->optInTimePeriod2 = optInTimePeriod2;
    this->optInTimePeriod3 = optInTimePeriod3;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_ULTOSC_Wrapper *TA_ULTOSC_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_ULTOSC_Wrapper *ta = new TA_ULTOSC_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod1, optInTimePeriod2, optInTimePeriod3, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_ULTOSC_Wrapper::run() {
    TA_ULTOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod1, this->optInTimePeriod2, this->optInTimePeriod3, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_ULTOSC_Wrapper::TA_S_ULTOSC_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod1 = optInTimePeriod1;
    this->optInTimePeriod2 = optInTimePeriod2;
    this->optInTimePeriod3 = optInTimePeriod3;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_ULTOSC_Wrapper *TA_S_ULTOSC_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_ULTOSC_Wrapper *ta = new TA_S_ULTOSC_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod1, optInTimePeriod2, optInTimePeriod3, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_ULTOSC_Wrapper::run() {
    TA_S_ULTOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod1, this->optInTimePeriod2, this->optInTimePeriod3, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_VAR_Wrapper::TA_VAR_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_VAR_Wrapper *TA_VAR_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_VAR_Wrapper *ta = new TA_VAR_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_VAR_Wrapper::run() {
    TA_VAR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_VAR_Wrapper::TA_S_VAR_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_VAR_Wrapper *TA_S_VAR_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_VAR_Wrapper *ta = new TA_S_VAR_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_VAR_Wrapper::run() {
    TA_S_VAR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_WCLPRICE_Wrapper::TA_WCLPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_WCLPRICE_Wrapper *TA_WCLPRICE_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_WCLPRICE_Wrapper *ta = new TA_WCLPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_WCLPRICE_Wrapper::run() {
    TA_WCLPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_WCLPRICE_Wrapper::TA_S_WCLPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_WCLPRICE_Wrapper *TA_S_WCLPRICE_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_WCLPRICE_Wrapper *ta = new TA_S_WCLPRICE_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_WCLPRICE_Wrapper::run() {
    TA_S_WCLPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_WILLR_Wrapper::TA_WILLR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_WILLR_Wrapper *TA_WILLR_Wrapper::create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_WILLR_Wrapper *ta = new TA_WILLR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_WILLR_Wrapper::run() {
    TA_WILLR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_WILLR_Wrapper::TA_S_WILLR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_WILLR_Wrapper *TA_S_WILLR_Wrapper::create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_WILLR_Wrapper *ta = new TA_S_WILLR_Wrapper(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_WILLR_Wrapper::run() {
    TA_S_WILLR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_WMA_Wrapper::TA_WMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_WMA_Wrapper *TA_WMA_Wrapper::create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_WMA_Wrapper *ta = new TA_WMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_WMA_Wrapper::run() {
    TA_WMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_S_WMA_Wrapper::TA_S_WMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    this->startIdx = startIdx;
    this->endIdx = endIdx;
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_S_WMA_Wrapper *TA_S_WMA_Wrapper::create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]) {
    TA_S_WMA_Wrapper *ta = new TA_S_WMA_Wrapper(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

TA_RetCode TA_S_WMA_Wrapper::run() {
    TA_S_WMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TA_SetUnstablePeriod_Wrapper::TA_SetUnstablePeriod_Wrapper(TA_FuncUnstId id, unsigned int unstablePeriod) {
    this->id = id;
    this->unstablePeriod = unstablePeriod;
}

TA_SetUnstablePeriod_Wrapper *TA_SetUnstablePeriod_Wrapper::create(TA_FuncUnstId id, unsigned int unstablePeriod) {
    TA_SetUnstablePeriod_Wrapper *ta = new TA_SetUnstablePeriod_Wrapper(id, unstablePeriod);
    return ta;
}

TA_RetCode TA_SetUnstablePeriod_Wrapper::run() {
    TA_SetUnstablePeriod(this->id, this->unstablePeriod);
}

TA_SetCompatibility_Wrapper::TA_SetCompatibility_Wrapper(TA_Compatibility value) {
    this->value = value;
}

TA_SetCompatibility_Wrapper *TA_SetCompatibility_Wrapper::create(TA_Compatibility value) {
    TA_SetCompatibility_Wrapper *ta = new TA_SetCompatibility_Wrapper(value);
    return ta;
}

TA_RetCode TA_SetCompatibility_Wrapper::run() {
    TA_SetCompatibility(this->value);
}

TA_SetCandleSettings_Wrapper::TA_SetCandleSettings_Wrapper(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor) {
    this->settingType = settingType;
    this->rangeType = rangeType;
    this->avgPeriod = avgPeriod;
    this->factor = factor;
}

TA_SetCandleSettings_Wrapper *TA_SetCandleSettings_Wrapper::create(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor) {
    TA_SetCandleSettings_Wrapper *ta = new TA_SetCandleSettings_Wrapper(settingType, rangeType, avgPeriod, factor);
    return ta;
}

TA_RetCode TA_SetCandleSettings_Wrapper::run() {
    TA_SetCandleSettings(this->settingType, this->rangeType, this->avgPeriod, this->factor);
}

TA_RestoreCandleDefaultSettings_Wrapper::TA_RestoreCandleDefaultSettings_Wrapper(TA_CandleSettingType settingType) {
    this->settingType = settingType;
}

TA_RestoreCandleDefaultSettings_Wrapper *TA_RestoreCandleDefaultSettings_Wrapper::create(TA_CandleSettingType settingType) {
    TA_RestoreCandleDefaultSettings_Wrapper *ta = new TA_RestoreCandleDefaultSettings_Wrapper(settingType);
    return ta;
}

TA_RetCode TA_RestoreCandleDefaultSettings_Wrapper::run() {
    TA_RestoreCandleDefaultSettings(this->settingType);
}

