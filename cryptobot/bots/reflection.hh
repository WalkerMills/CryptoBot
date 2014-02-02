#ifndef REFLECTION_HH
#define REFLECTION_HH

class TAWrapper {
public:
    virtual TA_RetCode run() = 0;
};

class TA_ACOS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ACOS_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ACOS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ACOS_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_AD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    const double inVolume[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_AD_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_AD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    const float inVolume[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_AD_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ADD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal0[];
    const double inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ADD_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ADD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal0[];
    const float inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ADD_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ADOSC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    const double inVolume[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ADOSC_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ADOSC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    const float inVolume[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ADOSC_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ADX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ADX_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ADX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ADX_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ADXR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ADXR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ADXR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ADXR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_APO_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_APO_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_APO_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_APO_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_AROON_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outAroonDown[];
    double outAroonUp[];

public:
    TA_AROON_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]);
};

class TA_S_AROON_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outAroonDown[];
    double outAroonUp[];

public:
    TA_S_AROON_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outAroonDown[], double outAroonUp[]);
};

class TA_AROONOSC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_AROONOSC_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_AROONOSC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_AROONOSC_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ASIN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ASIN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ASIN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ASIN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ATAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ATAN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ATAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ATAN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ATR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ATR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ATR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ATR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_AVGPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_AVGPRICE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_AVGPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_AVGPRICE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_BBANDS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outRealUpperBand[];
    double outRealMiddleBand[];
    double outRealLowerBand[];

public:
    TA_BBANDS_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]);
};

class TA_S_BBANDS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outRealUpperBand[];
    double outRealMiddleBand[];
    double outRealLowerBand[];

public:
    TA_S_BBANDS_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outRealUpperBand[], double outRealMiddleBand[], double outRealLowerBand[]);
};

