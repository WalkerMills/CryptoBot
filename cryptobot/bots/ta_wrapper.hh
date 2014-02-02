#ifndef TA_WRAPPER_HH
#define TA_WRAPPER_HH

#include <ta-lib/ta_common.h>

class TAWrapper { };

class TA_ACOS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ACOS_Wrapper() { };
    TA_ACOS_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ACOS_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ACOS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ACOS_Wrapper() { };
    TA_S_ACOS_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ACOS_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_AD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    double *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_AD_Wrapper() { };
    TA_AD_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_AD_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_AD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    float *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_AD_Wrapper() { };
    TA_S_AD_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_AD_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ADD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ADD_Wrapper() { };
    TA_ADD_Wrapper(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ADD_Wrapper *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ADD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ADD_Wrapper() { };
    TA_S_ADD_Wrapper(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ADD_Wrapper *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ADOSC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    double *inVolume;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ADOSC_Wrapper() { };
    TA_ADOSC_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ADOSC_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ADOSC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    float *inVolume;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ADOSC_Wrapper() { };
    TA_S_ADOSC_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ADOSC_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ADX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ADX_Wrapper() { };
    TA_ADX_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ADX_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ADX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ADX_Wrapper() { };
    TA_S_ADX_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ADX_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ADXR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ADXR_Wrapper() { };
    TA_ADXR_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ADXR_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ADXR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ADXR_Wrapper() { };
    TA_S_ADXR_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ADXR_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_APO_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_APO_Wrapper() { };
    TA_APO_Wrapper(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_APO_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_APO_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_APO_Wrapper() { };
    TA_S_APO_Wrapper(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_APO_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_AROON_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outAroonDown;
    double *outAroonUp;

    TA_AROON_Wrapper() { };
    TA_AROON_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_AROON_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_RetCode run();
};

class TA_S_AROON_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outAroonDown;
    double *outAroonUp;

    TA_S_AROON_Wrapper() { };
    TA_S_AROON_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_S_AROON_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_RetCode run();
};

class TA_AROONOSC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_AROONOSC_Wrapper() { };
    TA_AROONOSC_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_AROONOSC_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_AROONOSC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_AROONOSC_Wrapper() { };
    TA_S_AROONOSC_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_AROONOSC_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ASIN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ASIN_Wrapper() { };
    TA_ASIN_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ASIN_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ASIN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ASIN_Wrapper() { };
    TA_S_ASIN_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ASIN_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ATAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ATAN_Wrapper() { };
    TA_ATAN_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ATAN_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ATAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ATAN_Wrapper() { };
    TA_S_ATAN_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ATAN_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ATR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ATR_Wrapper() { };
    TA_ATR_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ATR_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ATR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ATR_Wrapper() { };
    TA_S_ATR_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ATR_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_AVGPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_AVGPRICE_Wrapper() { };
    TA_AVGPRICE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_AVGPRICE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_AVGPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_AVGPRICE_Wrapper() { };
    TA_S_AVGPRICE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_AVGPRICE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_BBANDS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outRealUpperBand;
    double *outRealMiddleBand;
    double *outRealLowerBand;

    TA_BBANDS_Wrapper() { };
    TA_BBANDS_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_BBANDS_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_RetCode run();
};

class TA_S_BBANDS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outRealUpperBand;
    double *outRealMiddleBand;
    double *outRealLowerBand;

    TA_S_BBANDS_Wrapper() { };
    TA_S_BBANDS_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_S_BBANDS_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_RetCode run();
};

