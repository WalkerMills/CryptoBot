#include <ta-lib/ta_func.h>

#include "ta.hh"

using namespace ta;

ACOS::ACOS(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


ACOS *ACOS::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    ACOS *ta = new ACOS(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void ACOS::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ACOS::run() {
    return TA_ACOS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ACOS::S_ACOS(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_ACOS *S_ACOS::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ACOS *ta = new S_ACOS(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ACOS::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ACOS::run() {
    return TA_S_ACOS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}   

AD::AD(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, inVolume, outBegIdx, outNBElement, outReal);
}


AD *AD::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    AD *ta = new AD(startIdx, endIdx, inHigh, inLow, inClose, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

void AD::update(double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode AD::run() {
    return TA_AD(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

S_AD::S_AD(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, inVolume, outBegIdx, outNBElement, outReal);
}


S_AD *S_AD::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    S_AD *ta = new S_AD(startIdx, endIdx, inHigh, inLow, inClose, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_AD::update(float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_AD::run() {
    return TA_S_AD(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

ADD::ADD(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


ADD *ADD::create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    ADD *ta = new ADD(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void ADD::update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ADD::run() {
    return TA_ADD(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ADD::S_ADD(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


S_ADD *S_ADD::create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ADD *ta = new S_ADD(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ADD::update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ADD::run() {
    return TA_S_ADD(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

ADOSC::ADOSC(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, inVolume, optInFastPeriod, optInSlowPeriod, outBegIdx, outNBElement, outReal);
}


ADOSC *ADOSC::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ADOSC *ta = new ADOSC(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInFastPeriod, optInSlowPeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ADOSC::update(double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal) {
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

TA_RetCode ADOSC::run() {
    return TA_ADOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInFastPeriod, this->optInSlowPeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ADOSC::S_ADOSC(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, inVolume, optInFastPeriod, optInSlowPeriod, outBegIdx, outNBElement, outReal);
}


S_ADOSC *S_ADOSC::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ADOSC *ta = new S_ADOSC(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInFastPeriod, optInSlowPeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ADOSC::update(float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal) {
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

TA_RetCode S_ADOSC::run() {
    return TA_S_ADOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInFastPeriod, this->optInSlowPeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

ADX::ADX(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ADX *ADX::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ADX *ta = new ADX(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ADX::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ADX::run() {
    return TA_ADX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ADX::S_ADX(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ADX *S_ADX::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ADX *ta = new S_ADX(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ADX::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ADX::run() {
    return TA_S_ADX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

ADXR::ADXR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ADXR *ADXR::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ADXR *ta = new ADXR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ADXR::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ADXR::run() {
    return TA_ADXR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ADXR::S_ADXR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ADXR *S_ADXR::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ADXR *ta = new S_ADXR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ADXR::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ADXR::run() {
    return TA_S_ADXR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

APO::APO(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


APO *APO::create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    APO *ta = new APO(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void APO::update(double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode APO::run() {
    return TA_APO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

S_APO::S_APO(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


S_APO *S_APO::create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    S_APO *ta = new S_APO(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_APO::update(float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_APO::run() {
    return TA_S_APO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

AROON::AROON(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outAroonDown, outAroonUp);
}


AROON *AROON::create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp) {
    AROON *ta = new AROON(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outAroonDown, outAroonUp);
    return ta;
}

void AROON::update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outAroonDown = outAroonDown;
    this->outAroonUp = outAroonUp;
}

TA_RetCode AROON::run() {
    return TA_AROON(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outAroonDown, this->outAroonUp);
}

S_AROON::S_AROON(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outAroonDown, outAroonUp);
}


S_AROON *S_AROON::create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp) {
    S_AROON *ta = new S_AROON(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outAroonDown, outAroonUp);
    return ta;
}

void S_AROON::update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outAroonDown = outAroonDown;
    this->outAroonUp = outAroonUp;
}

TA_RetCode S_AROON::run() {
    return TA_S_AROON(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outAroonDown, this->outAroonUp);
}

AROONOSC::AROONOSC(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


AROONOSC *AROONOSC::create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    AROONOSC *ta = new AROONOSC(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void AROONOSC::update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode AROONOSC::run() {
    return TA_AROONOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_AROONOSC::S_AROONOSC(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_AROONOSC *S_AROONOSC::create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_AROONOSC *ta = new S_AROONOSC(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_AROONOSC::update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_AROONOSC::run() {
    return TA_S_AROONOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

ASIN::ASIN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


ASIN *ASIN::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    ASIN *ta = new ASIN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void ASIN::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ASIN::run() {
    return TA_ASIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ASIN::S_ASIN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_ASIN *S_ASIN::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ASIN *ta = new S_ASIN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ASIN::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ASIN::run() {
    return TA_S_ASIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

ATAN::ATAN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


ATAN *ATAN::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    ATAN *ta = new ATAN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void ATAN::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ATAN::run() {
    return TA_ATAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ATAN::S_ATAN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_ATAN *S_ATAN::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ATAN *ta = new S_ATAN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ATAN::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ATAN::run() {
    return TA_S_ATAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

ATR::ATR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ATR *ATR::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ATR *ta = new ATR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ATR::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ATR::run() {
    return TA_ATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ATR::S_ATR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ATR *S_ATR::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ATR *ta = new S_ATR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ATR::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ATR::run() {
    return TA_S_ATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

AVGPRICE::AVGPRICE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


AVGPRICE *AVGPRICE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    AVGPRICE *ta = new AVGPRICE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void AVGPRICE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode AVGPRICE::run() {
    return TA_AVGPRICE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

S_AVGPRICE::S_AVGPRICE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


S_AVGPRICE *S_AVGPRICE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    S_AVGPRICE *ta = new S_AVGPRICE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_AVGPRICE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_AVGPRICE::run() {
    return TA_S_AVGPRICE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

BBANDS::BBANDS(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInNbDevUp, optInNbDevDn, optInMAType, outBegIdx, outNBElement, outRealUpperBand, outRealMiddleBand, outRealLowerBand);
}


BBANDS *BBANDS::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand) {
    BBANDS *ta = new BBANDS(startIdx, endIdx, inReal, optInTimePeriod, optInNbDevUp, optInNbDevDn, optInMAType, outBegIdx, outNBElement, outRealUpperBand, outRealMiddleBand, outRealLowerBand);
    return ta;
}

void BBANDS::update(double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand) {
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

TA_RetCode BBANDS::run() {
    return TA_BBANDS(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDevUp, this->optInNbDevDn, this->optInMAType, this->outBegIdx, this->outNBElement, this->outRealUpperBand, this->outRealMiddleBand, this->outRealLowerBand);
}

S_BBANDS::S_BBANDS(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInNbDevUp, optInNbDevDn, optInMAType, outBegIdx, outNBElement, outRealUpperBand, outRealMiddleBand, outRealLowerBand);
}


S_BBANDS *S_BBANDS::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand) {
    S_BBANDS *ta = new S_BBANDS(startIdx, endIdx, inReal, optInTimePeriod, optInNbDevUp, optInNbDevDn, optInMAType, outBegIdx, outNBElement, outRealUpperBand, outRealMiddleBand, outRealLowerBand);
    return ta;
}

void S_BBANDS::update(float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand) {
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

TA_RetCode S_BBANDS::run() {
    return TA_S_BBANDS(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDevUp, this->optInNbDevDn, this->optInMAType, this->outBegIdx, this->outNBElement, this->outRealUpperBand, this->outRealMiddleBand, this->outRealLowerBand);
}

BETA::BETA(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


BETA *BETA::create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    BETA *ta = new BETA(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void BETA::update(double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode BETA::run() {
    return TA_BETA(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_BETA::S_BETA(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_BETA *S_BETA::create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_BETA *ta = new S_BETA(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_BETA::update(float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_BETA::run() {
    return TA_S_BETA(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

BOP::BOP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


BOP *BOP::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    BOP *ta = new BOP(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void BOP::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode BOP::run() {
    return TA_BOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

S_BOP::S_BOP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


S_BOP *S_BOP::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    S_BOP *ta = new S_BOP(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_BOP::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_BOP::run() {
    return TA_S_BOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

CCI::CCI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


CCI *CCI::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    CCI *ta = new CCI(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void CCI::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode CCI::run() {
    return TA_CCI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_CCI::S_CCI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_CCI *S_CCI::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_CCI *ta = new S_CCI(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_CCI::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_CCI::run() {
    return TA_S_CCI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

CDL2CROWS::CDL2CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL2CROWS *CDL2CROWS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL2CROWS *ta = new CDL2CROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL2CROWS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL2CROWS::run() {
    return TA_CDL2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL2CROWS::S_CDL2CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL2CROWS *S_CDL2CROWS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL2CROWS *ta = new S_CDL2CROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL2CROWS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL2CROWS::run() {
    return TA_S_CDL2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDL3BLACKCROWS::CDL3BLACKCROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL3BLACKCROWS *CDL3BLACKCROWS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL3BLACKCROWS *ta = new CDL3BLACKCROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL3BLACKCROWS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL3BLACKCROWS::run() {
    return TA_CDL3BLACKCROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL3BLACKCROWS::S_CDL3BLACKCROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL3BLACKCROWS *S_CDL3BLACKCROWS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL3BLACKCROWS *ta = new S_CDL3BLACKCROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL3BLACKCROWS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL3BLACKCROWS::run() {
    return TA_S_CDL3BLACKCROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDL3INSIDE::CDL3INSIDE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL3INSIDE *CDL3INSIDE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL3INSIDE *ta = new CDL3INSIDE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL3INSIDE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL3INSIDE::run() {
    return TA_CDL3INSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL3INSIDE::S_CDL3INSIDE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL3INSIDE *S_CDL3INSIDE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL3INSIDE *ta = new S_CDL3INSIDE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL3INSIDE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL3INSIDE::run() {
    return TA_S_CDL3INSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDL3LINESTRIKE::CDL3LINESTRIKE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL3LINESTRIKE *CDL3LINESTRIKE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL3LINESTRIKE *ta = new CDL3LINESTRIKE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL3LINESTRIKE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL3LINESTRIKE::run() {
    return TA_CDL3LINESTRIKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL3LINESTRIKE::S_CDL3LINESTRIKE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL3LINESTRIKE *S_CDL3LINESTRIKE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL3LINESTRIKE *ta = new S_CDL3LINESTRIKE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL3LINESTRIKE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL3LINESTRIKE::run() {
    return TA_S_CDL3LINESTRIKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDL3OUTSIDE::CDL3OUTSIDE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL3OUTSIDE *CDL3OUTSIDE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL3OUTSIDE *ta = new CDL3OUTSIDE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL3OUTSIDE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL3OUTSIDE::run() {
    return TA_CDL3OUTSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL3OUTSIDE::S_CDL3OUTSIDE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL3OUTSIDE *S_CDL3OUTSIDE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL3OUTSIDE *ta = new S_CDL3OUTSIDE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL3OUTSIDE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL3OUTSIDE::run() {
    return TA_S_CDL3OUTSIDE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDL3STARSINSOUTH::CDL3STARSINSOUTH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL3STARSINSOUTH *CDL3STARSINSOUTH::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL3STARSINSOUTH *ta = new CDL3STARSINSOUTH(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL3STARSINSOUTH::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL3STARSINSOUTH::run() {
    return TA_CDL3STARSINSOUTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL3STARSINSOUTH::S_CDL3STARSINSOUTH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL3STARSINSOUTH *S_CDL3STARSINSOUTH::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL3STARSINSOUTH *ta = new S_CDL3STARSINSOUTH(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL3STARSINSOUTH::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL3STARSINSOUTH::run() {
    return TA_S_CDL3STARSINSOUTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDL3WHITESOLDIERS::CDL3WHITESOLDIERS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDL3WHITESOLDIERS *CDL3WHITESOLDIERS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDL3WHITESOLDIERS *ta = new CDL3WHITESOLDIERS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDL3WHITESOLDIERS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDL3WHITESOLDIERS::run() {
    return TA_CDL3WHITESOLDIERS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDL3WHITESOLDIERS::S_CDL3WHITESOLDIERS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDL3WHITESOLDIERS *S_CDL3WHITESOLDIERS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDL3WHITESOLDIERS *ta = new S_CDL3WHITESOLDIERS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDL3WHITESOLDIERS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDL3WHITESOLDIERS::run() {
    return TA_S_CDL3WHITESOLDIERS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLABANDONEDBABY::CDLABANDONEDBABY(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLABANDONEDBABY *CDLABANDONEDBABY::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLABANDONEDBABY *ta = new CDLABANDONEDBABY(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLABANDONEDBABY::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLABANDONEDBABY::run() {
    return TA_CDLABANDONEDBABY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLABANDONEDBABY::S_CDLABANDONEDBABY(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLABANDONEDBABY *S_CDLABANDONEDBABY::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLABANDONEDBABY *ta = new S_CDLABANDONEDBABY(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLABANDONEDBABY::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLABANDONEDBABY::run() {
    return TA_S_CDLABANDONEDBABY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLADVANCEBLOCK::CDLADVANCEBLOCK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLADVANCEBLOCK *CDLADVANCEBLOCK::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLADVANCEBLOCK *ta = new CDLADVANCEBLOCK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLADVANCEBLOCK::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLADVANCEBLOCK::run() {
    return TA_CDLADVANCEBLOCK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLADVANCEBLOCK::S_CDLADVANCEBLOCK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLADVANCEBLOCK *S_CDLADVANCEBLOCK::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLADVANCEBLOCK *ta = new S_CDLADVANCEBLOCK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLADVANCEBLOCK::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLADVANCEBLOCK::run() {
    return TA_S_CDLADVANCEBLOCK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLBELTHOLD::CDLBELTHOLD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLBELTHOLD *CDLBELTHOLD::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLBELTHOLD *ta = new CDLBELTHOLD(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLBELTHOLD::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLBELTHOLD::run() {
    return TA_CDLBELTHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLBELTHOLD::S_CDLBELTHOLD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLBELTHOLD *S_CDLBELTHOLD::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLBELTHOLD *ta = new S_CDLBELTHOLD(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLBELTHOLD::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLBELTHOLD::run() {
    return TA_S_CDLBELTHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLBREAKAWAY::CDLBREAKAWAY(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLBREAKAWAY *CDLBREAKAWAY::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLBREAKAWAY *ta = new CDLBREAKAWAY(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLBREAKAWAY::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLBREAKAWAY::run() {
    return TA_CDLBREAKAWAY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLBREAKAWAY::S_CDLBREAKAWAY(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLBREAKAWAY *S_CDLBREAKAWAY::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLBREAKAWAY *ta = new S_CDLBREAKAWAY(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLBREAKAWAY::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLBREAKAWAY::run() {
    return TA_S_CDLBREAKAWAY(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLCLOSINGMARUBOZU::CDLCLOSINGMARUBOZU(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLCLOSINGMARUBOZU *CDLCLOSINGMARUBOZU::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLCLOSINGMARUBOZU *ta = new CDLCLOSINGMARUBOZU(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLCLOSINGMARUBOZU::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLCLOSINGMARUBOZU::run() {
    return TA_CDLCLOSINGMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLCLOSINGMARUBOZU::S_CDLCLOSINGMARUBOZU(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLCLOSINGMARUBOZU *S_CDLCLOSINGMARUBOZU::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLCLOSINGMARUBOZU *ta = new S_CDLCLOSINGMARUBOZU(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLCLOSINGMARUBOZU::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLCLOSINGMARUBOZU::run() {
    return TA_S_CDLCLOSINGMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLCONCEALBABYSWALL::CDLCONCEALBABYSWALL(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLCONCEALBABYSWALL *CDLCONCEALBABYSWALL::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLCONCEALBABYSWALL *ta = new CDLCONCEALBABYSWALL(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLCONCEALBABYSWALL::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLCONCEALBABYSWALL::run() {
    return TA_CDLCONCEALBABYSWALL(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLCONCEALBABYSWALL::S_CDLCONCEALBABYSWALL(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLCONCEALBABYSWALL *S_CDLCONCEALBABYSWALL::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLCONCEALBABYSWALL *ta = new S_CDLCONCEALBABYSWALL(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLCONCEALBABYSWALL::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLCONCEALBABYSWALL::run() {
    return TA_S_CDLCONCEALBABYSWALL(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLCOUNTERATTACK::CDLCOUNTERATTACK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLCOUNTERATTACK *CDLCOUNTERATTACK::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLCOUNTERATTACK *ta = new CDLCOUNTERATTACK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLCOUNTERATTACK::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLCOUNTERATTACK::run() {
    return TA_CDLCOUNTERATTACK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLCOUNTERATTACK::S_CDLCOUNTERATTACK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLCOUNTERATTACK *S_CDLCOUNTERATTACK::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLCOUNTERATTACK *ta = new S_CDLCOUNTERATTACK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLCOUNTERATTACK::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLCOUNTERATTACK::run() {
    return TA_S_CDLCOUNTERATTACK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLDARKCLOUDCOVER::CDLDARKCLOUDCOVER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLDARKCLOUDCOVER *CDLDARKCLOUDCOVER::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLDARKCLOUDCOVER *ta = new CDLDARKCLOUDCOVER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLDARKCLOUDCOVER::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLDARKCLOUDCOVER::run() {
    return TA_CDLDARKCLOUDCOVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLDARKCLOUDCOVER::S_CDLDARKCLOUDCOVER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLDARKCLOUDCOVER *S_CDLDARKCLOUDCOVER::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLDARKCLOUDCOVER *ta = new S_CDLDARKCLOUDCOVER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLDARKCLOUDCOVER::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLDARKCLOUDCOVER::run() {
    return TA_S_CDLDARKCLOUDCOVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLDOJI::CDLDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLDOJI *CDLDOJI::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLDOJI *ta = new CDLDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLDOJI::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLDOJI::run() {
    return TA_CDLDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLDOJI::S_CDLDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLDOJI *S_CDLDOJI::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLDOJI *ta = new S_CDLDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLDOJI::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLDOJI::run() {
    return TA_S_CDLDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLDOJISTAR::CDLDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLDOJISTAR *CDLDOJISTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLDOJISTAR *ta = new CDLDOJISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLDOJISTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLDOJISTAR::run() {
    return TA_CDLDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLDOJISTAR::S_CDLDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLDOJISTAR *S_CDLDOJISTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLDOJISTAR *ta = new S_CDLDOJISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLDOJISTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLDOJISTAR::run() {
    return TA_S_CDLDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLDRAGONFLYDOJI::CDLDRAGONFLYDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLDRAGONFLYDOJI *CDLDRAGONFLYDOJI::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLDRAGONFLYDOJI *ta = new CDLDRAGONFLYDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLDRAGONFLYDOJI::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLDRAGONFLYDOJI::run() {
    return TA_CDLDRAGONFLYDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLDRAGONFLYDOJI::S_CDLDRAGONFLYDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLDRAGONFLYDOJI *S_CDLDRAGONFLYDOJI::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLDRAGONFLYDOJI *ta = new S_CDLDRAGONFLYDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLDRAGONFLYDOJI::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLDRAGONFLYDOJI::run() {
    return TA_S_CDLDRAGONFLYDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLENGULFING::CDLENGULFING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLENGULFING *CDLENGULFING::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLENGULFING *ta = new CDLENGULFING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLENGULFING::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLENGULFING::run() {
    return TA_CDLENGULFING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLENGULFING::S_CDLENGULFING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLENGULFING *S_CDLENGULFING::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLENGULFING *ta = new S_CDLENGULFING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLENGULFING::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLENGULFING::run() {
    return TA_S_CDLENGULFING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLEVENINGDOJISTAR::CDLEVENINGDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLEVENINGDOJISTAR *CDLEVENINGDOJISTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLEVENINGDOJISTAR *ta = new CDLEVENINGDOJISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLEVENINGDOJISTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLEVENINGDOJISTAR::run() {
    return TA_CDLEVENINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLEVENINGDOJISTAR::S_CDLEVENINGDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLEVENINGDOJISTAR *S_CDLEVENINGDOJISTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLEVENINGDOJISTAR *ta = new S_CDLEVENINGDOJISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLEVENINGDOJISTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLEVENINGDOJISTAR::run() {
    return TA_S_CDLEVENINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLEVENINGSTAR::CDLEVENINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLEVENINGSTAR *CDLEVENINGSTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLEVENINGSTAR *ta = new CDLEVENINGSTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLEVENINGSTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLEVENINGSTAR::run() {
    return TA_CDLEVENINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLEVENINGSTAR::S_CDLEVENINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLEVENINGSTAR *S_CDLEVENINGSTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLEVENINGSTAR *ta = new S_CDLEVENINGSTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLEVENINGSTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLEVENINGSTAR::run() {
    return TA_S_CDLEVENINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLGAPSIDESIDEWHITE::CDLGAPSIDESIDEWHITE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLGAPSIDESIDEWHITE *CDLGAPSIDESIDEWHITE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLGAPSIDESIDEWHITE *ta = new CDLGAPSIDESIDEWHITE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLGAPSIDESIDEWHITE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLGAPSIDESIDEWHITE::run() {
    return TA_CDLGAPSIDESIDEWHITE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLGAPSIDESIDEWHITE::S_CDLGAPSIDESIDEWHITE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLGAPSIDESIDEWHITE *S_CDLGAPSIDESIDEWHITE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLGAPSIDESIDEWHITE *ta = new S_CDLGAPSIDESIDEWHITE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLGAPSIDESIDEWHITE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLGAPSIDESIDEWHITE::run() {
    return TA_S_CDLGAPSIDESIDEWHITE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLGRAVESTONEDOJI::CDLGRAVESTONEDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLGRAVESTONEDOJI *CDLGRAVESTONEDOJI::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLGRAVESTONEDOJI *ta = new CDLGRAVESTONEDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLGRAVESTONEDOJI::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLGRAVESTONEDOJI::run() {
    return TA_CDLGRAVESTONEDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLGRAVESTONEDOJI::S_CDLGRAVESTONEDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLGRAVESTONEDOJI *S_CDLGRAVESTONEDOJI::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLGRAVESTONEDOJI *ta = new S_CDLGRAVESTONEDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLGRAVESTONEDOJI::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLGRAVESTONEDOJI::run() {
    return TA_S_CDLGRAVESTONEDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHAMMER::CDLHAMMER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHAMMER *CDLHAMMER::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHAMMER *ta = new CDLHAMMER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHAMMER::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHAMMER::run() {
    return TA_CDLHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHAMMER::S_CDLHAMMER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHAMMER *S_CDLHAMMER::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHAMMER *ta = new S_CDLHAMMER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHAMMER::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHAMMER::run() {
    return TA_S_CDLHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHANGINGMAN::CDLHANGINGMAN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHANGINGMAN *CDLHANGINGMAN::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHANGINGMAN *ta = new CDLHANGINGMAN(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHANGINGMAN::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHANGINGMAN::run() {
    return TA_CDLHANGINGMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHANGINGMAN::S_CDLHANGINGMAN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHANGINGMAN *S_CDLHANGINGMAN::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHANGINGMAN *ta = new S_CDLHANGINGMAN(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHANGINGMAN::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHANGINGMAN::run() {
    return TA_S_CDLHANGINGMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHARAMI::CDLHARAMI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHARAMI *CDLHARAMI::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHARAMI *ta = new CDLHARAMI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHARAMI::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHARAMI::run() {
    return TA_CDLHARAMI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHARAMI::S_CDLHARAMI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHARAMI *S_CDLHARAMI::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHARAMI *ta = new S_CDLHARAMI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHARAMI::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHARAMI::run() {
    return TA_S_CDLHARAMI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHARAMICROSS::CDLHARAMICROSS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHARAMICROSS *CDLHARAMICROSS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHARAMICROSS *ta = new CDLHARAMICROSS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHARAMICROSS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHARAMICROSS::run() {
    return TA_CDLHARAMICROSS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHARAMICROSS::S_CDLHARAMICROSS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHARAMICROSS *S_CDLHARAMICROSS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHARAMICROSS *ta = new S_CDLHARAMICROSS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHARAMICROSS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHARAMICROSS::run() {
    return TA_S_CDLHARAMICROSS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHIGHWAVE::CDLHIGHWAVE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHIGHWAVE *CDLHIGHWAVE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHIGHWAVE *ta = new CDLHIGHWAVE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHIGHWAVE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHIGHWAVE::run() {
    return TA_CDLHIGHWAVE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHIGHWAVE::S_CDLHIGHWAVE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHIGHWAVE *S_CDLHIGHWAVE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHIGHWAVE *ta = new S_CDLHIGHWAVE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHIGHWAVE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHIGHWAVE::run() {
    return TA_S_CDLHIGHWAVE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHIKKAKE::CDLHIKKAKE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHIKKAKE *CDLHIKKAKE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHIKKAKE *ta = new CDLHIKKAKE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHIKKAKE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHIKKAKE::run() {
    return TA_CDLHIKKAKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHIKKAKE::S_CDLHIKKAKE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHIKKAKE *S_CDLHIKKAKE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHIKKAKE *ta = new S_CDLHIKKAKE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHIKKAKE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHIKKAKE::run() {
    return TA_S_CDLHIKKAKE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHIKKAKEMOD::CDLHIKKAKEMOD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHIKKAKEMOD *CDLHIKKAKEMOD::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHIKKAKEMOD *ta = new CDLHIKKAKEMOD(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHIKKAKEMOD::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHIKKAKEMOD::run() {
    return TA_CDLHIKKAKEMOD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHIKKAKEMOD::S_CDLHIKKAKEMOD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHIKKAKEMOD *S_CDLHIKKAKEMOD::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHIKKAKEMOD *ta = new S_CDLHIKKAKEMOD(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHIKKAKEMOD::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHIKKAKEMOD::run() {
    return TA_S_CDLHIKKAKEMOD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLHOMINGPIGEON::CDLHOMINGPIGEON(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLHOMINGPIGEON *CDLHOMINGPIGEON::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLHOMINGPIGEON *ta = new CDLHOMINGPIGEON(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLHOMINGPIGEON::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLHOMINGPIGEON::run() {
    return TA_CDLHOMINGPIGEON(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLHOMINGPIGEON::S_CDLHOMINGPIGEON(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLHOMINGPIGEON *S_CDLHOMINGPIGEON::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLHOMINGPIGEON *ta = new S_CDLHOMINGPIGEON(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLHOMINGPIGEON::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLHOMINGPIGEON::run() {
    return TA_S_CDLHOMINGPIGEON(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLIDENTICAL3CROWS::CDLIDENTICAL3CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLIDENTICAL3CROWS *CDLIDENTICAL3CROWS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLIDENTICAL3CROWS *ta = new CDLIDENTICAL3CROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLIDENTICAL3CROWS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLIDENTICAL3CROWS::run() {
    return TA_CDLIDENTICAL3CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLIDENTICAL3CROWS::S_CDLIDENTICAL3CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLIDENTICAL3CROWS *S_CDLIDENTICAL3CROWS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLIDENTICAL3CROWS *ta = new S_CDLIDENTICAL3CROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLIDENTICAL3CROWS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLIDENTICAL3CROWS::run() {
    return TA_S_CDLIDENTICAL3CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLINNECK::CDLINNECK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLINNECK *CDLINNECK::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLINNECK *ta = new CDLINNECK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLINNECK::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLINNECK::run() {
    return TA_CDLINNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLINNECK::S_CDLINNECK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLINNECK *S_CDLINNECK::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLINNECK *ta = new S_CDLINNECK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLINNECK::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLINNECK::run() {
    return TA_S_CDLINNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLINVERTEDHAMMER::CDLINVERTEDHAMMER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLINVERTEDHAMMER *CDLINVERTEDHAMMER::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLINVERTEDHAMMER *ta = new CDLINVERTEDHAMMER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLINVERTEDHAMMER::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLINVERTEDHAMMER::run() {
    return TA_CDLINVERTEDHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLINVERTEDHAMMER::S_CDLINVERTEDHAMMER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLINVERTEDHAMMER *S_CDLINVERTEDHAMMER::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLINVERTEDHAMMER *ta = new S_CDLINVERTEDHAMMER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLINVERTEDHAMMER::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLINVERTEDHAMMER::run() {
    return TA_S_CDLINVERTEDHAMMER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLKICKING::CDLKICKING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLKICKING *CDLKICKING::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLKICKING *ta = new CDLKICKING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLKICKING::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLKICKING::run() {
    return TA_CDLKICKING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLKICKING::S_CDLKICKING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLKICKING *S_CDLKICKING::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLKICKING *ta = new S_CDLKICKING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLKICKING::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLKICKING::run() {
    return TA_S_CDLKICKING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLKICKINGBYLENGTH::CDLKICKINGBYLENGTH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLKICKINGBYLENGTH *CDLKICKINGBYLENGTH::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLKICKINGBYLENGTH *ta = new CDLKICKINGBYLENGTH(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLKICKINGBYLENGTH::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLKICKINGBYLENGTH::run() {
    return TA_CDLKICKINGBYLENGTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLKICKINGBYLENGTH::S_CDLKICKINGBYLENGTH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLKICKINGBYLENGTH *S_CDLKICKINGBYLENGTH::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLKICKINGBYLENGTH *ta = new S_CDLKICKINGBYLENGTH(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLKICKINGBYLENGTH::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLKICKINGBYLENGTH::run() {
    return TA_S_CDLKICKINGBYLENGTH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLLADDERBOTTOM::CDLLADDERBOTTOM(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLLADDERBOTTOM *CDLLADDERBOTTOM::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLLADDERBOTTOM *ta = new CDLLADDERBOTTOM(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLLADDERBOTTOM::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLLADDERBOTTOM::run() {
    return TA_CDLLADDERBOTTOM(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLLADDERBOTTOM::S_CDLLADDERBOTTOM(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLLADDERBOTTOM *S_CDLLADDERBOTTOM::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLLADDERBOTTOM *ta = new S_CDLLADDERBOTTOM(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLLADDERBOTTOM::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLLADDERBOTTOM::run() {
    return TA_S_CDLLADDERBOTTOM(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLLONGLEGGEDDOJI::CDLLONGLEGGEDDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLLONGLEGGEDDOJI *CDLLONGLEGGEDDOJI::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLLONGLEGGEDDOJI *ta = new CDLLONGLEGGEDDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLLONGLEGGEDDOJI::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLLONGLEGGEDDOJI::run() {
    return TA_CDLLONGLEGGEDDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLLONGLEGGEDDOJI::S_CDLLONGLEGGEDDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLLONGLEGGEDDOJI *S_CDLLONGLEGGEDDOJI::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLLONGLEGGEDDOJI *ta = new S_CDLLONGLEGGEDDOJI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLLONGLEGGEDDOJI::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLLONGLEGGEDDOJI::run() {
    return TA_S_CDLLONGLEGGEDDOJI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLLONGLINE::CDLLONGLINE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLLONGLINE *CDLLONGLINE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLLONGLINE *ta = new CDLLONGLINE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLLONGLINE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLLONGLINE::run() {
    return TA_CDLLONGLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLLONGLINE::S_CDLLONGLINE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLLONGLINE *S_CDLLONGLINE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLLONGLINE *ta = new S_CDLLONGLINE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLLONGLINE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLLONGLINE::run() {
    return TA_S_CDLLONGLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLMARUBOZU::CDLMARUBOZU(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLMARUBOZU *CDLMARUBOZU::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLMARUBOZU *ta = new CDLMARUBOZU(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLMARUBOZU::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLMARUBOZU::run() {
    return TA_CDLMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLMARUBOZU::S_CDLMARUBOZU(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLMARUBOZU *S_CDLMARUBOZU::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLMARUBOZU *ta = new S_CDLMARUBOZU(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLMARUBOZU::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLMARUBOZU::run() {
    return TA_S_CDLMARUBOZU(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLMATCHINGLOW::CDLMATCHINGLOW(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLMATCHINGLOW *CDLMATCHINGLOW::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLMATCHINGLOW *ta = new CDLMATCHINGLOW(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLMATCHINGLOW::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLMATCHINGLOW::run() {
    return TA_CDLMATCHINGLOW(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLMATCHINGLOW::S_CDLMATCHINGLOW(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLMATCHINGLOW *S_CDLMATCHINGLOW::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLMATCHINGLOW *ta = new S_CDLMATCHINGLOW(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLMATCHINGLOW::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLMATCHINGLOW::run() {
    return TA_S_CDLMATCHINGLOW(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLMATHOLD::CDLMATHOLD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLMATHOLD *CDLMATHOLD::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLMATHOLD *ta = new CDLMATHOLD(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLMATHOLD::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLMATHOLD::run() {
    return TA_CDLMATHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLMATHOLD::S_CDLMATHOLD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLMATHOLD *S_CDLMATHOLD::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLMATHOLD *ta = new S_CDLMATHOLD(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLMATHOLD::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLMATHOLD::run() {
    return TA_S_CDLMATHOLD(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLMORNINGDOJISTAR::CDLMORNINGDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLMORNINGDOJISTAR *CDLMORNINGDOJISTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLMORNINGDOJISTAR *ta = new CDLMORNINGDOJISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLMORNINGDOJISTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLMORNINGDOJISTAR::run() {
    return TA_CDLMORNINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLMORNINGDOJISTAR::S_CDLMORNINGDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLMORNINGDOJISTAR *S_CDLMORNINGDOJISTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLMORNINGDOJISTAR *ta = new S_CDLMORNINGDOJISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLMORNINGDOJISTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLMORNINGDOJISTAR::run() {
    return TA_S_CDLMORNINGDOJISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLMORNINGSTAR::CDLMORNINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


CDLMORNINGSTAR *CDLMORNINGSTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLMORNINGSTAR *ta = new CDLMORNINGSTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLMORNINGSTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLMORNINGSTAR::run() {
    return TA_CDLMORNINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLMORNINGSTAR::S_CDLMORNINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
}


S_CDLMORNINGSTAR *S_CDLMORNINGSTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLMORNINGSTAR *ta = new S_CDLMORNINGSTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, optInPenetration, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLMORNINGSTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInPenetration = optInPenetration;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLMORNINGSTAR::run() {
    return TA_S_CDLMORNINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->optInPenetration, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLONNECK::CDLONNECK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLONNECK *CDLONNECK::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLONNECK *ta = new CDLONNECK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLONNECK::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLONNECK::run() {
    return TA_CDLONNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLONNECK::S_CDLONNECK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLONNECK *S_CDLONNECK::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLONNECK *ta = new S_CDLONNECK(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLONNECK::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLONNECK::run() {
    return TA_S_CDLONNECK(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLPIERCING::CDLPIERCING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLPIERCING *CDLPIERCING::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLPIERCING *ta = new CDLPIERCING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLPIERCING::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLPIERCING::run() {
    return TA_CDLPIERCING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLPIERCING::S_CDLPIERCING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLPIERCING *S_CDLPIERCING::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLPIERCING *ta = new S_CDLPIERCING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLPIERCING::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLPIERCING::run() {
    return TA_S_CDLPIERCING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLRICKSHAWMAN::CDLRICKSHAWMAN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLRICKSHAWMAN *CDLRICKSHAWMAN::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLRICKSHAWMAN *ta = new CDLRICKSHAWMAN(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLRICKSHAWMAN::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLRICKSHAWMAN::run() {
    return TA_CDLRICKSHAWMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLRICKSHAWMAN::S_CDLRICKSHAWMAN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLRICKSHAWMAN *S_CDLRICKSHAWMAN::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLRICKSHAWMAN *ta = new S_CDLRICKSHAWMAN(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLRICKSHAWMAN::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLRICKSHAWMAN::run() {
    return TA_S_CDLRICKSHAWMAN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLRISEFALL3METHODS::CDLRISEFALL3METHODS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLRISEFALL3METHODS *CDLRISEFALL3METHODS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLRISEFALL3METHODS *ta = new CDLRISEFALL3METHODS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLRISEFALL3METHODS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLRISEFALL3METHODS::run() {
    return TA_CDLRISEFALL3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLRISEFALL3METHODS::S_CDLRISEFALL3METHODS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLRISEFALL3METHODS *S_CDLRISEFALL3METHODS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLRISEFALL3METHODS *ta = new S_CDLRISEFALL3METHODS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLRISEFALL3METHODS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLRISEFALL3METHODS::run() {
    return TA_S_CDLRISEFALL3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLSEPARATINGLINES::CDLSEPARATINGLINES(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLSEPARATINGLINES *CDLSEPARATINGLINES::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLSEPARATINGLINES *ta = new CDLSEPARATINGLINES(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLSEPARATINGLINES::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLSEPARATINGLINES::run() {
    return TA_CDLSEPARATINGLINES(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLSEPARATINGLINES::S_CDLSEPARATINGLINES(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLSEPARATINGLINES *S_CDLSEPARATINGLINES::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLSEPARATINGLINES *ta = new S_CDLSEPARATINGLINES(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLSEPARATINGLINES::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLSEPARATINGLINES::run() {
    return TA_S_CDLSEPARATINGLINES(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLSHOOTINGSTAR::CDLSHOOTINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLSHOOTINGSTAR *CDLSHOOTINGSTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLSHOOTINGSTAR *ta = new CDLSHOOTINGSTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLSHOOTINGSTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLSHOOTINGSTAR::run() {
    return TA_CDLSHOOTINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLSHOOTINGSTAR::S_CDLSHOOTINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLSHOOTINGSTAR *S_CDLSHOOTINGSTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLSHOOTINGSTAR *ta = new S_CDLSHOOTINGSTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLSHOOTINGSTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLSHOOTINGSTAR::run() {
    return TA_S_CDLSHOOTINGSTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLSHORTLINE::CDLSHORTLINE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLSHORTLINE *CDLSHORTLINE::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLSHORTLINE *ta = new CDLSHORTLINE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLSHORTLINE::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLSHORTLINE::run() {
    return TA_CDLSHORTLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLSHORTLINE::S_CDLSHORTLINE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLSHORTLINE *S_CDLSHORTLINE::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLSHORTLINE *ta = new S_CDLSHORTLINE(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLSHORTLINE::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLSHORTLINE::run() {
    return TA_S_CDLSHORTLINE(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLSPINNINGTOP::CDLSPINNINGTOP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLSPINNINGTOP *CDLSPINNINGTOP::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLSPINNINGTOP *ta = new CDLSPINNINGTOP(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLSPINNINGTOP::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLSPINNINGTOP::run() {
    return TA_CDLSPINNINGTOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLSPINNINGTOP::S_CDLSPINNINGTOP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLSPINNINGTOP *S_CDLSPINNINGTOP::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLSPINNINGTOP *ta = new S_CDLSPINNINGTOP(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLSPINNINGTOP::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLSPINNINGTOP::run() {
    return TA_S_CDLSPINNINGTOP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLSTALLEDPATTERN::CDLSTALLEDPATTERN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLSTALLEDPATTERN *CDLSTALLEDPATTERN::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLSTALLEDPATTERN *ta = new CDLSTALLEDPATTERN(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLSTALLEDPATTERN::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLSTALLEDPATTERN::run() {
    return TA_CDLSTALLEDPATTERN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLSTALLEDPATTERN::S_CDLSTALLEDPATTERN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLSTALLEDPATTERN *S_CDLSTALLEDPATTERN::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLSTALLEDPATTERN *ta = new S_CDLSTALLEDPATTERN(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLSTALLEDPATTERN::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLSTALLEDPATTERN::run() {
    return TA_S_CDLSTALLEDPATTERN(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLSTICKSANDWICH::CDLSTICKSANDWICH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLSTICKSANDWICH *CDLSTICKSANDWICH::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLSTICKSANDWICH *ta = new CDLSTICKSANDWICH(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLSTICKSANDWICH::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLSTICKSANDWICH::run() {
    return TA_CDLSTICKSANDWICH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLSTICKSANDWICH::S_CDLSTICKSANDWICH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLSTICKSANDWICH *S_CDLSTICKSANDWICH::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLSTICKSANDWICH *ta = new S_CDLSTICKSANDWICH(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLSTICKSANDWICH::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLSTICKSANDWICH::run() {
    return TA_S_CDLSTICKSANDWICH(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLTAKURI::CDLTAKURI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLTAKURI *CDLTAKURI::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLTAKURI *ta = new CDLTAKURI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLTAKURI::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLTAKURI::run() {
    return TA_CDLTAKURI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLTAKURI::S_CDLTAKURI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLTAKURI *S_CDLTAKURI::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLTAKURI *ta = new S_CDLTAKURI(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLTAKURI::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLTAKURI::run() {
    return TA_S_CDLTAKURI(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLTASUKIGAP::CDLTASUKIGAP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLTASUKIGAP *CDLTASUKIGAP::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLTASUKIGAP *ta = new CDLTASUKIGAP(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLTASUKIGAP::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLTASUKIGAP::run() {
    return TA_CDLTASUKIGAP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLTASUKIGAP::S_CDLTASUKIGAP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLTASUKIGAP *S_CDLTASUKIGAP::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLTASUKIGAP *ta = new S_CDLTASUKIGAP(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLTASUKIGAP::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLTASUKIGAP::run() {
    return TA_S_CDLTASUKIGAP(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLTHRUSTING::CDLTHRUSTING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLTHRUSTING *CDLTHRUSTING::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLTHRUSTING *ta = new CDLTHRUSTING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLTHRUSTING::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLTHRUSTING::run() {
    return TA_CDLTHRUSTING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLTHRUSTING::S_CDLTHRUSTING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLTHRUSTING *S_CDLTHRUSTING::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLTHRUSTING *ta = new S_CDLTHRUSTING(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLTHRUSTING::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLTHRUSTING::run() {
    return TA_S_CDLTHRUSTING(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLTRISTAR::CDLTRISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLTRISTAR *CDLTRISTAR::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLTRISTAR *ta = new CDLTRISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLTRISTAR::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLTRISTAR::run() {
    return TA_CDLTRISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLTRISTAR::S_CDLTRISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLTRISTAR *S_CDLTRISTAR::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLTRISTAR *ta = new S_CDLTRISTAR(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLTRISTAR::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLTRISTAR::run() {
    return TA_S_CDLTRISTAR(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLUNIQUE3RIVER::CDLUNIQUE3RIVER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLUNIQUE3RIVER *CDLUNIQUE3RIVER::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLUNIQUE3RIVER *ta = new CDLUNIQUE3RIVER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLUNIQUE3RIVER::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLUNIQUE3RIVER::run() {
    return TA_CDLUNIQUE3RIVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLUNIQUE3RIVER::S_CDLUNIQUE3RIVER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLUNIQUE3RIVER *S_CDLUNIQUE3RIVER::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLUNIQUE3RIVER *ta = new S_CDLUNIQUE3RIVER(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLUNIQUE3RIVER::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLUNIQUE3RIVER::run() {
    return TA_S_CDLUNIQUE3RIVER(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLUPSIDEGAP2CROWS::CDLUPSIDEGAP2CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLUPSIDEGAP2CROWS *CDLUPSIDEGAP2CROWS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLUPSIDEGAP2CROWS *ta = new CDLUPSIDEGAP2CROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLUPSIDEGAP2CROWS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLUPSIDEGAP2CROWS::run() {
    return TA_CDLUPSIDEGAP2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLUPSIDEGAP2CROWS::S_CDLUPSIDEGAP2CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLUPSIDEGAP2CROWS *S_CDLUPSIDEGAP2CROWS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLUPSIDEGAP2CROWS *ta = new S_CDLUPSIDEGAP2CROWS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLUPSIDEGAP2CROWS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLUPSIDEGAP2CROWS::run() {
    return TA_S_CDLUPSIDEGAP2CROWS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CDLXSIDEGAP3METHODS::CDLXSIDEGAP3METHODS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


CDLXSIDEGAP3METHODS *CDLXSIDEGAP3METHODS::create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    CDLXSIDEGAP3METHODS *ta = new CDLXSIDEGAP3METHODS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void CDLXSIDEGAP3METHODS::update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode CDLXSIDEGAP3METHODS::run() {
    return TA_CDLXSIDEGAP3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_CDLXSIDEGAP3METHODS::S_CDLXSIDEGAP3METHODS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
}


S_CDLXSIDEGAP3METHODS *S_CDLXSIDEGAP3METHODS::create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_CDLXSIDEGAP3METHODS *ta = new S_CDLXSIDEGAP3METHODS(startIdx, endIdx, inOpen, inHigh, inLow, inClose, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_CDLXSIDEGAP3METHODS::update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inOpen = inOpen;
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_CDLXSIDEGAP3METHODS::run() {
    return TA_S_CDLXSIDEGAP3METHODS(this->startIdx, this->endIdx, this->inOpen, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outInteger);
}

CEIL::CEIL(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


CEIL *CEIL::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    CEIL *ta = new CEIL(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void CEIL::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode CEIL::run() {
    return TA_CEIL(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_CEIL::S_CEIL(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_CEIL *S_CEIL::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_CEIL *ta = new S_CEIL(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_CEIL::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_CEIL::run() {
    return TA_S_CEIL(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

CMO::CMO(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


CMO *CMO::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    CMO *ta = new CMO(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void CMO::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode CMO::run() {
    return TA_CMO(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_CMO::S_CMO(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_CMO *S_CMO::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_CMO *ta = new S_CMO(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_CMO::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_CMO::run() {
    return TA_S_CMO(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

CORREL::CORREL(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


CORREL *CORREL::create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    CORREL *ta = new CORREL(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void CORREL::update(double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode CORREL::run() {
    return TA_CORREL(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_CORREL::S_CORREL(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_CORREL *S_CORREL::create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_CORREL *ta = new S_CORREL(startIdx, endIdx, inReal0, inReal1, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_CORREL::update(float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_CORREL::run() {
    return TA_S_CORREL(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

COS::COS(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


COS *COS::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    COS *ta = new COS(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void COS::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode COS::run() {
    return TA_COS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_COS::S_COS(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_COS *S_COS::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_COS *ta = new S_COS(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_COS::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_COS::run() {
    return TA_S_COS(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

COSH::COSH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


COSH *COSH::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    COSH *ta = new COSH(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void COSH::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode COSH::run() {
    return TA_COSH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_COSH::S_COSH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_COSH *S_COSH::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_COSH *ta = new S_COSH(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_COSH::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_COSH::run() {
    return TA_S_COSH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

DEMA::DEMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


DEMA *DEMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    DEMA *ta = new DEMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void DEMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode DEMA::run() {
    return TA_DEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_DEMA::S_DEMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_DEMA *S_DEMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_DEMA *ta = new S_DEMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_DEMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_DEMA::run() {
    return TA_S_DEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

DIV::DIV(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


DIV *DIV::create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    DIV *ta = new DIV(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void DIV::update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode DIV::run() {
    return TA_DIV(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

S_DIV::S_DIV(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


S_DIV *S_DIV::create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    S_DIV *ta = new S_DIV(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_DIV::update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_DIV::run() {
    return TA_S_DIV(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

DX::DX(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


DX *DX::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    DX *ta = new DX(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void DX::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode DX::run() {
    return TA_DX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_DX::S_DX(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_DX *S_DX::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_DX *ta = new S_DX(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_DX::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_DX::run() {
    return TA_S_DX(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

EMA::EMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


EMA *EMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    EMA *ta = new EMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void EMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode EMA::run() {
    return TA_EMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_EMA::S_EMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_EMA *S_EMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_EMA *ta = new S_EMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_EMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_EMA::run() {
    return TA_S_EMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

EXP::EXP(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


EXP *EXP::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    EXP *ta = new EXP(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void EXP::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode EXP::run() {
    return TA_EXP(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_EXP::S_EXP(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_EXP *S_EXP::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_EXP *ta = new S_EXP(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_EXP::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_EXP::run() {
    return TA_S_EXP(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

FLOOR::FLOOR(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


FLOOR *FLOOR::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    FLOOR *ta = new FLOOR(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void FLOOR::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode FLOOR::run() {
    return TA_FLOOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_FLOOR::S_FLOOR(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_FLOOR *S_FLOOR::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_FLOOR *ta = new S_FLOOR(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_FLOOR::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_FLOOR::run() {
    return TA_S_FLOOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

HT_DCPERIOD::HT_DCPERIOD(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


HT_DCPERIOD *HT_DCPERIOD::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    HT_DCPERIOD *ta = new HT_DCPERIOD(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void HT_DCPERIOD::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode HT_DCPERIOD::run() {
    return TA_HT_DCPERIOD(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_HT_DCPERIOD::S_HT_DCPERIOD(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_HT_DCPERIOD *S_HT_DCPERIOD::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_HT_DCPERIOD *ta = new S_HT_DCPERIOD(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_HT_DCPERIOD::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_HT_DCPERIOD::run() {
    return TA_S_HT_DCPERIOD(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

HT_DCPHASE::HT_DCPHASE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


HT_DCPHASE *HT_DCPHASE::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    HT_DCPHASE *ta = new HT_DCPHASE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void HT_DCPHASE::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode HT_DCPHASE::run() {
    return TA_HT_DCPHASE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_HT_DCPHASE::S_HT_DCPHASE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_HT_DCPHASE *S_HT_DCPHASE::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_HT_DCPHASE *ta = new S_HT_DCPHASE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_HT_DCPHASE::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_HT_DCPHASE::run() {
    return TA_S_HT_DCPHASE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

HT_PHASOR::HT_PHASOR(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outInPhase, outQuadrature);
}


HT_PHASOR *HT_PHASOR::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature) {
    HT_PHASOR *ta = new HT_PHASOR(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInPhase, outQuadrature);
    return ta;
}

void HT_PHASOR::update(double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInPhase = outInPhase;
    this->outQuadrature = outQuadrature;
}

TA_RetCode HT_PHASOR::run() {
    return TA_HT_PHASOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInPhase, this->outQuadrature);
}

S_HT_PHASOR::S_HT_PHASOR(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outInPhase, outQuadrature);
}


S_HT_PHASOR *S_HT_PHASOR::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature) {
    S_HT_PHASOR *ta = new S_HT_PHASOR(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInPhase, outQuadrature);
    return ta;
}

void S_HT_PHASOR::update(float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInPhase = outInPhase;
    this->outQuadrature = outQuadrature;
}

TA_RetCode S_HT_PHASOR::run() {
    return TA_S_HT_PHASOR(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInPhase, this->outQuadrature);
}

HT_SINE::HT_SINE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outSine, outLeadSine);
}


HT_SINE *HT_SINE::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine) {
    HT_SINE *ta = new HT_SINE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outSine, outLeadSine);
    return ta;
}

void HT_SINE::update(double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outSine = outSine;
    this->outLeadSine = outLeadSine;
}

TA_RetCode HT_SINE::run() {
    return TA_HT_SINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outSine, this->outLeadSine);
}

S_HT_SINE::S_HT_SINE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outSine, outLeadSine);
}


S_HT_SINE *S_HT_SINE::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine) {
    S_HT_SINE *ta = new S_HT_SINE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outSine, outLeadSine);
    return ta;
}

void S_HT_SINE::update(float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outSine = outSine;
    this->outLeadSine = outLeadSine;
}

TA_RetCode S_HT_SINE::run() {
    return TA_S_HT_SINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outSine, this->outLeadSine);
}

HT_TRENDLINE::HT_TRENDLINE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


HT_TRENDLINE *HT_TRENDLINE::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    HT_TRENDLINE *ta = new HT_TRENDLINE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void HT_TRENDLINE::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode HT_TRENDLINE::run() {
    return TA_HT_TRENDLINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_HT_TRENDLINE::S_HT_TRENDLINE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_HT_TRENDLINE *S_HT_TRENDLINE::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_HT_TRENDLINE *ta = new S_HT_TRENDLINE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_HT_TRENDLINE::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_HT_TRENDLINE::run() {
    return TA_S_HT_TRENDLINE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

HT_TRENDMODE::HT_TRENDMODE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outInteger);
}


HT_TRENDMODE *HT_TRENDMODE::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger) {
    HT_TRENDMODE *ta = new HT_TRENDMODE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInteger);
    return ta;
}

void HT_TRENDMODE::update(double *inReal, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode HT_TRENDMODE::run() {
    return TA_HT_TRENDMODE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_HT_TRENDMODE::S_HT_TRENDMODE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outInteger);
}


S_HT_TRENDMODE *S_HT_TRENDMODE::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_HT_TRENDMODE *ta = new S_HT_TRENDMODE(startIdx, endIdx, inReal, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_HT_TRENDMODE::update(float *inReal, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_HT_TRENDMODE::run() {
    return TA_S_HT_TRENDMODE(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outInteger);
}

KAMA::KAMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


KAMA *KAMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    KAMA *ta = new KAMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void KAMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode KAMA::run() {
    return TA_KAMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_KAMA::S_KAMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_KAMA *S_KAMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_KAMA *ta = new S_KAMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_KAMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_KAMA::run() {
    return TA_S_KAMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

LINEARREG::LINEARREG(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


LINEARREG *LINEARREG::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    LINEARREG *ta = new LINEARREG(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void LINEARREG::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode LINEARREG::run() {
    return TA_LINEARREG(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_LINEARREG::S_LINEARREG(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_LINEARREG *S_LINEARREG::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_LINEARREG *ta = new S_LINEARREG(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_LINEARREG::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_LINEARREG::run() {
    return TA_S_LINEARREG(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

LINEARREG_ANGLE::LINEARREG_ANGLE(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


LINEARREG_ANGLE *LINEARREG_ANGLE::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    LINEARREG_ANGLE *ta = new LINEARREG_ANGLE(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void LINEARREG_ANGLE::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode LINEARREG_ANGLE::run() {
    return TA_LINEARREG_ANGLE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_LINEARREG_ANGLE::S_LINEARREG_ANGLE(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_LINEARREG_ANGLE *S_LINEARREG_ANGLE::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_LINEARREG_ANGLE *ta = new S_LINEARREG_ANGLE(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_LINEARREG_ANGLE::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_LINEARREG_ANGLE::run() {
    return TA_S_LINEARREG_ANGLE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

LINEARREG_INTERCEPT::LINEARREG_INTERCEPT(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


LINEARREG_INTERCEPT *LINEARREG_INTERCEPT::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    LINEARREG_INTERCEPT *ta = new LINEARREG_INTERCEPT(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void LINEARREG_INTERCEPT::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode LINEARREG_INTERCEPT::run() {
    return TA_LINEARREG_INTERCEPT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_LINEARREG_INTERCEPT::S_LINEARREG_INTERCEPT(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_LINEARREG_INTERCEPT *S_LINEARREG_INTERCEPT::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_LINEARREG_INTERCEPT *ta = new S_LINEARREG_INTERCEPT(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_LINEARREG_INTERCEPT::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_LINEARREG_INTERCEPT::run() {
    return TA_S_LINEARREG_INTERCEPT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

LINEARREG_SLOPE::LINEARREG_SLOPE(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


LINEARREG_SLOPE *LINEARREG_SLOPE::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    LINEARREG_SLOPE *ta = new LINEARREG_SLOPE(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void LINEARREG_SLOPE::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode LINEARREG_SLOPE::run() {
    return TA_LINEARREG_SLOPE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_LINEARREG_SLOPE::S_LINEARREG_SLOPE(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_LINEARREG_SLOPE *S_LINEARREG_SLOPE::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_LINEARREG_SLOPE *ta = new S_LINEARREG_SLOPE(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_LINEARREG_SLOPE::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_LINEARREG_SLOPE::run() {
    return TA_S_LINEARREG_SLOPE(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

LN::LN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


LN *LN::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    LN *ta = new LN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void LN::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode LN::run() {
    return TA_LN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_LN::S_LN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_LN *S_LN::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_LN *ta = new S_LN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_LN::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_LN::run() {
    return TA_S_LN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

LOG10::LOG10(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


LOG10 *LOG10::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    LOG10 *ta = new LOG10(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void LOG10::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode LOG10::run() {
    return TA_LOG10(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_LOG10::S_LOG10(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_LOG10 *S_LOG10::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_LOG10 *ta = new S_LOG10(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_LOG10::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_LOG10::run() {
    return TA_S_LOG10(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

MA::MA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


MA *MA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    MA *ta = new MA(startIdx, endIdx, inReal, optInTimePeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void MA::update(double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MA::run() {
    return TA_MA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MA::S_MA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


S_MA *S_MA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MA *ta = new S_MA(startIdx, endIdx, inReal, optInTimePeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MA::update(float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MA::run() {
    return TA_S_MA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

MACD::MACD(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInSlowPeriod, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
}


MACD *MACD::create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    MACD *ta = new MACD(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

void MACD::update(double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
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

TA_RetCode MACD::run() {
    return TA_MACD(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

S_MACD::S_MACD(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInSlowPeriod, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
}


S_MACD *S_MACD::create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    S_MACD *ta = new S_MACD(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

void S_MACD::update(float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
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

TA_RetCode S_MACD::run() {
    return TA_S_MACD(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

MACDEXT::MACDEXT(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInFastMAType, optInSlowPeriod, optInSlowMAType, optInSignalPeriod, optInSignalMAType, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
}


MACDEXT *MACDEXT::create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    MACDEXT *ta = new MACDEXT(startIdx, endIdx, inReal, optInFastPeriod, optInFastMAType, optInSlowPeriod, optInSlowMAType, optInSignalPeriod, optInSignalMAType, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

void MACDEXT::update(double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
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

TA_RetCode MACDEXT::run() {
    return TA_MACDEXT(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInFastMAType, this->optInSlowPeriod, this->optInSlowMAType, this->optInSignalPeriod, this->optInSignalMAType, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

S_MACDEXT::S_MACDEXT(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInFastMAType, optInSlowPeriod, optInSlowMAType, optInSignalPeriod, optInSignalMAType, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
}


S_MACDEXT *S_MACDEXT::create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    S_MACDEXT *ta = new S_MACDEXT(startIdx, endIdx, inReal, optInFastPeriod, optInFastMAType, optInSlowPeriod, optInSlowMAType, optInSignalPeriod, optInSignalMAType, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

void S_MACDEXT::update(float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
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

TA_RetCode S_MACDEXT::run() {
    return TA_S_MACDEXT(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInFastMAType, this->optInSlowPeriod, this->optInSlowMAType, this->optInSignalPeriod, this->optInSignalMAType, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

MACDFIX::MACDFIX(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) : ta(startIdx, endIdx) {
    this->update(inReal, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
}


MACDFIX *MACDFIX::create(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    MACDFIX *ta = new MACDFIX(startIdx, endIdx, inReal, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

void MACDFIX::update(double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    this->inReal = inReal;
    this->optInSignalPeriod = optInSignalPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_RetCode MACDFIX::run() {
    return TA_MACDFIX(this->startIdx, this->endIdx, this->inReal, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

S_MACDFIX::S_MACDFIX(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) : ta(startIdx, endIdx) {
    this->update(inReal, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
}


S_MACDFIX *S_MACDFIX::create(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    S_MACDFIX *ta = new S_MACDFIX(startIdx, endIdx, inReal, optInSignalPeriod, outBegIdx, outNBElement, outMACD, outMACDSignal, outMACDHist);
    return ta;
}

void S_MACDFIX::update(float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist) {
    this->inReal = inReal;
    this->optInSignalPeriod = optInSignalPeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMACD = outMACD;
    this->outMACDSignal = outMACDSignal;
    this->outMACDHist = outMACDHist;
}

TA_RetCode S_MACDFIX::run() {
    return TA_S_MACDFIX(this->startIdx, this->endIdx, this->inReal, this->optInSignalPeriod, this->outBegIdx, this->outNBElement, this->outMACD, this->outMACDSignal, this->outMACDHist);
}

MAMA::MAMA(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastLimit, optInSlowLimit, outBegIdx, outNBElement, outMAMA, outFAMA);
}


MAMA *MAMA::create(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA) {
    MAMA *ta = new MAMA(startIdx, endIdx, inReal, optInFastLimit, optInSlowLimit, outBegIdx, outNBElement, outMAMA, outFAMA);
    return ta;
}

void MAMA::update(double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA) {
    this->inReal = inReal;
    this->optInFastLimit = optInFastLimit;
    this->optInSlowLimit = optInSlowLimit;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMAMA = outMAMA;
    this->outFAMA = outFAMA;
}

TA_RetCode MAMA::run() {
    return TA_MAMA(this->startIdx, this->endIdx, this->inReal, this->optInFastLimit, this->optInSlowLimit, this->outBegIdx, this->outNBElement, this->outMAMA, this->outFAMA);
}

S_MAMA::S_MAMA(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastLimit, optInSlowLimit, outBegIdx, outNBElement, outMAMA, outFAMA);
}


S_MAMA *S_MAMA::create(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA) {
    S_MAMA *ta = new S_MAMA(startIdx, endIdx, inReal, optInFastLimit, optInSlowLimit, outBegIdx, outNBElement, outMAMA, outFAMA);
    return ta;
}

void S_MAMA::update(float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA) {
    this->inReal = inReal;
    this->optInFastLimit = optInFastLimit;
    this->optInSlowLimit = optInSlowLimit;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMAMA = outMAMA;
    this->outFAMA = outFAMA;
}

TA_RetCode S_MAMA::run() {
    return TA_S_MAMA(this->startIdx, this->endIdx, this->inReal, this->optInFastLimit, this->optInSlowLimit, this->outBegIdx, this->outNBElement, this->outMAMA, this->outFAMA);
}

MAVP::MAVP(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, inPeriods, optInMinPeriod, optInMaxPeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


MAVP *MAVP::create(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    MAVP *ta = new MAVP(startIdx, endIdx, inReal, inPeriods, optInMinPeriod, optInMaxPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void MAVP::update(double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->inPeriods = inPeriods;
    this->optInMinPeriod = optInMinPeriod;
    this->optInMaxPeriod = optInMaxPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MAVP::run() {
    return TA_MAVP(this->startIdx, this->endIdx, this->inReal, this->inPeriods, this->optInMinPeriod, this->optInMaxPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MAVP::S_MAVP(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, inPeriods, optInMinPeriod, optInMaxPeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


S_MAVP *S_MAVP::create(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MAVP *ta = new S_MAVP(startIdx, endIdx, inReal, inPeriods, optInMinPeriod, optInMaxPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MAVP::update(float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->inPeriods = inPeriods;
    this->optInMinPeriod = optInMinPeriod;
    this->optInMaxPeriod = optInMaxPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MAVP::run() {
    return TA_S_MAVP(this->startIdx, this->endIdx, this->inReal, this->inPeriods, this->optInMinPeriod, this->optInMaxPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

MAX::MAX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MAX *MAX::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MAX *ta = new MAX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MAX::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MAX::run() {
    return TA_MAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MAX::S_MAX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MAX *S_MAX::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MAX *ta = new S_MAX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MAX::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MAX::run() {
    return TA_S_MAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MAXINDEX::MAXINDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
}


MAXINDEX *MAXINDEX::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    MAXINDEX *ta = new MAXINDEX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

void MAXINDEX::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode MAXINDEX::run() {
    return TA_MAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_MAXINDEX::S_MAXINDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
}


S_MAXINDEX *S_MAXINDEX::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_MAXINDEX *ta = new S_MAXINDEX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_MAXINDEX::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_MAXINDEX::run() {
    return TA_S_MAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

MEDPRICE::MEDPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, outBegIdx, outNBElement, outReal);
}


MEDPRICE *MEDPRICE::create(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal) {
    MEDPRICE *ta = new MEDPRICE(startIdx, endIdx, inHigh, inLow, outBegIdx, outNBElement, outReal);
    return ta;
}

void MEDPRICE::update(double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MEDPRICE::run() {
    return TA_MEDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MEDPRICE::S_MEDPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, outBegIdx, outNBElement, outReal);
}


S_MEDPRICE *S_MEDPRICE::create(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MEDPRICE *ta = new S_MEDPRICE(startIdx, endIdx, inHigh, inLow, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MEDPRICE::update(float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MEDPRICE::run() {
    return TA_S_MEDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->outBegIdx, this->outNBElement, this->outReal);
}

MFI::MFI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, inVolume, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MFI *MFI::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MFI *ta = new MFI(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MFI::update(double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MFI::run() {
    return TA_MFI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MFI::S_MFI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, inVolume, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MFI *S_MFI::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MFI *ta = new S_MFI(startIdx, endIdx, inHigh, inLow, inClose, inVolume, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MFI::update(float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->inVolume = inVolume;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MFI::run() {
    return TA_S_MFI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->inVolume, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MIDPOINT::MIDPOINT(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MIDPOINT *MIDPOINT::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MIDPOINT *ta = new MIDPOINT(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MIDPOINT::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MIDPOINT::run() {
    return TA_MIDPOINT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MIDPOINT::S_MIDPOINT(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MIDPOINT *S_MIDPOINT::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MIDPOINT *ta = new S_MIDPOINT(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MIDPOINT::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MIDPOINT::run() {
    return TA_S_MIDPOINT(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MIDPRICE::MIDPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MIDPRICE *MIDPRICE::create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MIDPRICE *ta = new MIDPRICE(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MIDPRICE::update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MIDPRICE::run() {
    return TA_MIDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MIDPRICE::S_MIDPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MIDPRICE *S_MIDPRICE::create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MIDPRICE *ta = new S_MIDPRICE(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MIDPRICE::update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MIDPRICE::run() {
    return TA_S_MIDPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MIN::MIN(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MIN *MIN::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MIN *ta = new MIN(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MIN::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MIN::run() {
    return TA_MIN(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MIN::S_MIN(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MIN *S_MIN::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MIN *ta = new S_MIN(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MIN::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MIN::run() {
    return TA_S_MIN(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MININDEX::MININDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
}


MININDEX *MININDEX::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    MININDEX *ta = new MININDEX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

void MININDEX::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode MININDEX::run() {
    return TA_MININDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

S_MININDEX::S_MININDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
}


S_MININDEX *S_MININDEX::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    S_MININDEX *ta = new S_MININDEX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outInteger);
    return ta;
}

void S_MININDEX::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outInteger = outInteger;
}

TA_RetCode S_MININDEX::run() {
    return TA_S_MININDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outInteger);
}

MINMAX::MINMAX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outMin, outMax);
}


MINMAX *MINMAX::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax) {
    MINMAX *ta = new MINMAX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMin, outMax);
    return ta;
}

void MINMAX::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMin = outMin;
    this->outMax = outMax;
}

TA_RetCode MINMAX::run() {
    return TA_MINMAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMin, this->outMax);
}

S_MINMAX::S_MINMAX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outMin, outMax);
}


S_MINMAX *S_MINMAX::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax) {
    S_MINMAX *ta = new S_MINMAX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMin, outMax);
    return ta;
}

void S_MINMAX::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMin = outMin;
    this->outMax = outMax;
}

TA_RetCode S_MINMAX::run() {
    return TA_S_MINMAX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMin, this->outMax);
}

MINMAXINDEX::MINMAXINDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outMinIdx, outMaxIdx);
}


MINMAXINDEX *MINMAXINDEX::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx) {
    MINMAXINDEX *ta = new MINMAXINDEX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMinIdx, outMaxIdx);
    return ta;
}

void MINMAXINDEX::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMinIdx = outMinIdx;
    this->outMaxIdx = outMaxIdx;
}

TA_RetCode MINMAXINDEX::run() {
    return TA_MINMAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMinIdx, this->outMaxIdx);
}

S_MINMAXINDEX::S_MINMAXINDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outMinIdx, outMaxIdx);
}


S_MINMAXINDEX *S_MINMAXINDEX::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx) {
    S_MINMAXINDEX *ta = new S_MINMAXINDEX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outMinIdx, outMaxIdx);
    return ta;
}

void S_MINMAXINDEX::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outMinIdx = outMinIdx;
    this->outMaxIdx = outMaxIdx;
}

TA_RetCode S_MINMAXINDEX::run() {
    return TA_S_MINMAXINDEX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outMinIdx, this->outMaxIdx);
}

MINUS_DI::MINUS_DI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MINUS_DI *MINUS_DI::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MINUS_DI *ta = new MINUS_DI(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MINUS_DI::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MINUS_DI::run() {
    return TA_MINUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MINUS_DI::S_MINUS_DI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MINUS_DI *S_MINUS_DI::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MINUS_DI *ta = new S_MINUS_DI(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MINUS_DI::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MINUS_DI::run() {
    return TA_S_MINUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MINUS_DM::MINUS_DM(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MINUS_DM *MINUS_DM::create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MINUS_DM *ta = new MINUS_DM(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MINUS_DM::update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MINUS_DM::run() {
    return TA_MINUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MINUS_DM::S_MINUS_DM(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MINUS_DM *S_MINUS_DM::create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MINUS_DM *ta = new S_MINUS_DM(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MINUS_DM::update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MINUS_DM::run() {
    return TA_S_MINUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MOM::MOM(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


MOM *MOM::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    MOM *ta = new MOM(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void MOM::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MOM::run() {
    return TA_MOM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MOM::S_MOM(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_MOM *S_MOM::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MOM *ta = new S_MOM(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MOM::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MOM::run() {
    return TA_S_MOM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

MULT::MULT(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


MULT *MULT::create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    MULT *ta = new MULT(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void MULT::update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode MULT::run() {
    return TA_MULT(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

S_MULT::S_MULT(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


S_MULT *S_MULT::create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    S_MULT *ta = new S_MULT(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_MULT::update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_MULT::run() {
    return TA_S_MULT(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

NATR::NATR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


NATR *NATR::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    NATR *ta = new NATR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void NATR::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode NATR::run() {
    return TA_NATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_NATR::S_NATR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_NATR *S_NATR::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_NATR *ta = new S_NATR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_NATR::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_NATR::run() {
    return TA_S_NATR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

OBV::OBV(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, inVolume, outBegIdx, outNBElement, outReal);
}


OBV *OBV::create(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    OBV *ta = new OBV(startIdx, endIdx, inReal, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

void OBV::update(double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode OBV::run() {
    return TA_OBV(this->startIdx, this->endIdx, this->inReal, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

S_OBV::S_OBV(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, inVolume, outBegIdx, outNBElement, outReal);
}


S_OBV *S_OBV::create(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    S_OBV *ta = new S_OBV(startIdx, endIdx, inReal, inVolume, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_OBV::update(float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->inVolume = inVolume;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_OBV::run() {
    return TA_S_OBV(this->startIdx, this->endIdx, this->inReal, this->inVolume, this->outBegIdx, this->outNBElement, this->outReal);
}

PLUS_DI::PLUS_DI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


PLUS_DI *PLUS_DI::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    PLUS_DI *ta = new PLUS_DI(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void PLUS_DI::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode PLUS_DI::run() {
    return TA_PLUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_PLUS_DI::S_PLUS_DI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_PLUS_DI *S_PLUS_DI::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_PLUS_DI *ta = new S_PLUS_DI(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_PLUS_DI::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_PLUS_DI::run() {
    return TA_S_PLUS_DI(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

PLUS_DM::PLUS_DM(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


PLUS_DM *PLUS_DM::create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    PLUS_DM *ta = new PLUS_DM(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void PLUS_DM::update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode PLUS_DM::run() {
    return TA_PLUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_PLUS_DM::S_PLUS_DM(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_PLUS_DM *S_PLUS_DM::create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_PLUS_DM *ta = new S_PLUS_DM(startIdx, endIdx, inHigh, inLow, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_PLUS_DM::update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_PLUS_DM::run() {
    return TA_S_PLUS_DM(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

PPO::PPO(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


PPO *PPO::create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    PPO *ta = new PPO(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void PPO::update(double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode PPO::run() {
    return TA_PPO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

S_PPO::S_PPO(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
}


S_PPO *S_PPO::create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    S_PPO *ta = new S_PPO(startIdx, endIdx, inReal, optInFastPeriod, optInSlowPeriod, optInMAType, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_PPO::update(float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInFastPeriod = optInFastPeriod;
    this->optInSlowPeriod = optInSlowPeriod;
    this->optInMAType = optInMAType;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_PPO::run() {
    return TA_S_PPO(this->startIdx, this->endIdx, this->inReal, this->optInFastPeriod, this->optInSlowPeriod, this->optInMAType, this->outBegIdx, this->outNBElement, this->outReal);
}

ROC::ROC(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ROC *ROC::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ROC *ta = new ROC(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ROC::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ROC::run() {
    return TA_ROC(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ROC::S_ROC(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ROC *S_ROC::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ROC *ta = new S_ROC(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ROC::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ROC::run() {
    return TA_S_ROC(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

ROCP::ROCP(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ROCP *ROCP::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ROCP *ta = new ROCP(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ROCP::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ROCP::run() {
    return TA_ROCP(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ROCP::S_ROCP(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ROCP *S_ROCP::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ROCP *ta = new S_ROCP(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ROCP::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ROCP::run() {
    return TA_S_ROCP(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

ROCR::ROCR(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ROCR *ROCR::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ROCR *ta = new ROCR(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ROCR::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ROCR::run() {
    return TA_ROCR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ROCR::S_ROCR(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ROCR *S_ROCR::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ROCR *ta = new S_ROCR(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ROCR::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ROCR::run() {
    return TA_S_ROCR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

ROCR100::ROCR100(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


ROCR100 *ROCR100::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    ROCR100 *ta = new ROCR100(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void ROCR100::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode ROCR100::run() {
    return TA_ROCR100(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ROCR100::S_ROCR100(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_ROCR100 *S_ROCR100::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ROCR100 *ta = new S_ROCR100(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ROCR100::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_ROCR100::run() {
    return TA_S_ROCR100(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

RSI::RSI(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


RSI *RSI::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    RSI *ta = new RSI(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void RSI::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode RSI::run() {
    return TA_RSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_RSI::S_RSI(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_RSI *S_RSI::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_RSI *ta = new S_RSI(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_RSI::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_RSI::run() {
    return TA_S_RSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

SAR::SAR(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInAcceleration, optInMaximum, outBegIdx, outNBElement, outReal);
}


SAR *SAR::create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal) {
    SAR *ta = new SAR(startIdx, endIdx, inHigh, inLow, optInAcceleration, optInMaximum, outBegIdx, outNBElement, outReal);
    return ta;
}

void SAR::update(double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInAcceleration = optInAcceleration;
    this->optInMaximum = optInMaximum;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SAR::run() {
    return TA_SAR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInAcceleration, this->optInMaximum, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SAR::S_SAR(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInAcceleration, optInMaximum, outBegIdx, outNBElement, outReal);
}


S_SAR *S_SAR::create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SAR *ta = new S_SAR(startIdx, endIdx, inHigh, inLow, optInAcceleration, optInMaximum, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SAR::update(float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->optInAcceleration = optInAcceleration;
    this->optInMaximum = optInMaximum;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SAR::run() {
    return TA_S_SAR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInAcceleration, this->optInMaximum, this->outBegIdx, this->outNBElement, this->outReal);
}

SAREXT::SAREXT(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInStartValue, optInOffsetOnReverse, optInAccelerationInitLong, optInAccelerationLong, optInAccelerationMaxLong, optInAccelerationInitShort, optInAccelerationShort, optInAccelerationMaxShort, outBegIdx, outNBElement, outReal);
}


SAREXT *SAREXT::create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal) {
    SAREXT *ta = new SAREXT(startIdx, endIdx, inHigh, inLow, optInStartValue, optInOffsetOnReverse, optInAccelerationInitLong, optInAccelerationLong, optInAccelerationMaxLong, optInAccelerationInitShort, optInAccelerationShort, optInAccelerationMaxShort, outBegIdx, outNBElement, outReal);
    return ta;
}

void SAREXT::update(double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal) {
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

TA_RetCode SAREXT::run() {
    return TA_SAREXT(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInStartValue, this->optInOffsetOnReverse, this->optInAccelerationInitLong, this->optInAccelerationLong, this->optInAccelerationMaxLong, this->optInAccelerationInitShort, this->optInAccelerationShort, this->optInAccelerationMaxShort, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SAREXT::S_SAREXT(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, optInStartValue, optInOffsetOnReverse, optInAccelerationInitLong, optInAccelerationLong, optInAccelerationMaxLong, optInAccelerationInitShort, optInAccelerationShort, optInAccelerationMaxShort, outBegIdx, outNBElement, outReal);
}


S_SAREXT *S_SAREXT::create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SAREXT *ta = new S_SAREXT(startIdx, endIdx, inHigh, inLow, optInStartValue, optInOffsetOnReverse, optInAccelerationInitLong, optInAccelerationLong, optInAccelerationMaxLong, optInAccelerationInitShort, optInAccelerationShort, optInAccelerationMaxShort, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SAREXT::update(float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal) {
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

TA_RetCode S_SAREXT::run() {
    return TA_S_SAREXT(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->optInStartValue, this->optInOffsetOnReverse, this->optInAccelerationInitLong, this->optInAccelerationLong, this->optInAccelerationMaxLong, this->optInAccelerationInitShort, this->optInAccelerationShort, this->optInAccelerationMaxShort, this->outBegIdx, this->outNBElement, this->outReal);
}

SIN::SIN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


SIN *SIN::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    SIN *ta = new SIN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void SIN::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SIN::run() {
    return TA_SIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SIN::S_SIN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_SIN *S_SIN::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SIN *ta = new S_SIN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SIN::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SIN::run() {
    return TA_S_SIN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

SINH::SINH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


SINH *SINH::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    SINH *ta = new SINH(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void SINH::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SINH::run() {
    return TA_SINH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SINH::S_SINH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_SINH *S_SINH::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SINH *ta = new S_SINH(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SINH::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SINH::run() {
    return TA_S_SINH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

SMA::SMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


SMA *SMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    SMA *ta = new SMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void SMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SMA::run() {
    return TA_SMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SMA::S_SMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_SMA *S_SMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SMA *ta = new S_SMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SMA::run() {
    return TA_S_SMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

SQRT::SQRT(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


SQRT *SQRT::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    SQRT *ta = new SQRT(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void SQRT::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SQRT::run() {
    return TA_SQRT(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SQRT::S_SQRT(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_SQRT *S_SQRT::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SQRT *ta = new S_SQRT(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SQRT::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SQRT::run() {
    return TA_S_SQRT(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

STDDEV::STDDEV(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
}


STDDEV *STDDEV::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    STDDEV *ta = new STDDEV(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

void STDDEV::update(double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode STDDEV::run() {
    return TA_STDDEV(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

S_STDDEV::S_STDDEV(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
}


S_STDDEV *S_STDDEV::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    S_STDDEV *ta = new S_STDDEV(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_STDDEV::update(float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_STDDEV::run() {
    return TA_S_STDDEV(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

STOCH::STOCH(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInFastK_Period, optInSlowK_Period, optInSlowK_MAType, optInSlowD_Period, optInSlowD_MAType, outBegIdx, outNBElement, outSlowK, outSlowD);
}


STOCH *STOCH::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD) {
    STOCH *ta = new STOCH(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInSlowK_Period, optInSlowK_MAType, optInSlowD_Period, optInSlowD_MAType, outBegIdx, outNBElement, outSlowK, outSlowD);
    return ta;
}

void STOCH::update(double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD) {
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

TA_RetCode STOCH::run() {
    return TA_STOCH(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInSlowK_Period, this->optInSlowK_MAType, this->optInSlowD_Period, this->optInSlowD_MAType, this->outBegIdx, this->outNBElement, this->outSlowK, this->outSlowD);
}

S_STOCH::S_STOCH(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInFastK_Period, optInSlowK_Period, optInSlowK_MAType, optInSlowD_Period, optInSlowD_MAType, outBegIdx, outNBElement, outSlowK, outSlowD);
}


S_STOCH *S_STOCH::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD) {
    S_STOCH *ta = new S_STOCH(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInSlowK_Period, optInSlowK_MAType, optInSlowD_Period, optInSlowD_MAType, outBegIdx, outNBElement, outSlowK, outSlowD);
    return ta;
}

void S_STOCH::update(float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD) {
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

TA_RetCode S_STOCH::run() {
    return TA_S_STOCH(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInSlowK_Period, this->optInSlowK_MAType, this->optInSlowD_Period, this->optInSlowD_MAType, this->outBegIdx, this->outNBElement, this->outSlowK, this->outSlowD);
}

STOCHF::STOCHF(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
}


STOCHF *STOCHF::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
    STOCHF *ta = new STOCHF(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

void STOCHF::update(double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
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

TA_RetCode STOCHF::run() {
    return TA_STOCHF(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

S_STOCHF::S_STOCHF(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
}


S_STOCHF *S_STOCHF::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
    S_STOCHF *ta = new S_STOCHF(startIdx, endIdx, inHigh, inLow, inClose, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

void S_STOCHF::update(float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
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

TA_RetCode S_STOCHF::run() {
    return TA_S_STOCHF(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

STOCHRSI::STOCHRSI(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
}


STOCHRSI *STOCHRSI::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
    STOCHRSI *ta = new STOCHRSI(startIdx, endIdx, inReal, optInTimePeriod, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

void STOCHRSI::update(double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
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

TA_RetCode STOCHRSI::run() {
    return TA_STOCHRSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

S_STOCHRSI::S_STOCHRSI(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
}


S_STOCHRSI *S_STOCHRSI::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
    S_STOCHRSI *ta = new S_STOCHRSI(startIdx, endIdx, inReal, optInTimePeriod, optInFastK_Period, optInFastD_Period, optInFastD_MAType, outBegIdx, outNBElement, outFastK, outFastD);
    return ta;
}

void S_STOCHRSI::update(float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD) {
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

TA_RetCode S_STOCHRSI::run() {
    return TA_S_STOCHRSI(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInFastK_Period, this->optInFastD_Period, this->optInFastD_MAType, this->outBegIdx, this->outNBElement, this->outFastK, this->outFastD);
}

SUB::SUB(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


SUB *SUB::create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    SUB *ta = new SUB(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void SUB::update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SUB::run() {
    return TA_SUB(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SUB::S_SUB(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal0, inReal1, outBegIdx, outNBElement, outReal);
}


S_SUB *S_SUB::create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SUB *ta = new S_SUB(startIdx, endIdx, inReal0, inReal1, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SUB::update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal0 = inReal0;
    this->inReal1 = inReal1;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SUB::run() {
    return TA_S_SUB(this->startIdx, this->endIdx, this->inReal0, this->inReal1, this->outBegIdx, this->outNBElement, this->outReal);
}

SUM::SUM(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


SUM *SUM::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    SUM *ta = new SUM(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void SUM::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode SUM::run() {
    return TA_SUM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_SUM::S_SUM(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_SUM *S_SUM::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_SUM *ta = new S_SUM(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_SUM::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_SUM::run() {
    return TA_S_SUM(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

T3::T3(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInVFactor, outBegIdx, outNBElement, outReal);
}


T3 *T3::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal) {
    T3 *ta = new T3(startIdx, endIdx, inReal, optInTimePeriod, optInVFactor, outBegIdx, outNBElement, outReal);
    return ta;
}

void T3::update(double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInVFactor = optInVFactor;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode T3::run() {
    return TA_T3(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInVFactor, this->outBegIdx, this->outNBElement, this->outReal);
}

S_T3::S_T3(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInVFactor, outBegIdx, outNBElement, outReal);
}


S_T3 *S_T3::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal) {
    S_T3 *ta = new S_T3(startIdx, endIdx, inReal, optInTimePeriod, optInVFactor, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_T3::update(float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInVFactor = optInVFactor;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_T3::run() {
    return TA_S_T3(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInVFactor, this->outBegIdx, this->outNBElement, this->outReal);
}

TAN::TAN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


TAN *TAN::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    TAN *ta = new TAN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void TAN::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TAN::run() {
    return TA_TAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TAN::S_TAN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_TAN *S_TAN::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TAN *ta = new S_TAN(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TAN::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TAN::run() {
    return TA_S_TAN(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TANH::TANH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


TANH *TANH::create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    TANH *ta = new TANH(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void TANH::update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TANH::run() {
    return TA_TANH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TANH::S_TANH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, outBegIdx, outNBElement, outReal);
}


S_TANH *S_TANH::create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TANH *ta = new S_TANH(startIdx, endIdx, inReal, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TANH::update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TANH::run() {
    return TA_S_TANH(this->startIdx, this->endIdx, this->inReal, this->outBegIdx, this->outNBElement, this->outReal);
}

TEMA::TEMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


TEMA *TEMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    TEMA *ta = new TEMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void TEMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TEMA::run() {
    return TA_TEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TEMA::S_TEMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_TEMA *S_TEMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TEMA *ta = new S_TEMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TEMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TEMA::run() {
    return TA_S_TEMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TRANGE::TRANGE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


TRANGE *TRANGE::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    TRANGE *ta = new TRANGE(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void TRANGE::update(double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TRANGE::run() {
    return TA_TRANGE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TRANGE::S_TRANGE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


S_TRANGE *S_TRANGE::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TRANGE *ta = new S_TRANGE(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TRANGE::update(float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TRANGE::run() {
    return TA_S_TRANGE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

TRIMA::TRIMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


TRIMA *TRIMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    TRIMA *ta = new TRIMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void TRIMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TRIMA::run() {
    return TA_TRIMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TRIMA::S_TRIMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_TRIMA *S_TRIMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TRIMA *ta = new S_TRIMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TRIMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TRIMA::run() {
    return TA_S_TRIMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TRIX::TRIX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


TRIX *TRIX::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    TRIX *ta = new TRIX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void TRIX::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TRIX::run() {
    return TA_TRIX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TRIX::S_TRIX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_TRIX *S_TRIX::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TRIX *ta = new S_TRIX(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TRIX::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TRIX::run() {
    return TA_S_TRIX(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TSF::TSF(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


TSF *TSF::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    TSF *ta = new TSF(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void TSF::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TSF::run() {
    return TA_TSF(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TSF::S_TSF(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_TSF *S_TSF::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TSF *ta = new S_TSF(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TSF::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TSF::run() {
    return TA_S_TSF(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

TYPPRICE::TYPPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


TYPPRICE *TYPPRICE::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    TYPPRICE *ta = new TYPPRICE(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void TYPPRICE::update(double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode TYPPRICE::run() {
    return TA_TYPPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

S_TYPPRICE::S_TYPPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


S_TYPPRICE *S_TYPPRICE::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    S_TYPPRICE *ta = new S_TYPPRICE(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_TYPPRICE::update(float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_TYPPRICE::run() {
    return TA_S_TYPPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

ULTOSC::ULTOSC(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod1, optInTimePeriod2, optInTimePeriod3, outBegIdx, outNBElement, outReal);
}


ULTOSC *ULTOSC::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal) {
    ULTOSC *ta = new ULTOSC(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod1, optInTimePeriod2, optInTimePeriod3, outBegIdx, outNBElement, outReal);
    return ta;
}

void ULTOSC::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal) {
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

TA_RetCode ULTOSC::run() {
    return TA_ULTOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod1, this->optInTimePeriod2, this->optInTimePeriod3, this->outBegIdx, this->outNBElement, this->outReal);
}

S_ULTOSC::S_ULTOSC(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod1, optInTimePeriod2, optInTimePeriod3, outBegIdx, outNBElement, outReal);
}


S_ULTOSC *S_ULTOSC::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal) {
    S_ULTOSC *ta = new S_ULTOSC(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod1, optInTimePeriod2, optInTimePeriod3, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_ULTOSC::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal) {
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

TA_RetCode S_ULTOSC::run() {
    return TA_S_ULTOSC(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod1, this->optInTimePeriod2, this->optInTimePeriod3, this->outBegIdx, this->outNBElement, this->outReal);
}

VAR::VAR(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
}


VAR *VAR::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    VAR *ta = new VAR(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

void VAR::update(double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode VAR::run() {
    return TA_VAR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

S_VAR::S_VAR(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
}


S_VAR *S_VAR::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    S_VAR *ta = new S_VAR(startIdx, endIdx, inReal, optInTimePeriod, optInNbDev, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_VAR::update(float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->optInNbDev = optInNbDev;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_VAR::run() {
    return TA_S_VAR(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->optInNbDev, this->outBegIdx, this->outNBElement, this->outReal);
}

WCLPRICE::WCLPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


WCLPRICE *WCLPRICE::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    WCLPRICE *ta = new WCLPRICE(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void WCLPRICE::update(double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode WCLPRICE::run() {
    return TA_WCLPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

S_WCLPRICE::S_WCLPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
}


S_WCLPRICE *S_WCLPRICE::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    S_WCLPRICE *ta = new S_WCLPRICE(startIdx, endIdx, inHigh, inLow, inClose, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_WCLPRICE::update(float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_WCLPRICE::run() {
    return TA_S_WCLPRICE(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->outBegIdx, this->outNBElement, this->outReal);
}

WILLR::WILLR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


WILLR *WILLR::create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    WILLR *ta = new WILLR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void WILLR::update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode WILLR::run() {
    return TA_WILLR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_WILLR::S_WILLR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_WILLR *S_WILLR::create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_WILLR *ta = new S_WILLR(startIdx, endIdx, inHigh, inLow, inClose, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_WILLR::update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inHigh = inHigh;
    this->inLow = inLow;
    this->inClose = inClose;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_WILLR::run() {
    return TA_S_WILLR(this->startIdx, this->endIdx, this->inHigh, this->inLow, this->inClose, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

WMA::WMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


WMA *WMA::create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    WMA *ta = new WMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void WMA::update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode WMA::run() {
    return TA_WMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

S_WMA::S_WMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) : ta(startIdx, endIdx) {
    this->update(inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
}


S_WMA *S_WMA::create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    S_WMA *ta = new S_WMA(startIdx, endIdx, inReal, optInTimePeriod, outBegIdx, outNBElement, outReal);
    return ta;
}

void S_WMA::update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal) {
    this->inReal = inReal;
    this->optInTimePeriod = optInTimePeriod;
    this->outBegIdx = outBegIdx;
    this->outNBElement = outNBElement;
    this->outReal = outReal;
}

TA_RetCode S_WMA::run() {
    return TA_S_WMA(this->startIdx, this->endIdx, this->inReal, this->optInTimePeriod, this->outBegIdx, this->outNBElement, this->outReal);
}