class TA_BETA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal0[];
    const double inReal1[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_BETA_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_BETA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal0[];
    const float inReal1[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_BETA_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_BOP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_BOP_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_BOP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_BOP_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_CCI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_CCI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_CCI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_CCI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_CDL2CROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL2CROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL2CROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL2CROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDL3BLACKCROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL3BLACKCROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL3BLACKCROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL3BLACKCROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDL3INSIDE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL3INSIDE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL3INSIDE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL3INSIDE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDL3LINESTRIKE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL3LINESTRIKE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL3LINESTRIKE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL3LINESTRIKE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDL3OUTSIDE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL3OUTSIDE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL3OUTSIDE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL3OUTSIDE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDL3STARSINSOUTH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL3STARSINSOUTH_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL3STARSINSOUTH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL3STARSINSOUTH_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDL3WHITESOLDIERS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDL3WHITESOLDIERS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDL3WHITESOLDIERS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDL3WHITESOLDIERS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLABANDONEDBABY_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLABANDONEDBABY_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLABANDONEDBABY_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLABANDONEDBABY_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLADVANCEBLOCK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLADVANCEBLOCK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLADVANCEBLOCK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLADVANCEBLOCK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLBELTHOLD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLBELTHOLD_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLBELTHOLD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLBELTHOLD_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLBREAKAWAY_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLBREAKAWAY_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLBREAKAWAY_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLBREAKAWAY_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLCLOSINGMARUBOZU_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLCLOSINGMARUBOZU_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLCLOSINGMARUBOZU_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLCLOSINGMARUBOZU_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLCONCEALBABYSWALL_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLCONCEALBABYSWALL_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLCONCEALBABYSWALL_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLCONCEALBABYSWALL_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLCOUNTERATTACK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLCOUNTERATTACK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLCOUNTERATTACK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLCOUNTERATTACK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLDARKCLOUDCOVER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLDARKCLOUDCOVER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLDARKCLOUDCOVER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLDARKCLOUDCOVER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLDOJISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLDOJISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLDOJISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLDOJISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLDRAGONFLYDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLDRAGONFLYDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLDRAGONFLYDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLDRAGONFLYDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLENGULFING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLENGULFING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLENGULFING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLENGULFING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLEVENINGDOJISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLEVENINGDOJISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLEVENINGDOJISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLEVENINGDOJISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLEVENINGSTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLEVENINGSTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLEVENINGSTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLEVENINGSTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLGAPSIDESIDEWHITE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLGAPSIDESIDEWHITE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLGAPSIDESIDEWHITE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLGAPSIDESIDEWHITE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLGRAVESTONEDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLGRAVESTONEDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLGRAVESTONEDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLGRAVESTONEDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHAMMER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHAMMER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHAMMER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHAMMER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHANGINGMAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHANGINGMAN_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHANGINGMAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHANGINGMAN_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHARAMI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHARAMI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHARAMI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHARAMI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHARAMICROSS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHARAMICROSS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHARAMICROSS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHARAMICROSS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHIGHWAVE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHIGHWAVE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHIGHWAVE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHIGHWAVE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHIKKAKE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHIKKAKE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHIKKAKE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHIKKAKE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHIKKAKEMOD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHIKKAKEMOD_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHIKKAKEMOD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHIKKAKEMOD_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLHOMINGPIGEON_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLHOMINGPIGEON_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLHOMINGPIGEON_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLHOMINGPIGEON_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLIDENTICAL3CROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLIDENTICAL3CROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLIDENTICAL3CROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLIDENTICAL3CROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLINNECK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLINNECK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLINNECK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLINNECK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLINVERTEDHAMMER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLINVERTEDHAMMER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLINVERTEDHAMMER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLINVERTEDHAMMER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLKICKING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLKICKING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLKICKING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLKICKING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLKICKINGBYLENGTH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLKICKINGBYLENGTH_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLKICKINGBYLENGTH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLKICKINGBYLENGTH_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLLADDERBOTTOM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLLADDERBOTTOM_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLLADDERBOTTOM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLLADDERBOTTOM_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLLONGLEGGEDDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLLONGLEGGEDDOJI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLLONGLEGGEDDOJI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLLONGLEGGEDDOJI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLLONGLINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLLONGLINE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLLONGLINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLLONGLINE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLMARUBOZU_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLMARUBOZU_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLMARUBOZU_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLMARUBOZU_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLMATCHINGLOW_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLMATCHINGLOW_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLMATCHINGLOW_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLMATCHINGLOW_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLMATHOLD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLMATHOLD_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLMATHOLD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLMATHOLD_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLMORNINGDOJISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLMORNINGDOJISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLMORNINGDOJISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLMORNINGDOJISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLMORNINGSTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLMORNINGSTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLMORNINGSTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLMORNINGSTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], double optInPenetration, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLONNECK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLONNECK_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLONNECK_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLONNECK_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLPIERCING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLPIERCING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLPIERCING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLPIERCING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLRICKSHAWMAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLRICKSHAWMAN_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLRICKSHAWMAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLRICKSHAWMAN_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLRISEFALL3METHODS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLRISEFALL3METHODS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLRISEFALL3METHODS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLRISEFALL3METHODS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLSEPARATINGLINES_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLSEPARATINGLINES_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLSEPARATINGLINES_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLSEPARATINGLINES_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLSHOOTINGSTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLSHOOTINGSTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLSHOOTINGSTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLSHOOTINGSTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLSHORTLINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLSHORTLINE_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLSHORTLINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLSHORTLINE_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLSPINNINGTOP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLSPINNINGTOP_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLSPINNINGTOP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLSPINNINGTOP_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLSTALLEDPATTERN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLSTALLEDPATTERN_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLSTALLEDPATTERN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLSTALLEDPATTERN_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLSTICKSANDWICH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLSTICKSANDWICH_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLSTICKSANDWICH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLSTICKSANDWICH_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLTAKURI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLTAKURI_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLTAKURI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLTAKURI_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLTASUKIGAP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLTASUKIGAP_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLTASUKIGAP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLTASUKIGAP_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLTHRUSTING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLTHRUSTING_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLTHRUSTING_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLTHRUSTING_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLTRISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLTRISTAR_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLTRISTAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLTRISTAR_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLUNIQUE3RIVER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLUNIQUE3RIVER_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLUNIQUE3RIVER_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLUNIQUE3RIVER_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLUPSIDEGAP2CROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLUPSIDEGAP2CROWS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLUPSIDEGAP2CROWS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLUPSIDEGAP2CROWS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CDLXSIDEGAP3METHODS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inOpen[];
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_CDLXSIDEGAP3METHODS_Wrapper(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inOpen[], const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_CDLXSIDEGAP3METHODS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inOpen[];
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_CDLXSIDEGAP3METHODS_Wrapper(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inOpen[], const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_CEIL_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_CEIL_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_CEIL_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_CEIL_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_CMO_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_CMO_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_CMO_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_CMO_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_CORREL_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal0[];
    const double inReal1[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_CORREL_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_CORREL_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal0[];
    const float inReal1[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_CORREL_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_COS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_COS_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_COS_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_COS_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_COSH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_COSH_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_COSH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_COSH_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_DEMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_DEMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_DEMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_DEMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_DIV_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal0[];
    const double inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_DIV_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_DIV_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal0[];
    const float inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_DIV_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_DX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_DX_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_DX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_DX_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_EMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_EMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_EMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_EMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_EXP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_EXP_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_EXP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_EXP_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_FLOOR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_FLOOR_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_FLOOR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_FLOOR_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_HT_DCPERIOD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_HT_DCPERIOD_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_HT_DCPERIOD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_HT_DCPERIOD_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_HT_DCPHASE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_HT_DCPHASE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_HT_DCPHASE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_HT_DCPHASE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_HT_PHASOR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outInPhase[];
    double outQuadrature[];

public:
    TA_HT_PHASOR_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]);
};

class TA_S_HT_PHASOR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outInPhase[];
    double outQuadrature[];

public:
    TA_S_HT_PHASOR_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outInPhase[], double outQuadrature[]);
};