class TA_BETA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_BETA_Wrapper() { };
    TA_BETA_Wrapper(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_BETA_Wrapper *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_BETA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_BETA_Wrapper() { };
    TA_S_BETA_Wrapper(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_BETA_Wrapper *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_BOP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_BOP_Wrapper() { };
    TA_BOP_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_BOP_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_BOP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_BOP_Wrapper() { };
    TA_S_BOP_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_BOP_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_CCI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_CCI_Wrapper() { };
    TA_CCI_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_CCI_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_CCI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_CCI_Wrapper() { };
    TA_S_CCI_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_CCI_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_CDL2CROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL2CROWS_Wrapper() { };
    TA_CDL2CROWS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL2CROWS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL2CROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL2CROWS_Wrapper() { };
    TA_S_CDL2CROWS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL2CROWS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDL3BLACKCROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL3BLACKCROWS_Wrapper() { };
    TA_CDL3BLACKCROWS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL3BLACKCROWS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL3BLACKCROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL3BLACKCROWS_Wrapper() { };
    TA_S_CDL3BLACKCROWS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL3BLACKCROWS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDL3INSIDE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL3INSIDE_Wrapper() { };
    TA_CDL3INSIDE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL3INSIDE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL3INSIDE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL3INSIDE_Wrapper() { };
    TA_S_CDL3INSIDE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL3INSIDE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDL3LINESTRIKE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL3LINESTRIKE_Wrapper() { };
    TA_CDL3LINESTRIKE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL3LINESTRIKE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL3LINESTRIKE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL3LINESTRIKE_Wrapper() { };
    TA_S_CDL3LINESTRIKE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL3LINESTRIKE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDL3OUTSIDE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL3OUTSIDE_Wrapper() { };
    TA_CDL3OUTSIDE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL3OUTSIDE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL3OUTSIDE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL3OUTSIDE_Wrapper() { };
    TA_S_CDL3OUTSIDE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL3OUTSIDE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDL3STARSINSOUTH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL3STARSINSOUTH_Wrapper() { };
    TA_CDL3STARSINSOUTH_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL3STARSINSOUTH_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL3STARSINSOUTH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL3STARSINSOUTH_Wrapper() { };
    TA_S_CDL3STARSINSOUTH_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL3STARSINSOUTH_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDL3WHITESOLDIERS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDL3WHITESOLDIERS_Wrapper() { };
    TA_CDL3WHITESOLDIERS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDL3WHITESOLDIERS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDL3WHITESOLDIERS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDL3WHITESOLDIERS_Wrapper() { };
    TA_S_CDL3WHITESOLDIERS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDL3WHITESOLDIERS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLABANDONEDBABY_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLABANDONEDBABY_Wrapper() { };
    TA_CDLABANDONEDBABY_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLABANDONEDBABY_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLABANDONEDBABY_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLABANDONEDBABY_Wrapper() { };
    TA_S_CDLABANDONEDBABY_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLABANDONEDBABY_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLADVANCEBLOCK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLADVANCEBLOCK_Wrapper() { };
    TA_CDLADVANCEBLOCK_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLADVANCEBLOCK_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLADVANCEBLOCK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLADVANCEBLOCK_Wrapper() { };
    TA_S_CDLADVANCEBLOCK_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLADVANCEBLOCK_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLBELTHOLD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLBELTHOLD_Wrapper() { };
    TA_CDLBELTHOLD_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLBELTHOLD_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLBELTHOLD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLBELTHOLD_Wrapper() { };
    TA_S_CDLBELTHOLD_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLBELTHOLD_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLBREAKAWAY_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLBREAKAWAY_Wrapper() { };
    TA_CDLBREAKAWAY_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLBREAKAWAY_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLBREAKAWAY_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLBREAKAWAY_Wrapper() { };
    TA_S_CDLBREAKAWAY_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLBREAKAWAY_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLCLOSINGMARUBOZU_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLCLOSINGMARUBOZU_Wrapper() { };
    TA_CDLCLOSINGMARUBOZU_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLCLOSINGMARUBOZU_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLCLOSINGMARUBOZU_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLCLOSINGMARUBOZU_Wrapper() { };
    TA_S_CDLCLOSINGMARUBOZU_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLCLOSINGMARUBOZU_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLCONCEALBABYSWALL_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLCONCEALBABYSWALL_Wrapper() { };
    TA_CDLCONCEALBABYSWALL_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLCONCEALBABYSWALL_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLCONCEALBABYSWALL_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLCONCEALBABYSWALL_Wrapper() { };
    TA_S_CDLCONCEALBABYSWALL_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLCONCEALBABYSWALL_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLCOUNTERATTACK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLCOUNTERATTACK_Wrapper() { };
    TA_CDLCOUNTERATTACK_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLCOUNTERATTACK_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLCOUNTERATTACK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLCOUNTERATTACK_Wrapper() { };
    TA_S_CDLCOUNTERATTACK_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLCOUNTERATTACK_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLDARKCLOUDCOVER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLDARKCLOUDCOVER_Wrapper() { };
    TA_CDLDARKCLOUDCOVER_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLDARKCLOUDCOVER_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLDARKCLOUDCOVER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLDARKCLOUDCOVER_Wrapper() { };
    TA_S_CDLDARKCLOUDCOVER_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLDARKCLOUDCOVER_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLDOJI_Wrapper() { };
    TA_CDLDOJI_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLDOJI_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLDOJI_Wrapper() { };
    TA_S_CDLDOJI_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLDOJI_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLDOJISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLDOJISTAR_Wrapper() { };
    TA_CDLDOJISTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLDOJISTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLDOJISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLDOJISTAR_Wrapper() { };
    TA_S_CDLDOJISTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLDOJISTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLDRAGONFLYDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLDRAGONFLYDOJI_Wrapper() { };
    TA_CDLDRAGONFLYDOJI_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLDRAGONFLYDOJI_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLDRAGONFLYDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLDRAGONFLYDOJI_Wrapper() { };
    TA_S_CDLDRAGONFLYDOJI_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLDRAGONFLYDOJI_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLENGULFING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLENGULFING_Wrapper() { };
    TA_CDLENGULFING_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLENGULFING_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLENGULFING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLENGULFING_Wrapper() { };
    TA_S_CDLENGULFING_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLENGULFING_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLEVENINGDOJISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLEVENINGDOJISTAR_Wrapper() { };
    TA_CDLEVENINGDOJISTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLEVENINGDOJISTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLEVENINGDOJISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLEVENINGDOJISTAR_Wrapper() { };
    TA_S_CDLEVENINGDOJISTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLEVENINGDOJISTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLEVENINGSTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLEVENINGSTAR_Wrapper() { };
    TA_CDLEVENINGSTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLEVENINGSTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLEVENINGSTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLEVENINGSTAR_Wrapper() { };
    TA_S_CDLEVENINGSTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLEVENINGSTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLGAPSIDESIDEWHITE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLGAPSIDESIDEWHITE_Wrapper() { };
    TA_CDLGAPSIDESIDEWHITE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLGAPSIDESIDEWHITE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLGAPSIDESIDEWHITE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLGAPSIDESIDEWHITE_Wrapper() { };
    TA_S_CDLGAPSIDESIDEWHITE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLGAPSIDESIDEWHITE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLGRAVESTONEDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLGRAVESTONEDOJI_Wrapper() { };
    TA_CDLGRAVESTONEDOJI_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLGRAVESTONEDOJI_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLGRAVESTONEDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLGRAVESTONEDOJI_Wrapper() { };
    TA_S_CDLGRAVESTONEDOJI_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLGRAVESTONEDOJI_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHAMMER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHAMMER_Wrapper() { };
    TA_CDLHAMMER_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHAMMER_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHAMMER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHAMMER_Wrapper() { };
    TA_S_CDLHAMMER_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHAMMER_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHANGINGMAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHANGINGMAN_Wrapper() { };
    TA_CDLHANGINGMAN_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHANGINGMAN_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHANGINGMAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHANGINGMAN_Wrapper() { };
    TA_S_CDLHANGINGMAN_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHANGINGMAN_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHARAMI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHARAMI_Wrapper() { };
    TA_CDLHARAMI_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHARAMI_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHARAMI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHARAMI_Wrapper() { };
    TA_S_CDLHARAMI_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHARAMI_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHARAMICROSS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHARAMICROSS_Wrapper() { };
    TA_CDLHARAMICROSS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHARAMICROSS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHARAMICROSS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHARAMICROSS_Wrapper() { };
    TA_S_CDLHARAMICROSS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHARAMICROSS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHIGHWAVE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHIGHWAVE_Wrapper() { };
    TA_CDLHIGHWAVE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHIGHWAVE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHIGHWAVE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHIGHWAVE_Wrapper() { };
    TA_S_CDLHIGHWAVE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHIGHWAVE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHIKKAKE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHIKKAKE_Wrapper() { };
    TA_CDLHIKKAKE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHIKKAKE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHIKKAKE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHIKKAKE_Wrapper() { };
    TA_S_CDLHIKKAKE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHIKKAKE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHIKKAKEMOD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHIKKAKEMOD_Wrapper() { };
    TA_CDLHIKKAKEMOD_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHIKKAKEMOD_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHIKKAKEMOD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHIKKAKEMOD_Wrapper() { };
    TA_S_CDLHIKKAKEMOD_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHIKKAKEMOD_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLHOMINGPIGEON_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLHOMINGPIGEON_Wrapper() { };
    TA_CDLHOMINGPIGEON_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLHOMINGPIGEON_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLHOMINGPIGEON_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLHOMINGPIGEON_Wrapper() { };
    TA_S_CDLHOMINGPIGEON_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLHOMINGPIGEON_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLIDENTICAL3CROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLIDENTICAL3CROWS_Wrapper() { };
    TA_CDLIDENTICAL3CROWS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLIDENTICAL3CROWS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLIDENTICAL3CROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLIDENTICAL3CROWS_Wrapper() { };
    TA_S_CDLIDENTICAL3CROWS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLIDENTICAL3CROWS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLINNECK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLINNECK_Wrapper() { };
    TA_CDLINNECK_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLINNECK_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLINNECK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLINNECK_Wrapper() { };
    TA_S_CDLINNECK_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLINNECK_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLINVERTEDHAMMER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLINVERTEDHAMMER_Wrapper() { };
    TA_CDLINVERTEDHAMMER_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLINVERTEDHAMMER_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLINVERTEDHAMMER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLINVERTEDHAMMER_Wrapper() { };
    TA_S_CDLINVERTEDHAMMER_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLINVERTEDHAMMER_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLKICKING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLKICKING_Wrapper() { };
    TA_CDLKICKING_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLKICKING_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLKICKING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLKICKING_Wrapper() { };
    TA_S_CDLKICKING_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLKICKING_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLKICKINGBYLENGTH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLKICKINGBYLENGTH_Wrapper() { };
    TA_CDLKICKINGBYLENGTH_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLKICKINGBYLENGTH_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLKICKINGBYLENGTH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLKICKINGBYLENGTH_Wrapper() { };
    TA_S_CDLKICKINGBYLENGTH_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLKICKINGBYLENGTH_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLLADDERBOTTOM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLLADDERBOTTOM_Wrapper() { };
    TA_CDLLADDERBOTTOM_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLLADDERBOTTOM_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLLADDERBOTTOM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLLADDERBOTTOM_Wrapper() { };
    TA_S_CDLLADDERBOTTOM_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLLADDERBOTTOM_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLLONGLEGGEDDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLLONGLEGGEDDOJI_Wrapper() { };
    TA_CDLLONGLEGGEDDOJI_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLLONGLEGGEDDOJI_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLLONGLEGGEDDOJI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLLONGLEGGEDDOJI_Wrapper() { };
    TA_S_CDLLONGLEGGEDDOJI_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLLONGLEGGEDDOJI_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLLONGLINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLLONGLINE_Wrapper() { };
    TA_CDLLONGLINE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLLONGLINE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLLONGLINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLLONGLINE_Wrapper() { };
    TA_S_CDLLONGLINE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLLONGLINE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLMARUBOZU_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLMARUBOZU_Wrapper() { };
    TA_CDLMARUBOZU_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLMARUBOZU_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLMARUBOZU_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLMARUBOZU_Wrapper() { };
    TA_S_CDLMARUBOZU_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLMARUBOZU_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLMATCHINGLOW_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLMATCHINGLOW_Wrapper() { };
    TA_CDLMATCHINGLOW_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLMATCHINGLOW_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLMATCHINGLOW_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLMATCHINGLOW_Wrapper() { };
    TA_S_CDLMATCHINGLOW_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLMATCHINGLOW_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLMATHOLD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLMATHOLD_Wrapper() { };
    TA_CDLMATHOLD_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLMATHOLD_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLMATHOLD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLMATHOLD_Wrapper() { };
    TA_S_CDLMATHOLD_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLMATHOLD_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLMORNINGDOJISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLMORNINGDOJISTAR_Wrapper() { };
    TA_CDLMORNINGDOJISTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLMORNINGDOJISTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLMORNINGDOJISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLMORNINGDOJISTAR_Wrapper() { };
    TA_S_CDLMORNINGDOJISTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLMORNINGDOJISTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLMORNINGSTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLMORNINGSTAR_Wrapper() { };
    TA_CDLMORNINGSTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLMORNINGSTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLMORNINGSTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLMORNINGSTAR_Wrapper() { };
    TA_S_CDLMORNINGSTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLMORNINGSTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLONNECK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLONNECK_Wrapper() { };
    TA_CDLONNECK_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLONNECK_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLONNECK_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLONNECK_Wrapper() { };
    TA_S_CDLONNECK_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLONNECK_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLPIERCING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLPIERCING_Wrapper() { };
    TA_CDLPIERCING_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLPIERCING_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLPIERCING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLPIERCING_Wrapper() { };
    TA_S_CDLPIERCING_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLPIERCING_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLRICKSHAWMAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLRICKSHAWMAN_Wrapper() { };
    TA_CDLRICKSHAWMAN_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLRICKSHAWMAN_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLRICKSHAWMAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLRICKSHAWMAN_Wrapper() { };
    TA_S_CDLRICKSHAWMAN_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLRICKSHAWMAN_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLRISEFALL3METHODS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLRISEFALL3METHODS_Wrapper() { };
    TA_CDLRISEFALL3METHODS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLRISEFALL3METHODS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLRISEFALL3METHODS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLRISEFALL3METHODS_Wrapper() { };
    TA_S_CDLRISEFALL3METHODS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLRISEFALL3METHODS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLSEPARATINGLINES_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLSEPARATINGLINES_Wrapper() { };
    TA_CDLSEPARATINGLINES_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLSEPARATINGLINES_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLSEPARATINGLINES_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLSEPARATINGLINES_Wrapper() { };
    TA_S_CDLSEPARATINGLINES_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLSEPARATINGLINES_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLSHOOTINGSTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLSHOOTINGSTAR_Wrapper() { };
    TA_CDLSHOOTINGSTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLSHOOTINGSTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLSHOOTINGSTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLSHOOTINGSTAR_Wrapper() { };
    TA_S_CDLSHOOTINGSTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLSHOOTINGSTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLSHORTLINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLSHORTLINE_Wrapper() { };
    TA_CDLSHORTLINE_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLSHORTLINE_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLSHORTLINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLSHORTLINE_Wrapper() { };
    TA_S_CDLSHORTLINE_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLSHORTLINE_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLSPINNINGTOP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLSPINNINGTOP_Wrapper() { };
    TA_CDLSPINNINGTOP_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLSPINNINGTOP_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLSPINNINGTOP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLSPINNINGTOP_Wrapper() { };
    TA_S_CDLSPINNINGTOP_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLSPINNINGTOP_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLSTALLEDPATTERN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLSTALLEDPATTERN_Wrapper() { };
    TA_CDLSTALLEDPATTERN_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLSTALLEDPATTERN_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLSTALLEDPATTERN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLSTALLEDPATTERN_Wrapper() { };
    TA_S_CDLSTALLEDPATTERN_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLSTALLEDPATTERN_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLSTICKSANDWICH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLSTICKSANDWICH_Wrapper() { };
    TA_CDLSTICKSANDWICH_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLSTICKSANDWICH_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLSTICKSANDWICH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLSTICKSANDWICH_Wrapper() { };
    TA_S_CDLSTICKSANDWICH_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLSTICKSANDWICH_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLTAKURI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLTAKURI_Wrapper() { };
    TA_CDLTAKURI_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLTAKURI_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLTAKURI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLTAKURI_Wrapper() { };
    TA_S_CDLTAKURI_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLTAKURI_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLTASUKIGAP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLTASUKIGAP_Wrapper() { };
    TA_CDLTASUKIGAP_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLTASUKIGAP_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLTASUKIGAP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLTASUKIGAP_Wrapper() { };
    TA_S_CDLTASUKIGAP_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLTASUKIGAP_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLTHRUSTING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLTHRUSTING_Wrapper() { };
    TA_CDLTHRUSTING_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLTHRUSTING_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLTHRUSTING_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLTHRUSTING_Wrapper() { };
    TA_S_CDLTHRUSTING_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLTHRUSTING_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLTRISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLTRISTAR_Wrapper() { };
    TA_CDLTRISTAR_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLTRISTAR_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLTRISTAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLTRISTAR_Wrapper() { };
    TA_S_CDLTRISTAR_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLTRISTAR_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLUNIQUE3RIVER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLUNIQUE3RIVER_Wrapper() { };
    TA_CDLUNIQUE3RIVER_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLUNIQUE3RIVER_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLUNIQUE3RIVER_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLUNIQUE3RIVER_Wrapper() { };
    TA_S_CDLUNIQUE3RIVER_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLUNIQUE3RIVER_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLUPSIDEGAP2CROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLUPSIDEGAP2CROWS_Wrapper() { };
    TA_CDLUPSIDEGAP2CROWS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLUPSIDEGAP2CROWS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLUPSIDEGAP2CROWS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLUPSIDEGAP2CROWS_Wrapper() { };
    TA_S_CDLUPSIDEGAP2CROWS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLUPSIDEGAP2CROWS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CDLXSIDEGAP3METHODS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inOpen;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_CDLXSIDEGAP3METHODS_Wrapper() { };
    TA_CDLXSIDEGAP3METHODS_Wrapper(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_CDLXSIDEGAP3METHODS_Wrapper *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_CDLXSIDEGAP3METHODS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inOpen;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_CDLXSIDEGAP3METHODS_Wrapper() { };
    TA_S_CDLXSIDEGAP3METHODS_Wrapper(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_CDLXSIDEGAP3METHODS_Wrapper *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_CEIL_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_CEIL_Wrapper() { };
    TA_CEIL_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_CEIL_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_CEIL_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_CEIL_Wrapper() { };
    TA_S_CEIL_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_CEIL_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_CMO_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_CMO_Wrapper() { };
    TA_CMO_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_CMO_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_CMO_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_CMO_Wrapper() { };
    TA_S_CMO_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_CMO_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_CORREL_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_CORREL_Wrapper() { };
    TA_CORREL_Wrapper(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_CORREL_Wrapper *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_CORREL_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_CORREL_Wrapper() { };
    TA_S_CORREL_Wrapper(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_CORREL_Wrapper *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_COS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_COS_Wrapper() { };
    TA_COS_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_COS_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_COS_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_COS_Wrapper() { };
    TA_S_COS_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_COS_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_COSH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_COSH_Wrapper() { };
    TA_COSH_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_COSH_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_COSH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_COSH_Wrapper() { };
    TA_S_COSH_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_COSH_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_DEMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_DEMA_Wrapper() { };
    TA_DEMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_DEMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_DEMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_DEMA_Wrapper() { };
    TA_S_DEMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_DEMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_DIV_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_DIV_Wrapper() { };
    TA_DIV_Wrapper(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_DIV_Wrapper *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_DIV_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_DIV_Wrapper() { };
    TA_S_DIV_Wrapper(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_DIV_Wrapper *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_DX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_DX_Wrapper() { };
    TA_DX_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_DX_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_DX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_DX_Wrapper() { };
    TA_S_DX_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_DX_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_EMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_EMA_Wrapper() { };
    TA_EMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_EMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_EMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_EMA_Wrapper() { };
    TA_S_EMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_EMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_EXP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_EXP_Wrapper() { };
    TA_EXP_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_EXP_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_EXP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_EXP_Wrapper() { };
    TA_S_EXP_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_EXP_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_FLOOR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_FLOOR_Wrapper() { };
    TA_FLOOR_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_FLOOR_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_FLOOR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_FLOOR_Wrapper() { };
    TA_S_FLOOR_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_FLOOR_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_HT_DCPERIOD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_HT_DCPERIOD_Wrapper() { };
    TA_HT_DCPERIOD_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_HT_DCPERIOD_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_HT_DCPERIOD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_HT_DCPERIOD_Wrapper() { };
    TA_S_HT_DCPERIOD_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_HT_DCPERIOD_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_HT_DCPHASE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_HT_DCPHASE_Wrapper() { };
    TA_HT_DCPHASE_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_HT_DCPHASE_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_HT_DCPHASE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_HT_DCPHASE_Wrapper() { };
    TA_S_HT_DCPHASE_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_HT_DCPHASE_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_HT_PHASOR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outInPhase;
    double *outQuadrature;

    TA_HT_PHASOR_Wrapper() { };
    TA_HT_PHASOR_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_HT_PHASOR_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_RetCode run();
};

class TA_S_HT_PHASOR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outInPhase;
    double *outQuadrature;

    TA_S_HT_PHASOR_Wrapper() { };
    TA_S_HT_PHASOR_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_S_HT_PHASOR_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_RetCode run();
};

class TA_HT_SINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outSine;
    double *outLeadSine;

    TA_HT_SINE_Wrapper() { };
    TA_HT_SINE_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_HT_SINE_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_RetCode run();
};

class TA_S_HT_SINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outSine;
    double *outLeadSine;

    TA_S_HT_SINE_Wrapper() { };
    TA_S_HT_SINE_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_S_HT_SINE_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_RetCode run();
};

class TA_HT_TRENDLINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_HT_TRENDLINE_Wrapper() { };
    TA_HT_TRENDLINE_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_HT_TRENDLINE_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_HT_TRENDLINE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_HT_TRENDLINE_Wrapper() { };
    TA_S_HT_TRENDLINE_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_HT_TRENDLINE_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_HT_TRENDMODE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_HT_TRENDMODE_Wrapper() { };
    TA_HT_TRENDMODE_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_HT_TRENDMODE_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_HT_TRENDMODE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_HT_TRENDMODE_Wrapper() { };
    TA_S_HT_TRENDMODE_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_HT_TRENDMODE_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_KAMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_KAMA_Wrapper() { };
    TA_KAMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_KAMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_KAMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_KAMA_Wrapper() { };
    TA_S_KAMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_KAMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_LINEARREG_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_LINEARREG_Wrapper() { };
    TA_LINEARREG_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_LINEARREG_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_LINEARREG_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_LINEARREG_Wrapper() { };
    TA_S_LINEARREG_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_LINEARREG_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_LINEARREG_ANGLE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_LINEARREG_ANGLE_Wrapper() { };
    TA_LINEARREG_ANGLE_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_LINEARREG_ANGLE_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_LINEARREG_ANGLE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_LINEARREG_ANGLE_Wrapper() { };
    TA_S_LINEARREG_ANGLE_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_LINEARREG_ANGLE_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_LINEARREG_INTERCEPT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_LINEARREG_INTERCEPT_Wrapper() { };
    TA_LINEARREG_INTERCEPT_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_LINEARREG_INTERCEPT_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_LINEARREG_INTERCEPT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_LINEARREG_INTERCEPT_Wrapper() { };
    TA_S_LINEARREG_INTERCEPT_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_LINEARREG_INTERCEPT_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_LINEARREG_SLOPE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_LINEARREG_SLOPE_Wrapper() { };
    TA_LINEARREG_SLOPE_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_LINEARREG_SLOPE_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_LINEARREG_SLOPE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_LINEARREG_SLOPE_Wrapper() { };
    TA_S_LINEARREG_SLOPE_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_LINEARREG_SLOPE_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_LN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_LN_Wrapper() { };
    TA_LN_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_LN_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_LN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_LN_Wrapper() { };
    TA_S_LN_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_LN_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_LOG10_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_LOG10_Wrapper() { };
    TA_LOG10_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_LOG10_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_LOG10_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_LOG10_Wrapper() { };
    TA_S_LOG10_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_LOG10_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MA_Wrapper() { };
    TA_MA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MA_Wrapper() { };
    TA_S_MA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MACD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    TA_MACD_Wrapper() { };
    TA_MACD_Wrapper(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_MACD_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class TA_S_MACD_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    TA_S_MACD_Wrapper() { };
    TA_S_MACD_Wrapper(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_S_MACD_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class TA_MACDEXT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    TA_MACDEXT_Wrapper() { };
    TA_MACDEXT_Wrapper(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_MACDEXT_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class TA_S_MACDEXT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    TA_S_MACDEXT_Wrapper() { };
    TA_S_MACDEXT_Wrapper(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_S_MACDEXT_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class TA_MACDFIX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    TA_MACDFIX_Wrapper() { };
    TA_MACDFIX_Wrapper(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_MACDFIX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class TA_S_MACDFIX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    TA_S_MACDFIX_Wrapper() { };
    TA_S_MACDFIX_Wrapper(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_S_MACDFIX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class TA_MAMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double *outMAMA;
    double *outFAMA;

    TA_MAMA_Wrapper() { };
    TA_MAMA_Wrapper(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_MAMA_Wrapper *create(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    void update(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_RetCode run();
};

class TA_S_MAMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double *outMAMA;
    double *outFAMA;

    TA_S_MAMA_Wrapper() { };
    TA_S_MAMA_Wrapper(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_S_MAMA_Wrapper *create(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    void update(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_RetCode run();
};

class TA_MAVP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    double *inPeriods;
    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MAVP_Wrapper() { };
    TA_MAVP_Wrapper(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MAVP_Wrapper *create(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MAVP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    float *inPeriods;
    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MAVP_Wrapper() { };
    TA_S_MAVP_Wrapper(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MAVP_Wrapper *create(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MAX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MAX_Wrapper() { };
    TA_MAX_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MAX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MAX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MAX_Wrapper() { };
    TA_S_MAX_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MAX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MAXINDEX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_MAXINDEX_Wrapper() { };
    TA_MAXINDEX_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_MAXINDEX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_MAXINDEX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_MAXINDEX_Wrapper() { };
    TA_S_MAXINDEX_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_MAXINDEX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_MEDPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MEDPRICE_Wrapper() { };
    TA_MEDPRICE_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MEDPRICE_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MEDPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MEDPRICE_Wrapper() { };
    TA_S_MEDPRICE_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MEDPRICE_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MFI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    double *inVolume;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MFI_Wrapper() { };
    TA_MFI_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MFI_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MFI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    float *inVolume;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MFI_Wrapper() { };
    TA_S_MFI_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MFI_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MIDPOINT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MIDPOINT_Wrapper() { };
    TA_MIDPOINT_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MIDPOINT_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MIDPOINT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MIDPOINT_Wrapper() { };
    TA_S_MIDPOINT_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MIDPOINT_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MIDPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MIDPRICE_Wrapper() { };
    TA_MIDPRICE_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MIDPRICE_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MIDPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MIDPRICE_Wrapper() { };
    TA_S_MIDPRICE_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MIDPRICE_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MIN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MIN_Wrapper() { };
    TA_MIN_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MIN_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MIN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MIN_Wrapper() { };
    TA_S_MIN_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MIN_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MININDEX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_MININDEX_Wrapper() { };
    TA_MININDEX_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_MININDEX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_S_MININDEX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    TA_S_MININDEX_Wrapper() { };
    TA_S_MININDEX_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_S_MININDEX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class TA_MINMAX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMin;
    double *outMax;

    TA_MINMAX_Wrapper() { };
    TA_MINMAX_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_MINMAX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_RetCode run();
};

class TA_S_MINMAX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMin;
    double *outMax;

    TA_S_MINMAX_Wrapper() { };
    TA_S_MINMAX_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_S_MINMAX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_RetCode run();
};

class TA_MINMAXINDEX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outMinIdx;
    int *outMaxIdx;

    TA_MINMAXINDEX_Wrapper() { };
    TA_MINMAXINDEX_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_MINMAXINDEX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_RetCode run();
};

class TA_S_MINMAXINDEX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outMinIdx;
    int *outMaxIdx;

    TA_S_MINMAXINDEX_Wrapper() { };
    TA_S_MINMAXINDEX_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_S_MINMAXINDEX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_RetCode run();
};

class TA_MINUS_DI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MINUS_DI_Wrapper() { };
    TA_MINUS_DI_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MINUS_DI_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MINUS_DI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MINUS_DI_Wrapper() { };
    TA_S_MINUS_DI_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MINUS_DI_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MINUS_DM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MINUS_DM_Wrapper() { };
    TA_MINUS_DM_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MINUS_DM_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MINUS_DM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MINUS_DM_Wrapper() { };
    TA_S_MINUS_DM_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MINUS_DM_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MOM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MOM_Wrapper() { };
    TA_MOM_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MOM_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MOM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MOM_Wrapper() { };
    TA_S_MOM_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MOM_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_MULT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_MULT_Wrapper() { };
    TA_MULT_Wrapper(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_MULT_Wrapper *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_MULT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_MULT_Wrapper() { };
    TA_S_MULT_Wrapper(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_MULT_Wrapper *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_NATR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_NATR_Wrapper() { };
    TA_NATR_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_NATR_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_NATR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_NATR_Wrapper() { };
    TA_S_NATR_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_NATR_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_OBV_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    double *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_OBV_Wrapper() { };
    TA_OBV_Wrapper(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_OBV_Wrapper *create(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_OBV_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    float *inVolume;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_OBV_Wrapper() { };
    TA_S_OBV_Wrapper(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_OBV_Wrapper *create(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_PLUS_DI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_PLUS_DI_Wrapper() { };
    TA_PLUS_DI_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_PLUS_DI_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_PLUS_DI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_PLUS_DI_Wrapper() { };
    TA_S_PLUS_DI_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_PLUS_DI_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_PLUS_DM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_PLUS_DM_Wrapper() { };
    TA_PLUS_DM_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_PLUS_DM_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_PLUS_DM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_PLUS_DM_Wrapper() { };
    TA_S_PLUS_DM_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_PLUS_DM_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_PPO_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_PPO_Wrapper() { };
    TA_PPO_Wrapper(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_PPO_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_PPO_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_PPO_Wrapper() { };
    TA_S_PPO_Wrapper(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_PPO_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ROC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ROC_Wrapper() { };
    TA_ROC_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ROC_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ROC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ROC_Wrapper() { };
    TA_S_ROC_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ROC_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ROCP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ROCP_Wrapper() { };
    TA_ROCP_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ROCP_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ROCP_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ROCP_Wrapper() { };
    TA_S_ROCP_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ROCP_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ROCR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ROCR_Wrapper() { };
    TA_ROCR_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ROCR_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ROCR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ROCR_Wrapper() { };
    TA_S_ROCR_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ROCR_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ROCR100_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ROCR100_Wrapper() { };
    TA_ROCR100_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ROCR100_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ROCR100_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ROCR100_Wrapper() { };
    TA_S_ROCR100_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ROCR100_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_RSI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_RSI_Wrapper() { };
    TA_RSI_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RSI_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_RSI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_RSI_Wrapper() { };
    TA_S_RSI_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_RSI_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SAR_Wrapper() { };
    TA_SAR_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SAR_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SAR_Wrapper() { };
    TA_S_SAR_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SAR_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SAREXT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SAREXT_Wrapper() { };
    TA_SAREXT_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SAREXT_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SAREXT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    double optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SAREXT_Wrapper() { };
    TA_S_SAREXT_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SAREXT_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SIN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SIN_Wrapper() { };
    TA_SIN_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SIN_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SIN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SIN_Wrapper() { };
    TA_S_SIN_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SIN_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SINH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SINH_Wrapper() { };
    TA_SINH_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SINH_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SINH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SINH_Wrapper() { };
    TA_S_SINH_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SINH_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SMA_Wrapper() { };
    TA_SMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SMA_Wrapper() { };
    TA_S_SMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SQRT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SQRT_Wrapper() { };
    TA_SQRT_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SQRT_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SQRT_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SQRT_Wrapper() { };
    TA_S_SQRT_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SQRT_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_STDDEV_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_STDDEV_Wrapper() { };
    TA_STDDEV_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_STDDEV_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_STDDEV_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_STDDEV_Wrapper() { };
    TA_S_STDDEV_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_STDDEV_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_STOCH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outSlowK;
    double *outSlowD;

    TA_STOCH_Wrapper() { };
    TA_STOCH_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_STOCH_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_RetCode run();
};

class TA_S_STOCH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outSlowK;
    double *outSlowD;

    TA_S_STOCH_Wrapper() { };
    TA_S_STOCH_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_S_STOCH_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_RetCode run();
};

class TA_STOCHF_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    TA_STOCHF_Wrapper() { };
    TA_STOCHF_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_STOCHF_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class TA_S_STOCHF_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    TA_S_STOCHF_Wrapper() { };
    TA_S_STOCHF_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_S_STOCHF_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class TA_STOCHRSI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    TA_STOCHRSI_Wrapper() { };
    TA_STOCHRSI_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_STOCHRSI_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class TA_S_STOCHRSI_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    TA_S_STOCHRSI_Wrapper() { };
    TA_S_STOCHRSI_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_S_STOCHRSI_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class TA_SUB_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal0;
    double *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SUB_Wrapper() { };
    TA_SUB_Wrapper(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SUB_Wrapper *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SUB_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal0;
    float *inReal1;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SUB_Wrapper() { };
    TA_S_SUB_Wrapper(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SUB_Wrapper *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SUM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_SUM_Wrapper() { };
    TA_SUM_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_SUM_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_SUM_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_SUM_Wrapper() { };
    TA_S_SUM_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_SUM_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_T3_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_T3_Wrapper() { };
    TA_T3_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_T3_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_T3_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_T3_Wrapper() { };
    TA_S_T3_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_T3_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TAN_Wrapper() { };
    TA_TAN_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TAN_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TAN_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TAN_Wrapper() { };
    TA_S_TAN_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TAN_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TANH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TANH_Wrapper() { };
    TA_TANH_Wrapper(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TANH_Wrapper *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TANH_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TANH_Wrapper() { };
    TA_S_TANH_Wrapper(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TANH_Wrapper *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TEMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TEMA_Wrapper() { };
    TA_TEMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TEMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TEMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TEMA_Wrapper() { };
    TA_S_TEMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TEMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TRANGE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TRANGE_Wrapper() { };
    TA_TRANGE_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TRANGE_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TRANGE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TRANGE_Wrapper() { };
    TA_S_TRANGE_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TRANGE_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TRIMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TRIMA_Wrapper() { };
    TA_TRIMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TRIMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TRIMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TRIMA_Wrapper() { };
    TA_S_TRIMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TRIMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TRIX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TRIX_Wrapper() { };
    TA_TRIX_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TRIX_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TRIX_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TRIX_Wrapper() { };
    TA_S_TRIX_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TRIX_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TSF_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TSF_Wrapper() { };
    TA_TSF_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TSF_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TSF_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TSF_Wrapper() { };
    TA_S_TSF_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TSF_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_TYPPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_TYPPRICE_Wrapper() { };
    TA_TYPPRICE_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_TYPPRICE_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_TYPPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_TYPPRICE_Wrapper() { };
    TA_S_TYPPRICE_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_TYPPRICE_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_ULTOSC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_ULTOSC_Wrapper() { };
    TA_ULTOSC_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_ULTOSC_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_ULTOSC_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_ULTOSC_Wrapper() { };
    TA_S_ULTOSC_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_ULTOSC_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_VAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_VAR_Wrapper() { };
    TA_VAR_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_VAR_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_VAR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_VAR_Wrapper() { };
    TA_S_VAR_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_VAR_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_WCLPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_WCLPRICE_Wrapper() { };
    TA_WCLPRICE_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_WCLPRICE_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_WCLPRICE_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_WCLPRICE_Wrapper() { };
    TA_S_WCLPRICE_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_WCLPRICE_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_WILLR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inHigh;
    double *inLow;
    double *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_WILLR_Wrapper() { };
    TA_WILLR_Wrapper(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_WILLR_Wrapper *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_WILLR_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inHigh;
    float *inLow;
    float *inClose;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_WILLR_Wrapper() { };
    TA_S_WILLR_Wrapper(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_WILLR_Wrapper *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_WMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    double *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_WMA_Wrapper() { };
    TA_WMA_Wrapper(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_WMA_Wrapper *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_S_WMA_Wrapper : public TAWrapper {
public:
    int startIdx;
    int endIdx;
    float *inReal;
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TA_S_WMA_Wrapper() { };
    TA_S_WMA_Wrapper(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_S_WMA_Wrapper *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TA_SetUnstablePeriod_Wrapper : public TAWrapper {
public:
    TA_FuncUnstId id;
    unsigned int unstablePeriod;

    TA_SetUnstablePeriod_Wrapper() { };
    TA_SetUnstablePeriod_Wrapper(TA_FuncUnstId id, unsigned int unstablePeriod);
    TA_SetUnstablePeriod_Wrapper *create(TA_FuncUnstId id, unsigned int unstablePeriod);
    void update(TA_FuncUnstId id, unsigned int unstablePeriod);
    TA_RetCode run();
};

class TA_SetCompatibility_Wrapper : public TAWrapper {
public:
    TA_Compatibility value;

    TA_SetCompatibility_Wrapper() { };
    TA_SetCompatibility_Wrapper(TA_Compatibility value);
    TA_SetCompatibility_Wrapper *create(TA_Compatibility value);
    void update(TA_Compatibility value);
    TA_RetCode run();
};

class TA_SetCandleSettings_Wrapper : public TAWrapper {
public:
    TA_CandleSettingType settingType; 
    TA_RangeType rangeType; 
    int avgPeriod; 
    double factor;

    TA_SetCandleSettings_Wrapper() { };
    TA_SetCandleSettings_Wrapper(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    TA_SetCandleSettings_Wrapper *create(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    void update(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    TA_RetCode run();
};

class TA_RestoreCandleDefaultSettings_Wrapper : public TAWrapper {
public:
    TA_CandleSettingType settingType;

    TA_RestoreCandleDefaultSettings_Wrapper() { };
    TA_RestoreCandleDefaultSettings_Wrapper(TA_CandleSettingType settingType);
    TA_RestoreCandleDefaultSettings_Wrapper *create(TA_CandleSettingType settingType);
    void update(TA_CandleSettingType settingType);
    TA_RetCode run();
};

#endif