class TA_HT_SINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outSine[];
    double outLeadSine[];

public:
    TA_HT_SINE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]);
};

class TA_S_HT_SINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outSine[];
    double outLeadSine[];

public:
    TA_S_HT_SINE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outSine[], double outLeadSine[]);
};

class TA_HT_TRENDLINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_HT_TRENDLINE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_HT_TRENDLINE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_HT_TRENDLINE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_HT_TRENDMODE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_HT_TRENDMODE_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_HT_TRENDMODE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_HT_TRENDMODE_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_KAMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_KAMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_KAMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_KAMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_LINEARREG_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_LINEARREG_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_LINEARREG_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_LINEARREG_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_LINEARREG_ANGLE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_LINEARREG_ANGLE_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_LINEARREG_ANGLE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_LINEARREG_ANGLE_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_LINEARREG_INTERCEPT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_LINEARREG_INTERCEPT_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_LINEARREG_INTERCEPT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_LINEARREG_INTERCEPT_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_LINEARREG_SLOPE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_LINEARREG_SLOPE_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_LINEARREG_SLOPE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_LINEARREG_SLOPE_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_LN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_LN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_LN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_LN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_LOG10_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_LOG10_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_LOG10_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_LOG10_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MACD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outMACD[];
    double outMACDSignal[];
    double outMACDHist[];

public:
    TA_MACD_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
    create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
};

class TA_S_MACD_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outMACD[];
    double outMACDSignal[];
    double outMACDHist[];

public:
    TA_S_MACD_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
    create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
};

class TA_MACDEXT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double outMACD[];
    double outMACDSignal[];
    double outMACDHist[];

public:
    TA_MACDEXT_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
    create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
};

class TA_S_MACDEXT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double outMACD[];
    double outMACDSignal[];
    double outMACDHist[];

public:
    TA_S_MACDEXT_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
    create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
};

class TA_MACDFIX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outMACD[];
    double outMACDSignal[];
    double outMACDHist[];

public:
    TA_MACDFIX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
    create(int startIdx, int endIdx, const double inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
};

class TA_S_MACDFIX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outMACD[];
    double outMACDSignal[];
    double outMACDHist[];

public:
    TA_S_MACDFIX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
    create(int startIdx, int endIdx, const float inReal[], int optInSignalPeriod, int *outBegIdx, int *outNBElement, double outMACD[], double outMACDSignal[], double outMACDHist[]);
};

class TA_MAMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double outMAMA[];
    double outFAMA[];

public:
    TA_MAMA_Wrapper(int startIdx, int endIdx, const double inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]);
    create(int startIdx, int endIdx, const double inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]);
};

class TA_S_MAMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double outMAMA[];
    double outFAMA[];

public:
    TA_S_MAMA_Wrapper(int startIdx, int endIdx, const float inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]);
    create(int startIdx, int endIdx, const float inReal[], double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double outMAMA[], double outFAMA[]);
};

class TA_MAVP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    const double inPeriods[];
    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MAVP_Wrapper(int startIdx, int endIdx, const double inReal[], const double inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], const double inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MAVP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    const float inPeriods[];
    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MAVP_Wrapper(int startIdx, int endIdx, const float inReal[], const float inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], const float inPeriods[], int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MAX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MAX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MAX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MAX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MAXINDEX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_MAXINDEX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_MAXINDEX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_MAXINDEX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_MEDPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MEDPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MEDPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MEDPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MFI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    const double inVolume[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MFI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], const double inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MFI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    const float inVolume[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MFI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], const float inVolume[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MIDPOINT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MIDPOINT_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MIDPOINT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MIDPOINT_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MIDPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MIDPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MIDPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MIDPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MIN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MIN_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MIN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MIN_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MININDEX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_MININDEX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_S_MININDEX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int outInteger[];

public:
    TA_S_MININDEX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outInteger[]);
};

class TA_MINMAX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outMin[];
    double outMax[];

public:
    TA_MINMAX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]);
};

class TA_S_MINMAX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outMin[];
    double outMax[];

public:
    TA_S_MINMAX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outMin[], double outMax[]);
};

class TA_MINMAXINDEX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int outMinIdx[];
    int outMaxIdx[];

public:
    TA_MINMAXINDEX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]);
};

class TA_S_MINMAXINDEX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int outMinIdx[];
    int outMaxIdx[];

public:
    TA_S_MINMAXINDEX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, int outMinIdx[], int outMaxIdx[]);
};

class TA_MINUS_DI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MINUS_DI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MINUS_DI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MINUS_DI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MINUS_DM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MINUS_DM_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MINUS_DM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MINUS_DM_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MOM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MOM_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MOM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MOM_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_MULT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal0[];
    const double inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_MULT_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_MULT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal0[];
    const float inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_MULT_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_NATR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_NATR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_NATR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_NATR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_OBV_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    const double inVolume[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_OBV_Wrapper(int startIdx, int endIdx, const double inReal[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], const double inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_OBV_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    const float inVolume[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_OBV_Wrapper(int startIdx, int endIdx, const float inReal[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], const float inVolume[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_PLUS_DI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_PLUS_DI_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_PLUS_DI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_PLUS_DI_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_PLUS_DM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_PLUS_DM_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_PLUS_DM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_PLUS_DM_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_PPO_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_PPO_Wrapper(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_PPO_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_PPO_Wrapper(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ROC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ROC_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ROC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ROC_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ROCP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ROCP_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ROCP_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ROCP_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ROCR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ROCR_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ROCR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ROCR_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ROCR100_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ROCR100_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ROCR100_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ROCR100_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_RSI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_RSI_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_RSI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_RSI_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SAR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SAR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SAREXT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
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
    double outReal[];

public:
    TA_SAREXT_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SAREXT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
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
    double outReal[];

public:
    TA_S_SAREXT_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SIN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SIN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SIN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SIN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SINH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SINH_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SINH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SINH_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SQRT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SQRT_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SQRT_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SQRT_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_STDDEV_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_STDDEV_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_STDDEV_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_STDDEV_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_STOCH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double outSlowK[];
    double outSlowD[];

public:
    TA_STOCH_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]);
};

class TA_S_STOCH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double outSlowK[];
    double outSlowD[];

public:
    TA_S_STOCH_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double outSlowK[], double outSlowD[]);
};

class TA_STOCHF_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double outFastK[];
    double outFastD[];

public:
    TA_STOCHF_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
};

class TA_S_STOCHF_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double outFastK[];
    double outFastD[];

public:
    TA_S_STOCHF_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
};

class TA_STOCHRSI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double outFastK[];
    double outFastD[];

public:
    TA_STOCHRSI_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
};

class TA_S_STOCHRSI_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double outFastK[];
    double outFastD[];

public:
    TA_S_STOCHRSI_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double outFastK[], double outFastD[]);
};

class TA_SUB_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal0[];
    const double inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SUB_Wrapper(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal0[], const double inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SUB_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal0[];
    const float inReal1[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SUB_Wrapper(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal0[], const float inReal1[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SUM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_SUM_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_SUM_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_SUM_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_T3_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_T3_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_T3_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_T3_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TAN_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TAN_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TAN_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TANH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TANH_Wrapper(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TANH_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TANH_Wrapper(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TEMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TEMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TEMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TEMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TRANGE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TRANGE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TRANGE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TRANGE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TRIMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TRIMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TRIMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TRIMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TRIX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TRIX_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TRIX_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TRIX_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TSF_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TSF_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TSF_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TSF_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_TYPPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_TYPPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_TYPPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_TYPPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_ULTOSC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_ULTOSC_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_ULTOSC_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_ULTOSC_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_VAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_VAR_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_VAR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_VAR_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_WCLPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_WCLPRICE_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_WCLPRICE_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_WCLPRICE_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_WILLR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inHigh[];
    const double inLow[];
    const double inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_WILLR_Wrapper(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inHigh[], const double inLow[], const double inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_WILLR_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inHigh[];
    const float inLow[];
    const float inClose[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_WILLR_Wrapper(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inHigh[], const float inLow[], const float inClose[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_WMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const double inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_WMA_Wrapper(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const double inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_S_WMA_Wrapper : public TAWrapper {
private:
    int startIdx;
    int endIdx;
    const float inReal[];
    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double outReal[];

public:
    TA_S_WMA_Wrapper(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
    create(int startIdx, int endIdx, const float inReal[], int optInTimePeriod, int *outBegIdx, int *outNBElement, double outReal[]);
};

class TA_SetUnstablePeriod_Wrapper : public TAWrapper {
private:
    TA_FuncUnstId id;
    unsigned int unstablePeriod;

public:
    TA_SetUnstablePeriod_Wrapper(TA_FuncUnstId id, unsigned int unstablePeriod);
    create(TA_FuncUnstId id, unsigned int unstablePeriod);
};

class TA_SetCompatibility_Wrapper : public TAWrapper {
private:
    TA_Compatibility value;

public:
    TA_SetCompatibility_Wrapper(TA_Compatibility value);
    create(TA_Compatibility value);
};

class TA_SetCandleSettings_Wrapper : public TAWrapper {
private:
    TA_CandleSettingType settingType; 
    TA_RangeType rangeType; 
    int avgPeriod; 
    double factor;

public:
    TA_SetCandleSettings_Wrapper(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
    create(TA_CandleSettingType settingType, TA_RangeType rangeType, int avgPeriod, double factor);
};

class TA_RestoreCandleDefaultSettings_Wrapper : public TAWrapper {
private:
    TA_CandleSettingType settingType;

public:
    TA_RestoreCandleDefaultSettings_Wrapper(TA_CandleSettingType settingType);
    create(TA_CandleSettingType settingType);
};

#endif
